# -*- coding: UTF-8 -*-
"""
Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""
import argparse as ap
from MoSiR import import_info as ip
from MoSiR import reporting_info as rp   
from MoSiR import graph_generator as gg

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

    Graph = gg.GraphFactory(args.G)
    Import = ip.ImportData(args.D)
    Report = rp.ReportData(args.R) 
 
    # Add imports to graph
    ip.add_import(Graph, Import)

    # La vérification est faite à l'importation
    # gv.main(Graph)

    # Reporting
    rp.output_creation(Graph, Import, Report, args.E)

if __name__ == "__main__":
    main()