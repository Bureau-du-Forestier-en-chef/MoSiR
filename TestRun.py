import GraphFactory as gf
import ImportInfo as ip
import ReportingInfo as rp
import pandas as pd
import json

class InvalidOption(Exception):
    def __init__(self, message: str):    
        super().__init__(message)

GraphFileDirectory = 'T:/Donnees/Usagers/LANGA3/MoSiR/Graphs_04.json'
ImportFileDirectory = 'D:/MoSiR/Import.json'
ReportFileDirectory = 'D:/MoSiR/Reporting.json'

Graph = gf.GraphFactory(GraphFileDirectory)
Import = ip.ImportData(ImportFileDirectory)
Report = rp.ReportData(ReportFileDirectory)

# Add imports 
ip.AddImport(Graph, Import)

# Reporting ------------------------------------------------------------------
Report.GetData()['Time']
Report.GetOutputData('output_substitution')

for output_name in Report.GetOutputName():
    Data = Report.GetOutputData(output_name)
    Nodes_name = Data['Nodes_name']
    Type = Data['Type']
    Cumulative = bool(Data['Cumulative'])
    Summarize = Data['Summarize']
    Unit = Data['Unit']
    
    for Name in Graph.GetGraphName:
        G = Graph.GetGraph(Name)
        if Type == 'Flux in':
            for Node in G.Nodes():
                if Node.NAME in Nodes_name:
                    pass
                    #df.loc[i, ['A']] = 
                    #df.loc[i, ['B']] = 
                    #df.loc[i, ['C']] = 
                    #df.loc[i, ['D']] = 
                    #df.loc[i, ['E']] = 
        elif Type == 'Flux out':
            for Node in G.Nodes():
                if Node.NAME in Nodes_name:
                    pass
        elif Type == 'Stock':
            for Node in G.Nodes():
                if Node.NAME in Nodes_name:
                    pass
        else:
            raise InvalidOption(f"L'entrée <Type> ('{Type}') dans le \
                reporting file n'est pas un choix valide. Choix \
                possibles: 'Flux in', 'Flux out' ou 'Stock'.")
                
             


for Node in G.Nodes():
    if Node.NAME in Nodes_name:
new_line = pd.DataFrame([{'Time': Time, 
                         'CH4 emissions': CH4,
                         'CO2 emissions': CO2, 
                         'N2O emissions': N2O}])
df = pd.concat([df, new_line], ignore_index = True)
        
        
    df = {'Time': [],
        'CH4 emissions': [],
        'CO2 emissions': [],
        'N2O emissions': []}
    df = pd.DataFrame(data)