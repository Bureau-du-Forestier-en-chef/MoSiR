"""
Characterization tests for MoSiR

Ces tests ne vérifient pas qu'un résultat est *correct*, mais qu'il n'a
pas *changé*. Ils figent les sorties numériques actuelles du calculateur
pour que toute dérive introduite par un refactor soit visible
immédiatement, y compris celle qui respecterait encore tous les
invariants testés ailleurs.

Régénérer les références après un changement de comportement VOULU:

    MOSIR_REGEN_REFERENCE=1 python -m pytest tests/test_Characterization.py

puis relire le diff git avant de commiter: chaque ligne modifiée est un
changement de résultat de calcul.

Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""
import os
import csv
import json
import math
import pathlib
import pytest
from MoSiR import mosir_calculator as mc

REFERENCE_DIR = pathlib.Path(__file__).resolve().parent / "reference"
REGENERATE = os.environ.get("MOSIR_REGEN_REFERENCE") == "1"

# Assez serré pour attraper une dérive de calcul, assez souple pour
# tolérer le dernier bit de flottant d'une version de scipy à l'autre.
REL_TOL = 1e-9
ABS_TOL = 1e-12


def read_csv(path):
    with open(path, newline="", encoding="utf-8") as f:
        reader = csv.DictReader(f)
        return reader.fieldnames, list(reader)


def assert_cells_match(produced, expected, where):
    for key, expected_value in expected.items():
        produced_value = produced[key]
        try:
            got, want = float(produced_value), float(expected_value)
        except ValueError:
            assert produced_value == expected_value, \
                f"{where}, colonne '{key}': '{produced_value}' != '{expected_value}'"
            continue
        assert math.isclose(got, want, rel_tol=REL_TOL, abs_tol=ABS_TOL), \
            f"{where}, colonne '{key}': {got!r} != {want!r} (référence)"


@pytest.fixture(scope="module")
def pipeline_output(tmp_path_factory, ):
    """Exécute le calculateur complet sur les fichiers d'exemple."""
    examples = pathlib.Path(__file__).resolve().parents[1] / "examples" / "Inputs"
    output_dir = tmp_path_factory.mktemp("outputs")

    mc.run_calculator(
        str(examples / "Graph.json"),
        str(examples / "Inputs.json"),
        str(examples / "Reports.json"),
        str(output_dir),
    )
    return output_dir


# Chaîne complète sur les fichiers d'exemple ---------------------------------
def test_pipeline_produces_the_expected_files(pipeline_output):
    produced = sorted(p.name for p in pipeline_output.iterdir())
    assert produced == [
        "Example~Output_1.csv",
        "Example~Output_2.csv",
        "Example~Output_3.csv",
    ]


@pytest.mark.parametrize("filename", [
    "Example~Output_1.csv",  # Combiné, forçage radiatif (w/m2)
    "Example~Output_2.csv",  # Par noeud, équivalent CO2 (tCO2eq)
    "Example~Output_3.csv",  # Par noeud, stocks (tC)
])
def test_pipeline_output_matches_reference(pipeline_output, filename):
    produced_path = pipeline_output / filename
    reference_path = REFERENCE_DIR / filename

    if REGENERATE:
        REFERENCE_DIR.mkdir(exist_ok=True)
        reference_path.write_bytes(produced_path.read_bytes())
        pytest.skip(f"Référence régénérée: {filename}")

    assert reference_path.is_file(), (
        f"Référence manquante pour {filename}. "
        "Lancer MOSIR_REGEN_REFERENCE=1 python -m pytest tests/test_Characterization.py")

    produced_columns, produced_rows = read_csv(produced_path)
    expected_columns, expected_rows = read_csv(reference_path)

    assert produced_columns == expected_columns, "Les colonnes ont changé"
    assert len(produced_rows) == len(expected_rows), "Le nombre de lignes a changé"

    for index, (produced, expected) in enumerate(zip(produced_rows, expected_rows)):
        assert_cells_match(produced, expected, f"{filename} ligne {index}")


# Valeurs de référence des fixtures de calcul --------------------------------
def collect_fixture_values(graph_01, graph_02, graph_05):
    """Échantillonne des résultats sur les graphes de test.

    Couvre dégradation en cascade, recyclage et entrées multiples.
    """
    g1, A1, B1, C1, D1, E1 = graph_01
    g2, D2 = graph_02
    g5, A5, B5, C5, D5, E5 = graph_05

    timesteps = [0, 1, 2, 5, 10, 25, 50, 100]

    return {
        "graph_01_C_stock": [C1.get_stock(g1, t) for t in timesteps],
        "graph_01_D_stock": [D1.get_stock(g1, t) for t in timesteps],
        "graph_01_E_flux_in": [E1.get_flux_in(g1, t) for t in timesteps],
        "graph_01_E_cumulative": [
            E1.get_flux_in(g1, t, cumulative=True) for t in timesteps],
        "graph_02_D_flux_out": [D2.get_flux_out(g2, t) for t in timesteps],
        "graph_02_D_stock": [D2.get_stock(g2, t) for t in timesteps],
        "graph_05_E_flux_in": [E5.get_flux_in(g5, t) for t in timesteps],
        "graph_05_E_stock": [E5.get_stock(g5, t) for t in timesteps],
    }


def test_fixture_values_match_reference(graph_01, graph_02, graph_05):
    reference_path = REFERENCE_DIR / "fixtures.json"
    produced = collect_fixture_values(graph_01, graph_02, graph_05)

    if REGENERATE:
        REFERENCE_DIR.mkdir(exist_ok=True)
        reference_path.write_text(
            json.dumps(produced, indent=2, sort_keys=True) + "\n", encoding="utf-8")
        pytest.skip("Référence régénérée: fixtures.json")

    assert reference_path.is_file(), (
        "Référence manquante. Lancer MOSIR_REGEN_REFERENCE=1 "
        "python -m pytest tests/test_Characterization.py")

    expected = json.loads(reference_path.read_text(encoding="utf-8"))
    assert set(produced) == set(expected), "Les séries échantillonnées ont changé"

    for series, values in produced.items():
        for index, (got, want) in enumerate(zip(values, expected[series])):
            assert math.isclose(got, want, rel_tol=REL_TOL, abs_tol=ABS_TOL), \
                f"{series}[{index}]: {got!r} != {want!r} (référence)"


# Propriétés physiques de la chaîne complète ---------------------------------
def test_stocks_never_exceed_the_carbon_that_entered(pipeline_output):
    """Aucun noeud ne peut contenir plus de carbone qu'il n'en est entré."""
    examples = pathlib.Path(__file__).resolve().parents[1] / "examples" / "Inputs"
    inputs = json.loads((examples / "Inputs.json").read_text(encoding="utf-8"))

    total_input = sum(
        value
        for graph in inputs["Inputs"].values()
        for node in graph.values()
        for value in node.values())

    _, rows = read_csv(pipeline_output / "Example~Output_3.csv")
    for row in rows:
        for column, value in row.items():
            if column in ("Time", "Unit"):
                continue
            assert 0 <= float(value) <= total_input


def test_cumulative_emissions_are_monotonic(pipeline_output):
    _, rows = read_csv(pipeline_output / "Example~Output_1.csv")
    values = [float(row["Combined"]) for row in rows]
    assert all(b >= a for a, b in zip(values, values[1:]))
