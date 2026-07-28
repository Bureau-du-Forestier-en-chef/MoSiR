# -*- coding: UTF-8 -*-
"""
Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt

The graph_generator package builds the MoSiR node network from JSON. It is
split by responsibility:

- caching:  the Caching flux cache used by the nodes
- nodes:    the node hierarchy (IndustrialNode -> TopNode, ProportionNode,
            DecayNode, RecyclingNode, PoolNode)
- factory:  GraphFactory, which turns JSON into a graph of nodes

Every public name is re-exported here so that `from MoSiR import
graph_generator as gg` keeps giving access to `gg.Caching`, `gg.TopNode`,
`gg.GraphFactory`, and so on.
"""
from MoSiR.graph_generator.caching import Caching
from MoSiR.graph_generator.nodes import (
    IndustrialNode,
    TopNode,
    ProportionNode,
    DecayNode,
    RecyclingNode,
    PoolNode,
)
from MoSiR.graph_generator.factory import GraphFactory

__all__ = [
    "Caching",
    "IndustrialNode",
    "TopNode",
    "ProportionNode",
    "DecayNode",
    "RecyclingNode",
    "PoolNode",
    "GraphFactory",
]
