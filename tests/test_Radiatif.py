"""
Radiative forcing tests for MoSiR

Couvre carbon_to_radiatif: conversion des émissions de carbone (kgC) en
forçage radiatif (w/m2) via convolution avec les facteurs DynCO2.

Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""
import pytest
import numpy as np
from MoSiR import (
    carbon_to_radiatif as cr,
    mosir_exceptions as me,
)

GASES = ["CO2", "CH4", "N2O", "CO"]

# Masses molaires utilisées par rad_convolve pour passer de kgC au gaz
MASSE = {"CO2": 3.6667, "CO": 2.6666, "CH4": 1.3333, "N2O": 1.0}


# rad_convolve --------------------------------------------------------------
@pytest.mark.parametrize("gas", GASES)
def test_convolve_preserves_length(gas, rad_factors):
    for length in (1, 5, 50, 200):
        assert len(cr.rad_convolve([1.0] * length, gas)) == length


@pytest.mark.parametrize("gas", GASES)
def test_convolve_zero_emissions_give_zero_forcing(gas):
    assert cr.rad_convolve([0.0] * 20, gas) == [0.0] * 20


@pytest.mark.parametrize("gas", GASES)
def test_convolve_impulse_returns_dynco2_factors(gas, rad_factors, MOSIR_TOLERENCE):
    """Une impulsion unitaire doit restituer la colonne DynCO2 du gaz.

    L'impulsion est divisée par la masse du gaz pour compenser la
    conversion kgC -> masse de gaz faite par rad_convolve.
    """
    length = 100
    impulse = [1 / MASSE[gas]] + [0.0] * (length - 1)

    result = cr.rad_convolve(impulse, gas)
    expected = rad_factors[gas][:length]

    for got, want in zip(result, expected):
        assert abs(got - want) < MOSIR_TOLERENCE


@pytest.mark.parametrize("gas", GASES)
def test_convolve_is_linear(gas, MOSIR_TOLERENCE):
    """Doubler les émissions doit doubler le forçage radiatif."""
    base = [1.0, 2.0, 0.0, 5.0, 0.0, 3.0]
    single = cr.rad_convolve(base, gas)
    double = cr.rad_convolve([i * 2 for i in base], gas)

    for one, two in zip(single, double):
        assert abs(two - one * 2) < MOSIR_TOLERENCE


@pytest.mark.parametrize("gas", GASES)
def test_convolve_first_value_is_instantaneous_response(gas, rad_factors, MOSIR_TOLERENCE):
    """rad[0] ne dépend que de l'émission de l'année 0."""
    result = cr.rad_convolve([10.0, 99.0, 99.0], gas)
    expected = 10.0 * MASSE[gas] * rad_factors[gas][0]
    assert abs(result[0] - expected) < MOSIR_TOLERENCE


@pytest.mark.parametrize("gas", GASES)
def test_convolve_cumulative_is_cumsum_of_annual(gas, MOSIR_TOLERENCE):
    emissions = [1.0, 0.0, 4.0, 2.0, 0.0, 7.0]
    annual = cr.rad_convolve(emissions, gas, cumulative=False)
    cumulative = cr.rad_convolve(emissions, gas, cumulative=True)

    for got, want in zip(cumulative, np.cumsum(annual)):
        assert abs(got - want) < MOSIR_TOLERENCE


@pytest.mark.parametrize("gas", GASES)
def test_convolve_cumulative_is_monotonic_for_positive_emissions(gas):
    """Des émissions positives ne peuvent pas faire diminuer le cumulatif."""
    cumulative = cr.rad_convolve([1.0] * 50, gas, cumulative=True)
    assert all(b >= a for a, b in zip(cumulative, cumulative[1:]))


@pytest.mark.parametrize("bad_gas", ["SF6", "co2", "CO3", "", "N2O ", "H2O"])
def test_convolve_rejects_unknown_gas(bad_gas):
    with pytest.raises(me.InvalidOption):
        cr.rad_convolve([1.0, 2.0], bad_gas)


def test_convolve_n2o_has_no_mass_conversion(rad_factors, MOSIR_TOLERENCE):
    """N2O est le seul gaz passé tel quel, sans facteur de masse."""
    result = cr.rad_convolve([1.0], "N2O")
    assert abs(result[0] - rad_factors["N2O"][0]) < MOSIR_TOLERENCE


def test_convolve_does_not_mutate_input():
    emissions = [1.0, 2.0, 3.0]
    original = list(emissions)
    cr.rad_convolve(emissions, "CO2")
    assert emissions == original


# rad_formatting -------------------------------------------------------------
def test_formatting_converts_gas_columns_in_place(MOSIR_TOLERENCE):
    data = {
        "Time": [0, 1, 2, 3],
        "CO2 emissions": [1.0, 0.0, 0.0, 0.0],
        "CH4 emissions": [1.0, 0.0, 0.0, 0.0],
        "N2O emissions": [1.0, 0.0, 0.0, 0.0],
        "CO emissions": [1.0, 0.0, 0.0, 0.0],
    }
    expected = {
        col: cr.rad_convolve(values, col.split()[0])
        for col, values in data.items() if col != "Time"
    }

    returned = cr.rad_formatting(data, cumulative=False)

    assert returned is None, "rad_formatting modifie le dict en place"
    assert data["Time"] == [0, 1, 2, 3], "La colonne de temps ne doit pas être convertie"
    for col, want in expected.items():
        for got, w in zip(data[col], want):
            assert abs(got - w) < MOSIR_TOLERENCE


def test_formatting_co_is_not_confused_with_co2(MOSIR_TOLERENCE):
    """'CO emissions' doit utiliser le facteur CO, pas CO2."""
    data = {"Time": [0, 1], "CO emissions": [1.0, 0.0]}
    cr.rad_formatting(data)

    expected = cr.rad_convolve([1.0, 0.0], "CO")
    assert abs(data["CO emissions"][0] - expected[0]) < MOSIR_TOLERENCE


@pytest.mark.parametrize("time_column", [
    "Time", "time", "Timestep", "Temps", "Year", "Years", "Année", "Années",
])
def test_formatting_recognizes_time_column_aliases(time_column):
    data = {time_column: [0, 1, 2], "CO2 emissions": [1.0, 0.0, 0.0]}
    cr.rad_formatting(data)
    assert data[time_column] == [0, 1, 2]


def test_formatting_rejects_missing_years():
    data = {"Time": [0, 1, 3], "CO2 emissions": [1.0, 0.0, 0.0]}
    with pytest.raises(me.TimeStepError):
        cr.rad_formatting(data)


def test_formatting_rejects_unordered_years():
    data = {"Time": [2, 0, 1], "CO2 emissions": [1.0, 0.0, 0.0]}
    with pytest.raises(me.TimeStepError):
        cr.rad_formatting(data)


@pytest.mark.parametrize("column", [
    "Sawnwood", "Panels", "co2 emissions", "Co2", "Combined",
])
def test_formatting_rejects_columns_without_a_recognized_gas(column):
    """Le nom du noeud doit contenir un gaz en majuscules pour être converti."""
    data = {"Time": [0, 1], column: [1.0, 0.0]}
    with pytest.raises(me.InvalidOption):
        cr.rad_formatting(data)


def test_formatting_matches_on_substrings_not_on_words():
    """rad_formatting fait un simple `'CO2' in col`, sans exiger d'espaces.

    'CO2_emissions' est donc converti ici, alors que le vérificateur
    (is_gas_present_in_name) met en garde contre cette écriture.
    """
    data = {"Time": [0, 1], "CO2_emissions": [1.0, 0.0]}
    cr.rad_formatting(data)
    assert data["CO2_emissions"] != [1.0, 0.0]


def test_formatting_cumulative_matches_rad_convolve(MOSIR_TOLERENCE):
    emissions = [3.0, 1.0, 0.0, 2.0]
    data = {"Time": [0, 1, 2, 3], "CO2 emissions": list(emissions)}

    cr.rad_formatting(data, cumulative=True)

    expected = cr.rad_convolve(emissions, "CO2", cumulative=True)
    for got, want in zip(data["CO2 emissions"], expected):
        assert abs(got - want) < MOSIR_TOLERENCE


def test_formatting_result_is_a_plain_list():
    """Les valeurs doivent rester sérialisables en JSON (pas de np.ndarray)."""
    data = {"Time": [0, 1], "CO2 emissions": [1.0, 0.0]}
    cr.rad_formatting(data, cumulative=True)
    assert isinstance(data["CO2 emissions"], list)


# CLI ------------------------------------------------------------------------
def test_cli_rejects_invalid_cumulative_flag():
    with pytest.raises(me.InvalidOption):
        cr.main(["-I", "[1,0]", "-G", "CO2", "-C", "Peut-etre"])


@pytest.mark.parametrize("missing", [
    ["-G", "CO2", "-C", "True"],
    ["-I", "[1,0]", "-C", "True"],
    ["-I", "[1,0]", "-G", "CO2"],
])
def test_cli_requires_all_arguments(missing):
    with pytest.raises(SystemExit):
        cr.main(missing)
