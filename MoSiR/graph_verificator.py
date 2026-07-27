# -*- coding: UTF-8 -*-
"""
Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""

import copy
import warnings
from MoSiR import graph_generator as gg
from MoSiR import mosir_exceptions as me

# Fonction main qui contient les tests ----------------------------------------
def main(graph: gg.GraphFactory):
    """Fonction main qui sera connectée au script mosir_calculator.py

    Cette fonction contient les tests qui seront effectués sur le graph
    avant de faire le calcul. Les tests sont effectués par graph, donc
    si plusieurs graphes sont présent dans le fichier JSON, les tests seront
    effectués pour chaque graph. Hope it works

    Args:
        graphe (gg.GraphFactory): GraphFactory qui contient les graph
        à tester
    """

    graph_copy = copy.deepcopy(graph)

    # On récupère les noms des nodes qui ont un overflow
    overflow_name = get_overflow_names(graph_copy)

    # On effectue les tests
    debugg_graph_01(graph_copy)
    debugg_graph_02(graph_copy, overflow=overflow_name)
    debugg_graph_03(graph_copy)
    debugg_graph_03_1(graph_copy, overflow=overflow_name)
    debugg_graph_04(graph_copy, overflow=overflow_name)
    debugg_graph_05(graph_copy)
    debugg_graph_06(graph_copy)
    debugg_graph_07(graph_copy)
    debugg_graph_08(graph_copy)
    # 09 et 10 font double emploi avec graph_generator.py, mais restent
    # utiles pour un graphe construit autrement que par GraphFactory
    debugg_graph_09(graph_copy)
    debugg_graph_10(graph_copy)
    debugg_graph_11(graph_copy)
    debugg_graph_12(graph_copy)
    debugg_graph_13(graph_copy)
    debugg_graph_14(graph_copy)
    debugg_graph_15(graph_copy)
    debugg_graph_16(graph_copy)
    debugg_graph_17(graph_copy)
    debugg_graph_18(graph_copy)

# Parcours partagés -----------------------------------------------------------
# Tous les contrôles partent du même préambule: parcourir les graphes d'une
# GraphFactory, puis leurs noeuds. Les générateurs ci-dessous l'écrivent une
# seule fois. Certains contrôles portent sur le JSON d'origine plutôt que sur
# le graphe construit, parce qu'ils vérifient justement ce que GraphFactory
# en a déduit.

def get_overflow_names(graph: gg.GraphFactory) -> dict[str, list[str]]:
    """Relève par graphe le nom des noeuds qui reçoivent un lien en débordement

    Le carbone qui déborde n'est pas soumis aux mêmes règles que le reste:
    plusieurs contrôles ont besoin de cette liste pour exclure ces noeuds
    de la règle du 100% et de la comptabilisation de la matière.

    Args:
        graph (gg.GraphFactory): GraphFactory à parcourir

    Returns:
        dict[str, list[str]]: Les noms des noeuds en débordement, par graphe
    """
    overflow_name = {}
    for graph_name, NODES, EDGES in _each_json_graph(graph):
        overflow_id = [values.get('To') for values in EDGES.values()
                       if values.get('Overflow') == True]
        overflow_name[graph_name] = [values.get('Name')
                                     for key, values in NODES.items()
                                     if int(key) in overflow_id]
    return overflow_name

def _each_json_graph(graph: gg.GraphFactory):
    """Itère sur le JSON d'origine: (nom du graphe, Nodes, Edges)"""
    for graph_name in graph.get_data:
        data = graph.get_data.get(graph_name)
        yield graph_name, data.get('Nodes', {}), data.get('Edges', {})

def _each_graph(graph: gg.GraphFactory):
    """Itère sur les graphes construits: (nom du graphe, WPGraph)"""
    for graph_name in graph.get_graph_name:
        yield graph_name, graph.get_graph(graph_name)

def _each_node(graph: gg.GraphFactory, node_types = None):
    """Itère sur les noeuds: (nom du graphe, WPGraph, noeud)

    node_types filtre sur le type exact du noeud, sans tenir compte de
    l'héritage: un DecayNode ne répond pas à un filtre ProportionNode.

    Args:
        graph (gg.GraphFactory): GraphFactory à parcourir
        node_types: Un type de noeud, un tuple de types, ou None pour tous
    """
    if node_types is not None and not isinstance(node_types, tuple):
        node_types = (node_types,)
    for graph_name, G in _each_graph(graph):
        for node in G.nodes():
            if node_types is None or type(node) in node_types:
                yield graph_name, G, node

