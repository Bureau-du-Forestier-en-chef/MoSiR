# -*- coding: UTF-8 -*-
"""
Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""
import json
import warnings # Maybe
from MoSiR import networkx_graph as wp
from MoSiR import mosir_exceptions as me
from abc import ABCMeta, abstractmethod

# Caching --------------------------------------------------------------------
class Caching():
    cache_open = True
    def __init__(self):
        self.__flux_cache = {}
    
    @staticmethod
    def is_open():
        return Caching.cache_open
    
    @staticmethod
    def set_is_open(value_input: bool):
        Caching.cache_open = value_input
    
    @property    
    def flux_cache(self):
        if Caching.is_open() is True:
            return self.__flux_cache
    
    @flux_cache.setter
    def flux_cache(self):
        raise me.ConstError("Cache must be modify with set_flux_cache")

    def set_flux_cache(self, timestep: int, value: float):
        if Caching.is_open() is True:
            self.__flux_cache[timestep] = value 
            
    def get_flux_cache(self, timestep: int):
        if Caching.is_open() is True:
            return self.__flux_cache[timestep]
    
    def reset_flux_cache(self):
        if Caching.is_open() is True:
            self.__flux_cache = {}
            
# Node class -----------------------------------------------------------------
 
class WPGraph():
    pass

class IndustrialNode(metaclass = ABCMeta): # aller voir la doc ABC
    def __init__(self, LOCALNAME: str):
        self._NAME = LOCALNAME
        
    def _get_value_time(self, values: list[float], time: int) -> float:
        return values[min(time, len(values) - 1)]
    
    @property
    def NAME(self):
        return self._NAME
    
    @NAME.setter
    def NAME(self, input):
       raise me.ConstError("Node name can't be changed")
    
    @abstractmethod
    def get_flux_out(self, graph: WPGraph, time: int, cumulative: bool = False) -> float:
        ''' 
            To do
        '''
        pass
    
    @abstractmethod
    def get_flux_in(self, graph: WPGraph, time: int, cumulative: bool = False) -> float:
        ''' 
            To do
        '''
        pass
    
    def __hash__(self): 
        return hash(self.NAME)
    
    def __eq__(self, other):
        return self.NAME == other.NAME   
    
    def __ne__(self, other):
        return not self.__eq__(other)
    
    def __gt__(self, other):
        return self.NAME > other.NAME
    
    def __ge__(self, other):
        return self.NAME >= other.NAME
    
    def __lt__(self, other):
        return self.NAME < other.NAME
      
    def __le__(self, other):
        return self.NAME <= other.NAME
        
class TopNode(IndustrialNode):
    def __init__(self, NAME: str):
        super().__init__(NAME)
        self._time = []
        self._quantities = []
        
    @property           
    def time(self):
        return self._time
    
    @time.setter
    def time(self, input_value: list[int]):
        self._time = input_value
        
    @property
    def quantities(self):
        return self._quantities

    @quantities.setter
    def quantities(self, input_value: list[float]):
        self._quantities = input_value
        
    def _get_quantity_time(self, when: int) -> float:
        try: 
            index = self._time.index(when)
            return self._quantities[index]
        except ValueError:
            return 0
    
    def get_flux_out(self, graph: WPGraph, time: int, cumulative: bool = False) -> float:
        if cumulative == False:
            return self._get_quantity_time(time)
        elif cumulative == True:
            total = 0
            for timestep in range(time + 1):
                total += self._get_quantity_time(timestep)
            return total

    def get_flux_in(self, graph: WPGraph, time: int, cumulative: bool = False) -> float:
        return self.get_flux_out(graph, time, cumulative= cumulative)

    def get_stock(self, graph: WPGraph, time: int, cumulative: bool = False) -> float:
        warnings.warn(f'Aucun carbone ne résident dans le noeud {self.NAME},\
                       seulement des flux le traverse', stacklevel= 2)
        return 0

class ProportionNode(IndustrialNode):
    def __init__(self, NAME: str):
        super().__init__(NAME)
        self.__pn_cache = Caching()
    
    def past_carbon(self):
        return self.__pn_cache
    
    def get_flux_out(self, graph: WPGraph, time: int, cumulative: bool = False) -> float:
        if cumulative == False:
            if time in self.past_carbon().flux_cache:
                return self.past_carbon().get_flux_cache(time)
            flux_out = self.get_flux_in(graph, time, cumulative)
            self.past_carbon().set_flux_cache(time, flux_out)
            return flux_out
        if cumulative == True:
            total = 0
            for timestep in range(time + 1):
                if timestep in self.past_carbon().flux_cache:
                    total += self.past_carbon().get_flux_cache(timestep)
                    continue
                flux_out = self.get_flux_in(graph, timestep, cumulative)
                self.past_carbon().set_flux_cache(timestep, flux_out)
                total += flux_out
            return total
        
    def get_flux_in(self, graph: WPGraph, time: int, cumulative: bool = False) -> float:
        total = 0
        if cumulative == False:
            for parent in graph.get_predecessors(self):
                proportion_parent = self._get_value_time(graph.get_edge_proportions(parent, self), time)
                if proportion_parent == 0:
                    continue
                parent_carbon = parent.get_flux_out(graph, time, cumulative)
                total += proportion_parent * parent_carbon
            return total
        else:
            for timestep in range(time + 1):
                for parent in graph.get_predecessors(self):
                    proportion_parent = self._get_value_time(graph.get_edge_proportions(parent, self), timestep)
                    if proportion_parent == 0:
                        continue
                    parent_carbon = parent.get_flux_out(graph, timestep, cumulative= False)
                    total += proportion_parent * parent_carbon
            return total

    def get_stock(self, graph: WPGraph, time: int, cumulative: bool = False) -> int:
        warnings.warn(f'Aucun carbone ne résident dans le noeud {self.NAME},\
                       seulement des flux le traverse', stacklevel= 2)
        return 0

class DecayNode(ProportionNode):
    def __init__(self, NAME: str, HalfLife: int):
        super().__init__(NAME)
        self._HalfLife = HalfLife
        self.__dn_cache = Caching()
    
    def past_carbon(self):
        return self.__dn_cache
        
    @property
    def HalfLife(self):
        return self._HalfLife

    @HalfLife.setter 
    def HalfLife(self, Value):
       self._HalfLife = Value
    
    def get_flux_out(self, graph: WPGraph, time: int, cumulative: bool = False) -> float:
        total = 0
        if cumulative == False:
            if time in self.past_carbon().flux_cache:
                return self.past_carbon().get_flux_cache(time)
            for timestep in range(time + 1): 
                if timestep != time:  
                    flux_in = self.get_flux_in(graph, timestep, cumulative)
                    output_flux_out = (flux_in * ((0.5) ** ((time - timestep - 1)/self.HalfLife))) - \
                        (flux_in * ((0.5) ** ((time - timestep)/self.HalfLife)))
                    total += output_flux_out
            self.past_carbon().set_flux_cache(time, total)
            return total
        else: 
            for timestep in range(time + 1):
                if timestep != time:   
                    flux_in = self.get_flux_in(graph, timestep, cumulative= False)
                    output_flux_out = flux_in - (flux_in * ((0.5) ** ((time - timestep)/self.HalfLife)))
                    total += output_flux_out
            return total
        
    def get_flux_in(self, graph: WPGraph, time: int, cumulative: bool = False) -> float:
        total = 0
        if cumulative == False:  
            Annual = super().get_flux_in(graph, time, cumulative)
            return Annual
        else: 
            for Year in range(time + 1): 
                Annual = super().get_flux_in(graph, Year, cumulative= False)
                total += Annual
            return total 
    
    def get_stock(self, graph: WPGraph, time: int, cumulative: bool = False) -> float:
        ''' get_stock Documentation

        La fonction get_stock sert à faire le cumulatif des flux annuels 
        de 0 jusqu'à l'année demandé pour un noeud en particulier grâce à la
        fonction get_flux_out. En d'autres mots, la fonction get_stock sert
        à calculer les stocks présent dans un noeud grâce à l'ensemble
        des flux en provenance des nodes parents depuis le début.

        Args: 
            Graph (nx.DiGraph): le DiGraph utilisé pour construire le réseau
            time (int): Le temps en année
            cumulative (bool): To be implemented

        Returns: 
            float: Le cumulatif des fluxs, donc le stock de carbone présent
            dans une noeud (self) à un temps donnée (time)

        '''
        try:
            total = 0
            for Year in range(time + 1): 
                Annual = self.get_flux_in(graph, Year, cumulative= False)
                Restant = Annual * ((0.5) ** ((time - Year)/self.HalfLife))
                total += Restant
            return total
        except RecursionError:
            raise me.RecursionNode("Un maximum de demande a été effectué. \
                                 Une boucle entre des ProportionNode est présente")          

class RecyclingNode(ProportionNode):
    def __init__(self, NAME: str):
        super().__init__(NAME)
        self.__rn_cache = Caching()
    
    def past_carbon(self):
        return self.__rn_cache

    def get_flux_out(self, graph: WPGraph, time: int, cumulative: bool = False) -> float:
        total = 0
        if cumulative == False:
            if time in self.past_carbon().flux_cache:
                return self.past_carbon().get_flux_cache(time)
            if time == 0:
                return 0
            total += super().get_flux_in(graph, time - 1, cumulative)
            self.past_carbon().set_flux_cache(time, total)
            return total
        else:
            for timestep in range(time + 1):
                total += self.get_flux_out(graph, timestep, cumulative= False)
            return total
    
    def get_flux_in(self, graph: WPGraph, time: int, cumulative: bool = False) -> float:
        total = 0
        if cumulative == False:
            total += super().get_flux_in(graph, time, cumulative)
            return total
        else:
            for Year in range(time + 1):
                total += super().get_flux_in(graph, Year, cumulative= False)
            return total
    
    def get_stock(self, graph: WPGraph, time: int, cumulative: bool = False) -> float:
        total = self.get_flux_in(graph, time, cumulative)
        return total

class PoolNode(ProportionNode):
    def __init__(self, NAME):
        super().__init__(NAME)
        
    def get_flux_in(self, graph: WPGraph, time: int, cumulative: bool = False) -> float:
        total = 0
        if cumulative == False:  
            Annual = super().get_flux_in(graph, time, cumulative)
            return Annual
        else: 
            for Year in range(time + 1): 
                Annual = super().get_flux_in(graph, Year, cumulative= False)
                total += Annual
            return total    
    
    def get_flux_out(self, graph: WPGraph, time: int, cumulative: bool = False) -> float:
        warnings.warn(f'Aucun carbone sortant de la node {self.NAME}', stacklevel= 2)
      
    def get_stock(self, graph: WPGraph, time: int, cumulative: bool = False) -> float:
        ''' get_stock Documentation   
        Args: 
            Graph (nx.DiGraph): le DiGraph utilisé pour construire le réseau
            time (int): Le temps en année
            cumulative (bool): To be implemented
            
        Returns: 
            float: Le cumulatif des fluxs, donc le stock de carbone présent
            dans une noeud (self) à un temps donnée (time)
        '''
        try:
            warnings.warn('Le résultat est le même que le cumulatif des flux in', stacklevel = 2)
            return self.get_flux_in(graph, time, cumulative= True)
        except RecursionError:
            raise me.RecursionNode("Un maximum de demande a été effectué. \
                                 Une boucle entre des ProportionNode est présente")    

# Factory -------------------------------------------------------------------- 

class GraphFactory(): 
    def __init__(self, DIR: str):
        self._DIRECTORY = DIR
        with open(self._DIRECTORY, "r") as files: 
            self._DATA = json.load(files)
        self._GRAPHNAME = []
        self._GRAPHS = []
        
        graph_num = 0
        keys = list(self.get_data.keys())
        keys.sort()
        for KEY in keys:
            self._GRAPHNAME.append(KEY)
            self._GRAPHS.append(wp.WPGraph(KEY))
            _EDGES = self.get_data[KEY].get('Edges', {})
            _NODES = self.get_data[KEY].get('Nodes', {})
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
                self._GRAPHS[graph_num].add_node(new_node)
                node_map[int(node_id)] = new_node        

            for edge_id, edge_data in _EDGES.items():
                From = node_map[edge_data['From']]
                To = node_map[edge_data['To']]
                self._GRAPHS[graph_num].add_edge(From, To, edge_data['Values'])  
            graph_num += 1     
    
    @property
    def get_graph_name(self) -> list:
        return self._GRAPHNAME
    
    @get_graph_name.setter
    def get_graph_name(self, input):
        raise me.ConstError("Graph name can't be changed outside Miro")
    
    def get_graph(self, name) -> WPGraph:
        Names = self.get_graph_name
        Index = Names.index(name)
        return self._GRAPHS[Index]
        
    @property
    def get_data(self):
        return self._DATA
    
    @get_data.setter
    def get_data(self, input):
        raise me.ConstError("Data from graphs can't be changed outside Miro")   