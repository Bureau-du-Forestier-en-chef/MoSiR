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
    """ Class interface avec le package networkx

    Cette classe sert de layer entre les commandes du package
    networkx et les fonctions qui seront utilisées dans MoSiR.
    Le but est de faire abstraction du package au cas où il devra
    être changer ou modifié.
    """
    def __init__(self, KEY):
        super().__init__()
        self._graph = nx.DiGraph()
        if KEY is None:
            raise me.ConstError("Graph name can't be empty")
        self._NAME = str(KEY)
        self._TOPNODE_NAMES = []
        self._DECAYNODE_NAMES = []

    def get_nodes_names(self) -> list[str]:
        """Retourne le nom de tous les noeuds sous forme de liste
        """
        return [n.NAME for n in self._graph.nodes()]
    
    def add_topnode_name(self, name):
        """Ajoute le nom d'une TopNode à une liste

        Sert à alimenter self.get_topnode_name

        Args:
            name (_type_): Nom du nom
        """
        self._TOPNODE_NAMES.append(name)

    def get_topnode_name(self) -> list[str]:
        """Retourne tous les noms des noeuds qui sont TopNode

        Returns:
            list[str]: Une liste des noms de noeuds
        """
        return self._TOPNODE_NAMES
        
    def add_decaynode_name(self, name):
        self._DECAYNODE_NAMES.append(name)

    def get_decaynode_names(self) -> list[str]:
        return self._DECAYNODE_NAMES

    def add_node(self, node):
        """Ajoute un noeud au graphe

        Args:
            node (_type_): Un noeud à ajouter

        Raises:
            me.NodeError: Un noeud ne peut avoir le même nom qu'un
                noeud déjà présent
        """
        if node.NAME in self.get_nodes_names():
            raise me.NodeError(f"At least two nodes have the same name: '{node.NAME}'.\
                Nodes must have an unique name")
        self._graph.add_node(node)
    
    def add_edge(self, node_from, node_to, proportions: list[float]):
        """Ajoute un lien entre deux noeuds dans le graphe

        Args:
            node_from (_type_): Noeud de départ
            node_to (_type_): Noeud d'arrivé
            proportions (list[float]): La proportion qui lie les deux noeuds

        Raises:
            me.EdgeError: Une proportion doit être entre 0 et 1
            me.EdgeError: Un lien ne peut s'attacher entre deux noeuds identiques
        """
        if any(x < 0 or x > 1 for x in proportions):
            raise me.EdgeError(f"Proportion must be between 0 and 1. \
                Error between {node_from.NAME} to {node_to.NAME}")
        if node_from == node_to:
            raise me.EdgeError(f"Can't create an edge from {node_from.NAME} to itself")
        self._graph.add_edge(node_from, node_to, proportion=proportions)
    
    def get_edge_proportions(self, node_from, node_to) -> list[float]:
        """Retourne la proportion entre deux noeuds

        Args:
            node_from (_type_): Noeud de départ
            node_to (_type_): Noeud d'arrivé

        Raises:
            me.EdgeError: Un lien doit exister entre les deux noeuds

        Returns:
            list[float]: Une liste des proportions
        """
        if not self._graph.has_edge(node_from, node_to):
            raise me.EdgeError(f"Edge from '{node_from.NAME}' to '{node_to.NAME}' doesn't exist")
        return self._graph.get_edge_data(node_from, node_to)["proportion"]
    
    def get_predecessors(self, node):
        """Retourne tous les noeuds enfants

        Args:
            node (_type_): Le noeud parent

        Returns:
            _type_: tous les noeuds enfants
        """
        if type(node) == gg.TopNode:
            warnings.warn("The TopNode has no predecessors")
        return self._graph.predecessors(node)
    
    def get_successors(self, node):
        """Retourne tous les noeuds parents

        Args:
            node (_type_): Le noeud enfant

        Returns:
            _type_: tous les noeuds parents
        """
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