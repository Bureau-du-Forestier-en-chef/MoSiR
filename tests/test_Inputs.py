"""
Inputs test for MoSiR

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

def test_no_unit(input_json):
    input_json._DATA['Unit'] = "Not a valid unit"
    with pytest.raises(me.InvalidOption):
        input_json.get_unit()

def test_nothing_in_Inputs(input_dict):
    inputs = input_dict
    inputs['Inputs'] = {}

    with pytest.raises(me.QuantityError):
        ii.ImportData(Dict=inputs)

def test_no_flux_data(input_json):
    input_json._DATA['Inputs']['Example'] = {}
    with pytest.raises(me.QuantityError):
        input_json.get_flux_data('Example')

def test_not_a_graph_name(input_json):
    with pytest.raises(me.InvalidOption):
        input_json.get_flux_data('Not a graph name')

def test_no_influx(input_json):
    input_json._DATA['Inputs']['Example']['Harvested Biomass'] = {}
    with pytest.raises(me.QuantityError):
        input_json.get_flux_input('Example', 'Harvested Biomass')

def test_not_a_node_name(input_json):
    with pytest.raises(me.InvalidOption):
        input_json.get_flux_input('Example', 'Not a node name')

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