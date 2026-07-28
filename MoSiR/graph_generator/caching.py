# -*- coding: UTF-8 -*-
"""
Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""
from MoSiR import mosir_exceptions as me

# Caching --------------------------------------------------------------------
class Caching():
    """ Caching Documentation

    The Caching class provides a cache for DecayNode and RecyclingNode
    nodes. The cache is a dictionary holding the outgoing fluxes of a node
    at a given time. It is used to avoid recomputing the outgoing fluxes of
    a node at a given time. It keys off the node name and the time to find
    the outgoing flux. Node names must therefore be unique among the nodes
    of a same graph.

    Raises:
        me.ConstError: The cache can only be modified with the
        set_flux_cache function

    Returns:
        Caching: An object of the Caching class
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
    def flux_cache(self, value_input):
        raise me.ConstError("Cache must be modify with set_flux_cache")

    def is_cached(self, timestep: int) -> bool:
        """Indicates whether a value is available in cache for this time.

        Always returns False when the cache is disabled, without ever
        touching flux_cache (which is None in that case). This is what lets
        nodes recompute instead of crashing once set_is_open(False) has been
        called.
        """
        return Caching.is_open() and timestep in self.__flux_cache

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
