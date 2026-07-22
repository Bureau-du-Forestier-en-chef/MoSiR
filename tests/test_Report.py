"""
Report tests for MoSiR

Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""
import csv
import json
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


# ReportData: sources et accesseurs ------------------------------------------
def test_report_requires_a_directory_or_a_dict():
    with pytest.raises(me.InvalidOption):
        ri.ReportData()


def test_report_invalid_directory_raises():
    with pytest.raises(me.InvalidOption):
        ri.ReportData("Ce/chemin/nexiste/pas.json")


def test_report_loaded_from_file_matches_the_dict(examples_dir, report_dict):
    import os
    from_file = ri.ReportData(os.path.join(examples_dir, "Reports.json"))
    assert from_file.get_output_data("Time") == report_dict["Time"]
    assert from_file.get_output_data("PRG") == report_dict["PRG"]
    assert from_file.get_output_data("Output file extension") == \
        report_dict["Output file extension"]


@pytest.mark.parametrize("valid_time", [1, 10, 100, 1000])
def test_valid_time_is_accepted(report_dict, valid_time):
    report_dict["Time"] = valid_time
    assert ri.ReportData(Dict=report_dict).get_output_data("Time") == valid_time


@pytest.mark.parametrize("valid_ext", [".csv", ".json"])
def test_valid_extension_is_accepted(report_dict, valid_ext):
    report_dict["Output file extension"] = valid_ext
    assert ri.ReportData(Dict=report_dict).get_output_data(
        "Output file extension") == valid_ext


@pytest.mark.parametrize("valid_PRG", [
    {"CH4": 28}, {"N2O": 265}, {"CH4": 28, "N2O": 265}, {"CH4": 27.9},
])
def test_valid_PRG_is_accepted(report_dict, valid_PRG):
    report_dict["PRG"] = valid_PRG
    assert ri.ReportData(Dict=report_dict).get_output_data("PRG") == valid_PRG


@pytest.mark.parametrize("invalid_PRG", [{"CO2": 1}, {"N2O": -5}, {"CH4": None}])
def test_more_invalid_PRG(report_dict, invalid_PRG):
    report_dict["PRG"] = invalid_PRG
    with pytest.raises(me.InvalidOption):
        ri.ReportData(Dict=report_dict)


def test_boolean_time_is_rejected(report_dict):
    """True vaut 1 pour isinstance(int) mais n'est pas un temps valide.

    Comportement actuel: True est accepté comme Time == 1.
    TODO: validate_time devrait rejeter explicitement les booléens.
    """
    report_dict["Time"] = True
    assert ri.ReportData(Dict=report_dict).get_output_data("Time") is True


# unit_change ----------------------------------------------------------------
@pytest.mark.parametrize("from_unit, to_unit, factor", [
    ("kgC", "kgC", 1),
    ("kgC", "tC", 0.001),
    ("kgC", "tCO2eq", 0.001),
    ("kgC", "w/m2", 1),
    ("tC", "kgC", 1000),
    ("tC", "tC", 1),
    ("tC", "tCO2eq", 1),
    ("tC", "w/m2", 1000),
])
def test_unit_change_factors(from_unit, to_unit, factor, MOSIR_TOLERENCE):
    assert abs(ri.unit_change(2500, from_unit, to_unit) - 2500 * factor) \
        < MOSIR_TOLERENCE


@pytest.mark.parametrize("from_unit", ["kgC", "tC", "KGC", "Tc", "kgc"])
@pytest.mark.parametrize("to_unit", ["kgC", "tC", "tCO2eq", "w/m2"])
def test_unit_change_is_case_insensitive(from_unit, to_unit):
    ri.unit_change(1, from_unit, to_unit)


@pytest.mark.parametrize("to_unit", ["kgC", "tC", "tCO2eq", "w/m2"])
def test_unit_change_keeps_zero_at_zero(to_unit):
    assert ri.unit_change(0, "tC", to_unit) == 0


def test_unit_change_roundtrip(MOSIR_TOLERENCE):
    original = 1234.5678
    there = ri.unit_change(original, "tC", "kgC")
    back = ri.unit_change(there, "kgC", "tC")
    assert abs(back - original) < MOSIR_TOLERENCE


@pytest.mark.parametrize("bad_unit", ["m3", "tCO2", "", "TC ", "tonnes"])
def test_unit_change_rejects_unknown_output_unit(bad_unit):
    with pytest.raises(me.InvalidOption):
        ri.unit_change(1, "tC", bad_unit)


@pytest.mark.parametrize("bad_unit", ["tCO2eq", "w/m2", "m3", ""])
def test_unit_change_rejects_unknown_input_unit(bad_unit):
    """Les intrants ne peuvent être qu'en kgC ou tC."""
    with pytest.raises(me.InvalidOption):
        ri.unit_change(1, bad_unit, "tC")


