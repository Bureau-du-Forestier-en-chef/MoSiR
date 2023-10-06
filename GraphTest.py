import GraphFactory as gf

class QuantityError(Exception):
    def __init__(self, message: str):            
        super().__init__(message) # Super vient chercher la class parent

# Test indépendant du import -------------------------------------------------

Test_01 = gf.WPGraph("Test Graph")

A = gf.TopNode('A', [0], [10])  
B = gf.ProportionNode('B')
C = gf.DecayNode('C', 3)
D = gf.DecayNode('D', 3)
E = gf.RecyclingNode('E')
F = gf.PoolNode('F')

Test_01.AddNode(A)
Test_01.AddNode(B)
Test_01.AddNode(C)
Test_01.AddNode(D)
Test_01.AddNode(E)
Test_01.AddNode(F)

Test_01.AddEdge(A, B, Proportions = [1])
Test_01.AddEdge(B, C, Proportions = [1])
Test_01.AddEdge(C, D, Proportions = [0.5])
Test_01.AddEdge(C, E, Proportions = [0.5])
Test_01.AddEdge(E, B, Proportions = [1])
Test_01.AddEdge(D, F, Proportions = [1])

A.CountCarbon(Test_01, 0) == C.CountCarbon(Test_01, 0)
B.GetCarbon(Test_01, 0)
C.CountCarbon(Test_01, 0)

#total = 0
#for i in test1.nodes():
#    if type(i) == PoolNode:
#        total += i.CountCarbon(test1, 16)
#    if type(i) == DecayNode:
#        total += i.CountCarbon(test1, 16)
#    if type(i) == RecyclingNode:
#        total += i.GetCarbon(test1, 17)
#    print(total)
#




# Test de l'import -----------------------------------------------------------

Test_02 = gf.GraphFactory('C:/Users/langa3/Documents/Script/Panier_produit/Graphs.json')

total = 0

#for i in Test_02._GRAPHS[0].Nodes():
#    if type(i) == gf.PoolNode or type(i) == gf.DecayNode:
#        #print(f"La node {i._NAME} contient {i.CountCarbon(test3._GRAPHS[0], 10)} à l'année 10")
#        total += i.CountCarbon(Test_02._GRAPHS[0], 10)
#        print(total)
    #if type(i) == gf.DecayNode:
    #    #print(f"La node {i._NAME} contient {i.CountCarbon(test3._GRAPHS[0], 10)} à l'année 10")
    #    total += i.CountCarbon(Test_02._GRAPHS[0], 10)

for Graph in Test_02._GRAPHS:
    for Time in range(5):
        Input = 0
        InSystem = 0
        for Node in Graph.Nodes():
            if type(Node) == gf.TopNode:
                Input += Node.CountCarbon(Test_02, Time)
            elif type(Node) == gf.PoolNode or type(Node) == gf.DecayNode or \
                type(Node) == gf.RecyclingNode:
                InSystem += Node.CountCarbon(Test_02, Time)
        if Input == InSystem :
            continue
        else:
            raise QuantityError(f"Graph : {Graph.GetName} Les quantité en \
                input ({Input}) au temps {Time} ne sont pas égale au total \
                présent dans le système ({InSystem})")
    
    
            
try:
    1 == 1
except:
    print("NOP")     
            
#total = 0
#for i in test3._GRAPHS[0].nodes():
#    if type(i) == PoolNode:
#        total += i.CountCarbon(test3._GRAPHS[0], 10)
#    elif type(i) == DecayNode:
#        total += i.CountCarbon(test3._GRAPHS[0], 10)
#    print(total)

#nx.draw(test2._GRAPHS[0]._GRAPH)
#with open('C:/Users/langa3/Documents/Script/Panier_produit/Graphs.json', "r") as files:
#    data = json.load(files)
#Pb = data.get('Produitsdubois_V2', {})
#nodes = Pb.get('Nodes', {})
#edges = Pb.get('Edges', {})
#
#edges
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