# -*- coding: UTF-8 -*-
"""
Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""
import json
from MoSiR import gamma_function as gf
from MoSiR import mosir_exceptions as me

# Json -----------------------------------------------------------------------

class ImportData():
    def __init__(self, directory):
        with open(directory, "r") as f: 
            self._DATA = json.load(f)
            if not self._DATA['Inputs']:
                raise me.QuantityError("Il n'y a pas de valeurs de flux \
                    d'enregistré comme intrants dans le graphe. Veuillez \
                    cliquer sur 'Enregistrer la période' une fois qu'une \
                    valeur a été inscrite. Sinon, modifier manuellement votre \
                    fichier JSON pour y inscrire des valeurs de flux.")
            
    def get_unit(self):
        return self._DATA['Unit']
    
    def get_flux_data(self, graph_name: str):
        return self._DATA['Inputs'][graph_name]
    
    def get_decay_data(self, graph_name: str):
        return self._DATA['Decay'][graph_name]
    
    def get_flux_name(self, graph_name: str):
        return [i for i in self.get_flux_data(graph_name)]
    
    def get_decay_name(self, graph_name: str):
        try:
            decay_name = [i for i in self.get_decay_data(graph_name)]
        except:
            decay_name = []
        return decay_name 
    
    def get_flux_input(self, graph_name: str, node_name: str):
        intrant = self.get_flux_data(graph_name)[node_name]
        time = []
        quantities = []
        for temps, value in intrant.items():
            if value == 0:
                continue
            time.append(int(temps)) 
            quantities.append(value)
        return time, quantities
    
    def get_decay_input(self, graph_name: str, node_name: str):
        intrant = self.get_decay_data(graph_name)[node_name]
        if list(intrant.keys())[0] == "Custom":
            alpha_value = intrant['Custom']['alpha']
            beta_value = intrant['Custom']['beta']
        elif list(intrant.keys())[0] in ['Exponential', 'Gamma', 'Chi-square']:
            decay_type = list(intrant.keys())[0]
            halflife_value = intrant[decay_type]
            alpha_value, beta_value = gf.DecayTypeOptimizer(
                node_name, decay_type, halflife_value).find_param()
        return alpha_value, beta_value

def add_import(graph, import_data):
    for graph_name in graph.get_graph_name:
        G = graph.get_graph(graph_name)
        for node in G.nodes():
            if node.NAME in import_data.get_flux_name(graph_name):
                time, quantities = import_data.get_flux_input(graph_name, node.NAME)
                node.time = time
                node.quantities = quantities
            if node.NAME in import_data.get_decay_name(graph_name):
                alpha, beta = import_data.get_decay_input(graph_name, node.NAME)
                node.alpha = alpha
                node.beta = beta