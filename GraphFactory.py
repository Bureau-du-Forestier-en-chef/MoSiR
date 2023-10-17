# Last update : 2023-10-05 (GL)

""" 
Pour faire un profile manuel :
    cProfile.run('addition(5, 3)')
    Dans un terminal : python -m cProfile -s time myscript.py

"""
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import cProfile # Pour le run time
import json
import warnings # Maybe
import WPGraph as wp
from abc import ABCMeta, abstractmethod

import sys
from IPython.core.ultratb import ColorTB # Couleur powershell

sys.excepthook = ColorTB()

# Exception handling ---------------------------------------------------------

class ConstError(Exception):
    def __init__(self, message: str):    
        super().__init__(message)

# gérer les recursion
class RecursionNode(RecursionError):
    def __init__(self, message: str):
        super().__init__(message)
# Lire sur maximum recusion depth exceeded

# Node class -----------------------------------------------------------------

class WPGraph():
    pass

class IndustrialNode(metaclass = ABCMeta): # aller voir la doc ABC
    def __init__(self, LOCALNAME: str):
        self._NAME = LOCALNAME
    
    def _GetValueTime(self, Values: list[float], Time: int) -> float:
        return Values[min(Time, len(Values) - 1)]
    
    @property
    def NAME(self):
        return self._NAME
    
    @NAME.setter
    def NAME(self, input):
       raise ConstError("Node name can't be changed")
    
    @abstractmethod
    def GetCarbon(self, Graph: wp.WPGraph, Time: int, Cumulative: bool = True) -> float:
        ''' Get Carbon Documentation
        
        Cette fonction sert à retracer le flux de carbone parcourant le réseau
        de noeuds. Cette information est utilisé par CountCarbon qui calcule
        la quantité de carbone totale se retrouvant dans un noeud spécifique.
        
        Args: 
            Graph : Le nx.DiGraph qui a servit à construire le réseau
            Time (int): Le temps en année
            Cumulative (bool): To be implemented
            
        Returns:
            float: Une quantité de carbone
        '''
        print('Test')
        pass
    
    def __hash__(self): 
        return hash(self.NAME)
    
    def __eq__(self, Other):
        return self.NAME == Other.NAME   
    
    def __ne__(self, Other):
        return not self.__eq__(Other)
    
    def __gt__(self, Other):
        return self.NAME > Other.NAME
    
    def __ge__(self, Other):
        return self.NAME >= Other.NAME
    
    def __lt__(self, Other):
        return self.NAME < Other.NAME
      
    def __le__(self, Other):
        return self.NAME <= Other.NAME
        
class TopNode(IndustrialNode):
    def __init__(self, NAME: str,  Time: list[int], Quantities: list[float]):
        super().__init__(NAME)
        self._Time = Time
        self._Quantities = Quantities
        
    def _GetQuantityTime(self, When: int) -> float:
        try: 
            index = self._Time.index(When)
            return self._Quantities[index]
        except ValueError:
            return 0
    
    def GetCarbon(self, Graph: wp.WPGraph, Time: int, Cumulative: bool = True) -> float:
        return self._GetQuantityTime(Time)
    
    def CountCarbon(self, Graph: wp.WPGraph, Time: int, Cumulative: bool = True) -> float:
        return self._GetQuantityTime(Time)
        
class ProportionNode(IndustrialNode):
    def __init__(self, NAME: str):
        super().__init__(NAME)
        self.__PastCarbon = {}
        
    #  À y revenir
    #def _GutsofGetCarbon(self, Proportion: list[float], Values: list[float]) -> float:
    
    def GetCarbon(self, Graph: wp.WPGraph, Time: int, Cumulative: bool = True) -> float:
        if Time in self.__PastCarbon:
            return self.__PastCarbon[Time]
        Total = 0
        for Parent in Graph.GetPredecessors(self):
            ProportionParent = self._GetValueTime(Graph.GetEdgeProportions(Parent, self), Time)
            if ProportionParent == 0:
                continue
            ParentCarbon = Parent.GetCarbon(Graph, Time, Cumulative) # Récursivité
            Total += ProportionParent * ParentCarbon
        self.__PastCarbon[Time] = Total
        return Total

class DecayNode(ProportionNode):
    def __init__(self, NAME: str, HalfLife: int):
        super().__init__(NAME)
        self._HalfLife = HalfLife
        self.__PastCarbon = {}
        
    @property
    def HalfLife(self):
        return self._HalfLife

    @HalfLife.setter # À voir si ça vaut la peine de la protéger
    def HalfLife(self, Value):
       self._HalfLife = Value
    
    def GetCarbon(self, Graph: wp.WPGraph, Time: int, Cumulative: bool = True) -> float:
        if Time in self.__PastCarbon:
            return self.__PastCarbon[Time]
        Total = 0
        for Year in range(Time + 1): 
            if Year != Time:   
                Annual = super().GetCarbon(Graph, Year, Cumulative)
                Output_annual = (Annual - (Annual * ((0.5) ** ((Time - Year)/self.HalfLife)))) - \
                    (Annual - (Annual * ((0.5) ** ((Time - Year - 1)/self.HalfLife))))
                Total += Output_annual
        self.__PastCarbon[Time] = Total
        return Total
    
    def CountCarbon(self, Graph: wp.WPGraph, Time: int, Cumulative: bool = True) -> float:
        ''' CountCarbon Documentation

        La fonction CountCarbon sert à faire le cumulatif des flux annuels 
        de 0 jusqu'à l'année demandé pour un noeud en particulier grâce à la
        fonction GetCarbon. En d'autres mots, la fonction CountCarbon sert
        à calculer les stocks présent dans un noeud grâce à l'ensemble
        des flux en provenance des nodes parents depuis le début.

        Args: 
            Graph (nx.DiGraph): le DiGraph utilisé pour construire le réseau
            Time (int): Le temps en année
            Cumulative (bool): To be implemented

        Returns: 
            float: Le cumulatif des fluxs, donc le stock de carbone présent
            dans une noeud (self) à un temps donnée (Time)

        '''
        try:
            Total = 0
            for Year in range(Time + 1):    
                Annual = super().GetCarbon(Graph, Year, Cumulative)
                Restant = Annual * ((0.5) ** ((Time - Year)/self.HalfLife))
                Total += Restant
            return Total
        except RecursionError:
            raise  RecursionNode("Un maximum de demande a été effectué. \
                                 Une boucle entre des ProportionNode est présente")          


