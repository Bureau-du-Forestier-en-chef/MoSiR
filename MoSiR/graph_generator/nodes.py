# -*- coding: UTF-8 -*-
"""
Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""
# Annotations are not evaluated, which allows annotating with wp.WPGraph
# despite the circular import between the two modules
from __future__ import annotations
import numpy as np
from scipy.stats import gamma
from MoSiR import networkx_graph as wp
from MoSiR import mosir_exceptions as me
from MoSiR.graph_generator.caching import Caching
from abc import ABCMeta, abstractmethod

# Node class -----------------------------------------------------------------

class IndustrialNode(metaclass = ABCMeta): # see the ABC documentation
    """ IndustrialNode Documentation

    Parent class of the MoSiR network nodes. It holds the methods and
    attributes common to every node of the MoSiR network. No node can be
    only an IndustrialNode; it must be one of the children of this class.

    Args:
        LOCALNAME (str): The node name
    """
    def __init__(self, LOCALNAME: str):
        self._NAME = str(" ".join(LOCALNAME.strip().split()))

    def _get_value_time(self, values: list[float] | dict, time: int) -> float:
        """ _get_value_time Documentation

        The _get_value_time function finds a proportion on an edge at a
        given time in a list of proportions or in a dictionary. If the
        requested time is greater than the length of the list, the last
        proportion of the list is returned. Used strictly for proportions.
        To get carbon quantities at a given time, use the _get_quantity_time
        function.

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
                # key=int: keys come in as text from the JSON and must be
                # compared numerically, otherwise "5" > "10"
                timestep = max((i for i in values.keys() if int(i) <= time), key=int)
                result = values[timestep]
        except:
            raise me.EdgeError(f"Le temps {time} n'a pas été retrouvé dans les\
                proportion {values} du noeud {self.NAME}")
        return result

    @staticmethod
    def _get_cumulative_total(annual, time: int, cache) -> float:
        """ _get_cumulative_total Documentation

        The _get_cumulative_total function sums an annual value from time 0
        up to the requested time, inclusive. Every cumulative variant of the
        fluxes reduces to this sum; they differ only in how a single year is
        computed.

        The total is memoized per timestep in `cache` (a Caching dedicated to
        the cumulative flux concerned) and computed incrementally: cumul(t) =
        cumul(t-1) + annual(t). A series requested in order (t = 0..T), as
        the reporting does, thus goes from O(T^2) to O(T). The sum is still
        done from left to right, so the result is bit-for-bit identical to
        the non-memoized version.

        Args:
            annual (callable): The function that gives the value of a single
                year, called with the time as argument
            time (int): The last year included in the sum
            cache (Caching): The cache specific to this cumulative flux

        Returns:
            float: The total of the annual values
        """
        if cache.is_cached(time):
            return cache.get_flux_cache(time)
        # Resume from the largest prefix already cached (otherwise from 0).
        # In sequential access (increasing t), it is always t-1: O(1) per call.
        # Cache closed: is_cached always returns False, so full recompute.
        start = time
        while start > 0 and not cache.is_cached(start - 1):
            start -= 1
        total = cache.get_flux_cache(start - 1) if start > 0 else 0
        for timestep in range(start, time + 1):
            total += annual(timestep)
            cache.set_flux_cache(timestep, total)
        return total

    @property
    def NAME(self):
        return self._NAME

    @NAME.setter
    def NAME(self, input):
       raise me.ConstError("Node name can't be changed")

    @abstractmethod
    def get_flux_out(self, graph: wp.WPGraph, time: int, cumulative: bool = False) -> float:
        pass

    @abstractmethod
    def get_flux_in(self, graph: wp.WPGraph, time: int, cumulative: bool = False) -> float:
        pass

    @abstractmethod
    def get_stock(self, graph: wp.WPGraph, time: int, cumulative: bool = False) -> float:
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

    Class of the MoSiR network nodes that are starting nodes. They cannot
    have incoming flux, only outgoing flux. They cannot hold a carbon stock.
    They are the starting nodes of the MoSiR network used to import carbon
    into the network.

    Args:
        LOCALNAME (str): The node name
    """
    def __init__(self, NAME: str):
        super().__init__(NAME)
        self._time = []
        self._quantities = []
        self.__cache_out_cumul = Caching()

    def _past_out_carbon_cumul(self):
        return self.__cache_out_cumul

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

        The _get_quantity_time function finds a quantity at a given time in a
        list of quantities. If the requested time is not in the list, 0 is
        returned. Used strictly for quantities. To get the proportions on an
        edge at a given time, use the _get_value_time function.

        Args:
            when (int): The moment X at which we want the carbon quantity

        Raises:
            ValueError: The time must be a positive integer

        Returns:
            float: The carbon quantity at a given time
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

    def get_flux_out(self, graph: wp.WPGraph, time: int, cumulative: bool = False) -> float:
        if cumulative == False:
            return self._get_quantity_time(time)
        elif cumulative == True:
            return self._get_cumulative_total(
                self._get_quantity_time, time, self._past_out_carbon_cumul())

    def get_flux_in(self, graph: wp.WPGraph, time: int, cumulative: bool = False) -> float:
        return self.get_flux_out(graph, time, cumulative= cumulative)

    def get_stock(self, graph: wp.WPGraph, time: int, cumulative: bool = False) -> float:
        return 0

class ProportionNode(IndustrialNode):
    """ ProportionNode Documentation

    Class of the MoSiR network nodes that are transition nodes. They can
    have incoming and outgoing flux. They are the transition nodes of the
    MoSiR network used to transfer carbon from one node to another. They are
    nodes that split incoming fluxes to redistribute them to the child
    nodes. The transfer is instantaneous, so there is no carbon stock in
    these nodes.

    Args:
        LOCALNAME (str): The node name

    Raises:
        ValueError: The node name must be a string

    Returns:
        ProportionNode: An object of the ProportionNode class
    """
    def __init__(self, NAME: str):
        super().__init__(NAME)
        self.__pn_cache_out = Caching()
        self.__pn_cache_in = Caching()
        self.__pn_cache_out_cumul = Caching()
        self.__pn_cache_in_cumul = Caching()

    def past_out_carbon(self):
        return self.__pn_cache_out

    def past_in_carbon(self):
        return self.__pn_cache_in

    def _past_out_carbon_cumul(self):
        return self.__pn_cache_out_cumul

    def _past_in_carbon_cumul(self):
        return self.__pn_cache_in_cumul

    def _get_annual_flux_out(self, graph: wp.WPGraph, time: int) -> float:
        """Outgoing flux of a single year, cached.

        The incoming flux is always requested non-cumulatively: a single
        year must enter the cache, otherwise the cumulative would add up
        cumulatives and corrupt the cache for the following calls.
        """
        if self.past_out_carbon().is_cached(time):
            return self.past_out_carbon().get_flux_cache(time)
        flux_out = self.get_flux_in(graph, time, cumulative= False)
        self.past_out_carbon().set_flux_cache(time, flux_out)
        return flux_out

    def get_flux_out(self, graph: wp.WPGraph, time: int, cumulative: bool = False) -> float:
        if cumulative == False:
            return self._get_annual_flux_out(graph, time)
        if cumulative == True:
            return self._get_cumulative_total(
                lambda timestep: self._get_annual_flux_out(graph, timestep),
                time, self._past_out_carbon_cumul())

    def get_flux_in(self, graph: wp.WPGraph, time: int, cumulative: bool = False) -> float:
        if cumulative == False:
            if self.past_in_carbon().is_cached(time):
                return self.past_in_carbon().get_flux_cache(time)
            total = 0
            for parent in graph.get_predecessors(self):
                proportion_parent = self._get_value_time(graph.get_edge_proportions(parent, self), time)
                if proportion_parent == 0:
                    continue
                parent_carbon = parent.get_flux_out(graph, time, cumulative)
                total += proportion_parent * parent_carbon
            self.past_in_carbon().set_flux_cache(time, total)
            return total
        else:
            return self._get_cumulative_total(
                lambda timestep: self.get_flux_in(graph, timestep, cumulative= False),
                time, self._past_in_carbon_cumul())

    def get_stock(self, graph: wp.WPGraph, time: int, cumulative: bool = False) -> int:
        return 0

class DecayNode(ProportionNode):
    """ DecayNode Documentation

    Class of the MoSiR network nodes that decay according to a half-life.
    They can have incoming and outgoing flux. They cannot be starting or
    ending nodes. A flux can never leave the same year it entered. Each
    decay depends on the moment the flux entered, independently of the other
    incoming fluxes.

    Args:
        LOCALNAME (str): The node name
        HalfLife (int): Simply an indicator needed for the gas

    Raises:
        ValueError: The node name must be a string
        ValueError: The half-life must be a positive integer

    Returns:
        DecayNode: An object of the DecayNode class
    """
    def __init__(self, NAME: str, decay: bool):
        super().__init__(NAME)
        # The flag is validated but not kept: the fact that a node decays is
        # already carried by its type. GraphFactory only creates a DecayNode
        # when the flag is True.
        if not isinstance(decay, bool):
            raise ValueError("La valeur de Decay doit être 'true' ou 'false'.")
        self._alpha_value = None
        self._beta_value = None
        # Incoming and outgoing flux caches come from ProportionNode; only
        # the one for the decay proportions is specific to DecayNode
        self.__dn_cache_gamma = Caching()
        self.__dn_cache_stock = Caching()
        # Vectorized series, extended on demand: cdf of the gamma law and
        # incoming flux per year. They allow computing outgoing flux and
        # stock (which are convolutions) by numpy dot product instead of a
        # Python loop, which greatly speeds up long horizons.
        self._cdf_vec = np.empty(0, dtype=float)
        self._flux_in_vec = np.empty(0, dtype=float)

    def past_gamma_proportion(self):
        return self.__dn_cache_gamma

    def _past_stock(self):
        return self.__dn_cache_stock

    def _extend_decay_vectors(self, graph: wp.WPGraph, time: int):
        """Extends cdf_vec and flux_in_vec up to index `time` inclusive.

        cdf_vec[k] = P(decayed at time k); flux_in_vec[k] = incoming flux at
        year k (memoized by get_flux_in). Only the new indices are computed,
        so the series call (increasing t) stays efficient.
        """
        n = len(self._cdf_vec)
        if time >= n:
            new_cdf = np.asarray(
                gamma.cdf(np.arange(n, time + 1), self.alpha, scale=self.beta),
                dtype=float)
            self._cdf_vec = np.concatenate((self._cdf_vec, new_cdf))
        m = len(self._flux_in_vec)
        if time >= m:
            new_flux = np.fromiter(
                (self.get_flux_in(graph, s, cumulative=False) for s in range(m, time + 1)),
                dtype=float, count=(time + 1 - m))
            self._flux_in_vec = np.concatenate((self._flux_in_vec, new_flux))

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
        """Gives the cumulative decay at a timestep

        Gives the decay percentage at a given time, alpha and beta. It
        represents the percentage of cumulative decay between time 0 and the
        requested time X.

        Args:
            time (_type_): _description_
            alpha (_type_): _description_
            beta (_type_): _description_
        """
        if self.past_gamma_proportion().is_cached(time):
            decay_proportion = self.past_gamma_proportion().get_flux_cache(time)
        else:
            decay_proportion = float(gamma.cdf(time, alpha, scale=beta))
            self.past_gamma_proportion().set_flux_cache(time, decay_proportion)

        return decay_proportion

    def get_flux_out(self, graph: wp.WPGraph, time: int, cumulative: bool = False) -> float:
        # flux_out(t) = sum_{s<t} flux_in(s) * decay(t-s). This is a
        # convolution: computed by numpy dot product (vectorized) rather
        # than a Python loop. It is not the cumulative of _get_cumulative_total
        # (each year is weighted by its own decay).
        if time == 0:
            if cumulative == False:
                self.past_out_carbon().set_flux_cache(0, 0.0)
            return 0.0
        if cumulative == False and self.past_out_carbon().is_cached(time):
            return self.past_out_carbon().get_flux_cache(time)
        self._extend_decay_vectors(graph, time)
        flux_in = self._flux_in_vec[0:time]        # s = 0 .. time-1
        cdf = self._cdf_vec
        if cumulative == False:
            # annual decay: adecay(k) = cdf(k) - cdf(k-1), k = time..1
            weights = (cdf[1:time + 1] - cdf[0:time])[::-1]
        else:
            # cumulative decay: cdf(k), k = time..1
            weights = cdf[1:time + 1][::-1]
        total = float(np.dot(flux_in, weights))
        if total < 0:  # floating-point noise only: the sum is non-negative
            total = 0.0
        if cumulative == False:
            self.past_out_carbon().set_flux_cache(time, total)
        return total

    def get_stock(self, graph: wp.WPGraph, time: int, cumulative: bool = False) -> float:
        ''' get_stock Documentation

        The get_stock function cumulates the annual fluxes from 0 up to the
        requested year for a particular node using the get_flux_out
        function. In other words, the get_stock function computes the stocks
        present in a node from all the fluxes coming from the parent nodes
        since the beginning.

        Args:
            graph (nx.DiGraph): the DiGraph used to build the network
            time (int): The time in years
            cumulative (bool): To be implemented

        Returns:
            float: The cumulative of the fluxes, i.e. the carbon stock
            present in a node (self) at a given time (time)

        '''
        try:
            if self._past_stock().is_cached(time):
                return self._past_stock().get_flux_cache(time)
            self._extend_decay_vectors(graph, time)
            # stock(t) = sum_{s<=t} flux_in(s) * (1 - cdf(t-s)), a convolution
            # computed by numpy dot product. survival(k) = 1 - cdf(k),
            # k = time..0
            survival = (1.0 - self._cdf_vec[0:time + 1])[::-1]
            total = float(np.dot(self._flux_in_vec[0:time + 1], survival))
            if total < 0:  # floating-point noise only: the sum is non-negative
                total = 0.0
            self._past_stock().set_flux_cache(time, total)
            return total
        except RecursionError:
            raise me.RecursionNode("Un maximum de demande a été effectué. \
                Une boucle entre des ProportionNode est présente")

class RecyclingNode(ProportionNode):
    """ RecyclingNode Documentation

    Class of the MoSiR network nodes that put the received carbon back into
    circulation, with a one-year delay: what enters in year X leaves in year
    X + 1. They cannot be starting or ending nodes. The carbon waiting to
    leave constitutes their stock.

    Args:
        LOCALNAME (str): The node name

    Returns:
        RecyclingNode: An object of the RecyclingNode class
    """
    def get_flux_out(self, graph: wp.WPGraph, time: int, cumulative: bool = False) -> float:
        if cumulative == False:
            if self.past_out_carbon().is_cached(time):
                return self.past_out_carbon().get_flux_cache(time)
            if time == 0:
                return 0
            total = float(0)
            total += self.get_flux_in(graph, time - 1, cumulative)
            self.past_out_carbon().set_flux_cache(time, total)
            return total
        else:
            # The cumulative is always returned as a float, even when the sum
            # is zero: the sum starts from a float(0) and not an integer
            return float(self._get_cumulative_total(
                lambda timestep: self.get_flux_out(graph, timestep, cumulative= False),
                time, self._past_out_carbon_cumul()))

    def get_stock(self, graph: wp.WPGraph, time: int, cumulative: bool = False) -> float:
        return self.get_flux_in(graph, time, cumulative)

class PoolNode(ProportionNode):
    """ PoolNode Documentation

    Class of the MoSiR network nodes that are ending nodes. They cannot have
    outgoing flux, only incoming flux.

    Args:
        LOCALNAME (str): The node name
    """
    def get_flux_out(self, graph: wp.WPGraph, time: int, cumulative: bool = False) -> float:
        return 0

    def get_stock(self, graph: wp.WPGraph, time: int, cumulative: bool = False) -> float:
        ''' get_stock Documentation
        Args:
            graph (nx.DiGraph): the DiGraph used to build the network
            time (int): The time in years
            cumulative (bool): To be implemented

        Returns:
            float: The cumulative of the fluxes, i.e. the carbon stock
            present in a node (self) at a given time (time)
        '''
        try:
            return self.get_flux_in(graph, time, cumulative=True)
        except RecursionError:
            raise me.RecursionNode("Un maximum de demande a été effectué. \
                                 Une boucle entre des ProportionNode est présente")
