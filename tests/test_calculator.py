# -*- coding: UTF-8 -*-
import os
import pandas as pd
import MoSiR.GraphGen as gf
import MoSiR.NetworkxGraph as wp
import MoSiR.CarbonToRad as cr

MOSIR_TOLERENCE = 0.0001

# Test GraphGen: calcul des nodes --------------------------------------------
def test_01_in_eq_out():
    test_01 = wp.WPGraph('graph_test_01')

    A1 = gf.TopNode('A1')
    B1 = gf.ProportionNode('B1')
    C1 = gf.DecayNode('C1', 10)
    D1 = gf.DecayNode('D1', 50)
    E1 = gf.PoolNode('E1')

    test_01.add_node(A1)
    test_01.add_node(B1)
    test_01.add_node(C1)
    test_01.add_node(D1)
    test_01.add_node(E1)
 
    test_01.add_edge(A1, B1, proportions= [1])
    test_01.add_edge(B1, C1, proportions= [1])
    test_01.add_edge(C1, D1, proportions= [1])
    test_01.add_edge(D1, E1, proportions= [1])

    A1.time = [0, 1, 2, 3, 4, 5, 50]
    A1.quantities = [10, 20, 30, 40, 10, 10, 2000]

    for timestep in range(150):
        assert A1.get_flux_out(test_01, timestep) \
            == B1.get_flux_in(test_01, timestep) \
            == B1.get_flux_out(test_01, timestep) \
            == C1.get_flux_in(test_01, timestep), \
                'Flux out of A1 != Flux in of B1'

        assert A1.get_flux_out(test_01, timestep, cumulative= True) \
            == B1.get_flux_in(test_01, timestep, cumulative= True) \
            == B1.get_flux_out(test_01, timestep, cumulative= True) \
            == C1.get_flux_in(test_01, timestep, cumulative= True), \
                'Cumulative flux out of A1 != Flux in of B1'

        assert abs(C1.get_flux_out(test_01, timestep) \
            - D1.get_flux_in(test_01, timestep)) \
            < MOSIR_TOLERENCE, 'Flux out of C1 != Flux in of D1'

        assert abs(C1.get_flux_out(test_01, timestep, cumulative= True) \
            - D1.get_flux_in(test_01, timestep, cumulative= True)) \
            < MOSIR_TOLERENCE, 'Cumulative flux out of C1 != Flux in of D1'

        assert abs(D1.get_flux_out(test_01, timestep) \
            - E1.get_flux_in(test_01, timestep) \
            < MOSIR_TOLERENCE), 'Flux out of D1 != Flux in of E1'

        assert abs(D1.get_flux_out(test_01, timestep, cumulative= True) \
            - E1.get_flux_in(test_01, timestep, cumulative= True) \
            < MOSIR_TOLERENCE), 'Cumulative flux out of D1 != Flux in of E1'

        assert abs(C1.get_stock(test_01, timestep) \
            - (C1.get_flux_in(test_01, timestep, cumulative= True) \
                - C1.get_flux_out(test_01, timestep, cumulative= True))) \
            < MOSIR_TOLERENCE, 'C1 stock != cumulative flux in - \
                    flux out'

        assert abs(D1.get_stock(test_01, timestep) \
            - (D1.get_flux_in(test_01, timestep, cumulative= True) \
                - D1.get_flux_out(test_01, timestep, cumulative= True))) \
            < MOSIR_TOLERENCE, 'D1 stock != cumulative flux in - \
                    cumulative flux out'
        
        assert abs(E1.get_stock(test_01, timestep) \
            - E1.get_flux_in(test_01, timestep, cumulative= True)) \
            < MOSIR_TOLERENCE, 'E1 stock != cumulative flux in'

def test_02_recycling():
    test_02 = wp.WPGraph('graph_test_02')

    A2 = gf.TopNode('A2')
    B2 = gf.ProportionNode('B2')
    C2 = gf.ProportionNode('C2')
    D2 = gf.RecyclingNode('D2')

    test_02.add_node(A2)
    test_02.add_node(B2)
    test_02.add_node(C2)
    test_02.add_node(D2)
    
    test_02.add_edge(A2, B2, proportions= [1])
    test_02.add_edge(B2, C2, proportions= [1])
    test_02.add_edge(C2, D2, proportions= [1])
    test_02.add_edge(D2, B2, proportions= [1])

    A2.time = [0]
    A2.quantities = [1]

    for timestep in range(150):
        assert(D2.get_stock(test_02, timestep) \
               == D2.get_flux_in(test_02, timestep) \
               == D2.get_flux_out(test_02, timestep + 1))
        
        assert(D2.get_flux_in(test_02, timestep, cumulative= True) \
               == D2.get_flux_out(test_02, timestep + 1, cumulative= True))
        

def test_03_decay():
    test_03 = wp.WPGraph('graph_test_03')

    A3 = gf.TopNode('A3')
    B3 = gf.DecayNode('B3', 75)
    C3 = gf.PoolNode('C3')

    test_03.add_node(A3)
    test_03.add_node(B3)
    test_03.add_node(C3)
    
    test_03.add_edge(A3, B3, proportions= [1])
    test_03.add_edge(B3, C3, proportions= [1])

    A3.time = [0]
    A3.quantities = [100]

    for timestep in range(150):
        B3_stock = B3.get_stock(test_03, timestep)
        comparatif = 100 * ((0.5) ** (timestep / 75))
        comparatif_2 = 100 * 2 ** (-timestep / 75)
        
        assert abs(B3_stock - comparatif) < MOSIR_TOLERENCE
        assert abs(B3_stock - comparatif_2) < MOSIR_TOLERENCE


# Test du radiatif -----------------------------------------------------------
def test_04_radiatif():
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

    RF = pd.read_excel(os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", 
                                    "MoSiR", "RadiativeForcing", "Dynco2_Base.xlsx")).\
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
    test_01_in_eq_out()
    test_02_recycling()
    test_03_radiatif()
    print("Tests passed")