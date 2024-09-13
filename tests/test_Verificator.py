"""
Verificator tests for MoSiR

Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""
import pytest
from MoSiR import (
    mosir_exceptions as me,
    graph_verificator as gv,
    graph_generator as gg
)

def test_missing_first_node(graph_no_topnode):
    with pytest.raises(me.NodeError):
        gv.debugg_graph_01(graph_no_topnode)

def test_recursion_error(graph_no_lastnode):
    with pytest.raises(me.RecursionNode):
        gv.debugg_graph_05(graph_no_lastnode)

def test_pourc_not_100(graph_JSON):
    graph = graph_JSON
    graph["Example"]["Edges"]["1"]["Values"] = [0.5]
    graph_factory = gg.GraphFactory(Dict=graph)
    with pytest.raises(me.EdgeError):
        gv.debugg_graph_02(graph_factory, overflow={'Example': []})

def test_overflow_mixed(graph_overflow_mixed):
    with pytest.raises(me.EdgeError):
        gv.debugg_graph_03(graph_overflow_mixed)

def test_quantity_created(graph_JSON, graph_factory_2):
    graph = graph_JSON
    graph["Example"]["Edges"]["1"]["Overflow"] = True
    graph_factory = gg.GraphFactory(Dict=graph)
    g_f_2 = graph_factory_2
    with pytest.raises(me.EdgeError):
        gv.debugg_graph_03_1(graph_factory, overflow={'Example': ['N2']})