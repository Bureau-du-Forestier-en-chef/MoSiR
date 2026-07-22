"""
Inputs tests for MoSiR

Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""
import pytest
from MoSiR import (
    import_info as ii,
    mosir_exceptions as me,
)

def test_wrong_path():
    with pytest.raises(me.InvalidOption):
        ii.ImportData("Not_a_dir")

def test_no_unit(import_data):
    import_data._DATA['Unit'] = "Not a valid unit"
    with pytest.raises(me.InvalidOption):
        import_data.get_unit()

def test_nothing_in_Inputs(input_dict):
    inputs = input_dict
    inputs['Inputs'] = {}

    with pytest.raises(me.QuantityError):
        ii.ImportData(Dict=inputs)

def test_no_flux_data(import_data):
    import_data._DATA['Inputs']['Example'] = {}
    with pytest.raises(me.QuantityError):
        import_data.get_flux_data('Example')

def test_not_a_graph_name(import_data):
    with pytest.raises(me.InvalidOption):
        import_data.get_flux_data('Not a graph name')

def test_no_influx(import_data):
    import_data._DATA['Inputs']['Example']['Harvested Biomass'] = {}
    with pytest.raises(me.QuantityError):
        import_data.get_flux_input('Example', 'Harvested Biomass')

def test_not_a_node_name(import_data):
    with pytest.raises(me.InvalidOption):
        import_data.get_flux_input('Example', 'Not a node name')

def test_no_decay_in_graph(graph_factory_1, input_dict):
    inputs = input_dict
    inputs["Decay"] = {}
    import_data = ii.ImportData(Dict=inputs)
    ii.add_import(graph_factory_1, import_data)

def test_not_a_valid_decay_node(graph_factory_1, input_dict):
    inputs = input_dict
    inputs['Decay']['Example'] = {"Not a valid name": {"Gamma": 33.5}}
    import_data = ii.ImportData(Dict=inputs)
    with pytest.raises(me.NodeError):
        ii.add_import(graph_factory_1, import_data)

def test_not_a_valid_degradation(graph_factory_2, input_dict):
    inputs = input_dict
    inputs['Decay']['Example'] = {
        "Sawnwood": {"Not a valid one": 33.5}, 
        "Panels": {"Custom": {"alpha": 27.91, "beta": 1.0}}, 
        "Cardboard": {"Exponential": 5.0}}
    import_data = ii.ImportData(Dict=inputs)
    with pytest.raises(me.InvalidOption):
        ii.add_import(graph_factory_2, import_data)

def test_optimization_failed(graph_factory_2, input_dict):
    inputs = input_dict
    inputs['Decay']['Example'] = {
        "Sawnwood": {"Gamma": 99999}, 
        "Panels": {"Custom": {"alpha": 27.91, "beta": 1.0}}, 
        "Cardboard": {"Exponential": 5.0}}
    import_data = ii.ImportData(Dict=inputs)
    with pytest.raises(me.DecayError):
        ii.add_import(graph_factory_2, import_data)
        
def test_missing_decay(graph_factory_2, input_dict):
    inputs = input_dict
    inputs['Decay']['Example'] = {
        "Sawnwood": {"Gamma": 30}}
    import_data = ii.ImportData(Dict=inputs)
    with pytest.raises(me.NodeError):
        ii.add_import(graph_factory_2, import_data)


# Sources de données ---------------------------------------------------------
def test_requires_a_directory_or_a_dict():
    with pytest.raises(me.InvalidOption):
        ii.ImportData()


def test_loading_from_file_matches_loading_from_dict(import_data):
    from_dict = ii.ImportData(Dict=import_data._DATA)
    assert from_dict.get_unit() == import_data.get_unit()
    assert from_dict.get_flux_name('Example') == import_data.get_flux_name('Example')


@pytest.mark.parametrize("unit", ["kgC", "tC"])
def test_valid_units_are_accepted(import_data, unit):
    import_data._DATA['Unit'] = unit
    assert import_data.get_unit() == unit


@pytest.mark.parametrize("unit", ["tc", "KGC", "tCO2eq", "m3", ""])
def test_invalid_units_are_rejected(import_data, unit):
    """La casse compte: seuls 'kgC' et 'tC' exactement sont valides."""
    import_data._DATA['Unit'] = unit
    with pytest.raises(me.InvalidOption):
        import_data.get_unit()


# Lecture des flux -----------------------------------------------------------
def test_flux_input_returns_aligned_time_and_quantities(input_dict):
    import_data = ii.ImportData(Dict=input_dict)
    time, quantities = import_data.get_flux_input('Example', 'Harvested Biomass')
    assert time == [1, 2, 3]
    assert quantities == [115.0, 125.0, 135.0]


def test_flux_input_skips_zero_years(input_dict):
    """Une année à 0 n'est pas retenue: elle n'apporte aucun carbone."""
    input_dict['Inputs']['Example']['Harvested Biomass'] = {
        "1": 100.0, "2": 0, "3": 50.0}
    import_data = ii.ImportData(Dict=input_dict)
    time, quantities = import_data.get_flux_input('Example', 'Harvested Biomass')
    assert time == [1, 3]
    assert quantities == [100.0, 50.0]


def test_flux_input_with_only_zeros_raises(input_dict):
    input_dict['Inputs']['Example']['Harvested Biomass'] = {"1": 0, "2": 0}
    import_data = ii.ImportData(Dict=input_dict)
    with pytest.raises(me.QuantityError):
        import_data.get_flux_input('Example', 'Harvested Biomass')


def test_flux_names_list_every_input_node(input_dict):
    import_data = ii.ImportData(Dict=input_dict)
    assert import_data.get_flux_name('Example') == ['Harvested Biomass']


# Lecture des dégradations ---------------------------------------------------
def test_decay_data_with_unknown_graph_name_raises(input_dict):
    import_data = ii.ImportData(Dict=input_dict)
    with pytest.raises(me.InvalidOption):
        import_data.get_decay_data('Pas un nom de graphe')


def test_decay_data_empty_for_a_graph_raises(input_dict):
    input_dict['Decay']['Example'] = {}
    import_data = ii.ImportData(Dict=input_dict)
    with pytest.raises(me.QuantityError):
        import_data.get_decay_data('Example')


def test_decay_name_is_empty_when_no_decay_section(input_dict):
    input_dict['Decay'] = {}
    import_data = ii.ImportData(Dict=input_dict)
    assert import_data.get_decay_name('Example') == []


def test_custom_decay_uses_the_given_parameters(input_dict):
    import_data = ii.ImportData(Dict=input_dict)
    alpha, beta = import_data.get_decay_input('Example', 'Panels')
    assert (alpha, beta) == (27.91, 1.0)


@pytest.mark.parametrize("decay_type, halflife", [
    ("Exponential", 5.0), ("Gamma", 33.5), ("Chi-square", 12.0),
])
def test_every_decay_type_is_optimized(input_dict, decay_type, halflife):
    from scipy.stats import gamma
    input_dict['Decay']['Example'] = {"Sawnwood": {decay_type: halflife}}
    import_data = ii.ImportData(Dict=input_dict)

    alpha, beta = import_data.get_decay_input('Example', 'Sawnwood')
    assert round(gamma.cdf(halflife, alpha, scale=beta), 4) == 0.5


# add_import -----------------------------------------------------------------
def test_add_import_populates_nodes(graph_factory_2, import_data):
    ii.add_import(graph_factory_2, import_data)
    G = graph_factory_2.get_graph('Example')

    for node in G.nodes():
        if node.NAME in import_data.get_flux_name('Example'):
            assert node.time and node.quantities
            assert len(node.time) == len(node.quantities)
        if node.NAME in import_data.get_decay_name('Example'):
            assert node.alpha is not None
            assert node.beta is not None


def test_add_import_is_idempotent(graph_factory_2, import_data):
    """Réimporter les mêmes données ne doit pas cumuler les intrants."""
    ii.add_import(graph_factory_2, import_data)
    G = graph_factory_2.get_graph('Example')
    snapshot = {n.NAME: list(n.time) for n in G.nodes() if hasattr(n, 'time')}

    ii.add_import(graph_factory_2, import_data)
    for node in G.nodes():
        if hasattr(node, 'time'):
            assert list(node.time) == snapshot[node.NAME]