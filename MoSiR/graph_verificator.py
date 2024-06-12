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
    overflow_name = {}
    for graph_name in graph_copy.get_data:
        G0 = graph_copy.get_data.get(graph_name)
        NODES = G0.get('Nodes', {})
        EDGES = G0.get('Edges', {})
        overflow_id = []
        overflow_name[graph_name] = []
        for edges_id in EDGES:
            for key, values in EDGES.items():
                if values.get('Overflow') == 1 and values.get('To') not in overflow_id:
                    overflow_id.append(values.get('To'))
        for key, values in NODES.items():
            if int(key) in overflow_id:
                overflow_name[graph_name].append(values.get('Name'))

    # On effectue les tests
    debugg_graph_01(graph_copy)
    debugg_graph_02(graph_copy, overflow=overflow_name)
    debugg_graph_03(graph_copy)
    debugg_graph_04(graph_copy, overflow=overflow_name)
    debugg_graph_05(graph_copy)
    debugg_graph_06(graph_copy)
    debugg_graph_07(graph_copy)
    debugg_graph_08(graph_copy)
    #debugg_graph_09(graph) Executé à même graph_generator.py
    #debugg_graph_10(graph) Executé à même graph_generator.py
    debugg_graph_11(graph_copy)
    debugg_graph_12(graph_copy)
    debugg_graph_13(graph_copy)
    debugg_graph_14(graph_copy)
    debugg_graph_15(graph_copy)
    debugg_graph_16(graph_copy)
    debugg_graph_17(graph_copy)

# Tests -----------------------------------------------------------------------
# On test si on a bien un first et un last node
def debugg_graph_01(graph: gg.GraphFactory):
    # Présence de first et last node
    for graph_name in graph.get_data:
        G1 = graph.get_data.get(graph_name)
        NODES = G1.get('Nodes', {})
        EDGES = G1.get('Edges', {})
        TOPNODES = set([int(ID) for ID in NODES]) - \
            set([data['To'] for keys, data in EDGES.items()])
        if len(TOPNODES) > 1:
            warnings.warn(' '.join((f"Attention, plus d'une TopNode présente.\
                Les inputs vont être acheminés à ces deux nodes: \
                {TOPNODES}").split()), stacklevel=2)  
        elif len(TOPNODES) == 0:
            raise me.NodeError("Aucune TopNode présente dans le graph")
        LASTNODES = set([int(ID) for ID in NODES]) - \
                    set([data['From'] for keys, data in EDGES.items()])
        if len(LASTNODES) == 0:
            warnings.warn(' '.join((f"Attention, aucune PoolNode présente. \
                La quantité de carbone présente dans le système sera calculé \
                seulement sur des nodes de demi-vie ou de recyclage").split()), 
                stacklevel=2)  

# On test si la somme des edges sortant de chaque node est égale à 100%
def debugg_graph_02(graph: gg.GraphFactory, overflow: dict[str, list[str]]):
    MOSIR_TOLERENCE = 0.0001
    # total des Edges 
    for graph_name in graph.get_graph_name:
        G2 = graph.get_graph(graph_name)
        no_edges = []
        for node in G2.nodes():
            total = 0
            for successors in G2.get_successors(node):
                if successors.NAME in overflow[graph_name]:
                    continue
                total += node._get_value_time(G2.get_edge_proportions(node, successors), 0)
            if total == 0:
                no_edges.append(node.NAME)
            elif abs(total - 1) > MOSIR_TOLERENCE:
                raise me.EdgeError(' '.join((f"La somme des edges sortant de \
                    {node.NAME} n'est pas égale à 100% ({total * 100})").split())) 
        if len(no_edges) > 0:   
            warnings.warn(f'Le ou les noeuds suivants ont aucun edge sortant: {no_edges}',
                stacklevel=2)

# On test si une node reçoit des edges avec et sans overflow
def debugg_graph_03(graph: gg.GraphFactory):
    # Test de overflow
    for graph_name in graph.get_data:
        G3 = graph.get_data.get(graph_name)
        NODES = G3.get('Nodes', {})
        EDGES = G3.get('Edges', {})
        for nodeID in NODES:
            overflow = []
            for key, values in EDGES.items():
                if values.get('To') == int(nodeID):
                    overflow.append(values.get('Overflow'))
            if all(i == overflow[0] for i in overflow) == False:
                raise me.EdgeError(' '.join((f"La node \
                    {NODES[str(nodeID)].get('Name')} reçoit \
                    des edges avec et sans overflow").split()))

# On test si la quantité total en input est égale à la quantité total dans le système
def debugg_graph_04(graph: gg.GraphFactory, overflow: list[str]):
    MOSIR_TOLERENCE = 0.0001
    time = 15
    # total input versus in system 
    for name in graph.get_graph_name:
        G4 = graph.get_graph(name)

        # On ajoute les inputs
        for node in G4.nodes():
            if type(node) == gg.TopNode:
                node.time = list(range(time + 1))
                node.quantities = [1] * (time + 1)
            elif type(node) == gg.DecayNode:
                node.alpha = 1
                node.beta = 7.21347398

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
            if carbon_input > in_system - MOSIR_TOLERENCE and carbon_input < in_system + MOSIR_TOLERENCE :
                continue
            else:
                raise me.QuantityError(' '.join((f"Graphe : {G4.get_name} La \
                    quantité total en input ({carbon_input}) au temps \
                    {timestep} n'est pas égale au total présent dans le \
                    système ({in_system})").split()))

