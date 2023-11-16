# -*- coding: UTF-8 -*-
import MoSiR.GraphGen as gf
import MoSiR.ImportInfo as ip
import MoSiR.ReportingInfo as rp
import warnings

class QuantityError(Exception):
    def __init__(self, message: str):            
        super().__init__(message) 
        
class EdgeError(Exception):
    def __init__(self, message: str):            
        super().__init__(message)
        
class ConstError(Exception):
    def __init__(self, message: str):    
        super().__init__(message)

# Test indépendant du import -------------------------------------------------
""" import MoSiR.NetworkxGraph as wp

Test_01 = wp.WPGraph('test')

A = gf.TopNode('A')  
B = gf.ProportionNode('B')
C = gf.DecayNode('C', 10)
D = gf.PoolNode('D')
#E = gf.RecyclingNode('E')
#F = gf.PoolNode('F')

B.PastCarbon.SetIsOpen(False)
C.PastCarbon.IsOpen()

Test_01.AddNode(A)
Test_01.AddNode(B)
Test_01.AddNode(C)
Test_01.AddNode(D)
#Test_01.AddNode(E)
#Test_01.AddNode(F)
 
Test_01.AddEdge(A, B, Proportions = [1])
Test_01.AddEdge(B, C, Proportions = [1])
Test_01.AddEdge(C, D, Proportions = [1])
#Test_01.AddEdge(C, E, Proportions = [1])
#Test_01.AddEdge(E, B, Proportions = [1])
#Test_01.AddEdge(D, F, Proportions = [1])

A.time = [0, 1, 2, 3, 4]
A.Quantities = [10, 0, 0, 0, 0]

A.GetFluxIn(Test_01, 0)
B.GetFluxIn(Test_01, 0, Cumulative= False)
C.GetFluxOut(Test_01, 3, Cumulative= True)
D.GetFluxIn(Test_01, 4, Cumulative= True) """

# Test de l'import -----------------------------------------------------------

def graph_testing(graph: gf.GraphFactory, input: ip.ImportData,
                 report: rp.ReportData):
    MOSIR_TOLERENCE = 0.0001
    time = report.get_output_data('Time')
    
    # First node et last node
    for graph_name in graph.get_data:
        G1 = graph.get_data.get(graph_name)
        NODES = G1.get('Nodes', {})
        EDGES = G1.get('Edges', {})
        TOPNODES = set([int(ID) for ID in NODES]) - \
                    set([data['To'] for keys, data in EDGES.items()])
        if len(TOPNODES) > 1:
            warnings.warn(f"Attention, plus d'une TopNode présente.\
                Les inputs vont être acheminés à ces deux nodes: \
                {TOPNODES}", stacklevel = 2)  
        LASTNODES = set([int(ID) for ID in NODES]) - \
                    set([data['From'] for keys, data in EDGES.items()])
        if len(LASTNODES) == 0:
            warnings.warn(f"Attention, aucune PoolNode présente. La quantité \
                de carbone présente dans le système sera calculé seulement sur \
                des nodes de demi-vie ou de recyclage", stacklevel = 2)   
   
    # total des Edges 
    for name in graph.get_graph_name:
        G2 = graph.get_graph(name)
        for node in G2.nodes():
            total = 0
            for successors in G2.get_successors(node):
                if successors.NAME == 'N2O emissions':
                    continue
                total += node._get_value_time(G2.get_edge_proportions(node, successors), 0)
            if total - 1 > MOSIR_TOLERENCE or 1 - total > MOSIR_TOLERENCE and total != 0:
                raise EdgeError(f"La somme des edges sortant de {node.NAME} n'est pas égale à 100%") 
            elif total < MOSIR_TOLERENCE:
                warnings.warn(f'La somme des edges sortant de la node {node.NAME} est de 0',
                              stacklevel = 2)

    # Test de overflow
    for graph_name in graph.get_data:
        G3 = graph.get_data.get(graph_name)
        NODES = G3.get('Nodes', {})
        EDGES = G3.get('Edges', {})
        for nodeID in NODES:
            overflow = []
            for key, values in EDGES.items():
                if values.get('To') == int(nodeID):
                    overflow.append(values.get('Overflow'))
            if all(i == overflow[0] for i in overflow) == False:
                raise EdgeError(f"La node {NODES[str(nodeID)].get('Name')} reçoit \
                    des edges avec et sans overflow")

    # total input versus in system 
    for name in graph.get_graph_name:
        G4 = graph.get_graph(name)
        carbon_input = 0
        for timestep in range(time + 1):
            in_system = 0
            for Node in G4.nodes():
                if type(Node) == gf.TopNode:
                    carbon_input += Node.get_stock(G4, timestep)
                elif Node.NAME == 'N2O emissions': # Updater pour général
                    continue
                elif type(Node) == gf.PoolNode or type(Node) == gf.DecayNode or \
                    type(Node) == gf.RecyclingNode:
                    with warnings.catch_warnings():
                        warnings.simplefilter('ignore')
                        in_system += Node.get_stock(G4, timestep)
            if carbon_input > in_system - MOSIR_TOLERENCE and carbon_input < in_system + MOSIR_TOLERENCE :
                continue
            else:
                raise QuantityError(f"Graph : {G4.get_name} La quantité total \
                    en input ({carbon_input}) au temps {timestep} n'est pas égale au total \
                    présent dans le système ({in_system})")