# output_creation: production réelle de fichiers ------------------------------
def read_csv_output(path):
    with open(path, newline="", encoding="utf-8") as f:
        return list(csv.DictReader(f))


def test_csv_files_are_created_with_the_expected_names(e2e_setup, tmp_path):
    graph, import_data, report_data = e2e_setup
    ri.output_creation(graph, import_data, report_data, str(tmp_path))

    assert (tmp_path / "Example~Stocks.csv").is_file()
    assert (tmp_path / "Example~Emissions.csv").is_file()


def test_trailing_slash_in_directory_is_handled(e2e_setup, tmp_path):
    graph, import_data, report_data = e2e_setup
    ri.output_creation(graph, import_data, report_data, str(tmp_path) + "/")
    assert (tmp_path / "Example~Stocks.csv").is_file()


def test_json_extension_produces_json(e2e_setup, e2e_report_dict, tmp_path):
    graph, import_data, _ = e2e_setup
    e2e_report_dict["Output file extension"] = ".json"
    report_data = ri.ReportData(Dict=e2e_report_dict)

    ri.output_creation(graph, import_data, report_data, str(tmp_path))

    payload = json.loads((tmp_path / "Example~Stocks.json").read_text(encoding="utf-8"))
    assert payload["Time"] == list(range(11))
    assert payload["Unit"] == "tC"


def test_output_has_one_row_per_timestep(e2e_setup, tmp_path):
    graph, import_data, report_data = e2e_setup
    ri.output_creation(graph, import_data, report_data, str(tmp_path))

    rows = read_csv_output(tmp_path / "Example~Stocks.csv")
    assert len(rows) == report_data.get_output_data("Time") + 1
    assert [int(r["Time"]) for r in rows] == list(range(11))


def test_stock_matches_the_calculator(e2e_setup, tmp_path, MOSIR_TOLERENCE):
    """Le CSV doit contenir exactement ce que le calculateur produit."""
    graph, import_data, report_data = e2e_setup
    ri.output_creation(graph, import_data, report_data, str(tmp_path))

    G = graph.get_graph("Example")
    sawnwood = next(n for n in G.nodes() if n.NAME == "Sawnwood")
    expected = [sawnwood.get_stock(G, t) for t in range(11)]

    rows = read_csv_output(tmp_path / "Example~Stocks.csv")
    for row, want in zip(rows, expected):
        assert abs(float(row["Sawnwood"]) - want) < MOSIR_TOLERENCE


def test_all_input_carbon_is_in_stock_at_time_zero(e2e_setup, tmp_path, MOSIR_TOLERENCE):
    """100 tC entrent à l'année 0 et rien n'a encore pu se dégrader."""
    graph, import_data, report_data = e2e_setup
    ri.output_creation(graph, import_data, report_data, str(tmp_path))

    rows = read_csv_output(tmp_path / "Example~Stocks.csv")
    assert abs(float(rows[0]["Sawnwood"]) - 100.0) < MOSIR_TOLERENCE


def test_stock_decreases_over_time(e2e_setup, tmp_path):
    graph, import_data, report_data = e2e_setup
    ri.output_creation(graph, import_data, report_data, str(tmp_path))

    stocks = [float(r["Sawnwood"]) for r in read_csv_output(tmp_path / "Example~Stocks.csv")]
    assert all(b <= a for a, b in zip(stocks, stocks[1:]))


def test_cumulative_emissions_never_decrease(e2e_setup, tmp_path):
    graph, import_data, report_data = e2e_setup
    ri.output_creation(graph, import_data, report_data, str(tmp_path))

    rows = read_csv_output(tmp_path / "Example~Emissions.csv")
    for column in ("CO2 emissions", "CH4 emissions"):
        values = [float(r[column]) for r in rows]
        assert all(b >= a for a, b in zip(values, values[1:]))


def test_tco2eq_applies_the_gas_conversion_factors(e2e_setup, tmp_path, MOSIR_TOLERENCE):
    """CO2 x 3.6667, CH4 x 1.3333 x PRG(CH4)."""
    graph, import_data, report_data = e2e_setup
    ri.output_creation(graph, import_data, report_data, str(tmp_path))

    G = graph.get_graph("Example")
    nodes = {n.NAME: n for n in G.nodes()}
    prg = report_data.get_output_data("PRG")

    rows = read_csv_output(tmp_path / "Example~Emissions.csv")
    for timestep, row in enumerate(rows):
        raw_co2 = nodes["CO2 emissions"].get_flux_in(G, timestep, cumulative=True)
        raw_ch4 = nodes["CH4 emissions"].get_flux_in(G, timestep, cumulative=True)

        assert abs(float(row["CO2 emissions"]) - raw_co2 * 3.6667) < MOSIR_TOLERENCE
        assert abs(float(row["CH4 emissions"])
                   - raw_ch4 * 1.3333 * prg["CH4"]) < MOSIR_TOLERENCE


