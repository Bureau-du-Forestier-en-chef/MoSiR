# -*- coding: UTF-8 -*-
import sys
import warnings
import pandas as pd
sys.path.append("../MoSiR")
import MoSiR.GraphGen as gf
import MoSiR.ReportingInfo as rp
import MoSiR.NetworkxGraph as wp
import MoSiR.mosir_exceptions as me
import MoSiR.RadiativeForcing.CarbonToRad as cr

MOSIR_TOLERENCE = 0.0001

# Test GraphGen: calcul des nodes --------------------------------------------
def test_01():
    test_01 = wp.WPGraph('graph_test_01')

    A = gf.TopNode('A')
    B = gf.ProportionNode('B')
    C = gf.DecayNode('C', 5)
    D = gf.DecayNode('D', 10)
    E = gf.PoolNode('F')

    test_01.add_node(A)
    test_01.add_node(B)
    test_01.add_node(C)
    test_01.add_node(D)
    test_01.add_node(E)
 
    test_01.add_edge(A, B, proportions = [1])
    test_01.add_edge(B, C, proportions = [1])
    test_01.add_edge(C, D, proportions = [1])
    test_01.add_edge(D, E, proportions = [1])

    A.time = [0, 1, 2, 3, 4, 5]
    A.quantities = [10, 20, 30, 40, 10, 10]

    for timestep in range(11):
        assert A.get_flux_out(test_01, timestep)\
            == B.get_flux_in(test_01, timestep)\
            == B.get_flux_out(test_01, timestep)\
            == C.get_flux_in(test_01, timestep), \
                'Flux out of A != Flux in of B'

        assert A.get_flux_out(test_01, timestep, cumulative = True)\
            == B.get_flux_in(test_01, timestep, cumulative = True)\
            == B.get_flux_out(test_01, timestep, cumulative = True)\
            == C.get_flux_in(test_01, timestep, cumulative = True), \
                'Cumulative flux out of A != Flux in of B'

        assert C.get_flux_out(test_01, timestep)\
            > (D.get_flux_in(test_01, timestep)\
               - MOSIR_TOLERENCE) and \
               C.get_flux_out(test_01, timestep)\
            < (D.get_flux_in(test_01, timestep)\
               + MOSIR_TOLERENCE), 'Flux out of C != Flux in of D'

        assert C.get_flux_out(test_01, timestep, cumulative = True)\
            > (D.get_flux_in(test_01, timestep, cumulative = True)\
               - MOSIR_TOLERENCE) and \
               C.get_flux_out(test_01, timestep, cumulative = True)\
            < (D.get_flux_in(test_01, timestep, cumulative = True)\
               + MOSIR_TOLERENCE), 'Cumulative flux out of C != Flux in of D'

        assert D.get_flux_out(test_01, timestep)\
            > (E.get_flux_in(test_01, timestep)\
               - MOSIR_TOLERENCE) and \
               D.get_flux_out(test_01, timestep)\
            < (E.get_flux_in(test_01, timestep)\
               + MOSIR_TOLERENCE), 'Flux out of D != Flux in of E'

        assert D.get_flux_out(test_01, timestep, cumulative = True)\
            > (E.get_flux_in(test_01, timestep, cumulative = True)\
               - MOSIR_TOLERENCE) and \
               D.get_flux_out(test_01, timestep, cumulative = True)\
            < (E.get_flux_in(test_01, timestep, cumulative = True)\
               + MOSIR_TOLERENCE), 'Cumulative flux out of D != Flux in of E'

            # Stock = cumu in - cumu out
        assert C.get_stock(test_01, timestep)\
            > (C.get_flux_in(test_01, timestep, cumulative = True)\
                - C.get_flux_out(test_01, timestep, cumulative = True)\
                - MOSIR_TOLERENCE) and \
                C.get_stock(test_01, timestep)\
            < (C.get_flux_in(test_01, timestep, cumulative = True)\
                - C.get_flux_out(test_01, timestep, cumulative = True)\
                + MOSIR_TOLERENCE), 'C stock != cumulative flux in - \
                    flux out'

        assert D.get_stock(test_01, timestep)\
            > (D.get_flux_in(test_01, timestep, cumulative = True)\
                - D.get_flux_out(test_01, timestep, cumulative = True)\
                - MOSIR_TOLERENCE) and \
            D.get_stock(test_01, timestep)\
            < (D.get_flux_in(test_01, timestep, cumulative = True)\
                - D.get_flux_out(test_01, timestep, cumulative = True)\
                + MOSIR_TOLERENCE), 'D stock != cumulative flux in - \
                    cumulative flux out'

