""" 
Pour faire un profile manuel :
    cProfile.run('addition(5, 3)')
    Dans un terminal : python -m cProfile -s time myscript.py

import matplotlib.pyplot as plt
import cProfile # Pour le run time
"""

import sys
from IPython.core.ultratb import ColorTB # Couleur powershell
sys.excepthook = ColorTB()

import json
import warnings # Maybe
from abc import ABCMeta, abstractmethod

sys.path.append("../MoSiR")
import MoSiR.NetworkxGraph as wp


# Exception handling ---------------------------------------------------------

class ConstError(Exception):
    def __init__(self, message: str):    
        super().__init__(message)

# gérer les recursion
class RecursionNode(RecursionError):
    def __init__(self, message: str):
        super().__init__(message)
        

# Node class -----------------------------------------------------------------

# Introduire interface de cashing
#class Caching():
#    def __init__(self):
#        self._GetFluxOutCache = {}
#        self._Open = False
#   def get
#   def set 
 
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
    def GetFluxOut(self, Graph: WPGraph, Time: int, Cumulative: bool = False) -> float:
        ''' GetFluxOut Documentation
        
        Cette fonction sert à retracer le flux de carbone sortant d'un noeud. 
        
        Args: 
            Graph : Le Graph qui a servit à construire le réseau
            Time (int): Le temps en année
            Cumulative (bool): To be implemented
            
        Returns:
            float: Une quantité de carbone
        '''
        pass
    
    @abstractmethod
    def GetFluxIn(self, Graph: WPGraph, Time: int, Cumulative: bool = False) -> float:
        ''' GetFluxIn Documentation
        
        Cette fonction sert à retracer le flux de carbone entrant d'un noeud. 
        
        Args: 
            Graph : Le Graph qui a servit à construire le réseau
            Time (int): Le temps en année
            Cumulative (bool): To be implemented
            
        Returns:
            float: Une quantité de carbone
        '''
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
    def __init__(self, NAME: str):
        super().__init__(NAME)
        self._Time = []
        self._Quantities = []
        
    @property           
    def Time(self):
        return self._Time
    
    @Time.setter
    def Time(self, InputValue: list[int]):
        self._Time = InputValue
        
    @property
    def Quantities(self):
        return self._Quantities

    @Quantities.setter
    def Quantities(self, InputValue: list[float]):
        self._Quantities = InputValue
        
    def _GetQuantityTime(self, When: int) -> float:
        try: 
            index = self._Time.index(When)
            return self._Quantities[index]
        except ValueError:
            return 0
    
    def GetFluxOut(self, Graph: WPGraph, Time: int, Cumulative: bool = False) -> float:
        return self._GetQuantityTime(Time)
    
    def GetFluxIn(self, Graph: WPGraph, Time: int, Cumulative: bool = False) -> float:
        return self._GetQuantityTime(Time)
    
    def GetStock(self, Graph: WPGraph, Time: int, Cumulative: bool = False) -> float:
        return self._GetQuantityTime(Time)
    
