#+ Last update : 2023-09-25
# Author : Gabriel Landry

""" 
Pour faire un profile manuel :
    cProfile.run('addition(5, 3)')
    Dans un terminal : python -m cProfile -s time myscript.py

# Fichier pour générer une table dummy
df = {
    'Time': np.repeat(np.arange(1, 151), 3),
    'Species': np.array(['A', 'B', 'C'] * 150),
    'Tonne_C': np.random.uniform(20, 60, 450)
}

df = pd.DataFrame(df)
df.to_csv('C:/Users/langa3/Documents/Script/Panier_produit/dummy_table.csv', 
          index = False, sep = ';')

"""
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import cProfile # Pour le run time
import json
import networkx as nx
from abc import ABCMeta, abstractmethod

# Test output avec couleur ---------------------------------------------------

import sys
from IPython.core.ultratb import ColorTB

sys.excepthook = ColorTB()

# Test convolve -----------------------------------------------

'''
Insane la fonction, passe le premier vecteur en ordre d'occurance au deuxième,
exemple : 1 * 10, 1 * 20 + 5 * 10, 1 * 100 + 5 * 20, et ainsi de suite
'''

a = [1, 5]
b = [10, 20, 100, 1000]

c = np.convolve(a, b)
c

# Exception handling ---------------------------------------------------------

class ConstError(Exception):
    def __init__(self, message: str):            
        super().__init__(message) # Super vient chercher la class parent

# gérer les recursion
class RecursionNode(RecursionError):
    def __init__(self, message: str):            
        super().__init__(message) # Super vient chercher la class parent
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
    def GetCarbon(self, Graph: WPGraph, Time: int, Cumulative: bool = True) -> float:
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
        pass
    
    def __hash__(self): # Aller voir plus en détail ce que fait le hashing
        return hash(self.NAME)
    
    def __eq__(self, Other):
        return self.NAME == Other.NAME   
      
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
    
    def GetCarbon(self, Graph: WPGraph, Time: int, Cumulative: bool = True) -> float:
        return self._GetQuantityTime(Time)
        
class ProportionNode(IndustrialNode):
    def __init__(self, NAME: str):
        super().__init__(NAME)
        
    #  À y revenir
    #def _GutsofGetCarbon(self, Proportion: list[float], Values: list[float]) -> float:
        
    
    def GetCarbon(self, Graph: WPGraph, Time: int, Cumulative: bool = True) -> float:
        Total = 0
        for Parent in Graph.GetPredecessors(self):
            ProportionParent = self._GetValueTime(Graph.GetEdgeProportions(Parent, self), Time)
            if ProportionParent == 0:
                continue
            ParentCarbon = Parent.GetCarbon(Graph, Time, Cumulative) # Récursivité
            Total += ProportionParent * ParentCarbon
        return Total

class DecayNode(ProportionNode):
    def __init__(self, NAME: str, HalfLife: int):
        super().__init__(NAME)
        self._HalfLife = HalfLife
        
    @property
    def HalfLife(self):
        return self._HalfLife
    
    @HalfLife.setter # À voir si ça vaut la peine de la protéger
    def HalfLife(self, Value):
       self._HalfLife = Value
    
    def GetCarbon(self, Graph: WPGraph, Time: int, Cumulative: bool = True) -> float:
        Total = 0
        for Year in range(Time + 1): 
            if Year != Time:   
                Annual = super().GetCarbon(Graph, Year, Cumulative)
                Output_annual = (Annual - (Annual * ((0.5) ** ((Time - Year)/self.HalfLife)))) - \
                    (Annual - (Annual * ((0.5) ** ((Time - Year - 1)/self.HalfLife))))
                Total += Output_annual
        return Total
    
    def CountCarbon(self, Graph: WPGraph, Time: int, Cumulative: bool = True) -> float:
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
    
    def GetCarbon(self, Graph: WPGraph, Time: int, Cumulative: bool = True) -> float:
        Total = 0
        for Year in range(Time + 1): 
            if Year + 1 == Time:
                Total += super().GetCarbon(Graph, Year, Cumulative)
        return Total

class PoolNode(ProportionNode):
    def __init__(self, NAME):
        super().__init__(NAME)
        
    def CountCarbon(self, Graph: WPGraph, Time: int, Cumulative: bool = True) -> float:
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

#test1 = nx.DiGraph()
#
#A = TopNode('A', [0], [10])  
#B = DecayNode('B', 3)
#C = DecayNode('C', 3)
#D = DecayNode('D', 3)
#E = RecyclingNode('E')
#F = PoolNode('F')
###F = ProportionNode('F')
##G = PoolNode('G')
##
##test1.add_node(TopNode('A', [0], [10]))
##
#test1.add_node(A)
#test1.add_node(B)
#test1.add_node(C)
#test1.add_node(D)
#test1.add_node(E)
#test1.add_node(F)
##test1.add_node(G)
##
#test1.add_edge(A, B, Proportion = [1])
#test1.add_edge(B, C, Proportion = [1])
#test1.add_edge(C, D, Proportion = [0.5])
#test1.add_edge(C, E, Proportion = [0.5])
#test1.add_edge(E, B, Proportion = [1])
#test1.add_edge(D, F, Proportion = [1])
#
#total = 0
#for i in test1.nodes():
#    if type(i) == PoolNode:
#        total += i.CountCarbon(test1, 16)
#    if type(i) == DecayNode:
#        total += i.CountCarbon(test1, 16)
#    if type(i) == RecyclingNode:
#        total += i.GetCarbon(test1, 17)
#    print(total)
#

