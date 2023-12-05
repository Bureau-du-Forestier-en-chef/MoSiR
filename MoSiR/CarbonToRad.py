# -*- coding: UTF-8 -*-
"""
Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""
import numpy as np
import warnings
import sys
sys.path.append("../MoSiR")
import MoSiR.mosir_exceptions as me
        
def rad_convolve(colonne: list, gaz: str, RF: dict, cumulative: bool = False):
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
    """Prend des inputs en kgC d'un dataframe et les transforme en radiatif

    Args:
        Dataframe (pd.DataFrame): Un dataframe d'émissions où chaque gas
            correspond à une colonne. Devrait avoir une colonne de temps 
            également pour faire une vérification
        Cumulative (bool, optional): Defaults to False.

    Raises:
        TimeStepError: Si des années sont manquantes dans la listes d'inputs.
        Par exemple si une année est omise lorsque les émissions sont de 0.
        Filet de sécurité, ne devrait pas arriver.
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
