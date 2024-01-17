# -*- coding: UTF-8 -*-
"""
Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""
import os
import json
import warnings
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
            report_unit = data['Unit'].lower()
            if type(data['Cumulative']) == bool:
                if report_unit == 'w/m2':
                    cumu = False
                elif report_unit in ['kgc', 'tc', 'tco2eq']:
                    cumu = data['Cumulative']
                else:
                    raise me.InvalidOption(f"Unit ({data['Unit']}) dans le fichier \
                                    de reporting n'est pas une option valide")
            else: 
                raise me.InvalidOption(f"Cumulative ({data['Cumulative']}) dans le fichier \
                                    de reporting doit être un booléen, donc soit 'true' ou 'false'")

            df = pd.DataFrame(columns = nodes_name)
            df.insert(0, 'Time', None)

            G = graph.get_graph(graph_name)
            for node in G.nodes():
                if node.NAME in nodes_name:
                    for timestep in range(time + 1):
                        df.loc[timestep, 'Time'] = timestep
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
                        df.loc[timestep, node.NAME] = result
            if report_unit == 'tco2eq':
                for col in df:
                    if col.lower() in ['time', 'timestep', 'temps', 
                                       'year', 'years', 'année', 'années']:
                        continue
                    elif 'CO2' in col:
                        df[col] = df[col] * 3.6667
                    elif 'CH4' in col:
                        df[col] = df[col] * 1.3333 * PRG['CH4']
                    elif 'N2O' in col:
                        df[col] = df[col] * PRG['N2O']
                    elif 'CO' in col and 'CO2' not in col:
                        df[col] = df[col] * 2.3333
                    else:
                        df[col] = 0
                        warnings.warn(f"Il n'y a pas de gas reconnu dans {col}, \
                                      le résultat sera donc de 0", stacklevel = 2)
            elif report_unit == 'w/m2':
                C = data['Cumulative']
                RF = pd.read_excel(os.path.join(os.path.dirname(os.path.abspath(__file__)), \
                                                "RadiativeForcing", "Dynco2_Base.xlsx")).\
                    sort_values(by = 'Year').to_dict(orient = 'list')
                df_2 = df.to_dict(orient = 'list')
                cr.rad_formatting(df_2, RF, cumulative = C)
                df = pd.DataFrame(df_2)
                
            if summarize == 'Combined':
                df['Combined'] = df.drop('Time', axis = 1).sum(axis = 1)
                df = df[['Time', 'Combined']]
            df['Unit'] = report_unit
            if ext == '.csv':
                if directory[-1] == '/':
                    df.to_csv(directory + graph_name + '_' + output_name + ext, 
                              index = False, sep = ',')
                elif directory[-1] != '/':
                    df.to_csv(directory + '/' + graph_name + '_' + output_name + ext, 
                              index = False, sep = ',')
            elif ext == '.json':
                # write a json file
                if directory[-1] == '/':
                    df.to_json(directory + graph_name + '_' + output_name + ext, 
                               orient = 'records')
                elif directory[-1] != '/':
                    df.to_json(directory + '/' + graph_name + '_' + output_name + ext, 
                               orient = 'records')