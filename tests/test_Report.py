"""
Report tests for MoSiR

Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""
import pytest
from MoSiR import (
    mosir_exceptions as me,
    reporting_info as ri
)

def test_missing_output(report_dict):
    report = report_dict
    report['Output'] = {}
    with pytest.raises(me.InvalidOption):
        report_data = ri.ReportData(Dict=report)

def test_missing_PRG(report_dict):
    report = report_dict
    report["PRG"] = {}
    with pytest.raises(me.InvalidOption):
        report_data = ri.ReportData(Dict=report)
        
def test_missing_Time(report_dict):
    report = report_dict
    report["Time"] = {}
    with pytest.raises(me.InvalidOption):
        report_data = ri.ReportData(Dict=report)
        
def test_missing_file_ext(report_dict):
    report = report_dict
    report["Output file extension"] = {}
    with pytest.raises(me.InvalidOption):
        report_data = ri.ReportData(Dict=report)

@pytest.mark.parametrize("invalid_time", [-1, -0.5, 0, 0.5])
def test_invalid_time(report_dict, invalid_time):
    report = report_dict
    report["Time"] = {invalid_time}
    with pytest.raises(me.InvalidOption):
        report_data = ri.ReportData(Dict=report)

@pytest.mark.parametrize("invalid_ext", [0, False, '.csv 1', "csv", ".csv ", " .csv"])
def test_invalid_ext(report_dict, invalid_ext):
    report = report_dict
    report["Output file extension"] = {invalid_ext}
    with pytest.raises(me.InvalidOption):
        report_data = ri.ReportData(Dict=report)

@pytest.mark.parametrize("invalid_PRG", [{'CO2': 5}, {'CH4': 0}, {'CH4': 'Wrong'}])
def test_invalid_PRG(report_dict, invalid_PRG):
    report = report_dict
    report["PRG"] = invalid_PRG
    with pytest.raises(me.InvalidOption):
        report_data = ri.ReportData(Dict=report)

def test_invalid_graph_name(report_dict, graph_factory_2, import_data):
    report = report_dict
    report['Output'] = {"Invalid": {}}
    report_data = ri.ReportData(Dict=report)
    with pytest.raises(me.GraphError):
        ri.output_creation(graph_factory_2, import_data, report_data, "Directory")

def test_invalid_type(report_dict, graph_factory_2, import_data):
    report = report_dict
    report['Output']['Example']['Output_1'] = {
        "Nodes_name": ["CO2 emissions", "CO2 emissions from transport", "N2O emissions"], 
        "Type": "Invalid", 
        "Cumulative": True, 
        "Summarize": "Combined", 
        "Unit": "w/m2"}
    report_data = ri.ReportData(Dict=report)
    with pytest.raises(me.InvalidOption):
        ri.output_creation(graph_factory_2, import_data, report_data, "Directory")

def test_invalid_cumulative(report_dict, graph_factory_2, import_data):
    report = report_dict
    report['Output']['Example']['Output_1'] = {
        "Nodes_name": ["CO2 emissions", "CO2 emissions from transport", "N2O emissions"], 
        "Type": "Flux out", 
        "Cumulative": "Invalid", 
        "Summarize": "Combined", 
        "Unit": "w/m2"}
    report_data = ri.ReportData(Dict=report)
    with pytest.raises(me.InvalidOption):
        ri.output_creation(graph_factory_2, import_data, report_data, "Directory")

def test_invalid_summarize(report_dict, graph_factory_2, import_data):
    report = report_dict
    report['Output']['Example']['Output_1'] = {
        "Nodes_name": ["CO2 emissions", "CO2 emissions from transport", "N2O emissions"], 
        "Type": "Flux out", 
        "Cumulative": True, 
        "Summarize": "Invalid", 
        "Unit": "w/m2"}
    report_data = ri.ReportData(Dict=report)
    with pytest.raises(me.InvalidOption):
        ri.output_creation(graph_factory_2, import_data, report_data, "Directory")

def test_invalid_unit(report_dict, graph_factory_2, import_data):
    report = report_dict
    report['Output']['Example']['Output_1'] = {
        "Nodes_name": ["CO2 emissions", "CO2 emissions from transport", "N2O emissions"], 
        "Type": "Flux out", 
        "Cumulative": True, 
        "Summarize": "Combined", 
        "Unit": "Invalid"}
    report_data = ri.ReportData(Dict=report)
    with pytest.raises(me.InvalidOption):
        ri.output_creation(graph_factory_2, import_data, report_data, "Directory")
