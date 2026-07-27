# -*- coding: UTF-8 -*-
"""
Tests du banc d'essai du calculateur MoSiR.

Deux niveaux:

  * test_committed_workload_matches_generator — RAPIDE, tourne dans un `pytest`
    normal. Vérifie que la copie JSON versionnée (tests/benchmark/workload/) est
    identique à ce que produit le générateur, pour qu'elles ne dérivent jamais.

  * test_large_graph_* — LOURDS et OPT-IN (marqués `slow`). Rejouent le gros
    graphe (~105 noeuds) sur T=1000 et comparent les sorties à une référence
    figée; ils attrapent une dérive de calcul invisible sur les petits exemples.
    Activer avec:

        MOSIR_BENCH=1 python -m pytest tests/test_Benchmark.py

Le chronométrage et la trace des temps se font par la ligne de commande du
module de support (benchmark_support.py), pas ici: les temps dépendent de la
machine et n'ont pas leur place dans une assertion.

Régénérer la référence de sortie (changement VOULU, avec approbation):
MOSIR_BENCH=1 MOSIR_BENCH_REGEN=1 python -m pytest tests/test_Benchmark.py

Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""
import os
import json
import pytest

from tests import benchmark_support as bs
from MoSiR import mosir_calculator as mc

RUN_BENCH = os.environ.get("MOSIR_BENCH") == "1"
REGEN = os.environ.get("MOSIR_BENCH_REGEN") == "1"

skip_unless_opted_in = pytest.mark.skipif(
    not RUN_BENCH,
    reason="Banc d'essai opt-in: exporter MOSIR_BENCH=1 pour l'activer")


# Intégrité de la copie JSON (rapide, toujours exécuté) ----------------------
def test_committed_workload_matches_generator():
    """La copie JSON committée doit refléter exactement le générateur.

    Garde-fou contre une dérive: si le générateur (build_dicts) change sans
    régénérer les JSON, ou l'inverse, ce test échoue.
    """
    if not bs.GRAPH_JSON.is_file():
        pytest.skip("Workload JSON absent: lancer "
                    "`python -m tests.benchmark_support --regen-graph`")
    assert bs.workload_json_matches_generator(), (
        "Les JSON de tests/benchmark/workload/ ne correspondent plus au "
        "générateur. Régénérer: python -m tests.benchmark_support --regen-graph")


# Gros graphe: non-régression numérique (lourd, opt-in) ----------------------
@pytest.fixture(scope="module")
def produced_outputs(tmp_path_factory):
    """Exécute le calculateur sur le gros graphe committé, via run_calculator."""
    out_dir = tmp_path_factory.mktemp("bench_outputs")
    mc.run_calculator(
        str(bs.GRAPH_JSON), str(bs.INPUTS_JSON), str(bs.REPORTS_JSON), str(out_dir))
    return out_dir


@pytest.mark.slow
@skip_unless_opted_in
def test_large_graph_matches_reference(produced_outputs):
    if REGEN:
        bs.regenerate_reference(produced_outputs)
        pytest.skip("Référence du banc d'essai régénérée (MOSIR_BENCH_REGEN=1)")

    problems = bs.compare_to_reference(produced_outputs)
    assert not problems, (
        f"Dérive détectée sur le gros graphe ({len(problems)} écart(s)):\n"
        + "\n".join(problems[:20]))


@pytest.mark.slow
@skip_unless_opted_in
def test_large_graph_conserves_carbon(produced_outputs):
    """Propriété physique: aucun stock n'excède le carbone total entré."""
    inputs = json.loads(bs.INPUTS_JSON.read_text(encoding="utf-8"))
    total_input = sum(
        qty
        for graph in inputs["Inputs"].values()
        for node in graph.values()
        for qty in node.values())

    _, rows = bs.read_csv(produced_outputs / f"{bs.GRAPH_NAME}~Stocks.csv")
    for row in rows:
        for column, value in row.items():
            if column in ("Time", "Unit"):
                continue
            assert 0 <= float(value) <= total_input + 1e-6
