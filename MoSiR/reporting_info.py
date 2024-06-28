# -*- coding: UTF-8 -*-
"""
Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""
import os
import json
import pandas as pd
from MoSiR import import_info as ip
from MoSiR import graph_generator as gg
from MoSiR import mosir_exceptions as me
from MoSiR import carbon_to_radiatif as cr

# Json -----------------------------------------------------------------------

class ReportData():
    def __init__(self, directory):
        with open(directory, "r") as f: 
            self._DATA = json.load(f)
            
    def get_data(self):
        return self._DATA
            
    def get_output_name(self):
        return [i for i in self.get_data()]
    
    def get_output_data(self, output_name: str):
        return self._DATA[output_name]

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
        info = output[graph_name]
        for output_name in info:
            data = info[output_name]
            nodes_name = data['Nodes_name']
            out_type = data['Type']
            summarize = data['Summarize']
            report_unit = data['Unit']
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
            G = graph.get_graph(graph_name)
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
                file_path = os.path.join(os.path.dirname(os.path.abspath(__file__)), 
                    "radiative_forcing", "Dynco2_Base.csv")
                try:
                    # If file is save from EN excel
                    RF = pd.read_csv(file_path, sep=',').sort_values(by='Year').to_dict(orient='list')
                except pd.errors.ParserError:
                    try:
                        # If file is save from a FR excel
                        RF = pd.read_csv(file_path, sep=';').sort_values(by='Year').to_dict(orient='list')
                    except Exception as e:
                        print("Erreur lors de la lecture du fichier DynCO:", e)

                # On formate les outputs en radiatif
                cr.rad_formatting(dt, RF, cumulative = C)

            if summarize == 'Combined':
                dt['Combined'] = [sum(i) for i in zip(*[dt[col] for col in dt if col != 'Time'])]
                # La boucle suivante fait la même chose que la ligne précédente
                # dt['Combined'] = []
                # for i in range(time + 1):
                #     sum = 0
                #     for col in dt:
                #         if col == 'Time':
                #             continue
                #         else:
                #             sum += dt[col][i]
                #     dt['Combined'].append(sum)

                # Nouveau dt avec seulement Time et Combined
                dt = {k: dt[k] for k in ('Time', 'Combined')}
            elif summarize != 'Per node':
                raise me.InvalidOption(f"Should be 'Per node' or 'Combined'\
                    and not {summarize}")

            dt['Unit'] = report_unit
            if ext == '.csv':
                if directory[-1] == '/':
                    pd.DataFrame(dt).to_csv(directory + graph_name + '~' + output_name + ext,
                              index= False, sep = ',')
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