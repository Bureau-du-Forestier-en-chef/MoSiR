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
    def GetCarbon(self, Graph: nx.DiGraph, Time: int, Cumulative: bool = True) -> float:
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
    
    def GetCarbon(self, Graph: nx.DiGraph, Time: int, Cumulative: bool = True) -> float:
        return self._GetQuantityTime(Time)
        
class ProportionNode(IndustrialNode):
    def __init__(self, NAME: str):
        super().__init__(NAME)
    
    def GetCarbon(self, Graph: nx.DiGraph, Time: int, Cumulative: bool = True) -> float:
        Total = 0
        for Parent in Graph.predecessors(self):
            ProportionParent = self._GetValueTime(Graph.get_edge_data(Parent, self)["Proportion"], Time)
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
    
    def GetCarbon(self, Graph: nx.DiGraph, Time: int, Cumulative: bool = True) -> float:
        Total = 0
        for Year in range(Time + 1): 
            if Year == Time:
                Total += 0
            else:    
                Annual = super().GetCarbon(Graph, Year, Cumulative)
                Output_annual = (Annual - (Annual * ((0.5) ** ((Time - Year)/self.HalfLife)))) - \
                    (Annual - (Annual * ((0.5) ** ((Time - Year - 1)/self.HalfLife))))
                Total += Output_annual
        return Total

class RecyclingNode(ProportionNode):
    def __init__(self, NAME: str):
        super().__init__(NAME)
    
    def GetCarbon(self, Graph: nx.DiGraph, Time: int, Cumulative: bool = True) -> float:
        Total = 0
        for Year in range(Time + 1): 
            if Year + 1 == Time:
                Total += super().GetCarbon(Graph, Year, Cumulative)
            else:    
                Total += 0 # Pour Guillaume
        return Total

class PoolNode(ProportionNode):
    def __init__(self, NAME):
        super().__init__(NAME)
        
    def CountCarbon(self, Graph: nx.DiGraph, Time: int, Cumulative: bool = True) -> float:
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
#B = ProportionNode('B')
#C = RecyclingNode('C')
#D = ProportionNode('D')
##E = DecayNode('E', 20)
##F = ProportionNode('F')
#G = PoolNode('G')
#
#test1.add_node(TopNode('A', [0], [10]))
#
#test1.add_node(A)
#test1.add_node(B)
#test1.add_node(C)
#test1.add_node(D)
#test1.add_node(G)
#
#test1.add_edge(A, B, Proportion = 1)
#test1.add_edge(B, C, Proportion = 1)
#test1.add_edge(C, D, Proportion = 1)
#test1.add_edge(D, G, Proportion = 0.5)

# Factory -------------------------------------------------------------------- 

class Edge(): 
    def __init__(self, RECYCLING: bool, VALUES: list[float], OVERFLOW: bool):
        self.__RECYCLING__ = RECYCLING
        self.__VALUES__ = VALUES
        self.__OVERFLOW__ = OVERFLOW
        
    @property
    def RECYCLING(self):
        return self.__RECYCLING__
    
    @RECYCLING.setter
    def RECYCLING(self, input):
       raise ConstError("Original value from Miro can't be changed")
   
    @property
    def OVERFLOW(self):
        return self.__OVERFLOW__
    
    @OVERFLOW.setter
    def OVERFLOW(self, input):
       raise ConstError("Original value from Miro can't be changed")
   
    def GetValueTime(self, Time: int) -> float:
        return self.__VALUES__[min(Time, len(self.__VALUES__) - 1)]

class GraphFactory(): 
    def __init__(self, DIR: str):
        self._DIRECTORY = DIR
        with open(self._DIRECTORY, "r") as files: 
            self._DATA = json.load(files)
        self._GRAPHNAME = []
        self._GRAPHS = []
        for KEY, VALUES in self._DATA.items():
            self._GRAPHNAME.append(KEY.upper())
            self._GRAPHS.append(WPGraph(KEY.upper(), VALUES))

    @property
    def GetGraphName(self) -> list:
        return self._GRAPHNAME
    
    @GetGraphName.setter
    def GetGraphName(self, input):
        raise ConstError("Graph name can't be changed")
    
    @property
    def GetData(self):
        return self._DATA
    
    @GetData.setter
    def GetData(self, input):
        raise ConstError("Data from graphs can't be changed")
    
    def GetNodes(self, GraphName: str):
        return self._DATA[GraphName].get('Nodes', {})
    
    def GetEdges(self, GraphName: str):
        return self._DATA[GraphName].get('Edges', {})
        
