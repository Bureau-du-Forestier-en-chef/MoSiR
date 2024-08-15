"""
Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""
import os
import pytest
from MoSiR import (
    networkx_graph as wp,
    graph_generator as gg,
    gamma_function as gf,
    import_info as ii,
)

""" Coverage
pytest --cov=MoSiR tests/
"""

@pytest.fixture
def MOSIR_TOLERENCE():
    return 0.0001

@pytest.fixture
def graph_01():
    graph_01 = wp.WPGraph("graph_01")

    A = gg.TopNode('A')
    B = gg.ProportionNode('B')
    C = gg.DecayNode('C', True)
    D = gg.DecayNode('D', True)
    E = gg.PoolNode('E')

    graph_01.add_node(A)
    graph_01.add_node(B)
    graph_01.add_node(C)
    graph_01.add_node(D)
    graph_01.add_node(E)
 
    graph_01.add_edge(A, B, proportions=[1])
    graph_01.add_edge(B, C, proportions=[1])
    graph_01.add_edge(C, D, proportions=[1])
    graph_01.add_edge(D, E, proportions=[1])

    C_decay = gf.DecayTypeOptimizer('C', 'Exponential', 75).find_param()
    C.alpha = C_decay[0]
    C.beta = C_decay[1]

    D_decay = gf.DecayTypeOptimizer('D', 'Exponential', 0.5).find_param()
    D.alpha = D_decay[0]
    D.beta = D_decay[1]

    A.quantities = list(range(0, 1000))
    A.time = list(range(0, 1000))

    return graph_01, A, B, C, D, E

@pytest.fixture
def graph_02():
    graph_02 = wp.WPGraph('graph_02')

    A = gg.TopNode('A')
    B = gg.ProportionNode('B')
    C = gg.ProportionNode('C')
    D = gg.RecyclingNode('D')

    graph_02.add_node(A)
    graph_02.add_node(B)
    graph_02.add_node(C)
    graph_02.add_node(D)
    
    graph_02.add_edge(A, B, proportions=[1])
    graph_02.add_edge(B, C, proportions=[1])
    graph_02.add_edge(C, D, proportions=[1])
    graph_02.add_edge(D, B, proportions=[1])

    A.time = [0, 1, 2, 3, 4, 5]
    A.quantities = [1, 3, 5, 7, 9, 11]

    return graph_02, D

@pytest.fixture
def rad_dict():
    time = list(range(1, 2001))
    CO2 = [1/3.6667] + [0] * (len(time) - 1)         
    CH4 = [1/1.3333] + [0] * (len(time) - 1)          
    N2O = [1] + [0] * (len(time) - 1)          
    CO = [1/2.6666] + [0] * (len(time) - 1)     
    rad_dict = {
        'Year': time,
        'CO2': CO2,
        'CH4': CH4,
        'N2O': N2O,
        'CO': CO
    }
    return rad_dict, CO2, CH4, N2O, CO

@pytest.fixture
def graph_03():
    graph_03 = wp.WPGraph('graph_03')

    A = gg.TopNode('Entree')
    B = gg.ProportionNode('Noeud1')
    C = gg.ProportionNode('Noeud2')
    D = gg.ProportionNode('Noeud4bis')
    E = gg.DecayNode('Noeud3', True)
    F = gg.ProportionNode('Noeud4')
    G = gg.PoolNode('CH4 emissions')
    H = gg.PoolNode('CO2 emissions')
    
    graph_03.add_node(A)
    graph_03.add_node(B)
    graph_03.add_node(C)
    graph_03.add_node(D)
    graph_03.add_node(E)
    graph_03.add_node(F)
    graph_03.add_node(G)
    graph_03.add_node(H)
    
    graph_03.add_edge(A, B, proportions=[0.5])
    graph_03.add_edge(A, C, proportions=[0.5])
    graph_03.add_edge(B, E, proportions=[1])
    graph_03.add_edge(C, D, proportions=[0.25])
    graph_03.add_edge(D, E, proportions=[1])
    graph_03.add_edge(C, F, proportions=[0.75])
    graph_03.add_edge(E, G, proportions=[0.5, 0.5, 0.5, 0.75])
    graph_03.add_edge(E, H, proportions=[0.5, 0.5, 0.5, 0.25])
    graph_03.add_edge(F, H, proportions=[1])

    A.time = [0]
    A.quantities = [100]

    E_decay = gf.DecayTypeOptimizer('E', 'Exponential', 10).find_param()
    E.alpha = E_decay[0]
    E.beta = E_decay[1]

    return graph_03, G, H

@pytest.fixture
def result_test_05():
    """Handmade result calculated for the graph #3
    """
    Annual_CO2 = [37.5000000000, 2.0927190145, 1.9525758825, 0.9109088584, 
                    0.8499080172, 0.7929922198, 0.7398879031, 0.6903398237, 
                    0.6441098308, 0.6009757223, 0.5607301761, 0.5231797536, 
                    0.4881439706, 0.4554544292, 0.4249540086, 0.3964961099]
    Annual_CH4 = [0.0000000000, 2.0927190145, 1.9525758825, 2.7327265753, 
                    2.5497240516, 2.3789766595, 2.2196637094, 2.0710194710, 
                    1.9323294925, 1.8029271670, 1.6821905282, 1.5695392609, 
                    1.4644319119, 1.3663632877, 1.2748620258,1.1894883297]
    Cumu_CO2 = [37.5000000000, 39.5927190145, 41.5452948970, 42.4562037554, 
                  43.3061117726, 44.0991039925, 44.8389918956, 45.5293317192, 
                  46.1734415501, 46.7744172724, 47.3351474485, 47.8583272021,
                  48.3464711727, 48.8019256020, 49.2268796106, 49.6233757205]
    Cumu_CH4 = [0.0000000000, 2.0927190145, 4.0452948970, 6.7780214723,
                  9.3277455239, 11.7067221834, 13.9263858928, 15.9974053637, 
                  17.9297348563, 19.7326620233, 21.4148525515, 22.9843918124, 
                  24.4488237242, 25.8151870119, 27.0900490377, 28.2795373674]
    return Annual_CO2, Annual_CH4, Cumu_CO2, Cumu_CH4

@pytest.fixture
def graph_04():
    graph_04 = wp.WPGraph('graph_04')

    A = gg.TopNode('Entree')
    B = gg.DecayNode('Noeud1', True)
    C = gg.DecayNode('Noeud2', True)
    D = gg.PoolNode('CH4 emissions')
    E = gg.PoolNode('CO2 emissions')
    
    graph_04.add_node(A)
    graph_04.add_node(B)
    graph_04.add_node(C)
    graph_04.add_node(D)
    graph_04.add_node(E)
    
    graph_04.add_edge(A, B, proportions=[1])
    graph_04.add_edge(B, C, proportions=[1])
    graph_04.add_edge(C, D, proportions=[0.5])
    graph_04.add_edge(C, E, proportions=[0.5])

    A.time = [0]
    A.quantities = [100]

    B_decay = gf.DecayTypeOptimizer('B', 'Exponential', 5).find_param()
    B.alpha = B_decay[0]
    B.beta = B_decay[1]

    C_decay = gf.DecayTypeOptimizer('C', 'Exponential', 10).find_param()
    C.alpha = C_decay[0]
    C.beta = C_decay[1]

    return graph_04, D

@pytest.fixture
def result_test_06():
    """Handmade result calculated for the graph #4
    """
    Annual = [0.0000000000, 0.0000000000, 0.4334420762, 0.7817490005,
                1.0578852763, 1.2730069883, 1.4367046185, 1.5572138462,
                1.6415985152, 1.6959094074, 1.7253219898, 1.7342558875,
                1.7264784778, 1.7051946899, 1.6731248196, 1.6325719367]
    Cumu = [0.0000000000, 0.0000000000, 0.4334420762, 1.2151910767,
              2.2730763531, 3.5460833413, 4.9827879598, 6.5400018060, 
              8.1816003211, 9.8775097285, 11.6028317183, 13.3370876058,
              15.0635660836, 16.7687607735, 18.4418855931, 20.0744575298]
    
    return Annual, Cumu

@pytest.fixture
def graph_05():
    """Graph avec plusieurs TopNode
    """
    graph_05 = wp.WPGraph('graph_test_14')

    A = gg.TopNode('A')
    B = gg.TopNode('B')
    C = gg.ProportionNode('C')
    D = gg.ProportionNode('D')
    E = gg.PoolNode('E')

    graph_05.add_node(A)
    graph_05.add_node(B)
    graph_05.add_node(C)
    graph_05.add_node(D)
    graph_05.add_node(E)
 
    graph_05.add_edge(A, C, proportions=[1])
    graph_05.add_edge(B, D, proportions=[1])
    graph_05.add_edge(C, E, proportions=[1])
    graph_05.add_edge(D, E, proportions=[1])

    A.time = [0, 1, 2, 3, 4, 5, 50]
    A.quantities = [10, 20, 30, 40, 10, 10, 2000]

    B.time = [0, 1, 2, 3, 4, 5, 25]
    B.quantities = [10, 20, 30, 40, 10, 10, 1000]
    
    return graph_05, A, B, C, D, E

@pytest.fixture
def input_json():
    file_path = os.path.join(os.path.dirname(os.path.abspath(__file__)), 
        "..", "examples", "Inputs", "Inputs.json")
    exemple_import = ii.ImportData(file_path)
    return exemple_import