def _count(neighbours) -> int:
    """Compte les voisins retournés par get_successors ou get_predecessors"""
    return sum(1 for neighbour in neighbours)

# Contrôles déclaratifs -------------------------------------------------------
# Plusieurs contrôles ne diffèrent que par le type de noeud visé ou par le
# caractère refusé. Ils partagent ici une seule implémentation.

def _check_node_is_connected_both_ways(graph: gg.GraphFactory, node_type):
    """Un noeud intermédiaire doit avoir au moins un lien de chaque côté

    Args:
        graph (gg.GraphFactory): GraphFactory à vérifier
        node_type: Le type de noeud visé, qui donne aussi son nom au message

    Raises:
        me.NodeError: Le noeud n'a aucun lien entrant ou aucun lien sortant
    """
    for graph_name, G, node in _each_node(graph, node_type):
        if _count(G.get_successors(node)) == 0 or \
            _count(G.get_predecessors(node)) == 0:
            raise me.NodeError(' '.join((f"La node {node.NAME} n'a pas \
                de edges entrant ou sortant. Une node de type {node_type.__name__} \
                ne peut pas être au début ou à la fin d'un graph").split()))

def _warn_nodes_without_edge(graph: gg.GraphFactory, node_type, neighbours):
    """Avertit quand des noeuds d'un type n'ont aucun lien du côté attendu

    Args:
        graph (gg.GraphFactory): GraphFactory à vérifier
        node_type: Le type de noeud visé
        neighbours: Fonction (WPGraph, noeud) qui donne les voisins à compter
    """
    for graph_name, G in _each_graph(graph):
        no_edges = []
        for node in G.nodes():
            if type(node) == node_type and _count(neighbours(G, node)) == 0:
                no_edges.append(node.NAME)
        if len(no_edges) > 0:
            warnings.warn(f'Le ou les nœuds suivants ont aucun edge: {no_edges}',
                stacklevel=2)

def _check_graph_name_character(graph: gg.GraphFactory, character: str,
                                explanation: str):
    """Refuse un caractère dans le nom d'un graphe

    Args:
        graph (gg.GraphFactory): GraphFactory à vérifier
        character (str): Le caractère interdit
        explanation (str): La fin du message d'erreur

    Raises:
        me.GraphError: Le nom du graphe contient le caractère interdit
    """
    for name in graph.get_graph_name:
        if character in name:
            raise me.GraphError(' '.join((f"Le graphe '{name}' ne \
                peut pas avoir {explanation}").split()))

# Tests -----------------------------------------------------------------------
# On test si on a bien un first et un last node
def debugg_graph_01(graph: gg.GraphFactory):
    # Présence de first et last node
    for graph_name, NODES, EDGES in _each_json_graph(graph):
        TOPNODES = set([int(ID) for ID in NODES]) - \
            set([data['To'] for keys, data in EDGES.items()])
        if len(TOPNODES) > 1:
            warnings.warn(' '.join((f"Attention, plus d'un noeud d'entrée présent.\
                Les inputs vont être acheminées à ces deux nodes: \
                {TOPNODES}").split()), stacklevel=2)
        elif len(TOPNODES) == 0:
            raise me.NodeError("Aucun nœud d'entrée présent dans le graphe")
        LASTNODES = set([int(ID) for ID in NODES]) - \
                    set([data['From'] for keys, data in EDGES.items()])
        if len(LASTNODES) == 0:
            warnings.warn(' '.join((f"Attention, aucune noeud de fin présent. \
                La quantité de carbone présente dans le système sera calculée \
                seulement sur des noeuds de demi-vie ou de recyclage").split()),
                stacklevel=2)

# On test si la somme des edges sortant de chaque node est égale à 100%
def debugg_graph_02(graph: gg.GraphFactory, overflow: dict[str, list[str]]):
    # total des Edges
    for graph_name, G2, node in _each_node(graph):
        # On regarde d'abord combien de valeur il y a dans le pense-bête
        proportion_length = []
        for successors in G2.get_successors(node):
            proportion_length.append(len(G2.get_edge_proportions(node, successors)))

        # On regarde si on respecte le 100%
        if len(proportion_length) > 0:
            for timestep in range(max(proportion_length)):
                total = 0
                for successors in G2.get_successors(node):
                    if successors.NAME in overflow[graph_name]:
                        continue
                    total += node._get_value_time(G2.get_edge_proportions(node, successors), timestep)
                total = round(total, 10)
                if total != 1:
                    raise me.EdgeError(f"La somme des liens sortants de \
                        {node.NAME} n'est pas égale à 100% ({total * 100} au temps {timestep})")

