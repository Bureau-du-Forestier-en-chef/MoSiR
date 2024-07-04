# -*- coding: UTF-8 -*-
"""
Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""
import os
import numpy as np
import pandas as pd
import argparse as ap
from MoSiR import mosir_exceptions as me

def main(raw_args = None):
    parser = ap.ArgumentParser(
        description = 'Process input and transform carbon emissions to \
            radiative forcing')
    parser.add_argument('--Input', '-I',
        dest = 'I',
        type = str,                
        required = True,
        help = "Liste d'émissions de carbone en kgC en ordre chronologique")
    parser.add_argument('--Gas', '-G',
        dest = 'G',
        type = str,
        required = True,
        help = 'Nom du gaz (CO2, CO, CH4 ou N2O)')
    parser.add_argument('--Cumulative', '-C',
        dest = 'C',
        type = str,
        required = True,
        help = 'Si le résultat doit être cumulatif ou non') 
    
    args = parser.parse_args(raw_args)

    # Transformer un string en liste
    colonne = args.I
    gaz = args.G

    file_path = os.path.join(os.path.dirname(os.path.abspath(__file__)), 
        "radiative_forcing", "Dynco2_Base.csv")
    try:
        # If file is save from EN excel
        RF = pd.read_csv(file_path, sep=',').sort_values(by='Year').to_dict(orient='list')
    except pd.errors.ParserError:
        try:
            # If file is save from a FR excel
            RF = pd.read_csv(file_path, sep=';').sort_values(by='Year').to_dict(orient='list')
        except Exception as e:
            print("Erreur lors de la lecture du fichier DynCO:", e)

    if args.C in ['True', 'true']:
        cumulative = True
    elif args.C in ['False', 'false']:
        cumulative = False
    else:
        raise me.InvalidOption("L'option -C doit être True ou False")

    result = rad_convolve(colonne, gaz, RF, cumulative)
    return result

def rad_convolve(colonne: list[float], gaz: str, RF: dict, cumulative: bool = False) -> list[float]:
    """Fonction servant à transformer une liste d'émissions d'un gaz (en kgC)
    en forçage radiatif (en w/m2). Change dabord les unités pour la masse 
    correspondante du gaz. Multiplie par la suite cette valeur au facteur
    retrouvé dans DynCO2. La fonction utilise numpy.convolve pour itérer 
    sur les deux listes.

    Args:
        colonne (list): Émissions en kgC d'un gaz
        gaz (str): Nom du gaz (CO2, CO, CH4 ou N2O)
        RF (dict): Table des FC de DynCO
        cumulative (bool, optional):  Defaults to False.

    Raises:
        me.InvalidOption: Les gas disponibles pour l'instant sont: CO2, CO, CH4, N2O

    Returns:
        list: Une liste des émissions en forçage radiatif. L'ordre des entrées 
        correspond au moment d'émissions
    """
    masse = {
        'CO2': 3.6667,
        'CO': 2.6666,
        'CH4': 1.3333}
    if gaz == 'N2O':
        result = colonne
    elif gaz in masse:
        result = [i * masse[gaz] for i in colonne]
    else:
        raise me.InvalidOption(f"{gaz} n'est pas dans les options de gaz \
            pour un calcul en radiatif")
        
    FC = RF[gaz][0:len(colonne)]
    rad = list(np.convolve(result, FC)[0:len(colonne)])
    
    if cumulative == True:
        result = np.cumsum(rad)
    elif cumulative == False:
        result = rad 
    return result

def rad_formatting(data: dict, RF: dict, cumulative: bool = False):
    """Fonction qui survole un dict et change toutes les colonnes
    nommées comme un gaz (CO, CO2, CH4, N2O) et transforme leur unité
    en forçage radiatif grâce à la fonction rad_convolve.

    Args:
        data (dict): Un tableau sous forme de dictionnaire
        RF (dict): Les facteur de DynCO2
        cumulative (bool, optional): Defaults to False.

    Raises:
        me.TimeStepError: Il n'y doit pas y avoir des années manquantes
        dans les inputs. Si aucune émissions est présente, un 0 devrait être 
        associé à cette année.
    """
    for col in data:
        if col.lower() in ['time', 'timestep', 'temps', 
                           'year', 'years', 'année', 'années']:
            start = min(data[col])
            finish = max(data[col])
            longueur = range(start, finish + 1)
            # Vérifier si les années sont complètes
            if not (set(data[col]) == set(longueur)):
                raise me.TimeStepError('La colonne {col} représentant le temps \
                    dans le dataframe a des entrées manquantes')
            # Vérifier si les années sont en ordre
            if not (sorted(data[col]) == list(data[col])):
                raise me.TimeStepError("La colonne {col} représentant le temps \
                    dans le dataframe n'est pas en ordre")
        elif 'CO2' in col:
            data[col] = list(rad_convolve(data[col], 'CO2', RF, cumulative = cumulative))
        elif 'CH4' in col:
            data[col] = list(rad_convolve(data[col], 'CH4', RF, cumulative = cumulative))
        elif 'CO' in col and 'CO2' not in col:
            data[col] = list(rad_convolve(data[col], 'CO', RF, cumulative = cumulative))   
        elif 'N2O' in col:
            data[col] = list(rad_convolve(data[col], 'N2O', RF, cumulative = cumulative))
        else:
            raise me.InvalidOption(f"Il n'y a pas de gaz reconnu dans {col}. \
                Le nom du noeud doit contenir en majuscule et séparé par des \
                espaces le nom d'un gaz pour être transformé en w/m2. \
                Options valides: CO2, CO, N2O, CH4. Exemple '{col} CH4'")

if __name__ == "__main__":
    main()
