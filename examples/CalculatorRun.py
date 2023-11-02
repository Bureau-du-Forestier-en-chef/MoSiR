import argparse as ap
import sys

sys.path.append("../MoSiR")
from MoSiR import GraphFactory as gf
from MoSiR import ImportInfo as ip
from MoSiR import ReportingInfo as rp
from MoSiR import GraphTest as gt

parser = ap.ArgumentParser(
    prog = 'MoSiR calculator run',
    description = 'Test run',
    epilog = 'Du texte qui peut aider éventuellement')

parser.add_argument('InputDirectory',
        help = 'Localisation du dossier contenant les JSON du graph, \
            du import et du reporting') 
parser.add_argument('OutputDirectory',
        help = 'Chemin où les fichiers en output seront enregistrés') 

args = parser.parse_args()

GraphFileDirectory = args.InputDirectory + '/Graph.json'
ImportFileDirectory = args.InputDirectory + '/Import.json'
ReportFileDirectory = args.InputDirectory + '/Reporting.json'

Graph = gf.GraphFactory(GraphFileDirectory)
Import = ip.ImportData(ImportFileDirectory)
Report = rp.ReportData(ReportFileDirectory)

# Add imports to graph
ip.AddImport(Graph, Import)

# Testing
gt.GraphTesting(Graph, Import, Report)
        
# Reporting
rp.OutputCreation(Graph, Import, Report, args.OutputDirectory)

# Python 2.7, child process ou subprocess
