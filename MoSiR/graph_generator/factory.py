# -*- coding: UTF-8 -*-
"""
Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""
from MoSiR import networkx_graph as wp
from MoSiR import mosir_exceptions as me
from MoSiR import utilities
from MoSiR.graph_generator.nodes import (
    TopNode, ProportionNode, DecayNode, RecyclingNode, PoolNode)

# Factory --------------------------------------------------------------------

class GraphFactory(utilities.JsonData):
    """ GraphFactory Documentation

    The GraphFactory class builds a network of nodes from a JSON file. The
    JSON file must be built according to the MoSiR standards. Refer to the
    documentation on the GitHub of the Bureau du forestier en chef for more
    information.

    The JSON loading itself is done by utilities.JsonData; the option of
    passing a dictionary rather than a path is used for analysis during the
    import in the API.

    Args:
        DIR (str): The path of the JSON file containing the graphs
        Dict (dict): The graphs already loaded in memory

    Returns:
        GraphFactory: An object of the GraphFactory class
    """
    SOURCE_NAME = "le graphe"

    def __init__(self, DIR: str=None, Dict: dict=None):
        super().__init__(DIR, Dict)
        self._GRAPHNAME = []
        self._GRAPHS = []
        # Name -> position index for an O(1) get_graph (instead of a
        # list.index on each call), heavily used during reporting and
        # verification. We index the POSITION, not the object, to stay
        # consistent if _GRAPHS[i] is replaced afterwards (done in the tests).
        self._INDEX_BY_NAME = {}

        keys = list(self.get_data.keys())
        keys.sort()
        for graph in keys:
            self._GRAPHNAME.append(graph)
            self._GRAPHS.append(wp.WPGraph(graph))
            self._INDEX_BY_NAME[graph] = len(self._GRAPHS) - 1
            _EDGES = self.get_data[graph].get('Edges', {})
            _NODES = self.get_data[graph].get('Nodes', {})
            if len(_NODES) < 2 or len(_EDGES) == 0:
                raise me.GraphError("Le graphe doit contenir au moins deux noeud et un edge")
            _TOPNODES = set([int(ID) for ID in _NODES]) - \
                set([data['To'] for keys, data in _EDGES.items()])
            _LASTNODES = set([int(ID) for ID in _NODES]) - \
                set([data['From'] for keys, data in _EDGES.items()])

            node_map = {}
            for node_id, node_data in _NODES.items():
                if int(node_id) in _TOPNODES:
                    if node_data['Decay'] == True or node_data['Recycling'] == True:
                        raise me.GraphError(f"Node at the top (a node without an edge \
                            going into it) cannot also be identified as a recycling \
                            or decay node. Node name: {node_data['Name']}")
                    new_node =  TopNode(node_data['Name'])
                    self.get_graph(graph).add_topnode_name(node_data['Name'])
                elif int(node_id) in _LASTNODES:
                    if node_data['Decay'] == True or node_data['Recycling'] == True:
                        raise me.GraphError(f"Node at the bottom (a node without an edge \
                            going out of it) cannot also be identified as a recycling \
                            or decay node. Node name: {node_data['Name']}")
                    new_node = PoolNode(node_data['Name'])
                elif node_data["Decay"] == True:
                    if node_data["Recycling"] == True:
                        raise me.GraphError(f"A node cannot be both a recycling and \
                            decay node. Node name: {node_data['Name']}")
                    new_node = DecayNode(node_data['Name'], node_data['Decay'])
                    self.get_graph(graph).add_decaynode_name(node_data['Name'])
                elif node_data['Recycling'] == True:
                    new_node = RecyclingNode(node_data['Name'])
                else: new_node = ProportionNode(node_data['Name'])
                self.get_graph(graph).add_node(new_node)
                node_map[int(node_id)] = new_node

            for edge_id, edge_data in _EDGES.items():
                from_node = node_map[edge_data['From']]
                to_node = node_map[edge_data['To']]
                self.get_graph(graph).add_edge(from_node, to_node, edge_data['Values'])

    @property
    def get_graph_name(self) -> list[str]:
        return self._GRAPHNAME

    @get_graph_name.setter
    def get_graph_name(self, input):
        raise me.ConstError("Graph name can't be changed outside Miro")

    def get_graph(self, name) -> wp.WPGraph:
        try:
            return self._GRAPHS[self._INDEX_BY_NAME[name]]
        except KeyError:
            # Keeps the ValueError that the old list.index(name) raised
            raise ValueError(f"'{name}' n'est pas un nom de graphe")
        # get_data (access to the JSON data) is inherited from utilities.JsonData