# N2O checkup

#for Name in Test_02.get_graph_name:
#    Graph = Test_02.get_graph(Name)
#    for time in range(16): # Ajuster le temps des simulations
#        for Node in Graph.Nodes():
#            if Node.NAME in ['Land application', 'Biomethanisation, combustion']:
#                print(f'time {time}, {Node.NAME} = {Node.GetCarbon(Graph, time)}')
                #C = Node.CountCarbon(Graph, time, Cumulative = False)
                #if C != 0:
                #    N = Node.NAME
                #    T = time
                #    new = {'time': T, 'Node': N, 'Value': C}
                #    new_df = pd.DataFrame([new])
                #    df = pd.concat([df, new_df], ignore_index = True)


#with pd.option_context('display.max_rows', None,
#                       'display.max_columns', None,
#                       'display.precision', 4,
#                       ):
#    print(df3)



#
#for edge_id, edge_data in edges.items():
#    From = edge_data['From']
#    To = edge_data['To']
#    nom_from = None
#    nom_to = None
#    for node_id, node_data in nodes.items():
#        if int(node_id) == From:
#            nom_from = node_data['Name']
#        elif int(node_id) == To:
#            nom_to = node_data['Name']
#    print(f'Connection entre {nom_from} à {nom_to}')

# ----------------------------------------------------------------------------
"""
Test_02 = ('T:/Donnees/Usagers/LANGA3/MoSiR/Graphs_03.json')

import json
J = open('T:/Donnees/Usagers/LANGA3/MoSiR/Graphs_03.json')
data = json.load(J)
data
PB = data.get('Produitsdubois_V2')

Nodes = PB.get('Nodes')
Edges = PB.get('Edges')


node_map = {}
id_list = []
for node_id, node_data in Nodes.items():
    new_node = 'test'
    node_map[int(node_id)] = new_node
    id_list.append(node_id)     
       
node_map.get(int(id_list[2]))



for i, j in enumerate(node_map):
    print(i, j)
    
node_map[3458764565184960178]


G = ig.Graph(directed = True)

a = TopNode('P1', [0], [10])
b = ProportionNode('P2')
c = ProportionNode('P3')
d = ProportionNode('P4')

G.add_vertex(a, Nom = 'Test1')
G.add_vertex(b, Nom = 'Test2')
G.add_vertex(c, Nom = 'Test3')
G.add_vertex(d, Nom = 'Test4')

G.add_edge(0, 1, Proportion = 0.1)
G.add_edge(0, 2, Proportion = 0.2)
G.add_edge(1, 3, Proportion = 0.3)
G.add_edge(2, 3, Proportion = 0.4)

G.to_dict_dict()
G.get_vertex_dataframe()
G.es.select(3)['Proportion']
G.vs.select(1)['Name']
G.es[G.get_eid(0, 1)]['Proportion']

dictio = G.to_dict_dict()

G.predecessors()

help(G.Full)
G.Full(len(G.vs.indices))

for i in G.vs:
    print(i)

liste = {1: 'a', 2: 'b', 3: "ce"}

for i, j in enumerate(liste):
    print(i)
"""

#for Name in Test_02.get_graph_name:
#    Graph = Test_02.get_graph(Name)
#    for time in range(16): # Ajuster le temps des simulations
#        for Node in Graph.Nodes():
#            if Node.NAME in ['Land application', 'Biomethanisation, combustion']:
#                print(f'time {time}, {Node.NAME} = {Node.GetCarbon(Graph, time)}')
#