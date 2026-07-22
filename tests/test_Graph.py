"""
Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""
import pytest
import warnings
from MoSiR import (
    networkx_graph as wp,
    graph_generator as gg,
    mosir_exceptions as me
)

# Test qui vérifie qu'il est impossible d'avoir deux noeuds avec le même nom
def test_unique_node_names():
    test_01 = wp.WPGraph('unique_names')

    A = gg.TopNode('A')
    B = gg.ProportionNode('B')
    C = gg.DecayNode('B', True)

    test_01.add_node(A)
    test_01.add_node(B)
    with pytest.raises(me.NodeError):
        test_01.add_node(C)

# Test pour TopNode -----------------------------------------------------------
# Test qui vérifie qu'il est impossible d'entrer 
    # une valeur négative dans TopNode
def test_TopNode_negative_values():
    top_node = gg.TopNode('A')
    with pytest.raises(ValueError):
        top_node.time = [-1]
    with pytest.raises(ValueError):
        top_node.quantities = [-1]


# Test qui échoue si une TopNode reçoit des temps ou des quantitées
    # qui ne sont pas des listes
def test_TopNode_not_list():
    top_node = gg.TopNode('A')
    with pytest.raises(TypeError):
        top_node.time = 1
    with pytest.raises(TypeError):
        top_node.quantities = 1

# Vérifier qu'il est impossible d'avoir une valeur avec _get_quantity_time
        # si les quantities et le temps ne sont pas de la même longueur
def test_TopNode_not_same_length():
    top_node = gg.TopNode('A')
    top_node.time = [0, 1, 2]
    top_node.quantities = [1, 2]
    with pytest.raises(ValueError):
        top_node._get_quantity_time(1)

# Vérifier qu'on ne peut pas mettre une proportion > 1 ou < 0 dans un edge
def test_invalid_edge_proportion():
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
def test_modify_graph_name():
    test_12 = wp.WPGraph('graph_test_12')
    with pytest.raises(me.ConstError):
        test_12.get_name = 'graph_test_12'

# Vérifier qu'on ne peut pas passer un graph sans nom dans gg.GraphFactory
def test_no_graph_name():
    with pytest.raises(me.InvalidOption):
        gg.GraphFactory(None)

# Vérifier qu'il est impossible de mettre une DecayNode avec un temps de 0
def test_invalid_decay():
    for i in [-1, 0, 1, "str", 0.1, {'A': 1}]:
        with pytest.raises(ValueError):
            gg.DecayNode('A', i)

# Vérifier qu'une node ne peut avoir un edge qui se connecte à elle-même
def test_self_edge():
    test_17 = wp.WPGraph('graph_test_17')

    A = gg.TopNode('A')
    B = gg.ProportionNode('B')

    test_17.add_node(A)
    test_17.add_node(B)

    with pytest.raises(me.EdgeError):
        test_17.add_edge(A, A, proportions=[1])


# WPGraph: construction et accesseurs ----------------------------------------
def test_graph_needs_a_name():
    with pytest.raises(me.ConstError):
        wp.WPGraph(None)


def test_graph_name_is_stringified():
    assert wp.WPGraph(42).get_name == "42"


def test_get_nodes_names_lists_every_node():
    graph = wp.WPGraph('noms')
    for node in (gg.TopNode('A'), gg.ProportionNode('B'), gg.PoolNode('C')):
        graph.add_node(node)
    assert sorted(graph.get_nodes_names()) == ['A', 'B', 'C']


def test_missing_edge_lookup_raises():
    graph = wp.WPGraph('sans_lien')
    A, B = gg.TopNode('A'), gg.PoolNode('B')
    graph.add_node(A)
    graph.add_node(B)
    with pytest.raises(me.EdgeError):
        graph.get_edge_proportions(A, B)


def test_edge_proportions_are_returned_unchanged():
    graph = wp.WPGraph('proportions')
    A, B = gg.TopNode('A'), gg.PoolNode('B')
    graph.add_node(A)
    graph.add_node(B)
    graph.add_edge(A, B, proportions=[0.25, 0.5, 1])
    assert graph.get_edge_proportions(A, B) == [0.25, 0.5, 1]


@pytest.mark.parametrize("bound", [0, 1])
def test_edge_proportion_bounds_are_inclusive(bound):
    graph = wp.WPGraph('bornes')
    A, B = gg.TopNode('A'), gg.PoolNode('B')
    graph.add_node(A)
    graph.add_node(B)
    graph.add_edge(A, B, proportions=[bound])


def test_dict_proportions_are_accepted():
    graph = wp.WPGraph('dict_proportions')
    A, B = gg.TopNode('A'), gg.PoolNode('B')
    graph.add_node(A)
    graph.add_node(B)
    graph.add_edge(A, B, proportions={"0": 0.5, "1": 1})
    assert graph.get_edge_proportions(A, B) == {"0": 0.5, "1": 1}


def test_dict_proportions_are_validated():
    graph = wp.WPGraph('dict_invalide')
    A, B = gg.TopNode('A'), gg.PoolNode('B')
    graph.add_node(A)
    graph.add_node(B)
    with pytest.raises(me.EdgeError):
        graph.add_edge(A, B, proportions={"0": 1.5})


def test_top_node_predecessors_warn():
    graph = wp.WPGraph('predecesseurs')
    A, B = gg.TopNode('A'), gg.PoolNode('B')
    graph.add_node(A)
    graph.add_node(B)
    graph.add_edge(A, B, proportions=[1])
    with pytest.warns(UserWarning, match="TopNode"):
        list(graph.get_predecessors(A))


def test_pool_node_successors_warn():
    graph = wp.WPGraph('successeurs')
    A, B = gg.TopNode('A'), gg.PoolNode('B')
    graph.add_node(A)
    graph.add_node(B)
    graph.add_edge(A, B, proportions=[1])
    with pytest.warns(UserWarning, match="PoolNode"):
        list(graph.get_successors(B))


# Identité et comparaison des noeuds -----------------------------------------
def test_nodes_are_equal_when_names_match():
    """L'égalité repose uniquement sur le nom, pas sur le type."""
    assert gg.ProportionNode('A') == gg.PoolNode('A')
    assert gg.ProportionNode('A') != gg.ProportionNode('B')


