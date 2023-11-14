# -*- coding: UTF-8 -*-
import pandas as pd
import warnings
import json
import MoSiR.GraphGen as gf
import MoSiR.ImportInfo as ip
import MoSiR.RadiativeForcing.CarbonToRad as cr

class InvalidOption(Exception):
    def __init__(self, message: str):    
        super().__init__(message)

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

def UnitChange(number: float, from_unit: str, to_unit: str) -> float:
    F = from_unit.lower()
    T = to_unit.lower()
    if F == 'kgc':
        if T in ['tc', 'tco2eq']:
            return number/1000
        elif T in ['kgc', 'w/m2']:
            return number
        else: 
            raise InvalidOption(f"{to_unit} n'est pas une option d'unité d'output \
                (tC, kgC, tCO2eq ou w/m2)")
    elif F == 'tc':
        if T in ['kgc', 'w/m2']:
            return number * 1000
        elif T in ['tc', 'tco2eq']:
            return number
        else: 
            raise InvalidOption(f"{to_unit} n'est pas une option d'unité d'output \
                (tC, kgC, tCO2eq ou w/m2)")
    else:
        raise InvalidOption(f"{from_unit} n'est pas une option d'unité d'input \
                            (kgC ou tC)") 
        
def OutputCreation(graph: gf.GraphFactory, import_data: ip.ImportData, 
                   report_data: ReportData, directory: str):
    """
    Fonction pour créer des outputs des résultats des calculs
    
    Args:
        graph: La classe graph factory de graphFactory.py
        Import: La classe ImportData du fichier d'import
        Report: La classe ReportData 
        Directory: Le dossier dans lequel les outputs seront enregistrés
    """
    #if '\\' in Directory:
    #    raise SyntaxError("Dans le output directory, il est nécessaire d'utiliser des\
    #        frontslash (/) et non des backslash (\) ")
        
    time = report_data.get_output_data('Time')
    ext = report_data.get_output_data('Output file extension')
    PRG = report_data.get_output_data('PRG')
    output = report_data.get_output_data('Output')
    input_unit = import_data.GetUnit().lower()
    
    for graph_name in output:
        info = output[graph_name]
        for output_name in info:
            data = info[output_name]
            nodes_name = data['Nodes_name']
            Type = data['Type']
            Summarize = Data['Summarize']
            ReportUnit = Data['Unit'].lower()
            if type(Data['Cumulative']) == bool:
                if ReportUnit == 'w/m2':
                    Cumu = False
                elif ReportUnit in ['kgc', 'tc', 'tco2eq']:
                    Cumu = Data['Cumulative']
                else:
                    raise InvalidOption(f"Unit ({Data['Unit']}) dans le fichier \
                                    de reporting n'est pas une option valide")
            else: 
                raise InvalidOption(f"Cumulative ({Data['Cumulative']}) dans le fichier \
                                    de reporting doit être un booléen, donc soit 'true' ou 'false'")

            df = pd.DataFrame(columns = Nodes_name)
            df.insert(0, 'Time', None)

            G = graph.Getgraph(graphName)
            for Node in G.Nodes():
                if Node.NAME in Nodes_name:
                    for Timestep in range(Time + 1):
                        df.loc[Timestep, 'Time'] = Timestep
                        if Type == 'Flux in':
                            result = Node.GetFluxIn(G, Timestep, Cumulative = Cumu)
                            result = UnitChange(result, InputUnit, ReportUnit)
                            df.loc[Timestep, Node.NAME] = result
                        elif Type == 'Flux out':
                            result = Node.GetFluxOut(G, Timestep, Cumulative = Cumu)
                            result = UnitChange(result, InputUnit, ReportUnit)
                            df.loc[Timestep, Node.NAME] = result
                        elif Type == 'Stock':
                            result = Node.GetStock(G, Timestep, Cumulative = Cumu)
                            result = UnitChange(result, InputUnit, ReportUnit)
                            df.loc[Timestep, Node.NAME] = result
                        else:
                            raise InvalidOption(f"L'entrée <Type> ('{Type}') dans le \
                                reporting file n'est pas un choix valide. Choix \
                                possibles: 'Flux in', 'Flux out' ou 'Stock'.")
            if ReportUnit == 'tco2eq':
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
            elif ReportUnit == 'w/m2':
                C = Data['Cumulative']
                RF = pd.read_excel('MoSiR/RadiativeForcing/Dynco2_Base.xlsx').sort_values(by = 'Year').\
                        to_dict(orient = 'list')
                df_2 = df.to_dict(orient = 'list')
                cr.RadFormatting(df_2, RF, Cumulative = C)
                df = pd.DataFrame(df_2)
                
            if Summarize == 'Combined':
                df['Combined'] = df.drop('Time', axis = 1).sum(axis = 1)
                df = df[['Time', 'Combined']]
            df['Unit'] = ReportUnit
            if Directory[-1] == '/':
                df.to_csv(Directory + graphName + '_' + output_name + Ext, 
                          index = False, sep = ',')
            elif Directory[-1] != '/':
                df.to_csv(Directory + '/' + graphName + '_' + output_name + Ext, 
                          index = False, sep = ',')