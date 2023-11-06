import numpy as np
import pandas as pd
import warnings

class ConstError(Exception):
    def __init__(self, message: str):    
        super().__init__(message)

class TimeStepError(Exception):
    def __init__(self, message: str):    
        super().__init__(message)
        
class InvalidOption(Exception):
    def __init__(self, message: str):    
        super().__init__(message)
        
def RadConvolve(Colonne: list, gaz: str, RF: dict, Cumulative: bool = False):
    masse = {
        'CO2': 3.6667,
        'CO': 2.6666,
        'CH4': 1.3333}
    if gaz == 'N2O':
        result = Colonne
    elif gaz in masse:
        result = [i * masse[gaz] for i in Colonne]
    else:
        raise InvalidOption(f"{gaz} n'est pas dans les options de gaz \
            pour un calcul en radiatif")
        
    FC = RF[gaz][0:len(Colonne)]
    rad = list(np.convolve(result, FC)[0:len(Colonne)])
    if Cumulative == True:
        return rad.cumsum()
    elif Cumulative == False:
        return rad 

def RadFormatting(Data: dict, RF: dict, Cumulative: bool = False):
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
    for col in Data:
        if col.lower() in ['time', 'timestep', 'temps', 
                           'year', 'years', 'année', 'années']:
            start = min(Data[col])
            finish = max(Data[col])
            longueur = range(start, finish + 1)
            if not (set(Data[col]) == set(longueur)):
                raise TimeStepError('La colonne {col} représentant le temps \
                    dans le dataframe a des entrées manquantes')
        elif 'CO2' in col:
            Data[col] = RadConvolve(Data[col], 'CO2', RF, Cumulative =  Cumulative)
        elif 'CH4' in col:
            Data[col] = RadConvolve(Data[col], 'CH4', RF, Cumulative =  Cumulative)
        elif 'CO' in col and 'CO2' not in col:
            Data[col] = RadConvolve(Data[col], 'CO', RF, Cumulative =  Cumulative)   
        elif 'N2O' in col:
            Data[col] = RadConvolve(Data[col], 'N2O', RF, Cumulative =  Cumulative)
        else:
            Data[col] = 0
            warnings.warn(f"Il n'y a pas de gas reconnu dans {col}, \
                          le résultat sera donc de 0", stacklevel = 2)


# Test de validation du RF  
Time = list(range(1, 2001))
CO2 = [1/3.6667] + [0] * (len(Time) - 1)         
CH4 = [1/1.3333] + [0] * (len(Time) - 1)          
N2O = [1] + [0] * (len(Time) - 1)          
CO = [1/2.6666] + [0] * (len(Time) - 1)   
       
test = {
    'Year': Time,
    'CO2': CO2,
    'CH4': CH4,
    'N2O': N2O,
    'CO': CO
    }

RF = pd.read_excel('MoSiR/RadiativeForcing/Dynco2_Base.xlsx').\
    sort_values(by = 'Year').drop('Unit', axis = 1).to_dict(orient = 'list')

RadFormatting(test, RF, Cumulative= False)

assert test == RF
