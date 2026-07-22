"""
Caching tests for MoSiR

Le cache évite de recalculer les flux d'un noeud à un temps donné. Une
corruption du cache fausserait silencieusement tous les résultats, d'où
ces tests.

Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""
import pytest
from MoSiR import (
    graph_generator as gg,
    mosir_exceptions as me,
)


@pytest.fixture
def cache():
    return gg.Caching()


# Lecture / écriture ---------------------------------------------------------
def test_new_cache_is_empty(cache):
    assert cache.flux_cache == {}


def test_stored_value_is_returned(cache):
    cache.set_flux_cache(3, 42.5)
    assert cache.get_flux_cache(3) == 42.5
    assert 3 in cache.flux_cache


def test_writing_twice_keeps_the_last_value(cache):
    cache.set_flux_cache(3, 1.0)
    cache.set_flux_cache(3, 2.0)
    assert cache.get_flux_cache(3) == 2.0


def test_zero_is_a_valid_cached_value(cache):
    """Un flux nul doit être mis en cache, pas traité comme une absence."""
    cache.set_flux_cache(0, 0)
    assert cache.get_flux_cache(0) == 0
    assert 0 in cache.flux_cache


def test_reading_an_unknown_timestep_raises(cache):
    with pytest.raises(KeyError):
        cache.get_flux_cache(99)


def test_reset_empties_the_cache(cache):
    cache.set_flux_cache(1, 1.0)
    cache.set_flux_cache(2, 2.0)
    cache.reset_flux_cache()
    assert cache.flux_cache == {}


# Validation des entrées -----------------------------------------------------
@pytest.mark.parametrize("timestep, value", [
    (-1, 1.0),
    (-10, 0.0),
])
def test_negative_timestep_is_rejected_on_write(cache, timestep, value):
    with pytest.raises(ValueError):
        cache.set_flux_cache(timestep, value)


@pytest.mark.parametrize("value", [-0.0001, -1, -1000])
def test_negative_value_is_rejected_on_write(cache, value):
    with pytest.raises(ValueError):
        cache.set_flux_cache(1, value)


def test_negative_timestep_is_rejected_on_read(cache):
    with pytest.raises(ValueError):
        cache.get_flux_cache(-1)


def test_direct_assignment_to_flux_cache_is_blocked(cache):
    """Le cache ne peut être modifié que via set_flux_cache.

    Régression historique: le setter était déclaré `def flux_cache(self)`
    sans paramètre de valeur, donc Python levait TypeError avant même
    d'atteindre le me.ConstError prévu.
    """
    with pytest.raises(me.ConstError):
        cache.flux_cache = {1: 1.0}


def test_blocked_assignment_leaves_the_cache_intact(cache):
    cache.set_flux_cache(1, 5.0)
    with pytest.raises(me.ConstError):
        cache.flux_cache = {}
    assert cache.get_flux_cache(1) == 5.0


# Interrupteur global --------------------------------------------------------
def test_cache_is_open_by_default(cache):
    assert gg.Caching.is_open() is True


def test_closing_the_cache_disables_reads_and_writes(cache):
    """set_is_open(False) est un interrupteur global à toute la classe."""
    cache.set_flux_cache(1, 5.0)
    gg.Caching.set_is_open(False)

    assert cache.flux_cache is None
    assert cache.get_flux_cache(1) is None
    cache.set_flux_cache(2, 9.0)  # ne doit rien écrire

    gg.Caching.set_is_open(True)
    assert 2 not in cache.flux_cache
    assert cache.get_flux_cache(1) == 5.0


def test_is_open_is_shared_between_instances():
    first, second = gg.Caching(), gg.Caching()
    gg.Caching.set_is_open(False)
    assert first.flux_cache is None
    assert second.flux_cache is None


# Isolation des caches par noeud ---------------------------------------------
def test_each_node_has_independent_caches():
    """Les caches d'entrée et de sortie d'un noeud sont distincts."""
    node = gg.ProportionNode("A")
    node.past_in_carbon().set_flux_cache(1, 10.0)

    assert node.past_in_carbon().get_flux_cache(1) == 10.0
    assert 1 not in node.past_out_carbon().flux_cache


def test_decay_node_has_three_independent_caches():
    node = gg.DecayNode("A", True)
    node.past_in_carbon().set_flux_cache(1, 1.0)
    node.past_out_carbon().set_flux_cache(1, 2.0)
    node.past_gamma_proportion().set_flux_cache(1, 3.0)

    assert node.past_in_carbon().get_flux_cache(1) == 1.0
    assert node.past_out_carbon().get_flux_cache(1) == 2.0
    assert node.past_gamma_proportion().get_flux_cache(1) == 3.0


def test_two_nodes_do_not_share_a_cache():
    first = gg.ProportionNode("A")
    second = gg.ProportionNode("B")
    first.past_in_carbon().set_flux_cache(1, 10.0)
    assert 1 not in second.past_in_carbon().flux_cache


# Cohérence cache / calcul ---------------------------------------------------
def test_cached_flux_matches_recomputed_flux(graph_03, MOSIR_TOLERENCE):
    """Vider le cache ne doit pas changer les résultats."""
    graph, G, H = graph_03

    with_cache = [H.get_flux_in(graph, t) for t in range(16)]

    for node in graph.nodes():
        if hasattr(node, "past_in_carbon"):
            node.past_in_carbon().reset_flux_cache()
            node.past_out_carbon().reset_flux_cache()

    without_cache = [H.get_flux_in(graph, t) for t in range(16)]

    for cached, fresh in zip(with_cache, without_cache):
        assert abs(cached - fresh) < MOSIR_TOLERENCE
