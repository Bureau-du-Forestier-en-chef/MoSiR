import GraphFactory as gf
import ImportInfo as ip
import ReportingInfo as rp
import pandas as pd
import GraphTest as gt

class InvalidOption(Exception):
    def __init__(self, message: str):    
        super().__init__(message)

GraphFileDirectory = 'T:/Donnees/Usagers/LANGA3/MoSiR/Graphs_04.json'
ImportFileDirectory = 'D:/MoSiR/Import.json'
ReportFileDirectory = 'D:/MoSiR/Reporting.json'

Graph = gf.GraphFactory(GraphFileDirectory)
Import = ip.ImportData(ImportFileDirectory)
Report = rp.ReportData(ReportFileDirectory)

# Add imports to graph
ip.AddImport(Graph, Import)

# Testing

gt.GraphTesting(Graph, Import, Report)

# Reporting ------------------------------------------------------------------

def UnitChange(Number: float, From: str, To: str) -> float:
    F = From.lower()
    T = To.lower()
    if F == 'kgc':
        if T in ['tc', 'tco2eq']:
            return Number/1000
        elif T in ['kgc', 'w/m2']:
            return Number
        else: 
            raise InvalidOption(f"{To} n'est pas une option d'unité d'output \
                (tC, kgC, tCO2eq ou w/m2)")
    elif F == 'tc':
        if T in ['kgc', 'w/m2']:
            return Number * 1000
        elif T in ['tc', 'tco2eq']:
            return Number
        else: 
            raise InvalidOption(f"{To} n'est pas une option d'unité d'output \
                (tC, kgC, tCO2eq ou w/m2)")
    else:
        raise InvalidOption(f"{From} n'est pas une option d'unité d'input \
                            (kgC ou tC)") 

def OutputCreation(Graph: gf.GraphFactory, Import: ip.ImportData, 
                   Report: rp.ReportData):
    Time = Report.GetOutputData('Time')
    Ext = Report.GetOutputData('Output file extension')
    PRG = Report.GetOutputData('PRG')
    Output = Report.GetOutputData('Output')
    InputUnit = Import.GetUnit().lower()
    
    for output_name in Output:
        Data = Output[output_name]
        Nodes_name = Data['Nodes_name']
        Type = Data['Type']
        Cumulative = bool(Data['Cumulative'])
        Summarize = Data['Summarize']
        ReportUnit = Data['Unit'].lower()

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
                            result = UnitChange(result, InputUnit, ReportUnit)
                            df.loc[Time, Node.NAME] = result
                        elif Type == 'Flux out':
                            result = Node.GetFluxOut(G, Time, Cumulative = Cumulative)
                            result = UnitChange(result, InputUnit, ReportUnit)
                            df.loc[Time, Node.NAME] = result
                        elif Type == 'Stock':
                            result = Node.GetStock(G, Time, Cumulative = Cumulative)
                            result = UnitChange(result, InputUnit, ReportUnit)
                            df.loc[Time, Node.NAME] = result
                        else:
                            raise InvalidOption(f"L'entrée <Type> ('{Type}') dans le \
                                    reporting file n'est pas un choix valide. Choix \
                                    possibles: 'Flux in', 'Flux out' ou 'Stock'.")
        if Summarize == 'Combined':
            df['Combined'] = df.drop('Time', axis = 1).sum(axis = 1)
            df = df[['Time', 'Combined']]
        df['Unit'] = ReportUnit
        df.to_csv('T:/Donnees/Usagers/LANGA3/MoSiR/Test' + output_name + Ext, 
                  index = False, sep = ';')