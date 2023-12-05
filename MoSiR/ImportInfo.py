# -*- coding: UTF-8 -*-
"""
Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""
import json

# Json -----------------------------------------------------------------------

class ImportData():
    def __init__(self, directory):
        with open(directory, "r") as f: 
            self._DATA = json.load(f)
            
    def get_unit(self):
        return self._DATA['Unit']
    
    def get_data(self, GraphName: str):
        return self._DATA['Inputs'][GraphName]
    
    def get_nodes_name(self, GraphName: str):
        return [i for i in self.get_data(GraphName)]
    
    def get_node_input(self, GraphName: str, NodeName):
        intrant = self.get_data(GraphName)[NodeName]
        time = []
        quantities = []
        for temps, value in intrant.items():
            if value == 0:
                continue
            time.append(int(temps)) 
            quantities.append(value)
        return time, quantities

def add_import(graph, import_data):
    for graph_name in graph.get_graph_name:
        G = graph.get_graph(graph_name)
        for node in G.nodes():
            if node.NAME in import_data.get_nodes_name(graph_name):
                time = import_data.get_node_input(graph_name, node.NAME)[0]
                quantities = import_data.get_node_input(graph_name, node.NAME)[1]
                node.time = time
                node.quantities = quantities

# Txt ------------------------------------------------------------------------
""" 
class EditTxtImport():
    def __init__(self, directory):
        self._DIR = directory
        self._INPUT = []
        self._UNIT = []
        with open(directory, 'r') as txt:
            Saved = False
            Bracket = 0
            # Carbon input
            for line in txt.readlines():
                if line.startswith('#'):
                    continue
                if line.startswith('Unit:'):
                    Unit = line.strip().split(':', 1)
                    self._UNIT.append(Unit[1])
                if line.startswith('CarbonInputs'):
                    Saved = True
                    Parts = line.split('{', 1)
                    if len(Parts) > 1:
                        self._INPUT.append('{' + Parts[1].strip())
                elif Saved:
                    self._INPUT.append(line.strip())
                if Saved and '{' in line:
                    Bracket += 1
                elif Saved and '}' in line:
                    Bracket -= 1
                if Bracket == 0:
                    Saved = False
    def GetInput(self):
        return eval(''.join(self._INPUT))
    def get_unit(self):
        Unit = self._UNIT[0].strip().lower()
        assert Unit in ['kgc', 'tc']
        return Unit
    
Test01 = EditTxtImport('Import.txt')               
Test01.get_unit()
Test01.GetInput()
"""