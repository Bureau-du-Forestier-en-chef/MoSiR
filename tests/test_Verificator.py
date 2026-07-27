"""
Verificator tests for MoSiR

Le vérificateur est la barrière qui empêche un graphe incohérent d'être
calculé silencieusement. Chaque debugg_graph_XX est couvert ici, en
succès comme en échec.

Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""
import warnings
import pytest
from MoSiR import (
    networkx_graph as wp,
    mosir_exceptions as me,
    graph_verificator as gv,
    graph_generator as gg
)


def chain_dict(graph_name="Example", values_1=None, values_2=None,
               overflow_1=False, overflow_2=False):
    """Graphe en chaîne N1 -> N2 -> N3 sous forme de dict."""
    return {graph_name: {
        "Nodes": {
            "1": {"Decay": False, "Recycling": False, "Name": "N1"},
            "2": {"Decay": False, "Recycling": False, "Name": "N2"},
            "3": {"Decay": False, "Recycling": False, "Name": "N3"},
        },
        "Edges": {
            "1": {"From": 1, "To": 2, "Values": values_1 or [1],
                  "Overflow": overflow_1},
            "2": {"From": 2, "To": 3, "Values": values_2 or [1],
                  "Overflow": overflow_2},
        },
    }}


def overflow_map(factory):
    """Relevé des noeuds en débordement, comme le fait gv.main().

    Plusieurs debugg_graph_XX attendent ce dictionnaire en argument; le
    construire ici évite de coder en dur des noms de noeuds.
    """
    return gv.get_overflow_names(factory)


def factory_with_graph(custom_graph, graph_name="Example"):
    """Injecte un WPGraph construit à la main dans une GraphFactory.

    Nécessaire pour tester les gardes qui portent sur des structures que
    GraphFactory refuse de produire (noeud isolé, graphe trop petit...).
    """
    factory = gg.GraphFactory(Dict=chain_dict(graph_name=graph_name))
    factory._GRAPHS[0] = custom_graph
    return factory


# 01 - Présence d'un noeud d'entrée et d'un noeud de fin ----------------------
def test_missing_first_node(graph_no_topnode):
    with pytest.raises(me.NodeError):
        gv.debugg_graph_01(graph_no_topnode)


def test_valid_graph_has_a_first_node(graph_factory_2):
    gv.debugg_graph_01(graph_factory_2)


def test_several_top_nodes_only_warn():
    graph = chain_dict()
    graph["Example"]["Nodes"]["4"] = {
        "Decay": False, "Recycling": False, "Name": "N4"}
    graph["Example"]["Edges"]["3"] = {
        "From": 4, "To": 2, "Values": [1], "Overflow": False}
    factory = gg.GraphFactory(Dict=graph)

    with pytest.warns(UserWarning, match="noeud d'entrée"):
        gv.debugg_graph_01(factory)


def test_missing_last_node_only_warns(graph_no_lastnode):
    with pytest.warns(UserWarning, match="noeud de fin"):
        gv.debugg_graph_01(graph_no_lastnode)


# 02 - Somme des liens sortants égale à 100% ---------------------------------
def test_pourc_not_100(graph_JSON):
    graph = graph_JSON
    graph["Example"]["Edges"]["1"]["Values"] = [0.5]
    graph_factory = gg.GraphFactory(Dict=graph)
    with pytest.raises(me.EdgeError):
        gv.debugg_graph_02(graph_factory, overflow={'Example': []})


def test_pourc_over_100_is_rejected():
    graph = chain_dict()
    graph["Example"]["Nodes"]["4"] = {
        "Decay": False, "Recycling": False, "Name": "N4"}
    graph["Example"]["Edges"]["3"] = {
        "From": 1, "To": 4, "Values": [1], "Overflow": False}
    factory = gg.GraphFactory(Dict=graph)
    with pytest.raises(me.EdgeError):
        gv.debugg_graph_02(factory, overflow={'Example': []})


def test_split_summing_to_100_is_accepted():
    graph = chain_dict()
    graph["Example"]["Nodes"]["4"] = {
        "Decay": False, "Recycling": False, "Name": "N4"}
    graph["Example"]["Edges"]["1"]["Values"] = [0.4]
    graph["Example"]["Edges"]["3"] = {
        "From": 1, "To": 4, "Values": [0.6], "Overflow": False}
    factory = gg.GraphFactory(Dict=graph)
    gv.debugg_graph_02(factory, overflow={'Example': []})


def test_pourc_is_checked_at_every_timestep():
    """Une proportion variable doit sommer à 100% à chaque pas de temps."""
    graph = chain_dict()
    graph["Example"]["Nodes"]["4"] = {
        "Decay": False, "Recycling": False, "Name": "N4"}
    graph["Example"]["Edges"]["1"]["Values"] = [0.5, 0.5, 0.9]
    graph["Example"]["Edges"]["3"] = {
        "From": 1, "To": 4, "Values": [0.5, 0.5, 0.5], "Overflow": False}
    factory = gg.GraphFactory(Dict=graph)
    with pytest.raises(me.EdgeError):
        gv.debugg_graph_02(factory, overflow={'Example': []})


def test_overflow_nodes_are_excluded_from_the_100_percent_rule():
    graph = chain_dict()
    graph["Example"]["Nodes"]["4"] = {
        "Decay": False, "Recycling": False, "Name": "N4"}
    graph["Example"]["Edges"]["3"] = {
        "From": 1, "To": 4, "Values": [0.3], "Overflow": True}
    factory = gg.GraphFactory(Dict=graph)
    gv.debugg_graph_02(factory, overflow={'Example': ['N4']})


def test_valid_example_respects_the_100_percent_rule(graph_factory_2):
    gv.debugg_graph_02(graph_factory_2, overflow=overflow_map(graph_factory_2))


# 03 - Un noeud ne reçoit pas des liens avec et sans overflow -----------------
def test_overflow_mixed(graph_overflow_mixed):
    with pytest.raises(me.EdgeError):
        gv.debugg_graph_03(graph_overflow_mixed)


def test_uniform_overflow_is_accepted():
    factory = gg.GraphFactory(Dict=chain_dict(overflow_1=True, overflow_2=True))
    gv.debugg_graph_03(factory)


def test_no_overflow_at_all_is_accepted(graph_factory_2):
    gv.debugg_graph_03(graph_factory_2)


# 03_1 - Un noeud en overflow ne peut pas avoir de lien sortant normal --------
def test_quantity_created(graph_JSON):
    graph = graph_JSON
    graph["Example"]["Edges"]["1"]["Overflow"] = True
    graph_factory = gg.GraphFactory(Dict=graph)
    with pytest.raises(me.EdgeError):
        gv.debugg_graph_03_1(graph_factory, overflow={'Example': ['N2']})


def test_overflow_node_with_overflow_output_is_accepted():
    factory = gg.GraphFactory(Dict=chain_dict(overflow_1=True, overflow_2=True))
    gv.debugg_graph_03_1(factory, overflow={'Example': ['N2']})


# 04 - Conservation de la matière --------------------------------------------
def test_carbon_is_conserved_on_the_example(graph_factory_2):
    gv.debugg_graph_04(graph_factory_2, overflow=overflow_map(graph_factory_2))


def test_example_graph_has_overflow_nodes(graph_factory_2):
    """Le graphe de référence exerce bien le cas du débordement.

    Verrouille une hypothèse dont dépendent les deux tests ci-dessus.
    """
    assert any(names for names in overflow_map(graph_factory_2).values())


def test_carbon_loss_is_detected():
    """La moitié du carbone disparaît entre N2 et N3."""
    factory = gg.GraphFactory(Dict=chain_dict(values_2=[0.5]))
    with pytest.raises(me.QuantityError):
        gv.debugg_graph_04(factory, overflow={'Example': []})


def test_carbon_is_conserved_through_a_decay_node():
    factory = gg.GraphFactory(Dict={"Example": {
        "Nodes": {
            "1": {"Decay": False, "Recycling": False, "Name": "N1"},
            "2": {"Decay": True, "Recycling": False, "Name": "N2"},
            "3": {"Decay": False, "Recycling": False, "Name": "N3"},
        },
        "Edges": {
            "1": {"From": 1, "To": 2, "Values": [1], "Overflow": False},
            "2": {"From": 2, "To": 3, "Values": [1], "Overflow": False},
        },
    }})
    gv.debugg_graph_04(factory, overflow={'Example': []})


# 05 - Boucle entre ProportionNode -------------------------------------------
def test_recursion_error(graph_no_lastnode):
    with pytest.raises(me.RecursionNode):
        gv.debugg_graph_05(graph_no_lastnode)


def test_acyclic_graph_has_no_loop(graph_factory_2):
    gv.debugg_graph_05(graph_factory_2)


def test_recycling_node_breaks_the_loop_detection():
    """Une boucle passant par un RecyclingNode est légitime.

    Le RecyclingNode introduit un délai d'un an, donc il n'y a pas de
    récursion infinie: debugg_graph_05 ne doit pas se déclencher.
    """
    factory = gg.GraphFactory(Dict={"Example": {
        "Nodes": {
            "1": {"Decay": False, "Recycling": False, "Name": "N1"},
            "2": {"Decay": False, "Recycling": False, "Name": "N2"},
            "3": {"Decay": False, "Recycling": True, "Name": "N3"},
            "4": {"Decay": False, "Recycling": False, "Name": "N4"},
        },
        "Edges": {
            "1": {"From": 1, "To": 2, "Values": [1], "Overflow": False},
            "2": {"From": 2, "To": 3, "Values": [0.5], "Overflow": False},
            "3": {"From": 2, "To": 4, "Values": [0.5], "Overflow": False},
            "4": {"From": 3, "To": 2, "Values": [1], "Overflow": False},
        },
    }})
    gv.debugg_graph_05(factory)


# 06 - Pas deux graphes du même nom ------------------------------------------
def test_unique_graph_names_are_accepted(graph_factory_2):
    gv.debugg_graph_06(graph_factory_2)


def test_duplicate_graph_names_are_rejected():
    factory = gg.GraphFactory(Dict=chain_dict())
    factory._GRAPHNAME.append("Example")
    with pytest.raises(me.GraphError):
        gv.debugg_graph_06(factory)


# 07 / 08 - Noeuds sans lien -------------------------------------------------
def test_top_node_without_edge_warns():
    graph = wp.WPGraph("Example")
    orphan = gg.TopNode("Orphelin")
    graph.add_node(orphan)
    graph.add_node(gg.PoolNode("Fin"))

    with pytest.warns(UserWarning, match="aucun edge"):
        gv.debugg_graph_07(factory_with_graph(graph))


def test_pool_node_without_edge_warns():
    graph = wp.WPGraph("Example")
    graph.add_node(gg.TopNode("Debut"))
    graph.add_node(gg.PoolNode("Orphelin"))

    with pytest.warns(UserWarning, match="aucun edge"):
        gv.debugg_graph_08(factory_with_graph(graph))


def test_connected_nodes_do_not_warn(graph_factory_2):
    with warnings.catch_warnings():
        warnings.simplefilter("error")
        gv.debugg_graph_07(graph_factory_2)
        gv.debugg_graph_08(graph_factory_2)


# 09 / 10 - Taille minimale du graphe ----------------------------------------
def test_graph_with_a_single_node_is_rejected():
    graph = wp.WPGraph("Example")
    graph.add_node(gg.TopNode("Seul"))
    with pytest.raises(me.GraphError):
        gv.debugg_graph_09(factory_with_graph(graph))


def test_graph_with_two_nodes_is_accepted(graph_factory_2):
    gv.debugg_graph_09(graph_factory_2)


def test_graph_with_edges_is_accepted(graph_factory_2):
    """Régression historique: debugg_graph_10 appelait WPGraph.edges(),

    qui n'existait pas. Le contrôle plantait en AttributeError et avait
    donc été désactivé dans gv.main().
    """
    gv.debugg_graph_10(graph_factory_2)


def test_graph_without_edge_is_rejected():
    graph = wp.WPGraph("Example")
    graph.add_node(gg.TopNode("Debut"))
    graph.add_node(gg.PoolNode("Fin"))

    with pytest.raises(me.GraphError):
        gv.debugg_graph_10(factory_with_graph(graph))


def test_graph_edges_are_exposed():
    graph = wp.WPGraph("Example")
    start, end = gg.TopNode("Debut"), gg.PoolNode("Fin")
    graph.add_node(start)
    graph.add_node(end)
    graph.add_edge(start, end, proportions=[1])

    assert len(graph.edges()) == 1
    assert (start, end) in graph.edges()


# 11 / 12 / 15 - Noeuds intermédiaires reliés des deux côtés ------------------
@pytest.mark.parametrize("node_factory, check", [
    (lambda: gg.RecyclingNode("Isole"), gv.debugg_graph_11),
    (lambda: gg.ProportionNode("Isole"), gv.debugg_graph_12),
    (lambda: gg.DecayNode("Isole", True), gv.debugg_graph_15),
])
def test_intermediate_node_needs_edges_on_both_sides(node_factory, check):
    graph = wp.WPGraph("Example")
    start, isolated, end = gg.TopNode("Debut"), node_factory(), gg.PoolNode("Fin")
    graph.add_node(start)
    graph.add_node(isolated)
    graph.add_node(end)
    graph.add_edge(start, isolated, proportions=[1])  # entrant seulement

    with pytest.raises(me.NodeError):
        check(factory_with_graph(graph))


@pytest.mark.parametrize("check", [
    gv.debugg_graph_11, gv.debugg_graph_12, gv.debugg_graph_15,
])
def test_valid_example_has_no_dangling_intermediate_node(graph_factory_2, check):
    check(graph_factory_2)


# 13 - Rien ne peut retourner vers un TopNode --------------------------------
@pytest.mark.parametrize("node_factory", [
    lambda: gg.DecayNode("Milieu", True),
    lambda: gg.RecyclingNode("Milieu"),
])
def test_edge_back_to_a_top_node_is_rejected(node_factory):
    graph = wp.WPGraph("Example")
    top, middle = gg.TopNode("Debut"), node_factory()
    graph.add_node(top)
    graph.add_node(middle)
    graph.add_edge(top, middle, proportions=[1])
    graph.add_edge(middle, top, proportions=[1])

    with pytest.raises(me.NodeError):
        gv.debugg_graph_13(factory_with_graph(graph))


def test_valid_example_never_returns_to_a_top_node(graph_factory_2):
    gv.debugg_graph_13(graph_factory_2)


# 14 - Nom de gaz correctement écrit -----------------------------------------
@pytest.mark.parametrize("node_name", [
    "CO2 emissions", "CH4 emissions", "N2O emissions", "CO emissions",
    "Sawnwood", "Panels",
])
def test_well_written_names_do_not_warn(node_name):
    with warnings.catch_warnings():
        warnings.simplefilter("error")
        gv.is_gas_present_in_name(node_name)


@pytest.mark.parametrize("node_name", [
    "Co2 emissions", "co2 emissions", "ch4 emissions", "N2o emissions",
])
def test_badly_capitalized_gas_warns(node_name):
    with pytest.warns(UserWarning):
        gv.is_gas_present_in_name(node_name)


def test_pool_node_names_are_checked():
    graph = wp.WPGraph("Example")
    top, pool = gg.TopNode("Debut"), gg.PoolNode("co2 emissions")
    graph.add_node(top)
    graph.add_node(pool)
    graph.add_edge(top, pool, proportions=[1])

    with pytest.warns(UserWarning):
        gv.debugg_graph_14(factory_with_graph(graph))


# 16 / 17 - Caractères interdits dans un nom de graphe -----------------------
def test_graph_name_with_a_space_is_rejected():
    factory = gg.GraphFactory(Dict=chain_dict(graph_name="Mon graphe"))
    with pytest.raises(me.GraphError):
        gv.debugg_graph_16(factory)


def test_graph_name_with_a_tilde_is_rejected():
    """'~' est le séparateur utilisé dans les noms de fichiers d'extrants."""
    factory = gg.GraphFactory(Dict=chain_dict(graph_name="Mon~graphe"))
    with pytest.raises(me.GraphError):
        gv.debugg_graph_17(factory)


