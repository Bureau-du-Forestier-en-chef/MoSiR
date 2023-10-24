import GraphFactory as gf
import ImportInfo as ip
import ReportingInfo as rp
import pandas as pd
import json

GraphFileDirectory = 'T:/Donnees/Usagers/LANGA3/MoSiR/Graphs_04.json'
ImportFileDirectory = 'D:/MoSiR/Import.json'
ReportFileDirectory = 'D:/MoSiR/Reporting.json'

Graph = gf.GraphFactory(GraphFileDirectory)
Import = ip.ImportData(ImportFileDirectory)
Report = rp.ReportData(ReportFileDirectory)

# Add imports 
ip.AddImport(Graph, Import)

# Reporting ------------------------------------------------------------------

for output_name in Report.GetOutputName():
    Data = Report.GetOutputData(output_name)
    Time = Data['Time']
    Nodes_name = Data['Nodes_name']
    Type = Data['Type']
    Cumulative = bool(Data['Cumulative'])
    Summarize = Data['Summarize']
    Unit = Data['Unit']
    Output_file_ext = Data['Output_file_ext']
   
    for Name in Graph.GetGraphName:
        G = Graph.GetGraph(Name)
        for Time in range(16): 
            for Node in G.Nodes():
                if Node.NAME == 'CH4 emissions':
                    CH4 = Node.CountCarbon(G, Time, Cumulative = False)
                elif Node.NAME == 'CO2 emissions':
                    CO2 = Node.CountCarbon(G, Time, Cumulative = False)
                elif Node.NAME == 'N2O emissions':
                    N2O = Node.CountCarbon(G, Time, Cumulative = False)
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