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