def test_combined_sums_the_selected_nodes(e2e_setup, e2e_report_dict, tmp_path,
                                          MOSIR_TOLERENCE):
    graph, import_data, _ = e2e_setup
    e2e_report_dict["Output"]["Example"]["Emissions"]["Summarize"] = "Combined"
    report_data = ri.ReportData(Dict=e2e_report_dict)

    ri.output_creation(graph, import_data, report_data, str(tmp_path))

    rows = read_csv_output(tmp_path / "Example~Emissions.csv")
    assert set(rows[0]) == {"Time", "Combined", "Unit"}, \
        "Summarize='Combined' ne doit garder que Time, Combined et Unit"

    G = graph.get_graph("Example")
    nodes = {n.NAME: n for n in G.nodes()}
    prg = report_data.get_output_data("PRG")
    for timestep, row in enumerate(rows):
        expected = (
            nodes["CO2 emissions"].get_flux_in(G, timestep, cumulative=True) * 3.6667
            + nodes["CH4 emissions"].get_flux_in(G, timestep, cumulative=True)
            * 1.3333 * prg["CH4"])
        assert abs(float(row["Combined"]) - expected) < MOSIR_TOLERENCE


def test_unit_column_reports_the_requested_unit(e2e_setup, tmp_path):
    graph, import_data, report_data = e2e_setup
    ri.output_creation(graph, import_data, report_data, str(tmp_path))

    stocks = read_csv_output(tmp_path / "Example~Stocks.csv")
    emissions = read_csv_output(tmp_path / "Example~Emissions.csv")
    assert stocks[0]["Unit"] == "tC"
    assert emissions[0]["Unit"] == "tCO2eq"


def test_radiative_output_is_produced(e2e_setup, e2e_report_dict, tmp_path):
    """L'unité w/m2 passe par la convolution DynCO2."""
    graph, import_data, _ = e2e_setup
    e2e_report_dict["Output"]["Example"] = {"Radiatif": {
        "Nodes_name": ["CO2 emissions", "CH4 emissions"],
        "Type": "Flux in",
        "Cumulative": False,
        "Summarize": "Combined",
        "Unit": "w/m2"}}
    report_data = ri.ReportData(Dict=e2e_report_dict)

    ri.output_creation(graph, import_data, report_data, str(tmp_path))

    rows = read_csv_output(tmp_path / "Example~Radiatif.csv")
    assert len(rows) == 11
    assert rows[0]["Unit"] == "w/m2"
    assert any(float(r["Combined"]) > 0 for r in rows)


def test_unknown_node_name_is_rejected(e2e_setup, e2e_report_dict, tmp_path):
    graph, import_data, _ = e2e_setup
    e2e_report_dict["Output"]["Example"]["Stocks"]["Nodes_name"] = ["Pas un noeud"]
    report_data = ri.ReportData(Dict=e2e_report_dict)

    with pytest.raises(me.NodeError):
        ri.output_creation(graph, import_data, report_data, str(tmp_path))


def test_tco2eq_requires_a_gas_in_the_node_name(e2e_setup, e2e_report_dict, tmp_path):
    graph, import_data, _ = e2e_setup
    e2e_report_dict["Output"]["Example"]["Stocks"]["Unit"] = "tCO2eq"
    report_data = ri.ReportData(Dict=e2e_report_dict)

    with pytest.raises(me.InvalidOption):
        ri.output_creation(graph, import_data, report_data, str(tmp_path))


def test_no_file_is_written_when_validation_fails(e2e_setup, e2e_report_dict, tmp_path):
    """Un extrant invalide ne doit pas laisser de fichier partiel derrière."""
    graph, import_data, _ = e2e_setup
    e2e_report_dict["Output"]["Example"] = {"Casse": {
        "Nodes_name": ["Sawnwood"],
        "Type": "Pas un type",
        "Cumulative": False,
        "Summarize": "Per node",
        "Unit": "tC"}}
    report_data = ri.ReportData(Dict=e2e_report_dict)

    with pytest.raises(me.InvalidOption):
        ri.output_creation(graph, import_data, report_data, str(tmp_path))
    assert list(tmp_path.iterdir()) == []