class RecyclingNode(ProportionNode):
    def __init__(self, NAME: str):
        super().__init__(NAME)
        self.__PastCarbon = {}
    
    def GetCarbon(self, Graph: wp.WPGraph, Time: int, Cumulative: bool = True) -> float:
        if Time in self.__PastCarbon:
            return self.__PastCarbon[Time]
        Total = 0
        for Year in range(Time + 1): 
            if Year + 1 == Time:
                Total += super().GetCarbon(Graph, Year, Cumulative)
        self.__PastCarbon[Time] = Total
        return Total
    
    def CountCarbon(self, Graph: wp.WPGraph, Time: int, Cumulative: bool = True) -> float:
        Total = super().GetCarbon(Graph, Time, Cumulative)
        return Total

class PoolNode(ProportionNode):
    def __init__(self, NAME):
        super().__init__(NAME)
        
    def CountCarbon(self, Graph: wp.WPGraph, Time: int, Cumulative: bool = True) -> float:
        ''' CountCarbon Documentation
        
        La fonction CountCarbon sert à faire le cumulatif des flux annuels 
        de 0 jusqu'à l'année demandé pour un noeud en particulier grâce à la
        fonction GetCarbon. En d'autres mots, la fonction CountCarbon sert
        à calculer les stocks présent dans un noeud grâce à l'ensemble
        des flux en provenance des nodes parents depuis le début.
        
        Args: 
            Graph (nx.DiGraph): le DiGraph utilisé pour construire le réseau
            Time (int): Le temps en année
            Cumulative (bool): To be implemented
            
        Returns: 
            float: Le cumulatif des fluxs, donc le stock de carbone présent
            dans une noeud (self) à un temps donnée (Time)
        
        '''
        try:
            Total = 0
            for Year in range(Time + 1):
                Total += super().GetCarbon(Graph, Year, Cumulative)  
            return Total
        except RecursionError:
            raise  RecursionNode("Un maximum de demande a été effectué. \
                                 Une boucle entre des ProportionNode est présente")    

# Factory -------------------------------------------------------------------- 

class GraphFactory(): 
    def __init__(self, DIR: str):
        self._DIRECTORY = DIR
        with open(self._DIRECTORY, "r") as files: 
            self._DATA = json.load(files)
        self._GRAPHNAME = []
        self._GRAPHS = []
        
        Graph_num = 0
        keys = list(self.GetData.keys())
        keys.sort()
        for KEY in keys:
            self._GRAPHNAME.append(KEY.upper())
            self._GRAPHS.append(wp.WPGraph(KEY))
            _EDGES = self.GetData[KEY].get('Edges', {})
            _NODES = self.GetData[KEY].get('Nodes', {})
            _TOPNODES = set([int(ID) for ID in _NODES]) - \
                set([data['To'] for keys, data in _EDGES.items()])
            _LASTNODES = set([int(ID) for ID in _NODES]) - \
                set([data['From'] for keys, data in _EDGES.items()])
        
            node_map = {}
            for node_id, node_data in _NODES.items():
                if int(node_id) in _TOPNODES:    
                    new_node =  TopNode(node_data['Name'], [0], [10])  # Reste à mettre le input
                elif int(node_id) in _LASTNODES:
                    new_node = PoolNode(node_data['Name'])
                elif node_data["Half-life"] > 0:
                    new_node = DecayNode(node_data['Name'], node_data['Half-life'])
                elif node_data['Recycling'] == 1: 
                    new_node = RecyclingNode(node_data['Name'])
                else: new_node = ProportionNode(node_data['Name'])
                self._GRAPHS[Graph_num].AddNode(new_node)
                node_map[int(node_id)] = new_node        

            for edge_id, edge_data in _EDGES.items():
                From = node_map[edge_data['From']]
                To = node_map[edge_data['To']]
                self._GRAPHS[Graph_num].AddEdge(From, To, edge_data['Values'])  
            Graph_num += 1     
    

    @property
    def GetGraphName(self) -> list:
        return self._GRAPHNAME
    
    @GetGraphName.setter
    def GetGraphName(self, input):
        raise ConstError("Graph name can't be changed outside Miro")
    
    def GetGraph(self, Name) -> wp.WPGraph:
        Names = self.GetGraphName
        Index = Names.index(Name)
        return self._GRAPHS[Index]
        
    @property
    def GetData(self):
        return self._DATA
    
    @GetData.setter
    def GetData(self, input):
        raise ConstError("Data from graphs can't be changed outside Miro")   