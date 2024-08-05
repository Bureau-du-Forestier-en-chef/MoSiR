# -*- coding: UTF-8 -*-
"""
Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""

import warnings
import networkx as nx
from MoSiR import graph_generator as gg
from MoSiR import mosir_exceptions as me

class WPGraph():
    def __init__(self, KEY):
        super().__init__()
        self._graph = nx.DiGraph()
        if KEY is None:
            raise me.ConstError("Graph name can't be empty")
        self._NAME = str(KEY)
        self._TOPNODE_NAMES = []

    def get_nodes_names(self) -> list[str]:
        return [n.NAME for n in self._graph.nodes()]
    
    def add_topnode_name(self, name):
        self._TOPNODE_NAMES.append(name)

    def get_topnode_name(self) -> list[str]:
        return self._TOPNODE_NAMES

    def add_node(self, node):
        name_to_add = node.NAME
        existing_node_names = self.get_nodes_names()
        if name_to_add in existing_node_names:
            raise me.NodeError(f"At least two nodes have the same name: '{name_to_add}'.\
                Nodes must have an unique name")
        self._graph.add_node(node)
    
    def add_edge(self, node_from, node_to, proportions: list[float]):
        if any(x < 0 or x > 1 for x in proportions):
            raise me.EdgeError(f"Proportion must be between 0 and 1. \
                Error between {node_from.NAME} to {node_to.NAME}")
        if node_from == node_to:
            raise me.EdgeError(f"Can't create an edge from {node_from.NAME} to itself")
        self._graph.add_edge(node_from, node_to, proportion= proportions)
    
    def get_edge_proportions(self, node_from, node_to) -> list[float]:
        if not self._graph.has_edge(node_from, node_to):
            raise me.EdgeError(f"Edge from '{node_from.NAME}' to '{node_to.NAME}' doesn't exist")
        return self._graph.get_edge_data(node_from, node_to)["proportion"]
    
    def get_predecessors(self, node):
        if type(node) == gg.TopNode:
            warnings.warn("The TopNode has no predecessors")
        return self._graph.predecessors(node)
    
    def get_successors(self, node):
        if type(node) == gg.PoolNode:
            warnings.warn("PoolNode has no successors") 
        return self._graph.successors(node)
    
    def nodes(self):
        return self._graph.nodes()
    
    @property
    def get_name(self):
        return self._NAME
    
    @get_name.setter
    def get_name(self, value):
        raise me.ConstError("Graph name can't be changed outside Miro")