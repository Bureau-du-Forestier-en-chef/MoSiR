import GraphFactory as gf   
import ImportInfo as ip
import ReportingInfo as rp
import GraphTest as gt

GraphFileDirectory = 'T:/Donnees/Usagers/LANGA3/MoSiR/MicroTest1/MicroTest1.json'
ImportFileDirectory = 'T:/Donnees/Usagers/LANGA3/MoSiR/MicroTest1/Import.json'
ReportFileDirectory = 'T:/Donnees/Usagers/LANGA3/MoSiR/MicroTest1/Reporting.json'

Graph = gf.GraphFactory(GraphFileDirectory)
Import = ip.ImportData(ImportFileDirectory)
Report = rp.ReportData(ReportFileDirectory)

# Add imports to graph
ip.AddImport(Graph, Import)

# Testing
gt.GraphTesting(Graph, Import, Report)
        
# Reporting
rp.OutputCreation(Graph, Import, Report, 
                  "T:/Donnees/Usagers/LANGA3/MoSiR/MicroTest1")

# Regarder pour faire un script avec un input command line