def test_nodes_hash_by_name():
    assert hash(gg.ProportionNode('A')) == hash(gg.PoolNode('A'))


@pytest.mark.parametrize("left, right, expected_lt", [
    ('A', 'B', True),
    ('B', 'A', False),
    ('A', 'A', False),
])
def test_nodes_are_ordered_by_name(left, right, expected_lt):
    a, b = gg.ProportionNode(left), gg.ProportionNode(right)
    assert (a < b) is expected_lt
    assert (a >= b) is not expected_lt


@pytest.mark.parametrize("raw_name, expected", [
    ("  Sawnwood  ", "Sawnwood"),
    ("Other  P&P", "Other P&P"),
    ("A   B   C", "A B C"),
    ("\tPanels\n", "Panels"),
])
def test_node_names_are_normalized(raw_name, expected):
    assert gg.ProportionNode(raw_name).NAME == expected


def test_node_name_cannot_be_changed():
    node = gg.ProportionNode('A')
    with pytest.raises(me.ConstError):
        node.NAME = 'B'


# _get_value_time: lecture d'une proportion dans le temps ---------------------
def test_value_time_clamps_to_the_last_entry():
    """Passé la fin de la liste, la dernière proportion s'applique."""
    node = gg.ProportionNode('A')
    proportions = [0.1, 0.2, 0.3]
    assert node._get_value_time(proportions, 0) == 0.1
    assert node._get_value_time(proportions, 2) == 0.3
    assert node._get_value_time(proportions, 999) == 0.3


def test_value_time_on_an_empty_list_raises():
    node = gg.ProportionNode('A')
    with pytest.raises(me.EdgeError):
        node._get_value_time([], 0)


def test_value_time_with_dict_uses_the_latest_defined_step():
    node = gg.ProportionNode('A')
    proportions = {"0": 0.1, "2": 0.5}
    assert node._get_value_time(proportions, 0) == 0.1
    assert node._get_value_time(proportions, 1) == 0.1
    assert node._get_value_time(proportions, 5) == 0.5


def test_value_time_with_dict_compares_keys_as_strings():
    """Comportement actuel: les clés sont comparées alphabétiquement.

    Avec les clés "0", "5" et "10", au temps 10 c'est "5" qui gagne
    ("5" > "10" en ordre lexicographique) au lieu de "10".
    Sans impact aujourd'hui car GraphFactory ne produit que des listes.
    TODO: comparer les clés numériquement dans _get_value_time.
    """
    node = gg.ProportionNode('A')
    proportions = {"0": 0.1, "5": 0.5, "10": 1.0}
    assert node._get_value_time(proportions, 10) == 0.5


# Sémantique des types de noeuds ---------------------------------------------
def test_top_node_returns_zero_outside_its_time_series():
    node = gg.TopNode('A')
    node.time = [0, 5]
    node.quantities = [10, 20]
    assert node._get_quantity_time(1) == 0
    assert node._get_quantity_time(5) == 20


def test_top_node_has_no_stock():
    node = gg.TopNode('A')
    node.time = [0]
    node.quantities = [100]
    assert node.get_stock(None, 10) == 0


def test_top_node_cumulative_sums_the_series(graph_05):
    graph, A, B, C, D, E = graph_05
    assert A.get_flux_out(graph, 5, cumulative=True) == sum(A.quantities[:6])


def test_pool_node_has_no_output(graph_05):
    graph, A, B, C, D, E = graph_05
    for timestep in (0, 5, 50):
        assert E.get_flux_out(graph, timestep) == 0
        assert E.get_flux_out(graph, timestep, cumulative=True) == 0


def test_proportion_node_has_no_stock(graph_05):
    graph, A, B, C, D, E = graph_05
    for timestep in (0, 5, 50):
        assert C.get_stock(graph, timestep) == 0


def test_decay_node_never_emits_the_year_carbon_enters(graph_04):
    """Un flux entré à l'année X ne peut pas sortir la même année."""
    graph, D = graph_04
    nodes = {n.NAME: n for n in graph.nodes()}
    assert nodes['Noeud1'].get_flux_out(graph, 0) == 0


def test_empty_time_series_gives_no_flux():
    node = gg.TopNode('A')
    assert node._get_quantity_time(0) == 0


def test_negative_time_is_rejected():
    node = gg.TopNode('A')
    node.time = [0]
    node.quantities = [1]
    with pytest.raises(ValueError):
        node._get_quantity_time(-1)


@pytest.mark.parametrize("valid_quantities", [[0], [0.5], [1000000], [0, 1, 2]])
def test_non_negative_quantities_are_accepted(valid_quantities):
    node = gg.TopNode('A')
    node.quantities = valid_quantities
    assert node.quantities == valid_quantities


def test_float_time_is_rejected():
    node = gg.TopNode('A')
    with pytest.raises(ValueError):
        node.time = [0.5]

