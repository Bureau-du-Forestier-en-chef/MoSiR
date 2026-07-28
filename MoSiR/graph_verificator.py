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

# Main function that holds the tests -------------------------------------------
def main(graph: gg.GraphFactory):
    """Main function that will be connected to the mosir_calculator.py script

    This function holds the tests that will be run on the graph before doing
    the computation. The tests are run per graph, so if several graphs are
    present in the JSON file, the tests will be run for each graph. Hope it
    works

    Args:
        graph (gg.GraphFactory): GraphFactory that holds the graphs to test
    """

    graph_copy = copy.deepcopy(graph)

    # We collect the names of the nodes that have an overflow
    overflow_name = get_overflow_names(graph_copy)

    # We run the tests
    debugg_graph_01(graph_copy)
    debugg_graph_02(graph_copy, overflow=overflow_name)
    debugg_graph_03(graph_copy)
    debugg_graph_03_1(graph_copy, overflow=overflow_name)
    debugg_graph_04(graph_copy, overflow=overflow_name)
    debugg_graph_05(graph_copy)
    debugg_graph_06(graph_copy)
    debugg_graph_07(graph_copy)
    debugg_graph_08(graph_copy)
    # 09 and 10 overlap with graph_generator.py, but stay useful for a graph
    # built otherwise than by GraphFactory
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

# Shared traversals -----------------------------------------------------------
# Every check starts from the same preamble: traverse the graphs of a
# GraphFactory, then their nodes. The generators below write it only once.
# Some checks operate on the original JSON rather than on the built graph,
# because they verify precisely what GraphFactory inferred from it.

def get_overflow_names(graph: gg.GraphFactory) -> dict[str, list[str]]:
    """Collects, per graph, the name of the nodes that receive an overflow link

    The overflowing carbon is not subject to the same rules as the rest:
    several checks need this list to exclude these nodes from the 100% rule
    and from the material accounting.

    Args:
        graph (gg.GraphFactory): GraphFactory to traverse

    Returns:
        dict[str, list[str]]: The names of the overflow nodes, per graph
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
    """Iterates over the original JSON: (graph name, Nodes, Edges)"""
    for graph_name in graph.get_data:
        data = graph.get_data.get(graph_name)
        yield graph_name, data.get('Nodes', {}), data.get('Edges', {})

def _each_graph(graph: gg.GraphFactory):
    """Iterates over the built graphs: (graph name, WPGraph)"""
    for graph_name in graph.get_graph_name:
        yield graph_name, graph.get_graph(graph_name)

def _each_node(graph: gg.GraphFactory, node_types = None):
    """Iterates over the nodes: (graph name, WPGraph, node)

    node_types filters on the exact node type, without taking inheritance
    into account: a DecayNode does not match a ProportionNode filter.

    Args:
        graph (gg.GraphFactory): GraphFactory to traverse
        node_types: A node type, a tuple of types, or None for all
    """
    if node_types is not None and not isinstance(node_types, tuple):
        node_types = (node_types,)
    for graph_name, G in _each_graph(graph):
        for node in G.nodes():
            if node_types is None or type(node) in node_types:
                yield graph_name, G, node

def _count(neighbours) -> int:
    """Counts the neighbours returned by get_successors or get_predecessors"""
    return sum(1 for neighbour in neighbours)

# Declarative checks ----------------------------------------------------------
# Several checks differ only by the targeted node type or by the refused
# character. They share a single implementation here.

def _check_node_is_connected_both_ways(graph: gg.GraphFactory, node_type):
    """An intermediate node must have at least one link on each side

    Args:
        graph (gg.GraphFactory): GraphFactory to check
        node_type: The targeted node type, which also names the message

    Raises:
        me.NodeError: The node has no incoming link or no outgoing link
    """
    for graph_name, G, node in _each_node(graph, node_type):
        if _count(G.get_successors(node)) == 0 or \
            _count(G.get_predecessors(node)) == 0:
            raise me.NodeError(' '.join((f"La node {node.NAME} n'a pas \
                de edges entrant ou sortant. Une node de type {node_type.__name__} \
                ne peut pas être au début ou à la fin d'un graph").split()))

def _warn_nodes_without_edge(graph: gg.GraphFactory, node_type, neighbours):
    """Warns when nodes of a type have no link on the expected side

    Args:
        graph (gg.GraphFactory): GraphFactory to check
        node_type: The targeted node type
        neighbours: Function (WPGraph, node) that gives the neighbours to count
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
    """Refuses a character in a graph name

    Args:
        graph (gg.GraphFactory): GraphFactory to check
        character (str): The forbidden character
        explanation (str): The end of the error message

    Raises:
        me.GraphError: The graph name contains the forbidden character
    """
    for name in graph.get_graph_name:
        if character in name:
            raise me.GraphError(' '.join((f"Le graphe '{name}' ne \
                peut pas avoir {explanation}").split()))

# Tests -----------------------------------------------------------------------
# We test whether we have a first and a last node
def debugg_graph_01(graph: gg.GraphFactory):
    # Presence of first and last node
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

# We test whether the sum of the edges leaving each node equals 100%
def debugg_graph_02(graph: gg.GraphFactory, overflow: dict[str, list[str]]):
    # total of the Edges
    for graph_name, G2, node in _each_node(graph):
        # We first look at how many values there are in the reminder
        proportion_length = []
        for successors in G2.get_successors(node):
            proportion_length.append(len(G2.get_edge_proportions(node, successors)))

        # We check whether we respect the 100%
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