# On test si une node reçoit des edges avec et sans overflow
def debugg_graph_03(graph: gg.GraphFactory):
    # Test de overflow
    for graph_name, NODES, EDGES in _each_json_graph(graph):
        for nodeID in NODES:
            overflow = []
            for key, values in EDGES.items():
                if values.get('To') == int(nodeID):
                    overflow.append(values.get('Overflow'))
            if all(i == overflow[0] for i in overflow) == False:
                raise me.EdgeError(f"Le noeud {NODES[nodeID]['Name']} \
                    reçoit des edges avec et sans overflow")

# On test si une node overflow a un edge sortant normal
def debugg_graph_03_1(graph: gg.GraphFactory, overflow: dict[str, list[str]]):
    # Test de overflow
    for graph_name, NODES, EDGES in _each_json_graph(graph):
        for edgesID, value in EDGES.items():
            if NODES[str(value["From"])]['Name'] in overflow[graph_name]:
                if value['Overflow'] == False:
                    raise me.EdgeError(f"Le noeud {NODES[str(value['From'])]['Name']} \
                        reçoit des liens avec débordement et a des liens sortants \
                        sans débordement. La comptabilisation des flux sera erronée.")

# On test si la quantité total en input est égale à la quantité total dans le système
def debugg_graph_04(graph: gg.GraphFactory, overflow: dict[str, list[str]]):
    MOSIR_TOLERENCE = 0.0001
    time = 15
    # total input versus in system
    for name, G4 in _each_graph(graph):

        # On ajoute les inputs
        for node in G4.nodes():
            if type(node) == gg.TopNode:
                node.time = list(range(time + 1))
                node.quantities = [100] * (time + 1)
            elif type(node) == gg.DecayNode:
                node.alpha = 1
                node.beta = 50

        carbon_input = 0
        for timestep in range(time + 1):
            in_system = 0
            for node in G4.nodes():
                if type(node) == gg.ProportionNode:
                    continue
                if type(node) == gg.TopNode:
                    carbon_input += node.get_flux_out(G4, timestep)
                elif node.NAME in overflow[name]:
                    continue
                elif type(node) == gg.PoolNode or type(node) == gg.DecayNode or \
                    type(node) == gg.RecyclingNode:
                    with warnings.catch_warnings():
                        warnings.simplefilter('ignore')
                        in_system += node.get_stock(G4, timestep)
            if in_system > carbon_input - MOSIR_TOLERENCE and in_system < carbon_input + MOSIR_TOLERENCE :
                continue
            else:
                raise me.QuantityError(' '.join((f"Graphe : {G4.get_name} La \
                    quantité totale en intrant ({carbon_input}) au temps \
                    {timestep} n'est pas égale au total présent dans le \
                    système ({in_system})").split()))

# On regarde si le graphe a des edges qui forme une boucle entre des ProportionNode
def debugg_graph_05(graph: gg.GraphFactory):
    for name, G5, node in _each_node(graph, gg.ProportionNode):
        #visited = set()
        first_node = [node.NAME]
        stack = [(node, [])]
        loop_id = 0
        while stack:
            current_node, path = stack.pop()
            loop_id += 1
            if current_node.NAME in first_node and loop_id != 1:
                path_name = [node.NAME for node in path]
                raise me.RecursionNode(' '.join((f"Une boucle possible \
                    existe entre plusieurs noeuds transitoires : \
                    {path_name + [current_node.NAME]}").split()))
            #visited.add(current_node.NAME)
            successors = G5.get_successors(current_node)
            for successor in successors:
                if type(successor) == gg.ProportionNode:
                    stack.append((successor, path + [current_node]))

# Vérifier si le gg.GraphFactory n'a pas deux graphe avec le même nom
def debugg_graph_06(graph: gg.GraphFactory):
    graph_name = []
    for name in graph.get_graph_name:
        if name in graph_name:
            raise me.GraphError(' '.join((f"Le graphe {name} est présent plus \
                d'une fois dans le fichier JSON").split()))
        else:
            graph_name.append(name)

# Vérifier si des TopNode ont aucun edges sortant
def debugg_graph_07(graph: gg.GraphFactory):
    _warn_nodes_without_edge(graph, gg.TopNode,
        lambda G, node: G.get_successors(node))

# Vérifier si des PoolNode ont aucun edges entrant
def debugg_graph_08(graph: gg.GraphFactory):
    _warn_nodes_without_edge(graph, gg.PoolNode,
        lambda G, node: G.get_predecessors(node))

