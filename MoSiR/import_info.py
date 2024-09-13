"""
Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""
import json
from MoSiR import (
    gamma_function as gf,
    graph_generator as gg,
    mosir_exceptions as me)

# Json -----------------------------------------------------------------------

class ImportData():
    def __init__(self, directory: str=None, Dict: dict=None):
        if directory is None and Dict is not None:
            self._DATA = Dict
        if directory is not None and Dict is None:
            try:
                with open(directory, "r") as f: 
                    self._DATA = json.load(f)  
            except:
                raise me.InvalidOption(f"Le chemin {directory}, n'est pas \
                    valide. Impossible d'ouvrir les données d'import")
        if directory is None and Dict is None:
            raise me.InvalidOption("Un directory ou dictionnaire doit être \
                spécifié")
        if not self._DATA['Inputs']:
            raise me.QuantityError("Il n'y a pas de valeurs de flux \
                d'enregistré comme intrants dans le graphe. Veuillez \
                cliquer sur 'Enregistrer la période' une fois qu'une \
                valeur a été inscrite. Sinon, modifier manuellement votre \
                fichier JSON pour y inscrire des valeurs de flux.")
            
    def get_unit(self):
        unit = self._DATA['Unit']
        if unit not in ['kgC', 'tC']:
            raise me.InvalidOption(f"{unit} n'est pas une unité valide. Les \
                options possibles sont 'kgC' ou 'tC'")
        return unit
    
    def get_flux_data(self, graph_name: str) -> dict:
        try:
            data = self._DATA['Inputs'][graph_name]
        except:
            raise me.InvalidOption(f"{graph_name} n'est pas un nom de graphe \
                présent dans le fichier d'inputs")
        if len(data) == 0:
            raise me.QuantityError(f"Il n'y a pas de flux de matière dans \
                le fichier d'input avec le graph {graph_name}. Vérifier \
                si le nom de graphe est bon et si des noeuds sont présents.")
        return data
    
    def get_flux_name(self, graph_name: str) -> list:
        """Return the name of nodes with flux input

        Args:
            graph_name (str): the graph name

        Returns:
            list: list of node names
        """
        return [i for i in self.get_flux_data(graph_name)]
    
    def get_flux_input(self, graph_name: str, node_name: str): 
        intrant = self.get_flux_data(graph_name)
        try:  
            intrant = intrant[node_name]
        except:
            raise me.InvalidOption(f"{node_name} n'est pas un nom de noeud \
                présent dans le fichier d'inputs")
        time = []
        quantities = []
        for temps, value in intrant.items():
            if value == 0:
                continue
            time.append(int(temps)) 
            quantities.append(value)
        
        if len(time) == 0 and len(quantities) == 0:
            raise me.QuantityError(f"Il n'y a aucun flux de matière dans \
                le noeud {node_name}")
        if len(time) != len(quantities):
            raise me.QuantityError(f"Le nombre de période de temps et le \
                nombre de input ne correspond pas dans {node_name}. \
                Longueur du temps = {len(time)}, longueur des flux = \
                {len(quantities)}.")

        return time, quantities
    
    def get_decay_data(self, graph_name: str):
        decay_data = self._DATA['Decay']
        if len(decay_data) == 0:
            raise me.DecayError(f"Il n'y a pas de données pour les noeuds \
                de dégradation dans le fichier import")

        try: 
            data = decay_data[graph_name]
        except:
            raise me.InvalidOption(f"Le nom de graphe {graph_name} n'est pas \
                présent dans le fichier import")
        
        if len(data) == 0:
            raise me.QuantityError(f"Il n'y a aucun noeud de listé sous le \
                nom de graphe {graph_name}")

        return data
    
    def get_decay_name(self, graph_name: str) -> str:
        try:
            decay_name = [i for i in self.get_decay_data(graph_name)]
        except:
            decay_name = []
        return decay_name 
    
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
        else:
            raise me.InvalidOption(f"{list(intrant.keys())[0]} n'est pas une \
                dégradation valide. Choix possibles: Custom, Exponential, Gamma ou Chi-square")
        return alpha_value, beta_value

def add_import(graph: gg.GraphFactory, import_data: ImportData):
    for graph_name in graph.get_graph_name:
        G = graph.get_graph(graph_name)

        # Check if the nodes in inputs is also in graph
        for node_name in import_data.get_flux_name(graph_name):
            if node_name not in G.get_topnode_name():
                raise me.NodeError(f"Le nom de noeud '{node_name}' dans le fichier \
                    import (listé sous 'Inputs') ne se retrouve pas dans le graphe importé.")
        
        # Check if the nodes in decay is also in graph
        for decay_node_name in import_data.get_decay_name(graph_name):
            if decay_node_name not in G.get_decaynode_names():
                raise me.NodeError(f"Le nom de noeud '{decay_node_name}' dans le fichier \
                    import (listé sous 'Decay') ne se retrouve pas dans le graphe importé.")
        
        # Check if all decay nodes of graph are listed in import json
        for decay_node_name in G.get_decaynode_names():
            if decay_node_name not in import_data.get_decay_name(graph_name):
                raise me.NodeError(f"Le noeud '{decay_node_name}' dans le graph \
                    ne se retrouve pas dans les noeuds du JSON d'import sous 'Decay'.")

        for node in G.nodes():
            if node.NAME in import_data.get_flux_name(graph_name):
                time, quantities = import_data.get_flux_input(graph_name, node.NAME)
                node.time = time
                node.quantities = quantities
            if node.NAME in import_data.get_decay_name(graph_name):
                alpha, beta = import_data.get_decay_input(graph_name, node.NAME)
                node.alpha = alpha
                node.beta = beta