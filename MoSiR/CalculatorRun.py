# -*- coding: UTF-8 -*-
import sys
import argparse as ap
sys.path.append("../MoSiR")
from MoSiR import GraphGen as gf
from MoSiR import ImportInfo as ip
from MoSiR import ReportingInfo as rp

def main(raw_args = None):
    parser = ap.ArgumentParser(
        description = 'Process input and output for the MoSiR calculator')
    parser.add_argument('--GraphFileDirectory', '-G',
        dest = 'G',                
        required = True,
        help = 'Localisation (racine) du fichier contenant le JSON du graph') 
    parser.add_argument('--DataFileDirectory', '-D',
        dest = 'D',
        required = True,
        help = 'Localisation (racine) du fichier contenant le JSON des intrants') 
    parser.add_argument('--ReportFileDirectory', '-R',
        dest = 'R',
        required = True,
        help = 'Localisation (racine) du fichier contenant le JSON du Reporting') 
    parser.add_argument('--ExtrantFileDirectory', '-E',
        dest = 'E',
        required = True,
        help = 'Localisation (racine) où les extrants seront enregistrés') 

    args = parser.parse_args(raw_args)

    Graph = gf.GraphFactory(args.G)
    Import = ip.ImportData(args.I)
    Report = rp.ReportData(args.R) 
 
    # Alternate
    #Graph = gf.GraphFactory('D:/MoSiR/examples/Inputs/Graph.json')
    #Import = ip.ImportData('D:/MoSiR/examples/Inputs/Import.json')
    #Report = rp.ReportData('D:/MoSiR/examples/Inputs/Reporting.json')
    #
    # Add imports to graph
    ip.add_import(Graph, Import)

    # Reporting
    rp.output_creation(Graph, Import, Report, args.O)

    # Python 2.7, child process ou subprocess

if __name__ == "__main__":
    main()