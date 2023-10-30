import GraphFactory as gf
import ImportInfo as ip
import ReportingInfo as rp
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
"""  
Test_01 = wp.WPGraph('test')

A = gf.TopNode('A')  
B = gf.ProportionNode('B')
C = gf.DecayNode('C', 10)
D = gf.PoolNode('D')
#E = gf.RecyclingNode('E')
#F = gf.PoolNode('F')

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

A.Time = [0, 1, 2, 3, 4]
A.Quantities = [10, 0, 0, 0, 0]

A.GetFluxIn(Test_01, 0)
B.GetFluxIn(Test_01, 0, Cumulative= False)
C.GetFluxOut(Test_01, 3, Cumulative= True)
D.CountCarbon(Test_01, 4, Cumulative= True)
"""
# Test de l'import -----------------------------------------------------------
Test_02 = gf.GraphFactory('T:/Donnees/Usagers/LANGA3/MoSiR/Graphs_04.json')

def GraphTesting(Graph: gf.GraphFactory, Input: ip.ImportData,
                 Report: rp.ReportData):
    MOSIR_TOLERENCE = 0.0001
    Time = Report.GetOutputData('Time')
    
    # First node et last node
    for GraphName in Graph.GetData:
        G1 = Graph.GetData.get(GraphName)
        NODES = G1.get('Nodes', {})
        EDGES = G1.get('Edges', {})
        TOPNODES = set([int(ID) for ID in NODES]) - \
                    set([data['To'] for keys, data in EDGES.items()])
        if len(TOPNODES) > 1:
            warnings.warn(f"Attention, plus d'une TopNode présente.\
                Les inputs vont être acheminés à ces deux nodes: \
                {TOPNODES}")  
        LASTNODES = set([int(ID) for ID in NODES]) - \
                    set([data['From'] for keys, data in EDGES.items()])
        if len(LASTNODES) == 0:
            warnings.warn(f"Attention, aucune PoolNode présente. La quantité \
                de carbone présente dans le système sera calculé seulement sur \
                des nodes de demi-vie ou de recyclage")   
   
    # Total des Edges 
    for Name in Graph.GetGraphName:
        G2 = Graph.GetGraph(Name)
        for Node in G2.Nodes():
            Total = 0
            for Successors in G2.GetSuccessors(Node):
                if Successors.NAME == 'N2O emissions':
                    continue
                Total += Node._GetValueTime(G2.GetEdgeProportions(Node, Successors), 0)
            if Total - 1 > MOSIR_TOLERENCE or 1 - Total > MOSIR_TOLERENCE and Total != 0:
                raise EdgeError(f"La somme des edges sortant de {Node.NAME} n'est pas égale à 100%") 
            elif Total < MOSIR_TOLERENCE:
                warnings.warn(f'La somme des edges sortant de la node {Node.NAME} est de 0')

    # Test de overflow
    for GraphName in Graph.GetData:
        G3 = Graph.GetData.get(GraphName)
        NODES = G3.get('Nodes', {})
        EDGES = G3.get('Edges', {})
        for NodeId in NODES:
            Overflow = []
            for key, values in EDGES.items():
                if values.get('To') == int(NodeId):
                    Overflow.append(values.get('Overflow'))
            if all(i == Overflow[0] for i in Overflow) == False:
                raise EdgeError(f"La node {NODES[str(NodeId)].get('Name')} reçoit \
                    des edges avec et sans overflow")

    # Total input versus in system 
    for Name in Graph.GetGraphName:
        G4 = Graph.GetGraph(Name)
        Input = 0
        for Timestep in range(Time + 1):
            InSystem = 0
            for Node in G4.Nodes():
                if type(Node) == gf.TopNode:
                    Input += Node.GetStock(G4, Timestep)
                elif Node.NAME == 'N2O emissions':
                    continue
                elif type(Node) == gf.PoolNode or type(Node) == gf.DecayNode or \
                    type(Node) == gf.RecyclingNode or type(Node) == gf.ProportionNode:
                    InSystem += Node.GetStock(G4, Timestep)
            if Input > InSystem - MOSIR_TOLERENCE and Input < InSystem + MOSIR_TOLERENCE :
                continue
            else:
                raise QuantityError(f"Graph : {G4.GetName} La quantité total \
                    en input ({Input}) au temps {Timestep} n'est pas égale au total \
                    présent dans le système ({InSystem})")
    print('Graph tested')

# N2O checkup

#for Name in Test_02.GetGraphName:
#    Graph = Test_02.GetGraph(Name)
#    for Time in range(16): # Ajuster le temps des simulations
#        for Node in Graph.Nodes():
#            if Node.NAME in ['Land application', 'Biomethanisation, combustion']:
#                print(f'Time {Time}, {Node.NAME} = {Node.GetCarbon(Graph, Time)}')
#