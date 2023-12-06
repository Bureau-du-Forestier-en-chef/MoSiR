# -*- coding: UTF-8 -*-
"""
Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""
import warnings
import numpy as np
from MoSiR import mosir_exceptions as me
        
def rad_convolve(colonne: list, gaz: str, RF: dict, cumulative: bool = False) -> list:
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
        return np.cumsum(rad)
    elif cumulative == False:
        return rad 

def rad_formatting(data: dict, RF: dict, cumulative: bool = False):
    """Fonction qui survole un tableau et change toutes les colonnes
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
            if not (set(data[col]) == set(longueur)):
                raise me.TimeStepError('La colonne {col} représentant le temps \
                    dans le dataframe a des entrées manquantes')
        elif 'CO2' in col:
            data[col] = rad_convolve(data[col], 'CO2', RF, cumulative = cumulative)
        elif 'CH4' in col:
            data[col] = rad_convolve(data[col], 'CH4', RF, cumulative = cumulative)
        elif 'CO' in col and 'CO2' not in col:
            data[col] = rad_convolve(data[col], 'CO', RF, cumulative = cumulative)   
        elif 'N2O' in col:
            data[col] = rad_convolve(data[col], 'N2O', RF, cumulative = cumulative)
        else:
            data[col] = 0
            warnings.warn(f"Il n'y a pas de gas reconnu dans {col}, \
                          le résultat sera donc de 0", stacklevel = 2)