# Vérifier que les graphes contiennent au moins deux nodes
def debugg_graph_09(graph: gg.GraphFactory):
    for name, G9 in _each_graph(graph):
        if len(G9.nodes()) < 2:
            raise me.GraphError(' '.join((f"Le graphe {name} ne contient pas \
                assez de nodes. Un minimum de 2 nodes est requis").split()))

# Vérifier qu'il y a au moins un edge dans le graph
def debugg_graph_10(graph: gg.GraphFactory):
    for name, G10 in _each_graph(graph):
        if len(G10.edges()) == 0:
            raise me.GraphError(' '.join((f"Le graphe {name} ne contient pas \
                d'edges. Un minimum de 1 edge est requis").split()))

# Véfirier que les gg.RecyclingNode ont toujours un edge qui rentre et un qui sort
def debugg_graph_11(graph: gg.GraphFactory):
    _check_node_is_connected_both_ways(graph, gg.RecyclingNode)

# Vérifier si les ProportionNode ont toujours un edge qui rentre et un qui sort
def debugg_graph_12(graph: gg.GraphFactory):
    _check_node_is_connected_both_ways(graph, gg.ProportionNode)

# Vérifier qu'aucune RecyclingNode ou DecayNode n'a un edge qui va vers une
    # node de type TopNode
def debugg_graph_13(graph: gg.GraphFactory):
    for name, G13, node in _each_node(graph, (gg.DecayNode, gg.RecyclingNode)):
        for successor in G13.get_successors(node):
            if type(successor) == gg.TopNode:
                raise me.NodeError(' '.join((f"La node {node.NAME} ne \
                    peut pas avoir un edge qui va vers une node \
                    de type TopNode").split()))

def is_gas_present_in_name(string: str):
    """Fonction qui regarde si une chaines de charactère contient un des gaz. Le gaz
    doit être isolé des autres charactères par des espaces (ex: 'CO2 emission'
    est valide et non 'CO2_emissions') et en majuscule (ex: CO2 et non co2 ou Co2)
    Les gaz possible sont CO2, CH4, CO et N2O

    Args:
        string (str): Chaine de charactère à vérifier

    Returns:
        bool: True si un des gaz est présent en majuscule et isolé et False sinon
    """
    gas = ['CO2', 'CH4', 'CO', 'N2O']
    string_split = string.split(" ")
    for word in string_split:
        if word.upper() in gas:
            if word != word.upper():
                warnings.warn(' '.join((f"{word} doit être en majuscule pour \
                    calculer le radiatif").split()), stacklevel=2)
    gas_wrongly_written = ['Co2', 'co2', 'cO2', 'ch4', 'cH4', \
                           'Ch4', 'n2o', 'N2o', 'n2O']
    for gas in gas_wrongly_written:
        if gas in string:
            warnings.warn(' '.join((f"Un gaz semble avoir été écrit dans le nom \
                de la node: '{gas}' dans '{string}'. Pour que le reporting \
                en radiatif fonctionne correctement, le gaz doit être écrit \
                en majuscule et isolé des autres charactères par des espaces \
                (ex: 'CO2 emission' est valide et non 'CO2_emissions')").split()),
                stacklevel=2)

def debugg_graph_14(graph: gg.GraphFactory):
    for name, G14, node in _each_node(graph, gg.PoolNode):
        is_gas_present_in_name(node.NAME)

# Vérifier que les gg.DecayNode ont toujours un edge qui rentre et un qui sort
def debugg_graph_15(graph: gg.GraphFactory):
    _check_node_is_connected_both_ways(graph, gg.DecayNode)

def debugg_graph_16(graph: gg.GraphFactory):
    _check_graph_name_character(graph, " ", "d'espace dans son nom")

def debugg_graph_17(graph: gg.GraphFactory):
    _check_graph_name_character(graph, "~", "le caratère '~' dans son nom")

# Vérifier s'il y a des espaces de trop, pas implémenté pour l'instant
def debugg_graph_18(graph: gg.GraphFactory):
    for name, G18, node in _each_node(graph):
        original_name = node.NAME
        # Supprimer les espaces en début et en fin de chaîne
        stripped_name = original_name.strip()
        # Supprimer les espaces superflus entre les mots
        no_extra_spaces_name = " ".join(stripped_name.split())
        if original_name != no_extra_spaces_name:
            raise me.NodeError(f"Le nœud {original_name} a \
                des espaces vides de trop dans son nom qui n'ont \
                pas été résolus par le générateur de graphe de MoSiR. \
                Veuillez vérifier dans votre Miro ou votre fichier JSON \
                que le nom ne comporte pas d'espace de trop avant, après \
                ou si celui-ci à plus d'un espace entre deux mots.")
