import GraphFactory as gf
import ImportInfo as ip
import json
#import GraphTest as gt

GraphFileDirectory = 'T:/Donnees/Usagers/LANGA3/MoSiR/Graphs_04.json'
ImportFileDirectory = 'D:/MoSiR/Import.json'
ReportFileDirectory = ''

Graph = gf.GraphFactory(GraphFileDirectory)
Import = ip.ImportData(ImportFileDirectory)
Report = ""

for Name in Graph.GetGraphName:
    G = Graph.GetGraph(Name)
    for Node in G.Nodes():
        if Node.NAME in Import.GetNodesName():
            Time = Import.GetNodeInput(Node.NAME)[0]
            Quantities = Import.GetNodeInput(Node.NAME)[1]
            Node.Time = Time
            Node.Quantities = Quantities

# Le graph a les inputs 