class ProportionNode(IndustrialNode):
    def __init__(self, NAME: str):
        super().__init__(NAME)
        #self.__PastCarbon = {}
    
    def GetFluxOut(self, Graph: WPGraph, Time: int, Cumulative: bool = False) -> float:
        Total = 0
        if Cumulative == False:
            #if Time in self.__PastCarbon:
            #    return self.__PastCarbon[Time]
            for Parent in Graph.GetPredecessors(self):
                ProportionParent = self._GetValueTime(Graph.GetEdgeProportions(Parent, self), Time)
                if ProportionParent == 0:
                    continue
                ParentCarbon = Parent.GetFluxOut(Graph, Time, Cumulative)
                Total += ProportionParent * ParentCarbon
            #self.__PastCarbon[Time] = Total
            return Total
        else:
            for Timestep in range(Time + 1):
                #if Timestep in self.__PastCarbon:
                #    Total += self.__PastCarbon[Timestep]
                #    continue
                for Parent in Graph.GetPredecessors(self):
                    ProportionParent = self._GetValueTime(Graph.GetEdgeProportions(Parent, self), Timestep)
                    if ProportionParent == 0:
                        continue
                    ParentCarbon = Parent.GetFluxOut(Graph, Timestep, Cumulative = False)
                    Total += ProportionParent * ParentCarbon
            return Total
        
    def GetFluxIn(self, Graph: WPGraph, Time: int, Cumulative: bool = False) -> float:
        return self.GetFluxOut(Graph, Time, Cumulative)
    
    def GetStock(self, Graph: WPGraph, Time: int, Cumulative: bool = False) -> int:
        return print('Aucun carbone ne réside dans ce noeud ({self.NAME}), seulement des flux le traverse')

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
    
    def GetFluxOut(self, Graph: WPGraph, Time: int, Cumulative: bool = False) -> float:
        #if Time in self.__PastCarbon:
        #    return self.__PastCarbon[Time]
        Total = 0
        if Cumulative == False:
            for Year in range(Time + 1): 
                if Year != Time:   
                    Annual = super().GetFluxOut(Graph, Year, Cumulative)
                    Output_annual = (Annual * ((0.5) ** ((Time - Year - 1)/self.HalfLife))) - \
                        (Annual * ((0.5) ** ((Time - Year)/self.HalfLife)))
                    Total += Output_annual
           # self.__PastCarbon[Time] = Total
            return Total
        else: 
            for Year in range(Time + 1): 
                if Year != Time:   
                    Annual = super().GetFluxOut(Graph, Year, Cumulative = False)
                    Output_annual = Annual - (Annual * ((0.5) ** ((Time - Year)/self.HalfLife)))
                    Total += Output_annual
            return Total
        
    def GetFluxIn(self, Graph: WPGraph, Time: int, Cumulative: bool = False) -> float:
        Total = 0
        if Cumulative == False:  
            Annual = super().GetFluxOut(Graph, Time, Cumulative)
            return Annual
        else: 
            for Year in range(Time + 1): 
                Annual = super().GetFluxOut(Graph, Year, Cumulative = False)
                Total += Annual
            return Total 
    
    def GetStock(self, Graph: WPGraph, Time: int, Cumulative: bool = False) -> float:
        ''' GetStock Documentation

        La fonction GetStock sert à faire le cumulatif des flux annuels 
        de 0 jusqu'à l'année demandé pour un noeud en particulier grâce à la
        fonction GetFluxOut. En d'autres mots, la fonction GetStock sert
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
                Annual = super().GetFluxOut(Graph, Year, Cumulative = False)
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
    
    def GetFluxOut(self, Graph: WPGraph, Time: int, Cumulative: bool = False) -> float:
        #if Time in self.__PastCarbon:
        #    return self.__PastCarbon[Time]
        Total = 0
        if Cumulative == False:
            for Year in range(Time + 1): 
                if Year + 1 == Time:
                    Total += super().GetFluxOut(Graph, Year, Cumulative)
            #self.__PastCarbon[Time] = Total
            return Total
        else:
            for Year in range(Time):
                Total += super().GetFluxOut(Graph, Year, Cumulative = False)
            return Total
    
    def GetFluxIn(self, Graph: WPGraph, Time: int, Cumulative: bool = False) -> float:
        Total = 0
        if Cumulative == False:
            Total += super().GetFluxOut(Graph, Time, Cumulative)
            #self.__PastCarbon[Time] = Total
            return Total
        else:
            for Year in range(Time + 1):
                Total += super().GetFluxOut(Graph, Year, Cumulative = False)
            return Total
    
    def GetStock(self, Graph: WPGraph, Time: int, Cumulative: bool = False) -> float:
        Total = super().GetFluxOut(Graph, Time, Cumulative)
        return Total

class PoolNode(ProportionNode):
    def __init__(self, NAME):
        super().__init__(NAME)
        
    def GetFluxIn(self, Graph: WPGraph, Time: int, Cumulative: bool = False) -> float:
        Total = 0
        if Cumulative == False:  
            Annual = super().GetFluxOut(Graph, Time, Cumulative)
            return Annual
        else: 
            for Year in range(Time + 1): 
                Annual = super().GetFluxOut(Graph, Year, Cumulative = False)
                Total += Annual
            return Total    
    
    def GetFluxOut(self, Graph: WPGraph, Time: int, Cumulative: bool = False) -> float:
        warnings.warn(f'Aucun carbone sortant de la node {self.NAME}', stacklevel = 2)
      
    def GetStock(self, Graph: WPGraph, Time: int, Cumulative: bool = False) -> float:
        ''' GetStock Documentation   
        Args: 
            Graph (nx.DiGraph): le DiGraph utilisé pour construire le réseau
            Time (int): Le temps en année
            Cumulative (bool): To be implemented
            
        Returns: 
            float: Le cumulatif des fluxs, donc le stock de carbone présent
            dans une noeud (self) à un temps donnée (Time)
        '''
        try:
            warnings.warn('Le résultat est le même que le cumulatif des flux in', stacklevel = 2)
            return self.GetFluxIn(Graph, Time, Cumulative = True)
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
                    new_node =  TopNode(node_data['Name'])
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
    
    def GetGraph(self, Name) -> WPGraph:
        Names = self.GetGraphName
        Index = Names.index(Name)
        return self._GRAPHS[Index]
        
    @property
    def GetData(self):
        return self._DATA
    
    @GetData.setter
    def GetData(self, input):
        raise ConstError("Data from graphs can't be changed outside Miro")   