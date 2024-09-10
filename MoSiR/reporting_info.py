# -*- coding: UTF-8 -*-
"""
Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""
import os
import json
import pandas as pd
from MoSiR import (
    import_info as ip,
    graph_generator as gg,
    mosir_exceptions as me,
    carbon_to_radiatif as cr)

# Json -----------------------------------------------------------------------

class ReportData():
    def __init__(self, directory: str=None, Dict: dict=None):
        if directory is None and Dict is not None:
            self._DATA = Dict
        if directory is not None and Dict is None:
            try:
                with open(directory, "r") as f: 
                    self._DATA = json.load(f)  
            except:
                raise me.InvalidOption(f"Le chemin {directory}, n'est pas \
                    valide. Impossible d'ouvrir les données du report")
        if directory is None and Dict is None:
            raise me.InvalidOption("Un directory ou dictionnaire doit être \
                spécifié")
        for item in ["Output", "PRG", "Time", "Output file extension"]:
            if not self._DATA[item]:
                raise me.InvalidOption(f"Il n'y a pas d'informations dans la \
                    section {item} du fichier json du report. Le calculateur \
                    est arrêté. Veuillez vous référer à la documentation pour y \
                    inscrire les informations nécessaires (Output, PRG, Time, \
                    Output file extension)")
        self.validate_time()
        self.validate_extension()
        self.validate_PRG()
            
    def get_data(self):
        return self._DATA
            
    def get_output_name(self):
        return [i for i in self.get_data()]
    
    def get_output_data(self, output_name: str):
        return self.get_data()[output_name]
    
    def validate_time(self):
        time = self.get_output_data("Time")
        if not isinstance(time, int) or time < 1:
            raise me.InvalidOption("Le temps de simulation dans le report (Time)\
                doit être un chiffre entier de 1 ou plus.")
    
    def validate_extension(self):
        ext = self.get_output_data("Output file extension")
        if ext not in [".csv", ".json"]:
            raise me.InvalidOption("Les extensions possibles pour le report \
                sont '.csv' ou '.json'")
        
    def validate_PRG(self):
        PRG = self.get_output_data("PRG")
        for key, value in PRG.items():
            if key not in ["CH4", "N2O"]:
                raise me.InvalidOption(f"Les gaz possibles pour le PRG dans le fichier\
                    report sont CH4 ou N2O. {key} n'est pas valide")
            if not isinstance(value, (int, float)) or value <= 0:
                raise me.InvalidOption(f"La valeur du PRG pour {key} ne peut pas \
                    être de 0")

def unit_change(number: float, from_unit: str, to_unit: str) -> float:
    if number == 0:
        return 0
    F = from_unit.lower()
    T = to_unit.lower()
    if F == 'kgc':
        if T in ['tc', 'tco2eq']:
            return number/1000
        elif T in ['kgc', 'w/m2']:
            return number
        else: 
            raise me.InvalidOption(f"{to_unit} n'est pas une option d'unité d'output \
                (tC, kgC, tCO2eq ou w/m2)")
    elif F == 'tc':
        if T in ['kgc', 'w/m2']:
            return number * 1000
        elif T in ['tc', 'tco2eq']:
            return number
        else: 
            raise me.InvalidOption(f"{to_unit} n'est pas une option d'unité d'output \
                (tC, kgC, tCO2eq ou w/m2)")
    else:
        raise me.InvalidOption(f"{from_unit} n'est pas une option d'unité d'input \
                            (kgC ou tC)") 
        
def output_creation(graph: gg.GraphFactory, import_data: ip.ImportData, 
                   report_data: ReportData, directory: str):
    """
    Fonction pour créer des outputs des résultats des calculs
    
    Args:
        graph: La classe graph factory de graphFactory.py
        Import: La classe ImportData du fichier d'import
        Report: La classe ReportData 
        Directory: Le dossier dans lequel les outputs seront enregistrés
    """
        
    time = report_data.get_output_data('Time')
    ext = report_data.get_output_data('Output file extension')
    PRG = report_data.get_output_data('PRG')
    output = report_data.get_output_data('Output')
    input_unit = import_data.get_unit().lower()
    
    for graph_name in output:
        if graph_name not in graph.get_graph_name:
            raise me.GraphError(f"Le nom de graphe spécifié dans le report \
                ({graph_name}) ne correspond pas à un nom de graphe dans le JSON \
                de graphe ({graph.get_graph_name}).")
        info = output[graph_name]
        for output_name in info:
            data = info[output_name]
            out_type = data['Type']
            summarize = data['Summarize']
            report_unit = data['Unit']
            nodes_name = data['Nodes_name']
            G = graph.get_graph(graph_name)

            # Check if nodes name are also in graph
            for name in nodes_name: 
                if name in G.get_nodes_names():
                    continue
                else:
                    raise me.NodeError(f"Le nom de noeud '{name}' dans le fichier \
                        report ne se retrouve pas dans le graphe importé.")

            if type(data['Cumulative']) == bool:
                if report_unit == 'w/m2':
                    cumu = False
                elif report_unit in ['kgC', 'tC', 'tCO2eq']:
                    cumu = data['Cumulative']
                else:
                    raise me.InvalidOption(f"Unit ({data['Unit']}) dans le fichier \
                                    de reporting n'est pas une option valide")
            else: 
                raise me.InvalidOption(f"Cumulative ({data['Cumulative']}) dans le fichier \
                                    de reporting doit être un booléen, donc soit 'true' ou 'false'")

            # Dictionnaire pour les outputs
            dt = {'Time': [i for i in range(time + 1)]}
            dt.update({node_name: [] for node_name in nodes_name})

            # On produit les outputs par graph
            for node in G.nodes():
                if node.NAME in nodes_name:
                    for timestep in range(time + 1):
                        if out_type == 'Flux in':
                            result = node.get_flux_in(G, timestep, cumulative = cumu)
                        elif out_type == 'Flux out':
                            result = node.get_flux_out(G, timestep, cumulative = cumu)
                        elif out_type == 'Stock':
                            result = node.get_stock(G, timestep, cumulative = cumu)
                        else:
                            raise me.InvalidOption(f"L'entrée <Type> ('{out_type}') dans le \
                                reporting file n'est pas un choix valide. Choix \
                                possibles: 'Flux in', 'Flux out' ou 'Stock'.")
                        result = unit_change(result, input_unit, report_unit)
                        dt[node.NAME].append(result)
            
            # On ajuste les outputs selon le reporting
            if report_unit == 'tCO2eq':
                for col in dt:
                    if col == 'Time':
                        continue
                    elif 'CO2' in col:
                        dt[col] = [i * 3.6667 for i in dt[col]]
                    elif 'CH4' in col:
                        dt[col] = [i * 1.3333 * PRG['CH4'] for i in dt[col]]
                    elif 'N2O' in col:
                        dt[col] = [i * PRG['N2O'] for i in dt[col]]
                    elif 'CO' in col and 'CO2' not in col:
                        dt[col] = [i * 2.3333 for i in dt[col]]
                    else:
                        raise me.InvalidOption(f"Il n'y a pas de gaz reconnu dans {col}. \
                            Le nom du noeud doit contenir en majuscule et séparé par des \
                            espaces le nom d'un gaz pour être transformé en tCO2eq. \
                            Options valides: CO2, CO, N2O, CH4. Exemple '{col} CH4'")
            elif report_unit == 'w/m2':
                C = data['Cumulative']
                # On formate les outputs en radiatif
                cr.rad_formatting(dt, cumulative = C)

            if summarize == 'Combined':
                dt['Combined'] = [sum(i) for i in zip(*[dt[col] for col in dt if col != 'Time'])]
                # La boucle suivante fait la même chose que la ligne précédente
                """dt['Combined'] = []
                for i in range(time + 1):
                    sum = 0
                    for col in dt:
                        if col == 'Time':
                            continue
                        else:
                            sum += dt[col][i]
                    dt['Combined'].append(sum)"""

                # Nouveau dt avec seulement Time et Combined
                dt = {k: dt[k] for k in ('Time', 'Combined')}
            elif summarize != 'Per node':
                raise me.InvalidOption(f"Les choix de regroupement des résultats sont \
                    'Per node' ou 'Combined'. {summarize} n'est pas valide.")

            dt['Unit'] = report_unit
            if ext == '.csv':
                if directory[-1] == '/':
                    pd.DataFrame(dt).to_csv(directory + graph_name + '~' + output_name + ext,
                              index= False, sep= ',')
                elif directory[-1] != '/':
                    pd.DataFrame(dt).to_csv(directory + '/' + graph_name + '~' + output_name + ext,
                                index= False, sep= ',')
            elif ext == '.json':
                if directory[-1] == '/':
                    with open(directory + graph_name + '~' + output_name + ext, 'w') as f:
                        json.dump(dt, f)
                elif directory[-1] != '/':
                    with open(directory + '/' + graph_name + '~' + output_name + ext, 'w') as f:
                        json.dump(dt, f)