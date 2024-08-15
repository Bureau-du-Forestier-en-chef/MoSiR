"""
Inputs test for MoSiR

Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""
import os
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

def test_nothing_in_Inputs():
    file_with_empty_input =  os.path.join(os.path.dirname(os.path.abspath(__file__)), 
        "data", "empty_inputs.json")
    with pytest.raises(me.QuantityError):
        ii.ImportData(file_with_empty_input)

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