# -*- coding: UTF-8 -*-
"""
Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""

import warnings
import networkx as nx
from MoSiR import mosir_exceptions as me

class WPGraph():
    def __init__(self, KEY):
        super().__init__()
        self._graph = nx.DiGraph()
        if KEY is None:
            raise me.ConstError("Graph name can't be None")
        self._NAME = str(KEY)

    def add_node(self, node):
        name_to_add = node.NAME
        existing_node_names = [n.NAME for n in self._graph.nodes()]
        if name_to_add in existing_node_names:
            raise me.NodeError(f"Node name '{name_to_add}' already exists")
        return self._graph.add_node(node)
    
    def add_edge(self, node_from, node_to, proportions: list[float]):
        if any(x < 0 or x > 1 for x in proportions):
            raise me.EdgeError("Proportion must be between 0 and 1")
        return self._graph.add_edge(node_from, node_to, proportion= proportions)
    
    def get_edge_proportions(self, node_from, node_to) -> list[float]:
        # Vérifier si le edge existe entre les deux nodes
        if not self._graph.has_edge(node_from, node_to):
            raise me.EdgeError(f"Edge from '{node_from}' to '{node_to}' doesn't exist")
        return self._graph.get_edge_data(node_from, node_to)["proportion"]
    
    def get_predecessors(self, node):
        if type(node) == gg.TopNode:
            warnings.warn("TopNode has no predecessors")
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

# Not usefull atm
#import igraph
#class WPGraph_IG():
#    def __init__(self, KEY):
#        super().__init__()
#        self._graph = ig.Graph(directed = True)
#        self._NAME = KEY
#   
#    def __ToIGnode(self, node):
#        return self._graph.vs.find(data = node)
#   
#    def add_node(self, node):
#        return self._graph.add_vertex(data = node)
#    
#    def add_edge(self, From, To, Proportions):
#        From_VS = self.__ToIGNode(From)
#        To_VS = self.__ToIGNode(To)
#        return self._graph.add_edge(From_VS, To_VS, Proportion = Proportions)
#    
#    def get_edge_proportions(self, From, To) -> list[float]:
#        From_VS = self.__ToIGNode(From)
#        To_VS = self.__ToIGNode(To)
#        return self._graph.es[self._graph.get_eid(From_VS, To_VS)]['Proportion']
#    
#    def get_predecessors(self, node):
#        From_VS = self.__ToIGNode(node)
#        return [self._graph.vs[i]['data'] for i in self._graph.predecessors(From_VS)]
#    
#    def get_successors(self, node):
#        To_VS = self.__ToIGNode(node)
#        return [self._graph.vs[i]['data'] for i in self._graph.successors(To_VS)]
#    
#    def nodes(self):
#        return [i['data'] for i in self._graph.vs]
#    
#    @property
#    def get_name(self):
#        return self._NAME
#    
#    @get_name.setter
#    def get_name(self):
#        return me.ConstError("Graph name can't be changed outside Miro")