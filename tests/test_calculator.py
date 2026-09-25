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
    import_info as ii,
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


# Bugs connus du moteur -------------------------------------------------------
# Chaque test de cette section reproduit un défaut décrit dans
# Documentation/FeuilleDeRoute.md (section A). Il est marqué
# xfail(strict=True): il échoue tant que le défaut existe, et pytest signale
# une erreur dès qu'il se met à passer. Au moment du correctif, retirer le
# marqueur: le test devient le test de régression.

KNOWN_BUG_GRAPH = "Boucle"


def _node(name: str, decay: bool = False, recycling: bool = False) -> dict:
    return {"Decay": decay, "Recycling": recycling, "Name": name}


def _edge(origin: int, target: int, proportion: float) -> dict:
    return {"From": origin, "To": target, "Values": [proportion],
            "Overflow": False}


def _build_graph(nodes: dict, edges: dict, harvest: dict, decays: dict):
    """Construit un graphe unique et lui applique ses intrants.

    Args:
        nodes (dict): Les noeuds, au format du JSON de graphe
        edges (dict): Les liens, au format du JSON de graphe
        harvest (dict): Les intrants du TopNode "Harvest", {année: quantité}
        decays (dict): Les paramètres de dégradation, {noeud: paramètres}

    Returns:
        tuple: Le WPGraph, et un dictionnaire {nom: noeud} pour retrouver les
        noeuds par leur nom
    """
    factory = gg.GraphFactory(Dict={KNOWN_BUG_GRAPH: {
        "Nodes": nodes, "Edges": edges}})
    import_data = ii.ImportData(Dict={
        "Inputs": {KNOWN_BUG_GRAPH: {"Harvest": harvest}},
        "Decay": {KNOWN_BUG_GRAPH: decays},
        "Unit": "tC"})
    ii.add_import(factory, import_data)
    graph = factory.get_graph(KNOWN_BUG_GRAPH)
    nodes_by_name = {node.NAME: node for node in graph.nodes()}
    return graph, nodes_by_name


def _cycle_whose_only_delay_is_decay():
    """Harvest -> Mill -> Products (Decay), puis Products renvoie 50 % vers
    Mill et 50 % vers Emissions. Aucun RecyclingNode dans la boucle."""
    nodes = {
        "1": _node("Harvest"),
        "2": _node("Mill"),
        "3": _node("Products", decay=True),
        "4": _node("Emissions")}
    edges = {
        "1": _edge(1, 2, 1.0),
        "2": _edge(2, 3, 1.0),
        "3": _edge(3, 2, 0.5),
        "4": _edge(3, 4, 0.5)}
    return _build_graph(nodes, edges, harvest={"0": 100.0},
                        decays={"Products": {"Exponential": 5.0}})


def _decay_in_recycling_loop(decay: dict):
    """Harvest -> Products (Decay), puis Products envoie 30 % vers Recycling
    et 70 % vers Emissions; Recycling renvoie tout vers Products. Un intrant
    de 100 chaque année de 0 à 10."""
    nodes = {
        "1": _node("Harvest"),
        "2": _node("Products", decay=True),
        "3": _node("Recycling", recycling=True),
        "4": _node("Emissions")}
    edges = {
        "1": _edge(1, 2, 1.0),
        "2": _edge(2, 3, 0.3),
        "3": _edge(2, 4, 0.7),
        "4": _edge(3, 2, 1.0)}
    harvest = {str(year): 100.0 for year in range(11)}
    return _build_graph(nodes, edges, harvest, decays={"Products": decay})


def _recycling_loop_without_decay():
    """Harvest -> Mill, puis Mill envoie 50 % vers Recycling et 50 % vers
    Emissions; Recycling renvoie tout vers Mill l'année suivante."""
    nodes = {
        "1": _node("Harvest"),
        "2": _node("Mill"),
        "3": _node("Recycling", recycling=True),
        "4": _node("Emissions")}
    edges = {
        "1": _edge(1, 2, 1.0),
        "2": _edge(2, 3, 0.5),
        "3": _edge(2, 4, 0.5),
        "4": _edge(3, 2, 1.0)}
    return _build_graph(nodes, edges, harvest={"0": 100.0}, decays={})


