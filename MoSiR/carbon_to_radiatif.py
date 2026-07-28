# -*- coding: UTF-8 -*-
"""
Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""
import os
import functools
import numpy as np
import pandas as pd
import argparse as ap
from MoSiR import mosir_exceptions as me


@functools.lru_cache(maxsize=None)
def _load_radiative_factors() -> dict:
    """Loads the DynCO2 forcing factors, only once per process.

    The file does not change during execution; re-reading it on each call to
    rad_convolve (once per gas column, for each radiative output) was a waste
    of I/O and parsing.
    """
    file_path = os.path.join(os.path.dirname(os.path.abspath(__file__)),
        "radiative_forcing", "Dynco2_Base.csv")
    try:
        # File saved from an EN Excel
        return pd.read_csv(file_path, sep=',').sort_values(by='Year').to_dict(orient='list')
    except pd.errors.ParserError:
        # File saved from a FR Excel
        return pd.read_csv(file_path, sep=';').sort_values(by='Year').to_dict(orient='list')

def main(raw_args = None) -> list[float]:
    parser = ap.ArgumentParser(
        description = 'Process input and transform carbon emissions to \
            radiative forcing')
    parser.add_argument('--Input', '-I',
        dest = 'I',
        type = list[float],
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

    """ Transform a string into a list
    if args.I[0] == '[' and args.I[-1] == ']':
        colonne = [float(i) for i in args.I[1:-1].split(',')]
    else:
        raise me.InvalidOption("L'option -I doit être le string d'une liste \
            (ex: '[1,2,3]')")
    """

    series = args.I
    gas = args.G

    if args.C in ['True', 'true']:
        cumulative = True
    elif args.C in ['False', 'false']:
        cumulative = False
    else:
        raise me.InvalidOption("L'option -C doit être True ou False")

    result = rad_convolve(series, gas, cumulative)
    return result

def rad_convolve(series: list[float], gas: str, cumulative: bool = False) -> list[float]:
    """Function that transforms a list of emissions of a gas (in kgC) into
    radiative forcing (in w/m2). First changes the units to the mass
    corresponding to the gas. Then multiplies this value by the factor found
    in DynCO2. The function uses numpy.convolve to iterate over the two
    lists.

    Args:
        series (list): Emissions in kgC of a gas
        gas (str): Gas name (CO2, CO, CH4 or N2O)
        cumulative (bool, optional):  Defaults to False.

    Raises:
        me.InvalidOption: The gases available for now are: CO2, CO, CH4, N2O

    Returns:
        list: A list of the emissions as radiative forcing. The order of the
        entries matches the moment of emission
    """
    mass = {
        'CO2': 3.6667,
        'CO': 2.6666,
        'CH4': 1.3333}
    if gas == 'N2O':
        result = series
    elif gas in mass:
        result = [i * mass[gas] for i in series]
    else:
        raise me.InvalidOption(f"{gas} n'est pas dans les options de gaz \
            pour un calcul en radiatif")

    RF = _load_radiative_factors()
    FC = RF[gas][0:len(series)]
    rad = list(np.convolve(result, FC)[0:len(series)])

    if cumulative == True:
        result = np.cumsum(rad)
    elif cumulative == False:
        result = rad
    return result

def rad_formatting(data: dict, cumulative: bool = False):
    """Function that goes over a dict and changes every column named like a
    gas (CO, CO2, CH4, N2O) and transforms their unit into radiative forcing
    using the rad_convolve function.

    Args:
        data (dict): A table as a dictionary
        cumulative (bool, optional): Defaults to False.

    Raises:
        me.TimeStepError: There must be no missing years in the inputs. If no
        emission is present, a 0 should be associated with that year.
    """
    for col in data:
        if col.lower() in ['time', 'timestep', 'temps',
                           'year', 'years', 'année', 'années']:
            start = min(data[col])
            finish = max(data[col])
            length = range(start, finish + 1)
            # Check whether the years are complete
            if not (set(data[col]) == set(length)):
                raise me.TimeStepError(f'La colonne {col} représentant le temps \
                    dans le dataframe a des entrées manquantes')
            # Check whether the years are in order
            if not (sorted(data[col]) == list(data[col])):
                raise me.TimeStepError(f"La colonne {col} représentant le temps \
                    dans le dataframe n'est pas en ordre")
        elif 'CO2' in col:
            data[col] = list(rad_convolve(data[col], 'CO2', cumulative = cumulative))
        elif 'CH4' in col:
            data[col] = list(rad_convolve(data[col], 'CH4', cumulative = cumulative))
        elif 'CO' in col and 'CO2' not in col:
            data[col] = list(rad_convolve(data[col], 'CO', cumulative = cumulative))
        elif 'N2O' in col:
            data[col] = list(rad_convolve(data[col], 'N2O', cumulative = cumulative))
        else:
            raise me.InvalidOption(f"Il n'y a pas de gaz reconnu dans {col}. \
                Le nom du noeud doit contenir en majuscule et séparé par des \
                espaces le nom d'un gaz pour être transformé en w/m2. \
                Options valides: CO2, CO, N2O, CH4. Exemple '{col} CH4'")

if __name__ == "__main__":
    main()
