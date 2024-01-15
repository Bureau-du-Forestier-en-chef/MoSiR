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
    """ Caching Documentation

    La classe Caching sert à créer un cache pour les noeuds DecayNode et
    RecyclingNode. Le cache est un dictionnaire qui contient les fluxs
    sortant d'un noeud à un temps donné. Le cache est utilisé pour éviter
    de recalculer les fluxs sortant d'un noeud à un temps donné. Celle-ci
    se réfère au nom du noeud et au temps pour trouver le flux sortant.
    Il est donc important d'avoir des noms uniques entre les noeuds d'un
    même graphe.	

    Raises:
        me.ConstError: Le cache ne peut être modifié qu'avec la fonction
        set_flux_cache

    Returns:
        Caching: Un objet de la classe Caching
    """
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
        if value < 0 or timestep < 0:
            raise ValueError("Value and timestep must be positive numbers.")
        if Caching.is_open() is True:
            self.__flux_cache[timestep] = value 
            
    def get_flux_cache(self, timestep: int):
        if timestep < 0:
            raise ValueError("Timestep must be a positive number.")
        if Caching.is_open() is True:
            return self.__flux_cache[timestep]
    
    def reset_flux_cache(self):
        if Caching.is_open() is True:
            self.__flux_cache = {}
            
# Node class -----------------------------------------------------------------
 
class WPGraph():
    pass

class IndustrialNode(metaclass = ABCMeta): # aller voir la doc ABC
    """ IndustrialNode Documentation

    Classe mère des noeuds du réseau MoSiR. Elle contient les méthodes et 
    les attributs communs à tous les noeuds du réseau MoSiR. Aucun noeud
    ne peut être seulement un IndustrialNode, il doit être un des enfants
    de cette classe.

    Args:
        LOCALNAME (str): Le nom du noeud
    """
    def __init__(self, LOCALNAME: str):
        self._NAME = str(LOCALNAME)
        
    def _get_value_time(self, values: list[float], time: int) -> float:
        """ _get_value_time Documentation

        La fonction _get_value_time sert à trouver une proportion dans à
        un edge à un temps donné dans une liste de proportion. Si le temps
        demandé est plus grand que la longueur de la liste, la dernière 
        proportion de la liste est retournée. Est utilisé strictement pour
        les proportions. Pour connaitre les quantités de carbone à un temps 
        donné, utiliser la fonction _get_quantity_time.

        Args:
            values (list[float]): _description_
            time (int): _description_

        Returns:
            float: _description_
        """
        return values[min(time, len(values) - 1)]
    
    @property
    def NAME(self):
        return self._NAME
    
    @NAME.setter
    def NAME(self, input):
       raise me.ConstError("Node name can't be changed")
    
    @abstractmethod
    def get_flux_out(self, graph: WPGraph, time: int, cumulative: bool = False) -> float:
        pass
    
    @abstractmethod
    def get_flux_in(self, graph: WPGraph, time: int, cumulative: bool = False) -> float:
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
    """ TopNode Documentation

    Classe des noeuds du réseau MoSiR qui sont des noeuds de départ. Ils
    ne peuvent pas avoir de flux entrant, seulement des flux sortant. Ils
    ne peuvent pas avoir de stock de carbone. Ils sont les noeuds de départ
    du réseau MoSiR servant à importer du carbone dans le réseau. 

    Args:
        LOCALNAME (str): Le nom du noeud
    """
    def __init__(self, NAME: str):
        super().__init__(NAME)
        self._time = []
        self._quantities = []
        
    @property           
    def time(self):
        return self._time
    
    @time.setter
    def time(self, input_value: list[int]):
        if all(isinstance(t, int) and t >= 0 for t in input_value):
            self._time = input_value
        else:
            raise ValueError("Input value must be a list of non-negative integers.")
        
    @property
    def quantities(self):
        return self._quantities

    @quantities.setter
    def quantities(self, input_value: list[float]):
        if all(isinstance(q, (float, int)) and q >= 0 for q in input_value):
            self._quantities = input_value
        else:  
            raise ValueError("Input value must be a list of non-negative numbers.")
        
    def _get_quantity_time(self, when: int) -> float:
        """ _get_quantity_time Documentation

        La fonction _get_quantity_time sert à trouver une quantité à un temps
        donné dans une liste de quantité. Si le temps demandé n'est pas dans
        la liste, 0 est retourné. Est utilisé strictement pour les quantités.
        Pour connaitre les proportions dans un edge à un temps donné, utiliser 
        la fonction _get_value_time.

        Args:
            when (int): Le moment X où on veut connaitre la quantité de carbone

        Raises:
            ValueError: Le temps doit être un entier positif

        Returns:
            float: La quantité de carbone à un temps donné
        """
        if when < 0:
            raise ValueError("Time must be a non-negative integer.")
        if len(self.time) != len(self.quantities):
            raise ValueError("Time and quantities lists must be the same length.")
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
        warnings.warn(' '.join(f'Aucun carbone ne résident dans le noeud \
            {self.NAME}, seulement des flux le traverse').split(), stacklevel= 2)
        return 0