@pytest.mark.xfail(strict=True, raises=RecursionError, reason=(
    "D01 — Un cycle dont le seul délai est un DecayNode lève une "
    "RecursionError: DecayNode.get_flux_out étend ses vecteurs jusqu'à "
    "l'année demandée incluse (nodes.py:417), alors que la sortie de "
    "l'année t ne dépend que des entrées jusqu'à t-1. Régression introduite "
    "par « Faster run »."))
def test_cycle_whose_only_delay_is_a_decay_node_keeps_mass_balance(MOSIR_TOLERENCE):
    graph, nodes = _cycle_whose_only_delay_is_decay()

    for year in range(21):
        in_system = (nodes["Products"].get_stock(graph, year)
                     + nodes["Emissions"].get_stock(graph, year))
        assert in_system == pytest.approx(100.0, abs=MOSIR_TOLERENCE), \
            f"le carbone récolté doit rester dans le système (année {year})"


@pytest.mark.xfail(strict=True, raises=AssertionError, reason=(
    "D02 — Le stock d'un DecayNode placé dans une boucle de recyclage est "
    "faux quand on le demande sans passer par les années précédentes: "
    "_extend_decay_vectors est rappelé pendant sa propre exécution et "
    "ajoute deux fois les mêmes années (nodes.py:363-368). Régression "
    "introduite par « Faster run ». Le reporting actuel demande les années "
    "dans l'ordre et n'est pas touché."))
def test_decay_stock_does_not_depend_on_the_order_of_the_queries():
    graph_in_order, nodes_in_order = _decay_in_recycling_loop({"Exponential": 5.0})
    for year in range(11):
        stock_in_order = nodes_in_order["Products"].get_stock(graph_in_order, year)

    graph_direct, nodes_direct = _decay_in_recycling_loop({"Exponential": 5.0})
    stock_direct = nodes_direct["Products"].get_stock(graph_direct, 10)

    assert stock_direct == pytest.approx(stock_in_order, rel=1e-9), \
        "le stock de l'année 10 ne doit pas dépendre de l'ordre des requêtes"


@pytest.mark.xfail(strict=True, raises=AssertionError, reason=(
    "D03 — Modifier alpha ou beta d'un DecayNode après un calcul ne change "
    "pas les résultats: les setters n'invalident aucun cache "
    "(nodes.py:374-384). Le correctif peut aussi choisir de refuser la "
    "modification; adapter alors ce test."))
def test_changing_decay_parameters_after_a_calculation_updates_the_results():
    graph, nodes = _decay_in_recycling_loop({"Custom": {"alpha": 1, "beta": 10}})
    products = nodes["Products"]
    for year in range(11):
        products.get_stock(graph, year)
    products.beta = 50
    stock_after_change = products.get_stock(graph, 10)

    fresh_graph, fresh_nodes = _decay_in_recycling_loop(
        {"Custom": {"alpha": 1, "beta": 50}})
    for year in range(11):
        expected_stock = fresh_nodes["Products"].get_stock(fresh_graph, year)

    assert stock_after_change == pytest.approx(expected_stock, rel=1e-9), \
        "le stock doit refléter le nouveau beta"


@pytest.mark.xfail(strict=True, raises=RecursionError, reason=(
    "D04 — Une requête lointaine qui ne passe pas par les années "
    "précédentes remonte le temps par récursion, une année à la fois. Dans "
    "cette boucle de recyclage, la limite de récursion est atteinte vers "
    "t = 700 (limite de 3000, relevée par jedi que pyvis importe) et vers "
    "t = 250 avec la limite par défaut de 1000. Le reporting actuel demande "
    "les années dans l'ordre et n'est pas touché."))
def test_far_query_in_a_recycling_loop_stays_within_the_recursion_limit():
    graph, nodes = _recycling_loop_without_decay()

    emissions = nodes["Emissions"].get_flux_in(graph, 1000)

    # Mill reçoit 100 à l'année 0, puis la moitié de ce qu'il a envoyé
    # l'année précédente: 100 * 0.5**t. Emissions en reçoit la moitié.
    assert emissions == pytest.approx(100 * 0.5 ** 1001, rel=1e-9)


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