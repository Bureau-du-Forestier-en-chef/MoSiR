# -*- coding: UTF-8 -*-
"""
Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""

import sys
sys.path.append('../MoSiR')

import pytest
import warnings
import argparse as ap 
from MoSiR import import_info as ip
from MoSiR import reporting_info as rp
from MoSiR import graph_generator as gg
from MoSiR import mosir_exceptions as me

## 
# Graph = gg.GraphFactory('D:/MoSiR/tests/Microtests/Produitsdubois_V2/Graphs.json')
# Import = ip.ImportData('D:/MoSiR/tests/Microtests/Produitsdubois_V2/inputs.json')
# Report = rp.ReportData('D:/MoSiR/tests/Microtests/Produitsdubois_V2/report.json')
#
# ip.add_import(Graph, Import)
# rp.output_creation(Graph, Import, Report, "D:/MoSiR/tests/Microtests/Produitsdubois_V2")

#@pytest.mark.xfail
#def test_fail_2():
#    assert 1 == 2

# Pour launch un graph en debug
def main(raw_args = None):
    parser = ap.ArgumentParser(
        description = 'Process graph for debugg')
    parser.add_argument('--GraphFileDirectory', '-G',
        dest = 'G',                
        required = True,
        help = 'Localisation (racine) du fichier contenant le JSON du graph') 
    args = parser.parse_args(raw_args)
    graph = gg.GraphFactory(args.G)

    overflow_name = []
    for graph_name in graph.get_data:
        G0 = graph.get_data.get(graph_name)
        NODES = G0.get('Nodes', {})
        EDGES = G0.get('Edges', {})
        overflow_id = []
        for edges_id in EDGES:
            for key, values in EDGES.items():
                if values.get('Overflow') == 1 and values.get('To') not in overflow_id:
                    overflow_id.append(values.get('To'))
        for key, values in NODES.items():
            if int(key) in overflow_id:
                overflow_name.append(values.get('Name'))
    
    test_graph_01(graph)
    test_graph_02(graph, overflow= overflow_name)
    test_graph_03(graph)
    test_graph_04(graph, overflow= overflow_name)


# Test de l'import -----------------------------------------------------------
def test_graph_01(graph: gg.GraphFactory):
    # Présence de first et last node
    for graph_name in graph.get_data:
        G1 = graph.get_data.get(graph_name)
        NODES = G1.get('Nodes', {})
        EDGES = G1.get('Edges', {})
        TOPNODES = set([int(ID) for ID in NODES]) - \
                    set([data['To'] for keys, data in EDGES.items()])
        if len(TOPNODES) > 1:
            warnings.warn(f"Attention, plus d'une TopNode présente.\
                Les inputs vont être acheminés à ces deux nodes: \
                {TOPNODES}", stacklevel = 2)  
        LASTNODES = set([int(ID) for ID in NODES]) - \
                    set([data['From'] for keys, data in EDGES.items()])
        if len(LASTNODES) == 0:
            warnings.warn(f"Attention, aucune PoolNode présente. La quantité \
                de carbone présente dans le système sera calculé seulement sur \
                des nodes de demi-vie ou de recyclage", stacklevel = 2)   

def test_graph_02(graph: gg.GraphFactory, overflow: list[str]):
    MOSIR_TOLERENCE = 0.0001
    # total des Edges 
    for name in graph.get_graph_name:
        G2 = graph.get_graph(name)
        no_edges = []
        for node in G2.nodes():
            if node.NAME == 'Land application':
                pass
            total = 0
            for successors in G2.get_successors(node):
                if successors.NAME in overflow:
                    continue
                total += node._get_value_time(G2.get_edge_proportions(node, successors), 0)
            if total == 0:
                no_edges.append(node.NAME)
            elif abs(total - 1) > MOSIR_TOLERENCE:
                raise me.EdgeError(f"La somme des edges sortant de {node.NAME} n'est pas égale à 100%") 
        if len(no_edges) > 0:   
            warnings.warn(f'Le ou les noeuds suivants ont aucun edge sortant: {no_edges}',
                          stacklevel = 2)

def test_graph_03(graph: gg.GraphFactory):
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
                raise me.EdgeError(f"La node {NODES[str(nodeID)].get('Name')} reçoit \
                    des edges avec et sans overflow")

def test_graph_04(graph: gg.GraphFactory, overflow: list[str]):
    MOSIR_TOLERENCE = 0.0001
    time = 150
    imp = ip.ImportData("D:/MoSiR/tests/Microtests/in_equal_out/inputs.json")
    ip.add_import(graph, imp)
    # total input versus in system 
    for name in graph.get_graph_name:
        G4 = graph.get_graph(name)
        carbon_input = 0
        for timestep in range(time + 1):
            in_system = 0
            for node in G4.nodes():
                if type(node) == gg.TopNode:
                    carbon_input += node.get_flux_out(G4, timestep)
                elif node.NAME in overflow:
                    continue
                elif type(node) == gg.PoolNode or type(node) == gg.DecayNode or \
                    type(node) == gg.RecyclingNode:
                    with warnings.catch_warnings():
                        warnings.simplefilter('ignore')
                        in_system += node.get_stock(G4, timestep)
            if carbon_input > in_system - MOSIR_TOLERENCE and carbon_input < in_system + MOSIR_TOLERENCE :
                continue
            else:
                raise me.QuantityError(f"Graph : {G4.get_name} La quantité total \
                    en input ({carbon_input}) au temps {timestep} n'est pas égale au total \
                    présent dans le système ({in_system})")

if __name__ == '__main__':
    main()
    print('Tests completed')