class WPGraph():
    def __init__(self, KEY, VALUES):
        self._GRAPH = nx.DiGraph()
        self._NAME = KEY
        _EDGES = VALUES.get('Edges', {})
        _NODES = VALUES.get('Nodes', {})
        _TOPNODE = set([int(ID) for ID in _NODES]) - \
            set([data['To'] for keys, data in _EDGES.items()])
        _ENDNODE = set([int(ID) for ID in _NODES]) - \
            set([data['From'] for keys, data in _EDGES.items()])
        
        node_map = {}
        
        # Prendre le foor loop et le mettre dans le Factory?
        
        for node_id, node_data in _NODES.items():
            new_node = ProportionNode(node_data['Name'])
            if int(node_id) in _TOPNODE:    
                new_node =  TopNode(node_data['Name'], [0], [10])   
            elif int(node_id) in _ENDNODE:
                new_node = PoolNode(node_data['Name'])
            elif node_data["Half-life"] > 0:
                new_node = DecayNode(node_data['Name'], node_data['Half-life'])
            elif node_data['Recycling'] == 1: 
                new_node = RecyclingNode(node_data['Name'])
            self._GRAPH.add_node(new_node)
            node_map[int(node_id)] = new_node        

        for edge_id, edge_data in _EDGES.items():
            From = node_map[edge_data['From']]
            To = node_map[edge_data['To']]
            self._GRAPH.add_edge(From, To, Proportion = edge_data['Values'])

        
test2 = GraphFactory('C:/Users/langa3/Documents/Script/Panier_produit/Graphs.json')

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
   
for i in test2._GRAPHS[0]._GRAPH.nodes(): 
    if type(i) == PoolNode:
        print(f"La node {i._NAME} contient {i.CountCarbon(test2._GRAPHS[0]._GRAPH, 10)} à l'année 10")

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

# Old code -------------------------------------------------------------------
# G = nx.Graph()
# p0 = point(0,0)
# p1 = point(1,1)
# 
# G.add_node(0, data=p0)
# G.add_node(1, data=p1)
# G.add_edge(0,1, weight=4)
# G[0]
# AtlasView({1: {'weight': 4}})  #in networkx 1.x this is actually a dict. In 2.x it is an "AtlasView"
 
# class GraphFactory(): # Intrant sera un JSON file
#     def __init__(self, DIR: str):
#         self._DIRECTORY = DIR
#         with open(DIR, "r") as files: 
#             self.__DATA__ = json.load(files)
#         nom = []
#         self.__GRAPS = []
#         for GRAPH in self.__DATA__:
#             nom.append(GRAPH.upper())
#             #setattr(self, f"__{GRAPH.upper()}__", self.__DATA__[GRAPH])
#             #setattr(self, f"__{GRAPH.upper()}_NODES__", self.__DATA__[GRAPH].get('Nodes', {}))
#             #setattr(self, f"__{GRAPH.upper()}_EDGES__", self.__DATA__[GRAPH].get('Edges', {}))
#             setattr(self, f"__{GRAPH.upper()}__", nx.DiGraph())
#             NODES = self.__DATA__[GRAPH].get('Nodes', {}).items()
#             EDGES = self.__DATA__[GRAPH].get('EDGES', {}).items()
#             
#             NODES_ID = [ID for ID in NODES]
#             TO_EDGES = [edge_data['To'] for edge_data in EDGES.values()]
#             
#             FIRSTNODE = set(NODES_ID) - set(TO_EDGES)
#             
#             for node_id, node_data in NODES:
#                 setattr(self, f"_{node_id}", ProportionNode(node_data['Name']))
#                 getattr(self, f"__{GRAPH.upper()}__").add_node(f"_{node_id}")
#             for edge_id, edge_data in EDGES:
#                 getattr(self, f"__{GRAPH.upper()}__").add_edge(edge_data['From'], 
#                                                                edge_data['To'], 
#                                                                Proportion = edge_data['Values'])
# 

# setattr(self._GRAPH, f"_{node_id}", DecayNode(node_data['Name']))

#test = [0, 1, 2, 3, 4, 5, 6]
#
#for i in test:
#    while i < 4:
#        print(f'{i} est en bas de 4')
#        break
#    else: 
#        print('yo')
#        break