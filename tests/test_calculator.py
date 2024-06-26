# -*- coding: UTF-8 -*-
"""
Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""
import os
import pytest
import warnings
import pandas as pd
from MoSiR import networkx_graph as wp
from MoSiR import gamma_function as gf
from MoSiR import graph_generator as gg
from MoSiR import mosir_exceptions as me
from MoSiR import carbon_to_radiatif as cr

MOSIR_TOLERENCE = 0.0001

# Plusieurs tests qui vérifient les fonctions de base de MoSiR ----------------
# À utiliser entre les différentes versions de MoSiR

# Test si ce qui rentre équivaut à ce qui sort --------------------------------
def test_01_in_eq_out():
    test_01 = wp.WPGraph('graph_test_01')

    A1 = gg.TopNode('A1')
    B1 = gg.ProportionNode('B1')
    C1 = gg.DecayNode('C1', 75)
    D1 = gg.DecayNode('D1', 50)
    E1 = gg.PoolNode('E1')

    test_01.add_node(A1)
    test_01.add_node(B1)
    test_01.add_node(C1)
    test_01.add_node(D1)
    test_01.add_node(E1)
 
    test_01.add_edge(A1, B1, proportions=[1])
    test_01.add_edge(B1, C1, proportions=[1])
    test_01.add_edge(C1, D1, proportions=[1])
    test_01.add_edge(D1, E1, proportions=[1])

    A1.time = [0, 1, 2, 3, 4, 5, 50]
    A1.quantities = [10, 20, 30, 40, 10, 10, 2000]

    C_decay = gf.DecayTypeOptimizer('C', 'Exponential', 75).find_param()
    C1.alpha = C_decay[0]
    C1.beta = C_decay[1]

    D_decay = gf.DecayTypeOptimizer('D', 'Exponential', 50).find_param()
    D1.alpha = D_decay[0]
    D1.beta = D_decay[1]

    for timestep in range(150):
        assert A1.get_flux_out(test_01, timestep) \
            == B1.get_flux_in(test_01, timestep) \
            == B1.get_flux_out(test_01, timestep) \
            == C1.get_flux_in(test_01, timestep), \
                'Flux out of A1 != Flux in of B1'

        assert A1.get_flux_out(test_01, timestep, cumulative=True) \
            == B1.get_flux_in(test_01, timestep, cumulative=True) \
            == B1.get_flux_out(test_01, timestep, cumulative=True) \
            == C1.get_flux_in(test_01, timestep, cumulative=True), \
                'Cumulative flux out of A1 != Flux in of B1'

        assert abs(C1.get_flux_out(test_01, timestep) \
            - D1.get_flux_in(test_01, timestep)) \
            < MOSIR_TOLERENCE, 'Flux out of C1 != Flux in of D1'

        assert abs(C1.get_flux_out(test_01, timestep, cumulative=True) \
            - D1.get_flux_in(test_01, timestep, cumulative=True)) \
            < MOSIR_TOLERENCE, 'Cumulative flux out of C1 != Flux in of D1'

        assert abs(D1.get_flux_out(test_01, timestep) \
            - E1.get_flux_in(test_01, timestep) \
            < MOSIR_TOLERENCE), 'Flux out of D1 != Flux in of E1'

        assert abs(D1.get_flux_out(test_01, timestep, cumulative=True) \
            - E1.get_flux_in(test_01, timestep, cumulative=True) \
            < MOSIR_TOLERENCE), 'Cumulative flux out of D1 != Flux in of E1'

        assert abs(C1.get_stock(test_01, timestep) \
            - (C1.get_flux_in(test_01, timestep, cumulative=True) \
                - C1.get_flux_out(test_01, timestep, cumulative=True))) \
            < MOSIR_TOLERENCE, 'C1 stock != cumulative flux in - \
                    flux out'

        assert abs(D1.get_stock(test_01, timestep) \
            - (D1.get_flux_in(test_01, timestep, cumulative=True) \
                - D1.get_flux_out(test_01, timestep, cumulative=True))) \
            < MOSIR_TOLERENCE, 'D1 stock != cumulative flux in - \
                    cumulative flux out'
        with warnings.catch_warnings():
            warnings.simplefilter('ignore')
            assert abs(E1.get_stock(test_01, timestep) \
                - E1.get_flux_in(test_01, timestep, cumulative=True)) \
                < MOSIR_TOLERENCE, 'E1 stock != cumulative flux in'

# Test si le noeud de recyclage fonctionne ------------------------------------
def test_02_recycling():
    test_02 = wp.WPGraph('graph_test_02')

    A2 = gg.TopNode('A2')
    B2 = gg.ProportionNode('B2')
    C2 = gg.ProportionNode('C2')
    D2 = gg.RecyclingNode('D2')

    test_02.add_node(A2)
    test_02.add_node(B2)
    test_02.add_node(C2)
    test_02.add_node(D2)
    
    test_02.add_edge(A2, B2, proportions=[1])
    test_02.add_edge(B2, C2, proportions=[1])
    test_02.add_edge(C2, D2, proportions=[1])
    test_02.add_edge(D2, B2, proportions=[1])

    A2.time = [0, 1, 2, 3, 4, 5]
    A2.quantities = [1, 3, 5, 7, 9, 11]

    for timestep in range(150):
        assert(D2.get_stock(test_02, timestep) \
               == D2.get_flux_in(test_02, timestep) \
               == D2.get_flux_out(test_02, timestep + 1))
        
        assert(D2.get_flux_in(test_02, timestep, cumulative=True) \
               == D2.get_flux_out(test_02, timestep + 1, cumulative=True))
        
# Test si le noeud de decay fonctionne ----------------------------------------
def test_03_decay():
    test_03 = wp.WPGraph('graph_test_03')

    A3 = gg.TopNode('A3')
    B3 = gg.DecayNode('B3', 75)
    C3 = gg.PoolNode('C3')

    test_03.add_node(A3)
    test_03.add_node(B3)
    test_03.add_node(C3)
    
    test_03.add_edge(A3, B3, proportions=[1])
    test_03.add_edge(B3, C3, proportions=[1])

    A3.time = [0]
    A3.quantities = [100]

    B_decay = gf.DecayTypeOptimizer('B', 'Exponential', 75).find_param()
    B3.alpha = B_decay[0]
    B3.beta = B_decay[1]

    for timestep in range(150):
        B3_stock = B3.get_stock(test_03, timestep)
        comparatif = 100 * ((0.5) ** (timestep / 75))
        comparatif_2 = 100 * 2 ** (-timestep / 75)

        assert abs(B3_stock - comparatif) < MOSIR_TOLERENCE
        assert abs(B3_stock - comparatif_2) < MOSIR_TOLERENCE

# Test du radiatif ------------------------------------------------------------
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
                                    "MoSiR", "radiative_forcing", "Dynco2_Base.xlsx")).\
        sort_values(by='Year').drop('Unit', axis=1).to_dict(orient='list')
    cr.rad_formatting(test_03, RF, cumulative = False)
    assert test_03 == RF, "Not the same RF as DynCo"

# Test avec le micrograph 1 ---------------------------------------------------
def test_05_micro1():
    test_05 = wp.WPGraph('graph_test_05')

    A5 = gg.TopNode('Entree')
    B5 = gg.ProportionNode('Noeud1')
    C5 = gg.ProportionNode('Noeud2')
    D5 = gg.ProportionNode('Noeud4bis')
    E5 = gg.DecayNode('Noeud3', 10)
    F5 = gg.ProportionNode('Noeud4')
    G5 = gg.PoolNode('CH4 emissions')
    H5 = gg.PoolNode('CO2 emissions')
    
    test_05.add_node(A5)
    test_05.add_node(B5)
    test_05.add_node(C5)
    test_05.add_node(D5)
    test_05.add_node(E5)
    test_05.add_node(F5)
    test_05.add_node(G5)
    test_05.add_node(H5)
    
    test_05.add_edge(A5, B5, proportions=[0.5])
    test_05.add_edge(A5, C5, proportions=[0.5])
    test_05.add_edge(B5, E5, proportions=[1])
    test_05.add_edge(C5, D5, proportions=[0.25])
    test_05.add_edge(D5, E5, proportions=[1])
    test_05.add_edge(C5, F5, proportions=[0.75])
    test_05.add_edge(E5, G5, proportions=[0.5, 0.5, 0.5, 0.75])
    test_05.add_edge(E5, H5, proportions=[0.5, 0.5, 0.5, 0.25])
    test_05.add_edge(F5, H5, proportions=[1])

    A5.time = [0]
    A5.quantities = [100]

    E_decay = gf.DecayTypeOptimizer('E', 'Exponential', 10).find_param()
    E5.alpha = E_decay[0]
    E5.beta = E_decay[1]

    Annual_CO2 = [H5.get_flux_in(test_05, time) for time in range(16)]
    Annual_CH4 = [G5.get_flux_in(test_05, time) for time in range(16)]
    Cumu_CO2 = [H5.get_flux_in(test_05, time, cumulative=True) for time in range(16)]
    Cumu_CH4 = [G5.get_flux_in(test_05, time, cumulative=True) for time in range(16)]

    Annual_CO2_2 = [37.5000000000, 2.0927190145, 1.9525758825, 0.9109088584, 
                    0.8499080172, 0.7929922198, 0.7398879031, 0.6903398237, 
                    0.6441098308, 0.6009757223, 0.5607301761, 0.5231797536, 
                    0.4881439706, 0.4554544292, 0.4249540086, 0.3964961099]
    Annual_CH4_2 = [0.0000000000, 2.0927190145, 1.9525758825, 2.7327265753, 
                    2.5497240516, 2.3789766595, 2.2196637094, 2.0710194710, 
                    1.9323294925, 1.8029271670, 1.6821905282, 1.5695392609, 
                    1.4644319119, 1.3663632877, 1.2748620258,1.1894883297]
    Cumu_CO2_2 = [37.5000000000, 39.5927190145, 41.5452948970, 42.4562037554, 
                  43.3061117726, 44.0991039925, 44.8389918956, 45.5293317192, 
                  46.1734415501, 46.7744172724, 47.3351474485, 47.8583272021,
                  48.3464711727, 48.8019256020, 49.2268796106, 49.6233757205]
    Cumu_CH4_2 = [0.0000000000, 2.0927190145, 4.0452948970, 6.7780214723,
                  9.3277455239, 11.7067221834, 13.9263858928, 15.9974053637, 
                  17.9297348563, 19.7326620233, 21.4148525515, 22.9843918124, 
                  24.4488237242, 25.8151870119, 27.0900490377, 28.2795373674]
    
    for timestep in range(16):
        assert abs(Annual_CH4[timestep] - Annual_CH4_2[timestep]) < MOSIR_TOLERENCE
        assert abs(Annual_CO2[timestep] - Annual_CO2_2[timestep]) < MOSIR_TOLERENCE
        assert abs(Cumu_CH4[timestep] - Cumu_CH4_2[timestep]) < MOSIR_TOLERENCE
        assert abs(Cumu_CO2[timestep] - Cumu_CO2_2[timestep]) < MOSIR_TOLERENCE

# Test avec le micrograph 2 ---------------------------------------------------
def test_06_micro2():
    test_06 = wp.WPGraph('graph_test_06')

    A6 = gg.TopNode('Entree')
    B6 = gg.DecayNode('Noeud1', 5)
    C6 = gg.DecayNode('Noeud2', 10)
    D6 = gg.PoolNode('CH4 emissions')
    E6 = gg.PoolNode('CO2 emissions')
    
    test_06.add_node(A6)
    test_06.add_node(B6)
    test_06.add_node(C6)
    test_06.add_node(D6)
    test_06.add_node(E6)
    
    test_06.add_edge(A6, B6, proportions=[1])
    test_06.add_edge(B6, C6, proportions=[1])
    test_06.add_edge(C6, D6, proportions=[0.5])
    test_06.add_edge(C6, E6, proportions=[0.5])

    A6.time = [0]
    A6.quantities = [100]

    B_decay = gf.DecayTypeOptimizer('B', 'Exponential', 5).find_param()
    B6.alpha = B_decay[0]
    B6.beta = B_decay[1]

    C_decay = gf.DecayTypeOptimizer('C', 'Exponential', 10).find_param()
    C6.alpha = C_decay[0]
    C6.beta = C_decay[1]

    Annual = [D6.get_flux_in(test_06, time) for time in range(16)]
    Cumu = [D6.get_flux_in(test_06, time, cumulative=True) for time in range(16)]

    Annual_2 = [0.0000000000, 0.0000000000, 0.4334420762, 0.7817490005,
                1.0578852763, 1.2730069883, 1.4367046185, 1.5572138462,
                1.6415985152, 1.6959094074, 1.7253219898, 1.7342558875,
                1.7264784778, 1.7051946899, 1.6731248196, 1.6325719367]
    Cumu_2 = [0.0000000000, 0.0000000000, 0.4334420762, 1.2151910767,
              2.2730763531, 3.5460833413, 4.9827879598, 6.5400018060, 
              8.1816003211, 9.8775097285, 11.6028317183, 13.3370876058,
              15.0635660836, 16.7687607735, 18.4418855931, 20.0744575298]
    
    for timestep in range(16):
        assert abs(Annual[timestep] - Annual_2[timestep]) < MOSIR_TOLERENCE
        assert abs(Cumu[timestep] - Cumu_2[timestep]) < MOSIR_TOLERENCE

# Test qui vérifie qu'il est impossible d'avoir deux noeuds avec le même nom
def test_07_unique_node_names():
    test_07 = wp.WPGraph('graph_test_07')

    A7 = gg.TopNode('A')
    B7 = gg.ProportionNode('B')
    C7 = gg.DecayNode('B', 75)

    test_07.add_node(A7)
    test_07.add_node(B7)
    with pytest.raises(me.NodeError):
        test_07.add_node(C7)

# Test pour TopNode -----------------------------------------------------------
# Test qui vérifie qu'il est impossible d'entrer 
    # une valeur négative dans TopNode
def test_08_negative_values():
    top_node = gg.TopNode('A')
    with pytest.raises(ValueError):
        top_node.time = [-1]
    with pytest.raises(ValueError):
        top_node.quantities = [-1]

# Test qui échoue si une TopNode reçoit des temps ou des quantitées
    # qui ne sont pas des listes
def test_09_not_list():
    top_node = gg.TopNode('A')
    with pytest.raises(TypeError):
        top_node.time = 1
    with pytest.raises(TypeError):
        top_node.quantities = 1

# Vérifier qu'il est impossible d'avoir une valeur avec _get_quantity_time
        # si les quantities et le temps ne sont pas de la même longueur
def test_10_not_same_length():
    top_node = gg.TopNode('A')
    top_node.time = [0, 1, 2]
    top_node.quantities = [1, 2]
    with pytest.raises(ValueError):
        top_node._get_quantity_time(1)

# Vérifier qu'on ne peut pas mettre une proportion > 1 ou < 0 dans un edge
def test_11_edge_proportion():
    test_11 = wp.WPGraph('graph_test_11')

    A11 = gg.TopNode('A11')
    B11 = gg.ProportionNode('B11')
    C11 = gg.PoolNode('C11')

    test_11.add_node(A11)
    test_11.add_node(B11)
    test_11.add_node(C11)
 
    test_11.add_edge(A11, B11, proportions=[1])
    with pytest.raises(me.EdgeError):
        test_11.add_edge(B11, C11, proportions=[1.1])
    with pytest.raises(me.EdgeError):
        test_11.add_edge(B11, C11, proportions=[-0.1])

# Vérifier qu'on ne peut pas changer le nom d'un graph
def test_12_graph_name():
    test_12 = wp.WPGraph('graph_test_12')
    with pytest.raises(me.ConstError):
        test_12.get_name = 'graph_test_12'

# Vérifier qu'on ne peut pas passer un graph sans nom dans gg.GraphFactory
def test_13_graph_name():
    with pytest.raises(me.InvalidOption):
        gg.GraphFactory(None)

# Vérifier que l'on peut faire un graph avec plusieurs TopNode avec
    # des intrants différents

def test_14_multiple_top():
    test_14 = wp.WPGraph('graph_test_14')

    A14 = gg.TopNode('A14')
    B14 = gg.TopNode('B14')
    C14 = gg.ProportionNode('C14')
    D14 = gg.ProportionNode('D14')
    E14 = gg.PoolNode('E14')

    test_14.add_node(A14)
    test_14.add_node(B14)
    test_14.add_node(C14)
    test_14.add_node(D14)
    test_14.add_node(E14)
 
    test_14.add_edge(A14, C14, proportions=[1])
    test_14.add_edge(B14, D14, proportions=[1])
    test_14.add_edge(C14, E14, proportions=[1])
    test_14.add_edge(D14, E14, proportions=[1])

    A14.time = [0, 1, 2, 3, 4, 5, 50]
    A14.quantities = [10, 20, 30, 40, 10, 10, 2000]

    B14.time = [0, 1, 2, 3, 4, 5, 25]
    B14.quantities = [10, 20, 30, 40, 10, 10, 1000]

    for timestep in range(150):
        assert A14.get_flux_out(test_14, timestep) \
            == C14.get_flux_in(test_14, timestep), \
            'Flux out of A14 != Flux in of C14'

        assert B14.get_flux_out(test_14, timestep) \
            == D14.get_flux_in(test_14, timestep), \
            'Flux out of B14 != Flux in of D14'

        assert C14.get_flux_out(test_14, timestep) \
            + D14.get_flux_out(test_14, timestep) \
            == E14.get_flux_in(test_14, timestep), \
            'Sum flux out of C14 and D14 != Flux in of E14'
        
        assert A14.get_flux_out(test_14, timestep, cumulative=True) \
            == C14.get_flux_in(test_14, timestep, cumulative=True), \
            'Cumulative flux out of A14 != Flux in of C14'
        
        assert B14.get_flux_out(test_14, timestep, cumulative=True) \
            == D14.get_flux_in(test_14, timestep, cumulative=True), \
            'Cumulative flux out of B14 != Flux in of D14'
        
        assert C14.get_flux_out(test_14, timestep, cumulative=True) \
            + D14.get_flux_out(test_14, timestep, cumulative=True) \
            == E14.get_flux_in(test_14, timestep, cumulative=True), \
            'Sum cumulative flux out of C14 and D14 != Flux in of E14'
        
        assert A14._get_quantity_time(timestep) \
            == A14.get_flux_out(test_14, timestep, cumulative=False), \
            'A14 _get_quantity_time != flux out'
        
        assert B14._get_quantity_time(timestep) \
            == B14.get_flux_out(test_14, timestep, cumulative=False), \
            'B14 _get_quantity_time != flux out'
        
        assert C14.get_flux_in(test_14, timestep, cumulative=True) \
            == C14.get_flux_out(test_14, timestep, cumulative=True), \
            'C14 cumulative flux in != cumulative flux out'
        
        assert D14.get_flux_in(test_14, timestep, cumulative=True) \
            == D14.get_flux_out(test_14, timestep, cumulative=True), \
            'D14 cumulative flux in != cumulative flux out'
        
        assert E14.get_stock(test_14, timestep) \
            == E14.get_flux_in(test_14, timestep, cumulative=True), \
            'E14 stock != cumulative flux in'
        
# Vérifier qu'il est impossible de mettre une DecayNode avec un temps de 0
def test_15_decay_time():
    with pytest.raises(ValueError):
        gg.DecayNode('A', 0)

# Vérifier qu'il est impossible de mettre une DecayNode avec un temps négatif
def test_16_decay_time():
    with pytest.raises(ValueError):
        gg.DecayNode('A', -1)

# Vérifier qu'une node ne peut avoir un edge qui se connecte à elle-même
def test_17_self_edge():
    test_17 = wp.WPGraph('graph_test_17')

    A17 = gg.TopNode('A17')
    B17 = gg.ProportionNode('B17')
    
    test_17.add_node(A17)
    test_17.add_node(B17)

    with pytest.raises(me.EdgeError):
        test_17.add_edge(A17, A17, proportions=[1])


# Vérifier que les tests passent ----------------------------------------------

if __name__ == "__main__":
    test_01_in_eq_out()
    test_02_recycling()
    test_03_decay()
    test_04_radiatif()
    test_05_micro1()
    test_06_micro2()
    test_07_unique_node_names()
    test_08_negative_values()
    test_09_not_list()
    test_10_not_same_length()
    test_11_edge_proportion()
    test_12_graph_name()
    test_13_graph_name()
    test_14_multiple_top()
    test_15_decay_time()
    test_16_decay_time()
    test_17_self_edge()
    print("Tests passed")