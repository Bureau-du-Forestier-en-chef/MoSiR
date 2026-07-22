"""
Command line tests for MoSiR

Couvre le point d'entrée mosir_calculator, utilisé à la fois par la ligne
de commande et par l'interface web via run_calculator.

Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""
import os
import pytest
from MoSiR import mosir_calculator as mc


@pytest.fixture
def example_arguments(examples_dir, tmp_path):
    return [
        "-G", os.path.join(examples_dir, "Graph.json"),
        "-D", os.path.join(examples_dir, "Inputs.json"),
        "-R", os.path.join(examples_dir, "Reports.json"),
        "-E", str(tmp_path),
    ]


# run_calculator -------------------------------------------------------------
def test_run_calculator_produces_the_outputs(examples_dir, tmp_path):
    mc.run_calculator(
        os.path.join(examples_dir, "Graph.json"),
        os.path.join(examples_dir, "Inputs.json"),
        os.path.join(examples_dir, "Reports.json"),
        str(tmp_path),
    )
    assert sorted(p.name for p in tmp_path.iterdir()) == [
        "Example~Output_1.csv",
        "Example~Output_2.csv",
        "Example~Output_3.csv",
    ]


def test_run_calculator_is_reproducible(examples_dir, tmp_path):
    """Deux exécutions identiques doivent produire des fichiers identiques."""
    first, second = tmp_path / "a", tmp_path / "b"
    first.mkdir()
    second.mkdir()

    for target in (first, second):
        mc.run_calculator(
            os.path.join(examples_dir, "Graph.json"),
            os.path.join(examples_dir, "Inputs.json"),
            os.path.join(examples_dir, "Reports.json"),
            str(target),
        )

    for produced in first.iterdir():
        assert produced.read_bytes() == (second / produced.name).read_bytes(), \
            f"{produced.name} diffère entre deux exécutions"


@pytest.mark.parametrize("broken", ["graph", "inputs", "reports"])
def test_run_calculator_rejects_missing_files(examples_dir, tmp_path, broken):
    paths = {
        "graph": os.path.join(examples_dir, "Graph.json"),
        "inputs": os.path.join(examples_dir, "Inputs.json"),
        "reports": os.path.join(examples_dir, "Reports.json"),
    }
    paths[broken] = "Ce/chemin/nexiste/pas.json"

    with pytest.raises(Exception):
        mc.run_calculator(paths["graph"], paths["inputs"], paths["reports"],
                          str(tmp_path))


# main() ---------------------------------------------------------------------
def test_main_is_broken_by_a_wrong_argument_name(example_arguments):
    """BUG: main() lit args.I alors que le dest déclaré est 'D'.

    mosir_calculator.py:39 appelle run_calculator(args.G, args.I, ...)
    mais --DataFileDirectory est déclaré avec dest='D'. La ligne de
    commande `MoSiR -G ... -D ... -R ... -E ...` échoue donc toujours
    avec AttributeError. Seul run_calculator (appelé directement par
    l'interface web) fonctionne.

    Ce test verrouille le bug: il passera au rouge dès qu'il sera
    corrigé, ce qui signalera qu'il faut le remplacer par une vraie
    vérification de bout en bout.
    TODO: remplacer args.I par args.D dans mosir_calculator.main().
    """
    with pytest.raises(AttributeError, match="'I'"):
        mc.main(example_arguments)


@pytest.mark.parametrize("dropped", ["-G", "-D", "-R", "-E"])
def test_main_requires_every_argument(example_arguments, dropped):
    index = example_arguments.index(dropped)
    reduced = example_arguments[:index] + example_arguments[index + 2:]
    with pytest.raises(SystemExit):
        mc.main(reduced)


def test_main_shows_help_and_exits():
    with pytest.raises(SystemExit):
        mc.main(["--help"])
