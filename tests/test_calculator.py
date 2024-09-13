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
from MoSiR import (
    networkx_graph as wp,
    gamma_function as gf,
    graph_generator as gg,
    mosir_exceptions as me,
    carbon_to_radiatif as cr)

# Test si ce qui rentre équivaut à ce qui sort --------------------------------
def test_in_eq_out(MOSIR_TOLERENCE, graph_01):

    test_01, A, B, C, D, E = graph_01

    # C and D are decay nodes

    for timestep in range(1000):
        assert A.get_flux_out(test_01, timestep) \
            == B.get_flux_in(test_01, timestep) \
            == B.get_flux_out(test_01, timestep) \
            == C.get_flux_in(test_01, timestep), \
                'Flux out of A1 != Flux in of B1'

        assert A.get_flux_out(test_01, timestep, cumulative=True) \
            == B.get_flux_in(test_01, timestep, cumulative=True) \
            == B.get_flux_out(test_01, timestep, cumulative=True) \
            == C.get_flux_in(test_01, timestep, cumulative=True), \
                'Cumulative flux out of A1 != Flux in of B1'

        assert abs(C.get_flux_out(test_01, timestep) \
            - D.get_flux_in(test_01, timestep)) \
            < MOSIR_TOLERENCE, 'Flux out of C1 != Flux in of D1'

        assert abs(C.get_flux_out(test_01, timestep, cumulative=True) \
            - D.get_flux_in(test_01, timestep, cumulative=True)) \
            < MOSIR_TOLERENCE, 'Cumulative flux out of C1 != Flux in of D1'

        assert abs(D.get_flux_out(test_01, timestep) \
            - E.get_flux_in(test_01, timestep) \
            < MOSIR_TOLERENCE), 'Flux out of D1 != Flux in of E1'

        assert abs(D.get_flux_out(test_01, timestep, cumulative=True) \
            - E.get_flux_in(test_01, timestep, cumulative=True) \
            < MOSIR_TOLERENCE), 'Cumulative flux out of D1 != Flux in of E1'

        assert abs(C.get_stock(test_01, timestep) \
            - (C.get_flux_in(test_01, timestep, cumulative=True) \
                - C.get_flux_out(test_01, timestep, cumulative=True))) \
            < MOSIR_TOLERENCE, 'C1 stock != cumulative flux in - \
                    flux out'

        assert abs(D.get_stock(test_01, timestep) \
            - (D.get_flux_in(test_01, timestep, cumulative=True) \
                - D.get_flux_out(test_01, timestep, cumulative=True))) \
            < MOSIR_TOLERENCE, 'D1 stock != cumulative flux in - \
                    cumulative flux out'
        
        with warnings.catch_warnings():
            warnings.simplefilter('ignore')
            assert abs(E.get_stock(test_01, timestep) \
                - E.get_flux_in(test_01, timestep, cumulative=True)) \
                < MOSIR_TOLERENCE, 'E1 stock != cumulative flux in'

# Test si le noeud de recyclage fonctionne ------------------------------------
def test_recycling(graph_02):
    test_02, D = graph_02

    for timestep in range(1000):
        assert(D.get_stock(test_02, timestep) \
            == D.get_flux_in(test_02, timestep) \
            == D.get_flux_out(test_02, timestep + 1))
        
        assert(D.get_flux_in(test_02, timestep, cumulative=True) \
            == D.get_flux_out(test_02, timestep + 1, cumulative=True))
        
# Test si le noeud de decay fonctionne ----------------------------------------
def test_decay(MOSIR_TOLERENCE, graph_01):
    test_03, A, B, C, D, E = graph_01

    for timestep in range(1000):
        C_prop = C.get_decay_proportion(timestep, C.alpha, C.beta)
        C_comparatif = (100 - 100 * ((0.5) ** (timestep / 75))) / 100
        C_comparatif_2 = (100 - 100 * 2 ** (-timestep / 75)) / 100

        D_prop = D.get_decay_proportion(timestep, D.alpha, D.beta)
        D_comparatif = (100 - 100 * ((0.5) ** (timestep / 0.5))) / 100
        D_comparatif_2 = (100 -100 * 2 ** (-timestep / 0.5)) / 100

        assert abs(C_prop - C_comparatif) < MOSIR_TOLERENCE
        assert abs(C_prop - C_comparatif_2) < MOSIR_TOLERENCE
        assert abs(D_prop - D_comparatif) < MOSIR_TOLERENCE
        assert abs(D_prop - D_comparatif_2) < MOSIR_TOLERENCE

# Test du radiatif ------------------------------------------------------------
def test_radiatif(rad_dict):   
    test_03, CO2, CH4, N2O, CO = rad_dict

    file_path = os.path.join(os.path.dirname(os.path.abspath(__file__)), 
        "..", "MoSiR", "radiative_forcing", "Dynco2_Base.csv")
    try:
        # If file is save from EN excel
        RF = pd.read_csv(file_path, sep=',').sort_values(by='Year').\
            drop('Unit', axis=1).to_dict(orient='list')
    except pd.errors.ParserError:
        try:
            # If file is save from a FR excel
            RF = pd.read_csv(file_path, sep=';').sort_values(by='Year').\
                drop('Unit', axis=1).to_dict(orient='list')
        except Exception as e:
            print("Erreur lors de la lecture du fichier DynCO:", e)
    
    cr.rad_formatting(test_03, cumulative = False)

    assert test_03 == RF, "Not the same RF as DynCo"
    assert cr.rad_convolve(CO2, 'CO2') == RF['CO2'] 
    assert cr.rad_convolve(CH4, 'CH4') == RF['CH4']
    assert cr.rad_convolve(N2O, 'N2O') == RF['N2O']
    assert cr.rad_convolve(CO, 'CO') == RF['CO']

