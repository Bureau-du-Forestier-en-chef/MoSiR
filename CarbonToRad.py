import numpy as np
import pandas as pd

import sys
from IPython.core.ultratb import ColorTB # Couleur powershell

sys.excepthook = ColorTB()


# Fichier pour générer une table dummy
df = {
    'Time': np.repeat(np.arange(1, 151), 3),
    'Species': np.array(['A', 'B', 'C'] * 150),
    'Tonne_C': np.random.uniform(20, 60, 450)
}

df = pd.DataFrame(df)
df.to_csv('C:/Users/langa3/Documents/Script/Panier_produit/dummy_table.csv', 
          index = False, sep = ';')

# Test convolve -----------------------------------------------

'''
Insane la fonction, passe le premier vecteur en ordre d'occurance au deuxième,
exemple : 1 * 10, 1 * 20 + 5 * 10, 1 * 100 + 5 * 20, et ainsi de suite

# Emissions en ordre chronologique = [1, 5]
# Facteur radiatif = [10, 20, 100, 1000]
2 you
4 more
6 
8 great

'''
a = [1, 5]
b = [10, 20, 30]

np.convolve(a, b)
    
    
class ConstError(Exception):
    def __init__(self, message: str):    
        super().__init__(message)

class RadFormatting(): 
    '''
    Cette class sert à transformer les inputs provenant du fichier excel 
    de facteur du forçage radiatif en format utilisable dans python pour
    la fonction np.convolve
    '''
    def __init__(self, directory: str):
        self._DIRECTORY = directory
        self._DATA = pd.read_excel(directory).sort_values(by = 'Year')
        self._COLUMN = [i for i in self.GetData]
        for column in self.GetData:
            setattr(self, f'_{column}'.upper(), self.GetData[column].tolist())
            
    @property       
    def GetData(self):
        return self._DATA    
    
    @GetData.setter
    def GetData(self):
        raise ConstError("Original data can't be changed")
    
    def GetColumn(self, Name: str) -> list[int]:
        return getattr(self, f'_{Name}'.upper())
    
    def CalculateRF(GasName: str):
        
    

Fc = ExcelFormatting('T:/Donnees/Usagers/LANGA3/MoSiR/FacteurRadiatif.xlsx')
Fc.GetColumn('Year')

def InputFormatting(Time: list[int], Values: list[float]):
    pass
    
    
    


A = [1, 2, 3, 4, 5]
Temps = [1, 3, 4, 5]
C = [15, 2, 43, 34]

C_result = [0] * len(A)

for i, annee in enumerate(A):
    if annee in Temps:
        index = Temps.index(annee)
        C_result[i] = C[index]
        
for ID, VALUE in enumerate([2, 34, 23, 43]):
    print(ID, VALUE)
