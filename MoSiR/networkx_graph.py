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
    """ Interface class with the networkx package

    This class acts as a layer between the commands of the networkx
    package and the functions that will be used in MoSiR. The goal is to
    abstract away the package in case it has to be changed or modified.
    """
    def __init__(self, KEY):
        super().__init__()
        self._graph = nx.DiGraph()
        if KEY is None:
            raise me.ConstError("Graph name can't be empty")
        self._NAME = str(KEY)
        self._TOPNODE_NAMES = []
        self._DECAYNODE_NAMES = []
        # Set of names for an O(1) uniqueness test on add, instead of an
        # O(N) test per add_node (so O(N^2) when building the graph).
        self._NODE_NAMES = set()
        # Predecessors per node, memoized: the topology is frozen after the
        # construction and get_flux_in re-requests them for every (node, time).
        self._predecessors_cache = {}

    def get_nodes_names(self) -> list[str]:
        """Returns the name of all the nodes as a list
        """
        return [n.NAME for n in self._graph.nodes()]

    def add_topnode_name(self, name):
        """Adds the name of a TopNode to a list

        Used to feed self.get_topnode_name

        Args:
            name (_type_): The name
        """
        self._TOPNODE_NAMES.append(name)

    def get_topnode_name(self) -> list[str]:
        """Returns all the names of the nodes that are TopNode

        Returns:
            list[str]: A list of node names
        """
        return self._TOPNODE_NAMES

    def add_decaynode_name(self, name):
        self._DECAYNODE_NAMES.append(name)

    def get_decaynode_names(self) -> list[str]:
        return self._DECAYNODE_NAMES

    def add_node(self, node):
        """Adds a node to the graph

        Args:
            node (_type_): A node to add

        Raises:
            me.NodeError: A node cannot have the same name as a node
                already present
        """
        if node.NAME in self._NODE_NAMES:
            raise me.NodeError(f"At least two nodes have the same name: '{node.NAME}'.\
                Nodes must have an unique name")
        self._graph.add_node(node)
        self._NODE_NAMES.add(node.NAME)

    def add_edge(self, node_from, node_to, proportions: list[float] | dict):
        """Adds a link between two nodes in the graph

        Args:
            node_from (_type_): Starting node
            node_to (_type_): Ending node
            proportions (list[float]): The proportion linking the two nodes

        Raises:
            me.EdgeError: A proportion must be between 0 and 1
            me.EdgeError: A link cannot attach between two identical nodes
        """
        if isinstance(proportions, list):
            if any(x < 0 or x > 1 for x in proportions):
                raise me.EdgeError(f"Proportion must be between 0 and 1. \
                    Error between {node_from.NAME} to {node_to.NAME}")
        if isinstance(proportions, dict):
            if any(x < 0 or x > 1 for x in proportions.values()):
                raise me.EdgeError(f"Proportion must be between 0 and 1. \
                    Error between {node_from.NAME} to {node_to.NAME}")
        if node_from == node_to:
            raise me.EdgeError(f"Can't create an edge from {node_from.NAME} to itself")
        self._graph.add_edge(node_from, node_to, proportion=proportions)
        # The topology changes: the predecessors cache is no longer valid.
        self._predecessors_cache = {}

    def get_edge_proportions(self, node_from, node_to) -> list[float]:
        """Returns the proportion list between two nodes

        Args:
            node_from (_type_): Starting node
            node_to (_type_): Ending node

        Raises:
            me.EdgeError: A link must exist between the two nodes

        Returns:
            list[float]: A list of the proportions
        """
        if not self._graph.has_edge(node_from, node_to):
            raise me.EdgeError(f"Edge from '{node_from.NAME}' to '{node_to.NAME}' doesn't exist")
        return self._graph.get_edge_data(node_from, node_to)["proportion"]

    def get_predecessors(self, node):
        """Returns all the child nodes

        Args:
            node (_type_): The parent node

        Returns:
            _type_: all the child nodes
        """
        if type(node) == gg.TopNode:
            warnings.warn("The TopNode has no predecessors")
        cached = self._predecessors_cache.get(node)
        if cached is None:
            cached = list(self._graph.predecessors(node))
            self._predecessors_cache[node] = cached
        return cached

    def get_successors(self, node):
        """Returns all the parent nodes

        Args:
            node (_type_): The child node

        Returns:
            _type_: all the parent nodes
        """
        if type(node) == gg.PoolNode:
            warnings.warn("PoolNode has no successors")
        return self._graph.successors(node)

    def nodes(self):
        return self._graph.nodes()

    def edges(self):
        """Returns all the links of the graph

        Returns:
            _type_: all the links as (start, end) pairs
        """
        return self._graph.edges()

    @property
    def get_name(self):
        return self._NAME

    @get_name.setter
    def get_name(self, value):
        raise me.ConstError("Graph name can't be changed outside Miro")
