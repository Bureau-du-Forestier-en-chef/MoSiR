# -*- coding: UTF-8 -*-
import argparse as ap
import sys

sys.path.append("../MoSiR")
from MoSiR import GraphGen as gf
from MoSiR import ImportInfo as ip
from MoSiR import ReportingInfo as rp
from MoSiR import GraphTest as gt

""" def main(raw_args=None):
    parser = ap.ArgumentParser(
        description = 'Process input and output for the MoSiR calculator')

    parser.add_argument('--GraphFileDirectory', '-G',
        dest = 'G',                
        required = True,
        help = 'Localisation (racine) du fichier contenant le JSON du graph') 
    parser.add_argument('--ImportFileDirectory', '-I',
        dest = 'I',
        required = True,
        help = 'Localisation (racine) du fichier contenant le JSON du Import') 
    parser.add_argument('--ReportFileDirectory', '-R',
        dest = 'R',
        required = True,
        help = 'Localisation (racine) du fichier contenant le JSON du Reporting') 
    parser.add_argument('--OutputFileDirectory', '-O',
        dest = 'O',
        required = True,
        help = 'Localisation (racine) où les fichiers en output seront enregistrés') 

    args = parser.parse_args(raw_args)

    Graph = gf.GraphFactory(args.G)
    Import = ip.ImportData(args.I)
    Report = rp.ReportData(args.R) """
 
    # Alternate
Graph = gf.GraphFactory('D:/MoSiR/examples/Inputs/Graph.json')
Import = ip.ImportData('D:/MoSiR/examples/Inputs/Import.json')
Report = rp.ReportData('D:/MoSiR/examples/Inputs/Reporting.json')
    #
    # Add imports to graph
ip.AddImport(Graph, Import)
    # Testing
gt.GraphTesting(Graph, Import, Report)

    # Reporting
rp.OutputCreation(Graph, Import, Report, 'D:/MoSiR/examples/Inputs')

    # Python 2.7, child process ou subprocess

#if __name__ == "__main__":
#    main()