# We test whether a node receives edges with and without overflow
def debugg_graph_03(graph: gg.GraphFactory):
    # Overflow test
    for graph_name, NODES, EDGES in _each_json_graph(graph):
        for nodeID in NODES:
            overflow = []
            for key, values in EDGES.items():
                if values.get('To') == int(nodeID):
                    overflow.append(values.get('Overflow'))
            if all(i == overflow[0] for i in overflow) == False:
                raise me.EdgeError(f"Le noeud {NODES[nodeID]['Name']} \
                    reçoit des edges avec et sans overflow")

# We test whether an overflow node has a normal outgoing edge
def debugg_graph_03_1(graph: gg.GraphFactory, overflow: dict[str, list[str]]):
    # Overflow test
    for graph_name, NODES, EDGES in _each_json_graph(graph):
        for edgesID, value in EDGES.items():
            if NODES[str(value["From"])]['Name'] in overflow[graph_name]:
                if value['Overflow'] == False:
                    raise me.EdgeError(f"Le noeud {NODES[str(value['From'])]['Name']} \
                        reçoit des liens avec débordement et a des liens sortants \
                        sans débordement. La comptabilisation des flux sera erronée.")

# We test whether the total input quantity equals the total quantity in the system
def debugg_graph_04(graph: gg.GraphFactory, overflow: dict[str, list[str]]):
    MOSIR_TOLERENCE = 0.0001
    time = 15
    # total input versus in system
    for name, G4 in _each_graph(graph):

        # We add the inputs
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

# We check whether the graph has edges forming a loop between ProportionNode
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

# Check whether the gg.GraphFactory does not have two graphs with the same name
def debugg_graph_06(graph: gg.GraphFactory):
    graph_name = []
    for name in graph.get_graph_name:
        if name in graph_name:
            raise me.GraphError(' '.join((f"Le graphe {name} est présent plus \
                d'une fois dans le fichier JSON").split()))
        else:
            graph_name.append(name)

# Check whether some TopNode have no outgoing edge
def debugg_graph_07(graph: gg.GraphFactory):
    _warn_nodes_without_edge(graph, gg.TopNode,
        lambda G, node: G.get_successors(node))

# Check whether some PoolNode have no incoming edge
def debugg_graph_08(graph: gg.GraphFactory):
    _warn_nodes_without_edge(graph, gg.PoolNode,
        lambda G, node: G.get_predecessors(node))

# Check that the graphs contain at least two nodes
def debugg_graph_09(graph: gg.GraphFactory):
    for name, G9 in _each_graph(graph):
        if len(G9.nodes()) < 2:
            raise me.GraphError(' '.join((f"Le graphe {name} ne contient pas \
                assez de nodes. Un minimum de 2 nodes est requis").split()))

# Check that there is at least one edge in the graph
def debugg_graph_10(graph: gg.GraphFactory):
    for name, G10 in _each_graph(graph):
        if len(G10.edges()) == 0:
            raise me.GraphError(' '.join((f"Le graphe {name} ne contient pas \
                d'edges. Un minimum de 1 edge est requis").split()))

# Check that the gg.RecyclingNode always have an incoming and an outgoing edge
def debugg_graph_11(graph: gg.GraphFactory):
    _check_node_is_connected_both_ways(graph, gg.RecyclingNode)

# Check that the ProportionNode always have an incoming and an outgoing edge
def debugg_graph_12(graph: gg.GraphFactory):
    _check_node_is_connected_both_ways(graph, gg.ProportionNode)

# Check that no RecyclingNode or DecayNode has an edge going to a
    # TopNode-type node
def debugg_graph_13(graph: gg.GraphFactory):
    for name, G13, node in _each_node(graph, (gg.DecayNode, gg.RecyclingNode)):
        for successor in G13.get_successors(node):
            if type(successor) == gg.TopNode:
                raise me.NodeError(' '.join((f"La node {node.NAME} ne \
                    peut pas avoir un edge qui va vers une node \
                    de type TopNode").split()))

def is_gas_present_in_name(string: str):
    """Function that checks whether a string contains one of the gases. The
    gas must be isolated from the other characters by spaces (e.g. 'CO2
    emission' is valid and not 'CO2_emissions') and in uppercase (e.g. CO2
    and not co2 or Co2). The possible gases are CO2, CH4, CO and N2O

    Args:
        string (str): String to check

    Returns:
        bool: True if one of the gases is present in uppercase and isolated,
        False otherwise
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

# Check that the gg.DecayNode always have an incoming and an outgoing edge
def debugg_graph_15(graph: gg.GraphFactory):
    _check_node_is_connected_both_ways(graph, gg.DecayNode)

def debugg_graph_16(graph: gg.GraphFactory):
    _check_graph_name_character(graph, " ", "d'espace dans son nom")

def debugg_graph_17(graph: gg.GraphFactory):
    _check_graph_name_character(graph, "~", "le caratère '~' dans son nom")

# Check whether there are extra spaces, not implemented for now
def debugg_graph_18(graph: gg.GraphFactory):
    for name, G18, node in _each_node(graph):
        original_name = node.NAME
        # Remove leading and trailing spaces
        stripped_name = original_name.strip()
        # Remove superfluous spaces between words
        no_extra_spaces_name = " ".join(stripped_name.split())
        if original_name != no_extra_spaces_name:
            raise me.NodeError(f"Le nœud {original_name} a \
                des espaces vides de trop dans son nom qui n'ont \
                pas été résolus par le générateur de graphe de MoSiR. \
                Veuillez vérifier dans votre Miro ou votre fichier JSON \
                que le nom ne comporte pas d'espace de trop avant, après \
                ou si celui-ci à plus d'un espace entre deux mots.")