# Test avec le micrograph 1 ---------------------------------------------------
def test_micro1(MOSIR_TOLERENCE, graph_03, result_test_05):
    graph_03, G, H = graph_03

    Annual_CO2 = [H.get_flux_in(graph_03, time) for time in range(16)]
    Annual_CH4 = [G.get_flux_in(graph_03, time) for time in range(16)]
    Cumu_CO2 = [H.get_flux_in(graph_03, time, cumulative=True) for time in range(16)]
    Cumu_CH4 = [G.get_flux_in(graph_03, time, cumulative=True) for time in range(16)]

    Annual_CO2_2, Annual_CH4_2, Cumu_CO2_2, Cumu_CH4_2 = result_test_05

    for timestep in range(16):
        assert abs(Annual_CH4[timestep] - Annual_CH4_2[timestep]) < MOSIR_TOLERENCE
        assert abs(Annual_CO2[timestep] - Annual_CO2_2[timestep]) < MOSIR_TOLERENCE
        assert abs(Cumu_CH4[timestep] - Cumu_CH4_2[timestep]) < MOSIR_TOLERENCE
        assert abs(Cumu_CO2[timestep] - Cumu_CO2_2[timestep]) < MOSIR_TOLERENCE

# Test avec le micrograph 2 ---------------------------------------------------
def test_micro2(MOSIR_TOLERENCE, graph_04, result_test_06):
    graph_04, D = graph_04

    Annual = [D.get_flux_in(graph_04, time) for time in range(16)]
    Cumu = [D.get_flux_in(graph_04, time, cumulative=True) for time in range(16)]

    Annual_2, Cumu_2 = result_test_06

    for timestep in range(16):
        assert abs(Annual[timestep] - Annual_2[timestep]) < MOSIR_TOLERENCE
        assert abs(Cumu[timestep] - Cumu_2[timestep]) < MOSIR_TOLERENCE


# Vérifier que l'on peut faire un graph avec plusieurs TopNode avec
    # des intrants différents
def test_multiple_top(graph_05):
    graph_05, A, B, C, D, E = graph_05

    for timestep in range(150):
        assert A.get_flux_out(graph_05, timestep) \
            == C.get_flux_in(graph_05, timestep), \
            'Flux out of A != Flux in of C'

        assert B.get_flux_out(graph_05, timestep) \
            == D.get_flux_in(graph_05, timestep), \
            'Flux out of B != Flux in of D'

        assert C.get_flux_out(graph_05, timestep) \
            + D.get_flux_out(graph_05, timestep) \
            == E.get_flux_in(graph_05, timestep), \
            'Sum flux out of C and D != Flux in of E'
        
        assert A.get_flux_out(graph_05, timestep, cumulative=True) \
            == C.get_flux_in(graph_05, timestep, cumulative=True), \
            'Cumulative flux out of A != Flux in of C'
        
        assert B.get_flux_out(graph_05, timestep, cumulative=True) \
            == D.get_flux_in(graph_05, timestep, cumulative=True), \
            'Cumulative flux out of B != Flux in of D'
        
        assert C.get_flux_out(graph_05, timestep, cumulative=True) \
            + D.get_flux_out(graph_05, timestep, cumulative=True) \
            == E.get_flux_in(graph_05, timestep, cumulative=True), \
            'Sum cumulative flux out of C and D != Flux in of E'
        
        assert A._get_quantity_time(timestep) \
            == A.get_flux_out(graph_05, timestep, cumulative=False), \
            'A _get_quantity_time != flux out'
        
        assert B._get_quantity_time(timestep) \
            == B.get_flux_out(graph_05, timestep, cumulative=False), \
            'B _get_quantity_time != flux out'
        
        assert C.get_flux_in(graph_05, timestep, cumulative=True) \
            == C.get_flux_out(graph_05, timestep, cumulative=True), \
            'C cumulative flux in != cumulative flux out'
        
        assert D.get_flux_in(graph_05, timestep, cumulative=True) \
            == D.get_flux_out(graph_05, timestep, cumulative=True), \
            'D cumulative flux in != cumulative flux out'
        
        assert E.get_stock(graph_05, timestep) \
            == E.get_flux_in(graph_05, timestep, cumulative=True), \
            'E stock != cumulative flux in'


# Vérifier que les tests passent ----------------------------------------------
def main():
    test_in_eq_out()
    test_recycling()
    test_decay()
    test_radiatif()
    test_micro1()
    test_micro2()
    test_multiple_top()
    print("Calculator tests passed")

if __name__ == "__main__":
    main()