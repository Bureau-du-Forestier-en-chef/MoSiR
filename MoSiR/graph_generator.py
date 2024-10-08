# -*- coding: UTF-8 -*-
"""
Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""
import json
from scipy.stats import gamma
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
        self._NAME = str(" ".join(LOCALNAME.strip().split()))
        
    def _get_value_time(self, values: list[float] | dict, time: int) -> float:
        """ _get_value_time Documentation

        La fonction _get_value_time sert à trouver une proportion dans à
        un edge à un temps donné dans une liste de proportion ou d'un dictionnaire. 
        Si le temps demandé est plus grand que la longueur de la liste, la dernière 
        proportion de la liste est retournée. Est utilisé strictement pour
        les proportions. Pour connaitre les quantités de carbone à un temps 
        donné, utiliser la fonction _get_quantity_time.

        Args:
            values (list[float]): _description_
            time (int): _description_

        Returns:
            float: _description_
        """
        try:
            if isinstance(values, list):
                result = values[min(time, len(values) - 1)]
            if isinstance(values, dict):
                timestep =  max([i for i in values.keys() if int(i) <= time])
                result = values[timestep]
        except:
            raise me.EdgeError(f"Le temps {time} n'a pas été retrouvé dans les\
                proportion {values} du noeud {self.NAME}")
        return result
    
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
        if when in self.time:
            index = self._time.index(when)
            return self._quantities[index]
        else:
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
        self.__pn_cache_out = Caching()
        self.__pn_cache_in = Caching()
    
    def past_out_carbon(self):
        return self.__pn_cache_out
    
    def past_in_carbon(self):
        return self.__pn_cache_in
    
    def get_flux_out(self, graph: WPGraph, time: int, cumulative: bool = False) -> float:
        if cumulative == False:
            if time in self.past_out_carbon().flux_cache:
                return self.past_out_carbon().get_flux_cache(time)
            flux_out = self.get_flux_in(graph, time, cumulative)
            self.past_out_carbon().set_flux_cache(time, flux_out)
            return flux_out
        if cumulative == True:
            total = 0
            for timestep in range(time + 1):
                if timestep in self.past_out_carbon().flux_cache:
                    total += self.past_out_carbon().get_flux_cache(timestep)
                    continue
                flux_out = self.get_flux_in(graph, timestep, cumulative)
                self.past_out_carbon().set_flux_cache(timestep, flux_out)
                total += flux_out
            return total
        
    def get_flux_in(self, graph: WPGraph, time: int, cumulative: bool = False) -> float:
        total = 0
        if cumulative == False:
            if time in self.past_in_carbon().flux_cache:
                return self.past_in_carbon().get_flux_cache(time)
            for parent in graph.get_predecessors(self):
                proportion_parent = self._get_value_time(graph.get_edge_proportions(parent, self), time)
                if proportion_parent == 0:
                    continue
                parent_carbon = parent.get_flux_out(graph, time, cumulative)
                total += proportion_parent * parent_carbon
            self.past_in_carbon().set_flux_cache(time, total)
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
        HalfLife (int): Simplement un indicateur nécessaire pour le gaz
    
    Raises:
        ValueError: Le nom du noeud doit être une chaine de caractère
        ValueError: La demi-vie doit être un entier positif

    Returns:
        DecayNode: Un objet de la classe DecayNode
    """
    def __init__(self, NAME: str, decay: bool):
        super().__init__(NAME)
        if not isinstance(decay, bool):
            raise ValueError("La valeur de Decay doit être 'true' ou 'false'.")
        self._decay = decay
        self._alpha_value = None
        self._beta_value = None
        self.__dn_cache_out = Caching()
        self.__dn_cache_in = Caching()
        self.__dn_cache_gamma = Caching()
    
    def past_out_carbon(self):
        return self.__dn_cache_out
    
    def past_in_carbon(self):
        return self.__dn_cache_in
    
    def past_gamma_proportion(self):
        return self.__dn_cache_gamma
        
    @property
    def alpha(self):
        return self._alpha_value
    
    @alpha.setter 
    def alpha(self, alpha):
       self._alpha_value = alpha

    @property
    def beta(self):
        return self._beta_value
    
    @beta.setter 
    def beta(self, beta):
       self._beta_value = beta
    
    def get_decay_proportion(self, time, alpha, beta):
        """Donne la dégradation cumulative à un timestep

        Donne le pourcentage de dégradation à un temps, un alpha et
        un beta donné. Représente le pourcentage de la dégradation cumulative
        entre le temps 0 et le temps X demandé.

        Args:
            time (_type_): _description_
            alpha (_type_): _description_
            beta (_type_): _description_
        """
        if time in self.past_gamma_proportion().flux_cache:
            decay_proportion = self.past_gamma_proportion().get_flux_cache(time)
        else:
            decay_proportion = float(gamma.cdf(time, alpha, scale=beta))
            self.past_gamma_proportion().set_flux_cache(time, decay_proportion)

        return decay_proportion

    def get_annual_decay_proportion(self, time, alpha, beta):
        """Donne la dégradation entre deux timesteps

        Donne le pourcentage de dégradation entre deux temps.
        Par exemple, le pourcentage de dégradation qui occure entre le temps
        8 et 9 d'un noeud de dégradation à un alpha et beta donnés.

        Args:
            time (_type_): _description_
            alpha (_type_): _description_
            beta (_type_): _description_
        """
        decay_proportion_now = self.get_decay_proportion(time, alpha, beta)
        decay_proportion_before = self.get_decay_proportion(time - 1, alpha, beta)
        decay_proportion = decay_proportion_now - decay_proportion_before

        return decay_proportion
    
    def get_flux_out(self, graph: WPGraph, time: int, cumulative: bool = False) -> float:
        total = 0
        if cumulative == False:
            # Cache of flux
            if time in self.past_out_carbon().flux_cache:
                return self.past_out_carbon().get_flux_cache(time)
            for timestep in range(time):   
                flux_in = self.get_flux_in(graph, timestep, cumulative)
                time_between = time - timestep
                if flux_in == 0: 
                    continue
                decay_proportion = self.get_annual_decay_proportion(
                    time_between, self.alpha, self.beta)
                total += flux_in * decay_proportion
            self.past_out_carbon().set_flux_cache(time, total)
            return total
        else:
            for timestep in range(time):  
                flux_in = self.get_flux_in(graph, timestep, cumulative=False)
                time_between = time - timestep
                if flux_in == 0:
                    continue
                decay_proportion = self.get_decay_proportion(
                    time_between, self.alpha, self.beta)
                total += flux_in * decay_proportion
            return total
        
    def get_flux_in(self, graph: WPGraph, time: int, cumulative: bool = False) -> float:
        total = 0
        if cumulative == False:  
            Annual = super().get_flux_in(graph, time, cumulative)
            return Annual
        else: 
            for Year in range(time + 1): 
                Annual = super().get_flux_in(graph, Year, cumulative=False)
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
            Graphe (nx.DiGraph): le DiGraph utilisé pour construire le réseau
            time (int): Le temps en année
            cumulative (bool): To be implemented

        Returns: 
            float: Le cumulatif des fluxs, donc le stock de carbone présent
            dans une noeud (self) à un temps donnée (time)

        '''
        try:
            total = 0
            for timestep in range(time + 1): 
                annual = self.get_flux_in(graph, timestep, cumulative= False)
                time_between = time - timestep
                if annual == 0:
                    continue
                decay_proportion = 1 - self.get_decay_proportion(
                    time_between, self.alpha, self.beta)
                total += annual * decay_proportion
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
        total = float(0)
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
        return 0
      
    def get_stock(self, graph: WPGraph, time: int, cumulative: bool = False) -> float:
        ''' get_stock Documentation   
        Args: 
            Graphe (nx.DiGraph): le DiGraph utilisé pour construire le réseau
            time (int): Le temps en année
            cumulative (bool): To be implemented
            
        Returns: 
            float: Le cumulatif des fluxs, donc le stock de carbone présent
            dans une noeud (self) à un temps donnée (time)
        '''
        try:
            return self.get_flux_in(graph, time, cumulative=True)
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

    def __init__(self, DIR: str=None, Dict: dict=None):
        self._DIRECTORY = DIR
        """L'option de créer un graphe grâce à un dictionnaire a été
        ajouter pour l'analyse lors de l'importation dans l'API"""
        if DIR is None and Dict is not None:
            self._DATA = Dict
        if DIR is not None and Dict is None:
            try:
                with open(self._DIRECTORY, "r") as files: 
                    self._DATA = json.load(files)
            except:
                raise me.InvalidOption(f"Le chemin {DIR}, n'est pas \
                    valide. Impossible d'ouvrir le graphe")
        if DIR is None and Dict is None:
            raise me.InvalidOption("No dictionary or directory specified")
        self._GRAPHNAME = []
        self._GRAPHS = []
        
        keys = list(self.get_data.keys())
        keys.sort()
        for graph in keys:
            self._GRAPHNAME.append(graph)
            self._GRAPHS.append(wp.WPGraph(graph))
            _EDGES = self.get_data[graph].get('Edges', {})
            _NODES = self.get_data[graph].get('Nodes', {})
            if len(_NODES) < 2 or len(_EDGES) == 0:
                raise me.GraphError("Le graphe doit contenir au moins deux noeud et un edge")
            _TOPNODES = set([int(ID) for ID in _NODES]) - \
                set([data['To'] for keys, data in _EDGES.items()])
            _LASTNODES = set([int(ID) for ID in _NODES]) - \
                set([data['From'] for keys, data in _EDGES.items()])
        
            node_map = {}
            for node_id, node_data in _NODES.items():
                if int(node_id) in _TOPNODES: 
                    if node_data['Decay'] == True or node_data['Recycling'] == True:
                        raise me.GraphError(f"Node at the top (a node without an edge \
                            going into it) cannot also be identified as a recycling \
                            or decay node. Node name: {node_data['Name']}") 
                    new_node =  TopNode(node_data['Name'])
                    self.get_graph(graph).add_topnode_name(node_data['Name'])
                elif int(node_id) in _LASTNODES:
                    if node_data['Decay'] == True or node_data['Recycling'] == True:
                        raise me.GraphError(f"Node at the bottom (a node without an edge \
                            going out of it) cannot also be identified as a recycling \
                            or decay node. Node name: {node_data['Name']}")  
                    new_node = PoolNode(node_data['Name'])
                elif node_data["Decay"] == True:
                    if node_data["Recycling"] == True:
                        raise me.GraphError(f"A node cannot be both a recycling and \
                            decay node. Node name: {node_data['Name']}")
                    new_node = DecayNode(node_data['Name'], node_data['Decay'])
                    self.get_graph(graph).add_decaynode_name(node_data['Name'])
                elif node_data['Recycling'] == True: 
                    new_node = RecyclingNode(node_data['Name'])
                else: new_node = ProportionNode(node_data['Name'])
                self.get_graph(graph).add_node(new_node)
                node_map[int(node_id)] = new_node        

            for edge_id, edge_data in _EDGES.items():
                From = node_map[edge_data['From']]
                To = node_map[edge_data['To']]
                self.get_graph(graph).add_edge(From, To, edge_data['Values'])     
    
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