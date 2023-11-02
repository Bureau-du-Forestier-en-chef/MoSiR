import numpy as np
import pandas as pd

import sys
from IPython.core.ultratb import ColorTB # Couleur powershell

sys.excepthook = ColorTB()

# Fichier pour générer une table dummy
""" 
df = {
    'Time': np.repeat(np.arange(1, 151), 3),
    'Species': np.array(['A', 'B', 'C'] * 150),
    'Tonne_C': np.random.uniform(20, 60, 450)
}

df = pd.DataFrame(df)
df.to_csv('C:/Users/langa3/Documents/Script/Panier_produit/dummy_table.csv', 
          index = False, sep = ';')
"""

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
    
    @property
    def GetColumnName(self):
        return self._COLUMN
    
    @GetColumnName.setter
    def GetColumnName(self):
        raise ConstError("Original data can't be changed")
    
    def GetColumn(self, Name: str) -> list[int]:
        return getattr(self, f'_{Name}'.upper())
    
    def CalculateRF(self, GasName: str, Input: list[float], Duration: int) -> list[float]:
        """
        Les inputs doivent être des émissions en ordre chronologique. La liste
        d'émissions doit être des années qui se suivent, sans bon. Par exemple:
        [Émission année 1, Émissions année 2, Émissions année 3, etc.].
        
        Ce qui ne fonctionne pas :
        [Émission année 1, Émission année 3, Émissions année 4, etc].
        
        Si aucune émission n'est signalée à une année, une zéro devrait
        être présent.
        """
        GasRF = self.GetColumn(GasName)[0:Duration]
        Emissions = np.convolve(Input, GasRF)[0:Duration]
        return Emissions

Fc = RadFormatting('T:/Donnees/Usagers/LANGA3/MoSiR/FacteurRadiatif.xlsx')

