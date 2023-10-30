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
Time = Report.GetOutputData('Time')
Ext = Report.GetOutputData('Output file extension')
PRG = Report.GetOutputData('PRG')
Output = Report.GetOutputData('Output')

for output_name in Output:
    Data = Output[output_name]
    Nodes_name = Data['Nodes_name']
    Type = Data['Type']
    Cumulative = bool(Data['Cumulative'])
    Summarize = Data['Summarize']
    Unit = Data['Unit'] 
    
    df = pd.DataFrame(columns = Nodes_name)
    df.insert(0, 'Time', None)
    
    for Name in Graph.GetGraphName:
        G = Graph.GetGraph(Name)
        for Node in G.Nodes():
            if Node.NAME in Nodes_name:
                for Time in range(10):
                    df.loc[Time, 'Time'] = Time
                    if Type == 'Flux in':
                        result = Node.GetFluxIn(G, Time, Cumulative = Cumulative)
                        
                        df.loc[Time, Node.NAME] = result
                    elif Type == 'Flux out':
                        result = Node.GetFluxOut(G, Time, Cumulative = Cumulative)
                        df.loc[Time, Node.NAME] = result
                    elif Type == 'Stock':
                        result = Node.GetStock(G, Time, Cumulative = Cumulative)
                        df.loc[Time, Node.NAME] = result
                    else:
                        raise InvalidOption(f"L'entrée <Type> ('{Type}') dans le \
                                reporting file n'est pas un choix valide. Choix \
                                possibles: 'Flux in', 'Flux out' ou 'Stock'.")
    if Summarize == 'Combined':
        df['Combined'] = df.sum(axis = 1)
    df['Unit'] = Unit
    df.to_csv(output_name + Ext, index = False, sep = ';')
    
for node in G.Nodes():
    print(node.NAME) 
                        


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