# Factory -------------------------------------------------------------------- 

#class Edge(): 
#    def __init__(self, RECYCLING: int, VALUES: list[float], OVERFLOW: bool):
#        self._RECYCLING = RECYCLING
#        self._VALUES = VALUES
#        self._OVERFLOW = OVERFLOW
#        
#    @property
#    def RECYCLING(self):
#        return self._RECYCLING
#    
#    @RECYCLING.setter
#    def RECYCLING(self, input):
#       raise ConstError("Original value from Miro can't be changed")
#   
#    @property
#    def OVERFLOW(self):
#        return self._OVERFLOW
#    
#    @OVERFLOW.setter
#    def OVERFLOW(self, input):
#       raise ConstError("Original value from Miro can't be changed")
#   
#    def GetValueTime(self, Time: int) -> float:
#        return self._VALUES[min(Time, len(self._VALUES) - 1)]
    
class GraphFactory2(): 
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
            self._GRAPHS.append(WPGraph2(KEY))
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
    
    @property
    def GetData(self):
        return self._DATA
    
    @GetData.setter
    def GetData(self, input):
        raise ConstError("Data from graphs can't be changed outside Miro")  
   
class WPGraph2():
    def __init__(self, KEY):
        super().__init__()
        self._Graph = nx.DiGraph()
        self._NAME = KEY
    
    def AddNode(self, node):
        return self._Graph.add_node(node)
    
    def AddEdge(self, From, To, Proportion_value):
        return self._Graph.add_edge(From, To, Proportion = Proportion_value)
    
    def GetEdgeProportions(self, From: IndustrialNode, To: IndustrialNode) -> list[float]:
        return self._Graph.get_edge_data(From, To)["Proportion"]
    
    def GetPredecessors(self, Node: IndustrialNode) -> list[IndustrialNode]:
        return [Parent for Parent in self._Graph.predecessors(Node)]
    
    def Nodes(self):
        return self._Graph.nodes()
    
    @property
    def GetGraphName(self):
        return self._NAME
    
    @GetGraphName.setter
    def GetGraphName(self):
        return ConstError("Graph name can't be changed outside Miro")
       
test3 = GraphFactory2('C:/Users/langa3/Documents/Script/Panier_produit/Graphs.json')

#for i in test3._GRAPHS[0].nodes():
#    print(i)

total = 0

for i in test3._GRAPHS[0].Nodes():
    if type(i) == PoolNode:
        #print(f"La node {i._NAME} contient {i.CountCarbon(test3._GRAPHS[0], 10)} à l'année 10")
        total += i.CountCarbon(test3._GRAPHS[0], 10)
    if type(i) == DecayNode:
        #print(f"La node {i._NAME} contient {i.CountCarbon(test3._GRAPHS[0], 10)} à l'année 10")
        total += i.CountCarbon(test3._GRAPHS[0], 10)
        print(total)
        
        
#total = 0
#for i in test3._GRAPHS[0].nodes():
#    if type(i) == PoolNode:
#        total += i.CountCarbon(test3._GRAPHS[0], 10)
#    elif type(i) == DecayNode:
#        total += i.CountCarbon(test3._GRAPHS[0], 10)
#    print(total)
    
    
#nx.draw(test2._GRAPHS[0]._GRAPH)
#with open('C:/Users/langa3/Documents/Script/Panier_produit/Graphs.json', "r") as files:
#    data = json.load(files)
#Pb = data.get('Produitsdubois_V2', {})
#nodes = Pb.get('Nodes', {})
#edges = Pb.get('Edges', {})
#
#edges
#
#for edge_id, edge_data in edges.items():
#    From = edge_data['From']
#    To = edge_data['To']
#    nom_from = None
#    nom_to = None
#    for node_id, node_data in nodes.items():
#        if int(node_id) == From:
#            nom_from = node_data['Name']
#        elif int(node_id) == To:
#            nom_to = node_data['Name']
#    print(f'Connection entre {nom_from} à {nom_to}')
 
# Test section --------------------------------------------------------------- 

# class CONST(object):
#     __slots__ = ()
#     FOO = 1234
# 
# CONST_1 = CONST()
# 
# print(CONST_1.FOO)    # 1234
# 
# CONST_1.FOO = 4321              # AttributeError: 'CONST' object attribute 'FOO' is read-only
# CONST_1.__dict__['FOO'] = 4321  # AttributeError: 'CONST' object has no attribute '__dict__'
# CONST_1.BAR = 5678 