class ProportionNode(IndustrialNode):
    """ ProportionNode Documentation

    Classe des noeuds du réseau MoSiR qui sont des noeuds de transition. Ils
    peuvent avoir des flux entrant et sortant. Ils sont les noeuds de 
    transition du réseau MoSiR servant à transférer du carbone d'un noeud à
    un autre. Ils sont des noeuds qui servent à proportionner des flux 
    entrant pour les redistribuer dans les noeuds enfants. Le transfert se 
    fait instantanément, donc il n'y a pas de stock de carbone dans ces noeuds.

    Args:
        LOCALNAME (str): Le nom du noeud

    Raises:
        ValueError: Le nom du noeud doit être une chaine de caractère

    Returns:
        ProportionNode: Un objet de la classe ProportionNode
    """
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
        warnings.warn(' '.join(f'Aucun carbone ne résident dans le noeud \
            {self.NAME}, seulement des flux le traverse').split(), stacklevel= 2)
        return 0

class DecayNode(ProportionNode):
    """ DecayNode Documentation

    Classe des noeuds du réseau MoSiR qui sont des noeuds avec une dégradation
    selon une demi-vie. Ils peuvent avoir des flux entrant et sortant. Ils
    ne peuvent pas être des noeuds de départ ou de fin. Un flux ne peut
    jamais sortir la même année qu'il est entré. Chaque dégradation est
    selon le moment d'entrée du flux, indépendamment des autres flux entrant.

    Args:
        LOCALNAME (str): Le nom du noeud
        HalfLife (int): La demi-vie du carbone dans le noeud
    
    Raises:
        ValueError: Le nom du noeud doit être une chaine de caractère
        ValueError: La demi-vie doit être un entier positif

    Returns:
        DecayNode: Un objet de la classe DecayNode
    """
    def __init__(self, NAME: str, HalfLife: int):
        super().__init__(NAME)
        if not isinstance(HalfLife, int) or HalfLife <= 0:
            raise ValueError("Half-life must be a positive integer.")
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
    """ PoolNode Documentation

    Classe des noeuds du réseau MoSiR qui sont des noeuds de fin. Ils
    ne peuvent pas avoir de flux sortant, seulement des flux entrant.

    Args:
        ProportionNode (_type_): _description_
    """
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
    # Écrire de la documentation
    """ GraphFactory Documentation

    La classe GraphFactory sert à créer un réseau de noeud à partir d'un
    fichier JSON. Le fichier JSON doit être construit selon les normes de
    MoSiR. Se référer à la documentation sur le GitHub du Bureau du 
    forestier en chef pour plus d'informations.

    Args: 
        DIR (str): Le chemin du fichier JSON contenant les graphes

    Returns:
        GraphFactory: Un objet de la classe GraphFactory
    """

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
    def get_graph_name(self) -> list[str]:
        return self._GRAPHNAME
    
    @get_graph_name.setter
    def get_graph_name(self, input):
        raise me.ConstError("Graph name can't be changed outside Miro")
    
    def get_graph(self, name) -> WPGraph:
        Names_list = self.get_graph_name
        Index = Names_list.index(name)
        return self._GRAPHS[Index]
        
    @property
    def get_data(self):
        return self._DATA
    
    @get_data.setter
    def get_data(self, input):
        raise me.ConstError("Data from graphs can't be changed outside Miro") 
