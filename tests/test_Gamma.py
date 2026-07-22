"""
Gamma function tests for MoSiR

Couvre DecayTypeOptimizer: la recherche du couple (alpha, beta) tel que
la CDF gamma vaille 0.5 au temps de demi-vie demandé.

Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""
import math
import pytest
from scipy.stats import gamma
from MoSiR import (
    gamma_function as gf,
    mosir_exceptions as me,
)

DECAY_TYPES = ["Exponential", "Gamma", "Chi-square"]


# Invariant central ----------------------------------------------------------
@pytest.mark.parametrize("decay_type", DECAY_TYPES)
@pytest.mark.parametrize("halflife", [2, 5, 10, 33.5, 75])
def test_halflife_gives_fifty_percent_decay(decay_type, halflife):
    """Par définition, la moitié du carbone est dégradée au temps de demi-vie.

    C'est l'invariant fondamental du module: quel que soit le type de
    dégradation, cdf(demi-vie, alpha, beta) doit valoir 0.5.
    """
    alpha, beta = gf.DecayTypeOptimizer("N", decay_type, halflife).find_param()
    assert round(gamma.cdf(halflife, alpha, scale=beta), 4) == 0.5


@pytest.mark.parametrize("decay_type", DECAY_TYPES)
@pytest.mark.parametrize("halflife", [5, 20])
def test_parameters_are_positive(decay_type, halflife):
    alpha, beta = gf.DecayTypeOptimizer("N", decay_type, halflife).find_param()
    assert alpha > 0
    assert beta > 0


@pytest.mark.parametrize("decay_type", DECAY_TYPES)
def test_optimization_is_deterministic(decay_type):
    """Deux appels identiques doivent donner exactement le même résultat."""
    first = gf.DecayTypeOptimizer("N", decay_type, 12).find_param()
    second = gf.DecayTypeOptimizer("N", decay_type, 12).find_param()
    assert first == second


# Paramètres fixés par type de dégradation -----------------------------------
@pytest.mark.parametrize("halflife", [0.5, 5, 75])
def test_exponential_fixes_alpha_to_one(halflife):
    alpha, _ = gf.DecayTypeOptimizer("N", "Exponential", halflife).find_param()
    assert alpha == 1


@pytest.mark.parametrize("halflife", [0.5, 5, 75])
def test_exponential_beta_matches_analytic_solution(halflife, MOSIR_TOLERENCE):
    """Pour alpha=1 la gamma est une exponentielle: beta = demi-vie / ln(2)."""
    _, beta = gf.DecayTypeOptimizer("N", "Exponential", halflife).find_param()
    assert abs(beta - halflife / math.log(2)) < MOSIR_TOLERENCE


@pytest.mark.parametrize("halflife", [5, 33.5])
def test_gamma_fixes_beta_to_one(halflife):
    _, beta = gf.DecayTypeOptimizer("N", "Gamma", halflife).find_param()
    assert beta == 1


@pytest.mark.parametrize("halflife", [5, 33.5])
def test_chi_square_fixes_beta_to_two(halflife):
    _, beta = gf.DecayTypeOptimizer("N", "Chi-square", halflife).find_param()
    assert beta == 2


# Monotonicité ---------------------------------------------------------------
@pytest.mark.parametrize("decay_type", DECAY_TYPES)
def test_longer_halflife_decays_more_slowly(decay_type):
    """Une demi-vie plus longue laisse plus de carbone en stock à un temps donné."""
    short_alpha, short_beta = gf.DecayTypeOptimizer("N", decay_type, 5).find_param()
    long_alpha, long_beta = gf.DecayTypeOptimizer("N", decay_type, 20).find_param()

    for time in (1, 3, 10, 30):
        assert gamma.cdf(time, short_alpha, scale=short_beta) \
            > gamma.cdf(time, long_alpha, scale=long_beta)


# Échecs ---------------------------------------------------------------------
def test_optimization_failure_raises_decay_error():
    """Sur de très grandes demi-vies l'optimisateur n'atteint pas 0.5."""
    with pytest.raises(me.DecayError):
        gf.DecayTypeOptimizer("Sawnwood", "Gamma", 99999).find_param()


def test_decay_error_message_points_to_the_excel_workaround():
    with pytest.raises(me.DecayError) as excinfo:
        gf.DecayTypeOptimizer("Sawnwood", "Gamma", 99999).find_param()
    message = " ".join(str(excinfo.value).split())
    assert "Sawnwood" in message
    assert "gamma_decay.xlsx" in message


def test_objective_rejects_having_both_alpha_and_beta():
    optimizer = gf.DecayTypeOptimizer("N", "Exponential", 10)
    optimizer.beta = 1  # Exponential a déjà fixé alpha
    with pytest.raises(me.DecayError):
        optimizer.objective(1.0)


@pytest.mark.parametrize("bad_type", [
    "Not a decay type", "exponential", "GAMMA", "Chi square", "", None,
])
def test_unknown_decay_type_is_rejected_at_construction(bad_type):
    """Un type invalide doit échouer tout de suite, avec un message clair.

    Régression historique: le constructeur acceptait n'importe quoi et
    l'échec ne survenait que dans find_param, sous forme d'un
    UnboundLocalError incompréhensible pour l'utilisateur.
    """
    with pytest.raises(me.InvalidOption):
        gf.DecayTypeOptimizer("Sawnwood", bad_type, 10)


def test_unknown_decay_type_message_names_the_node_and_the_options():
    with pytest.raises(me.InvalidOption) as excinfo:
        gf.DecayTypeOptimizer("Sawnwood", "Lineaire", 10)
    message = " ".join(str(excinfo.value).split())
    assert "Sawnwood" in message
    assert "Lineaire" in message
    assert "Exponential" in message
