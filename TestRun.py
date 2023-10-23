import GraphFactory as gf
import Import as ip
import GraphTest as gt

GraphFileDirectory = 'T:/Donnees/Usagers/LANGA3/MoSiR/Graphs_04.json'
ImportFileDirectory = 'D:/MoSiR/Import.json'
ReportFileDirectory = ''

Graph = gf.GraphFactory(GraphFileDirectory)

for Name in Graph.GetGraphName:
    G = Graph.GetGraph(Name)
    for Node in G.Nodes():
        if Node.NAME == 'Roundwood from GCBM':
            Node.Time.setter([0, 1, 2])
            Node.Quantities.setter([10, 0, 20])