# On regarde si le graphe a des edges qui forme une boucle entre des ProportionNode
def debugg_graph_05(graph: gg.GraphFactory):
    for name in graph.get_graph_name:
        G5 = graph.get_graph(name)
        for node in G5.nodes():
            if type(node) == gg.ProportionNode:
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
                            existe entre plusieurs ProportionNode : \
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
    for name in graph.get_graph_name:
        G7 = graph.get_graph(name)
        no_edges = []
        for node in G7.nodes():
            if type(node) == gg.TopNode:
                num_node = 0
                for successors in G7.get_successors(node):
                    num_node += 1
                if num_node == 0:
                    no_edges.append(node.NAME)
        if len(no_edges) > 0:
            warnings.warn(f'Le ou les noeuds suivants ont aucun edge: {no_edges}',
                stacklevel=2)

# Vérifier si des PoolNode ont aucun edges entrant
def debugg_graph_08(graph: gg.GraphFactory):
    for name in graph.get_graph_name:
        G8 = graph.get_graph(name)
        no_edges = []
        for node in G8.nodes():
            if type(node) == gg.PoolNode:
                num_node = 0
                for predecessors in G8.get_predecessors(node):
                    num_node += 1
                if num_node == 0:
                    no_edges.append(node.NAME)
        if len(no_edges) > 0:
            warnings.warn(f'Le ou les noeuds suivants ont aucun edge: {no_edges}',
                stacklevel=2)

"""# Vérifier que les graphes contiennent au moins une node
def debugg_graph_09(graph: gg.GraphFactory):
    for name in graph.get_graph_name:
        G9 = graph.get_graph(name)
        if len(G9.nodes()) < 2:
            raise me.GraphError(' '.join((f"Le graphe {name} ne contient pas \
                assez de nodes. Un minimum de 2 nodes est requis").split()))

# Vérifier qu'il y a au moins un edge dans le graph
def debugg_graph_10(graph: gg.GraphFactory):
    for name in graph.get_graph_name:
        G10 = graph.get_graph(name)
        if len(G10.edges()) == 0:
            raise me.GraphError(' '.join((f"Le graphe {name} ne contient pas \
                d'edges. Un minimum de 1 edge est requis").split())) """

# Véfirier que les gg.RecyclingNode ont toujours un edge qui rentre et un qui sort
def debugg_graph_11(graph: gg.GraphFactory):
    for name in graph.get_graph_name:
        G11 = graph.get_graph(name)
        for node in G11.nodes():
            if type(node) == gg.RecyclingNode:
                num_successors = 0
                num_predecessors = 0
                for successors in G11.get_successors(node):
                    num_successors += 1
                for predecessors in G11.get_predecessors(node):
                    num_predecessors += 1
                if num_successors == 0 or num_predecessors == 0:
                    raise me.NodeError(' '.join((f"La node {node.NAME} n'a pas \
                        de edges entrant ou sortant. Une node de type RecyclingNode \
                        ne peut pas être au début ou à la fin d'un graph").split()))

# Vérifier si les ProportionNode ont toujours un edge qui rentre et un qui sort
def debugg_graph_12(graph: gg.GraphFactory):
    for name in graph.get_graph_name:
        G12 = graph.get_graph(name)
        for node in G12.nodes():
            if type(node) == gg.ProportionNode:
                num_successors = 0
                num_predecessors = 0
                for successors in G12.get_successors(node):
                    num_successors += 1
                for predecessors in G12.get_predecessors(node):
                    num_predecessors += 1
                if num_successors == 0 or num_predecessors == 0:
                    raise me.NodeError(' '.join((f"La node {node.NAME} n'a pas \
                        de edges entrant ou sortant. Une node de type ProportionNode \
                        ne peut pas être au début ou à la fin d'un graph").split()))

# Vérifier qu'aucune RecyclingNode ou DecayNode n'a un edge qui va vers une
    # node de type TopNode
def debugg_graph_13(graph: gg.GraphFactory):
    for name in graph.get_graph_name:
        G13 = graph.get_graph(name)
        for node in G13.nodes():
            if type(node) == gg.DecayNode or type(node) == gg.RecyclingNode:
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
    for name in graph.get_graph_name:
        G14 = graph.get_graph(name)
        for node in G14.nodes():
            if type(node) == gg.PoolNode:
                is_gas_present_in_name(node.NAME)

# Vérifier que les gg.DecayNode ont toujours un edge qui rentre et un qui sort
def debugg_graph_15(graph: gg.GraphFactory):
    for name in graph.get_graph_name:
        G15 = graph.get_graph(name)
        for node in G15.nodes():
            if type(node) == gg.DecayNode:
                num_successors = 0
                num_predecessors = 0
                for successors in G15.get_successors(node):
                    num_successors += 1
                for predecessors in G15.get_predecessors(node):
                    num_predecessors += 1
                if num_successors == 0 or num_predecessors == 0:
                    raise me.NodeError(' '.join((f"La node {node.NAME} n'a pas \
                        de edges entrant ou sortant. Une node de type DecayNode \
                        ne peut pas être au début ou à la fin d'un graph").split())) 
                
def debugg_graph_16(graph: gg.GraphFactory):
    for name in graph.get_graph_name:
        if " " in name:
            raise me.GraphError(' '.join((f"Le graphe '{name}' ne \
                peut pas avoir d'espace dans son nom").split())) 
        
def debugg_graph_17(graph: gg.GraphFactory):
    for name in graph.get_graph_name:
        if "~" in name:
            raise me.GraphError(' '.join((f"Le graphe '{name}' ne \
                peut pas avoir le caratère '~' dans son nom").split())) 
