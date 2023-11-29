# -*- coding: UTF-8 -*-
import os
import sys
import pandas as pd
sys.path.append("../MoSiR")
import MoSiR.GraphGen as gf
import MoSiR.NetworkxGraph as wp
import MoSiR.CarbonToRad as cr

MOSIR_TOLERENCE = 0.0001

# Test GraphGen: calcul des nodes --------------------------------------------
def test_01():
    test_01 = wp.WPGraph('graph_test_01')

    A = gf.TopNode('A')
    B = gf.ProportionNode('B')
    C = gf.DecayNode('C', 10)
    D = gf.DecayNode('D', 50)
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

    A.time = [0, 1, 2, 3, 4, 5, 50]
    A.quantities = [10, 20, 30, 40, 10, 10, 2000]

    for timestep in range(150):
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
def test_02_recycling():
    test_02 = wp.WPGraph('graph_test_02')

    F = gf.TopNode('F')
    G = gf.ProportionNode('G')
    H = gf.ProportionNode('H')
    I = gf.RecyclingNode('I')

    test_02.add_node(F)
    test_02.add_node(G)
    test_02.add_node(H)
    test_02.add_node(I)
    
    test_02.add_edge(F, G, proportions = [1])
    test_02.add_edge(G, H, proportions = [1])
    test_02.add_edge(H, I, proportions = [1])
    test_02.add_edge(I, G, proportions = [1])

    F.time = [0]
    F.quantities = [1]

    for timestep in range(150):
        assert(I.get_stock(test_02, timestep) \
               == I.get_flux_in(test_02, timestep) \
               == I.get_flux_out(test_02, timestep + 1))
        
    for timestep in range(1, 150):
        assert(G.get_flux_in(test_02, timestep) \
               == I.get_flux_out(test_02, timestep))


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

    RF = pd.read_excel(os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "MoSiR", "RadiativeForcing", "Dynco2_Base.xlsx")).\
        sort_values(by = 'Year').drop('Unit', axis = 1).to_dict(orient = 'list')
    cr.rad_formatting(test_03, RF, cumulative = False)
    assert test_03 == RF, "Not the same RF as DynCo"

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