# Test 02
#test_02 = wp.WPGraph('graph_test_02')
#
#F = gf.TopNode('F')
#G = gf.ProportionNode('G')
#H = gf.RecyclingNode('H')
#I = gf.RecyclingNode('I')
#
#test_02.add_node(F)
#test_02.add_node(G)
#test_02.add_node(H)
#test_02.add_node(I)
# 
#test_02.add_edge(F, G, proportions = [1])
#test_02.add_edge(G, H, proportions = [1])
#test_02.add_edge(H, I, proportions = [1])
#test_02.add_edge(I, G, proportions = [1])
#
#F.time = [0]
#F.quantities = [10]
#
# Test du radiatif -----------------------------------------------------------
def test_03_radiatif():
    time = list(range(1, 2001))
    CO2 = [1/3.6667] + [0] * (len(time) - 1)         
    CH4 = [1/1.3333] + [0] * (len(time) - 1)          
    N2O = [1] + [0] * (len(time) - 1)          
    CO = [1/2.6666] + [0] * (len(time) - 1)     
    test_03 = {
        'Year': time,
        'CO2': CO2,
        'CH4': CH4,
        'N2O': N2O,
        'CO': CO
    }
    RF = pd.read_excel("./MoSiR/RadiativeForcing/Dynco2_Base.xlsx").\
        sort_values(by = 'Year').drop('Unit', axis = 1).to_dict(orient = 'list')
    cr.rad_formatting(test_03, RF, cumulative = False)
    assert test_03 == RF, "Not the same RF as DynCo"

# Test de l'import -----------------------------------------------------------
def test_04_first_last_node(graph: gf.GraphFactory):
    """Premier test pour évaluer si au moins une première et une dernière node
    est présente. Donc s'assurer que le graph n'est pas une loop.

    Args:
        graph (gf.GraphFactory): _description_
        report (rp.ReportData): _description_
    """
    MOSIR_TOLERENCE = 0.0001
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

def test_05_edges_sum(graph: gf.GraphFactory):
    """_summary_

    Args:
        graph (gf.GraphFactory): _description_

    Raises:
        me.EdgeError: _description_
    """
    MOSIR_TOLERENCE = 0.0001
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
                raise me.EdgeError(f"La somme des edges sortant de {node.NAME} n'est pas égale à 100%") 
            elif total < MOSIR_TOLERENCE:
                warnings.warn(f'La somme des edges sortant de la node {node.NAME} est de 0',
                              stacklevel = 2)

def test_06_overflow(graph: gf.GraphFactory):
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
                raise me.EdgeError(f"La node {NODES[str(nodeID)].get('Name')} reçoit \
                    des edges avec et sans overflow")

def test_07_insystem(graph: gf.GraphFactory,
                 report: rp.ReportData):
    MOSIR_TOLERENCE = 0.0001
    time = report.get_output_data('Time')
    # total input versus in system 
    for name in graph.get_graph_name:
        G4 = graph.get_graph(name)
        carbon_input = 0
        for timestep in range(time + 1):
            in_system = 0
            for node in G4.nodes():
                if type(node) == gf.TopNode:
                    carbon_input += node.get_flux_out(G4, timestep)
                elif node.NAME == 'N2O emissions': # Updater pour général
                    continue
                elif type(node) == gf.PoolNode or type(node) == gf.DecayNode or \
                    type(node) == gf.RecyclingNode:
                    with warnings.catch_warnings():
                        warnings.simplefilter('ignore')
                        in_system += node.get_stock(G4, timestep)
            if carbon_input > in_system - MOSIR_TOLERENCE and carbon_input < in_system + MOSIR_TOLERENCE :
                continue
            else:
                raise me.QuantityError(f"Graph : {G4.get_name} La quantité total \
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

if __name__ == "__main__":
    test_01()
    test_03_radiatif()