def test_clean_graph_name_is_accepted(graph_factory_2):
    gv.debugg_graph_16(graph_factory_2)
    gv.debugg_graph_17(graph_factory_2)


# 18 - Espaces superflus dans un nom de noeud --------------------------------
def test_extra_spaces_in_a_node_name_are_rejected():
    graph = wp.WPGraph("Example")
    node = gg.TopNode("Debut")
    node._NAME = "  Deux  espaces  "  # contourne la normalisation du constructeur
    graph.add_node(node)
    graph.add_node(gg.PoolNode("Fin"))

    with pytest.raises(me.NodeError):
        gv.debugg_graph_18(factory_with_graph(graph))


def test_generator_normalizes_names_so_18_passes():
    """GraphFactory nettoie déjà les noms: debugg_graph_18 est une ceinture."""
    factory = gg.GraphFactory(Dict={"Example": {
        "Nodes": {
            "1": {"Decay": False, "Recycling": False, "Name": "  N1  "},
            "2": {"Decay": False, "Recycling": False, "Name": "N2   suite"},
        },
        "Edges": {
            "1": {"From": 1, "To": 2, "Values": [1], "Overflow": False},
        },
    }})
    gv.debugg_graph_18(factory)


# main() - la suite complète -------------------------------------------------
def test_main_accepts_the_reference_example(graph_factory_2):
    """Le graphe d'exemple livré avec MoSiR doit passer tous les contrôles."""
    with warnings.catch_warnings():
        warnings.simplefilter("ignore")
        gv.main(graph_factory_2)


def test_main_does_not_mutate_the_graph(graph_factory_2):
    """main() travaille sur une copie: debugg_graph_04 injecte des intrants."""
    G = graph_factory_2.get_graph("Example")
    top = next(n for n in G.nodes() if isinstance(n, gg.TopNode))
    assert top.time == []

    with warnings.catch_warnings():
        warnings.simplefilter("ignore")
        gv.main(graph_factory_2)

    assert top.time == [], "main() a modifié le graphe d'origine"


def test_main_rejects_an_invalid_graph():
    factory = gg.GraphFactory(Dict=chain_dict(values_2=[0.5]))
    with warnings.catch_warnings():
        warnings.simplefilter("ignore")
        with pytest.raises((me.EdgeError, me.QuantityError)):
            gv.main(factory)
