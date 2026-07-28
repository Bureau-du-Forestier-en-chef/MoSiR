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
    """Parser function of the MoSiR calculator

    Args:
        raw_args (_type_, optional): _description_. Defaults to None.
    """
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

    run_calculator(args.G, args.D, args.R, args.E)

def run_calculator(graph_file: str, import_file: str, report_file: str, output_dir: str):
    """Function to run the MoSiR calculator, without a parser

    Args:
        graph_file (str): Location of the graph JSON file
        import_file (str): Location of the import JSON file
        report_file (str): Location of the report JSON file
        output_dir (str): Location where the outputs will be produced
    """
    graph_processed = gg.GraphFactory(graph_file)
    import_processed = ip.ImportData(import_file)
    report_processed = rp.ReportData(report_file)

    # Add imports to graph
    ip.add_import(graph_processed, import_processed)

    # Reporting
    rp.output_creation(graph_processed, import_processed, report_processed, output_dir)

if __name__ == "__main__":
    main()