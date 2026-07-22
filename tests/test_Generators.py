"""
Generators tests for MoSiR

Couvre Generator/Dictgenerator: la structure intermédiaire produite à
partir d'un tableau Miro avant d'être passée à GraphFactory. Logique
pure, sans appel à l'API Miro.

Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""
import pytest
from MoSiR import generators as gen


@pytest.fixture
def nodes():
    return {
        "1": {"Decay": False, "Recycling": False, "Name": "Harvested Biomass"},
        "2": {"Decay": True, "Recycling": False, "Name": "Sawnwood"},
        "3": {"Decay": True, "Recycling": False, "Name": "Panels"},
        "4": {"Decay": False, "Recycling": False, "Name": "CO2 emissions"},
    }


@pytest.fixture
def edges():
    return {
        "10": {"From": 1, "To": 2, "Values": [0.6], "Overflow": False},
        "11": {"From": 1, "To": 3, "Values": [0.4], "Overflow": False},
        "12": {"From": 2, "To": 4, "Values": [1], "Overflow": False},
        "13": {"From": 3, "To": 4, "Values": [1], "Overflow": True},
    }


@pytest.fixture
def generator(nodes, edges):
    return gen.Dictgenerator("Example", nodes, edges)


# Construction ---------------------------------------------------------------
def test_graph_name_is_kept(generator):
    assert generator.get_graph_name() == "Example"


def test_node_keys_are_converted_to_int(generator):
    """Les identifiants Miro arrivent en texte et doivent devenir des entiers."""
    assert all(isinstance(key, int) for key in generator.to_dict()["Nodes"])


def test_edge_keys_are_left_untouched(generator):
    """Comportement actuel: seules les clés de noeuds sont converties.

    Sans impact car les clés d'edges ne servent jamais de référence.
    """
    assert all(isinstance(key, str) for key in generator.to_dict()["Edges"])


def test_to_dict_has_the_shape_expected_by_graphfactory(generator):
    result = generator.to_dict()
    assert set(result) == {"Nodes", "Edges"}
    assert len(result["Nodes"]) == 4
    assert len(result["Edges"]) == 4


def test_output_is_consumable_by_graphfactory(generator):
    """Le générateur doit produire un dict que GraphFactory sait lire."""
    from MoSiR import graph_generator as gg

    factory = gg.GraphFactory(Dict={"Example": generator.to_dict()})
    assert sorted(factory.get_graph("Example").get_nodes_names()) == [
        "CO2 emissions", "Harvested Biomass", "Panels", "Sawnwood"]


# Accesseurs -----------------------------------------------------------------
def test_node_names_are_sorted(generator):
    assert generator.get_node_names() == [
        "CO2 emissions", "Harvested Biomass", "Panels", "Sawnwood"]


def test_first_node_names_are_the_nodes_without_incoming_edge(generator):
    assert generator.get_first_node_names() == ["Harvested Biomass"]


def test_decay_node_names(generator):
    assert sorted(generator.get_decay_node_names()) == ["Panels", "Sawnwood"]


def test_no_decay_node_gives_an_empty_list(edges):
    nodes = {
        "1": {"Decay": False, "Recycling": False, "Name": "A"},
        "2": {"Decay": False, "Recycling": False, "Name": "B"},
    }
    generator = gen.Dictgenerator("Example", nodes, {
        "10": {"From": 1, "To": 2, "Values": [1], "Overflow": False}})
    assert generator.get_decay_node_names() == []


def test_several_first_nodes_are_all_reported():
    nodes = {
        "1": {"Decay": False, "Recycling": False, "Name": "A"},
        "2": {"Decay": False, "Recycling": False, "Name": "B"},
        "3": {"Decay": False, "Recycling": False, "Name": "C"},
    }
    edges = {
        "10": {"From": 1, "To": 3, "Values": [1], "Overflow": False},
        "11": {"From": 2, "To": 3, "Values": [1], "Overflow": False},
    }
    generator = gen.Dictgenerator("Example", nodes, edges)
    assert sorted(generator.get_first_node_names()) == ["A", "B"]


# Statistiques ---------------------------------------------------------------
def test_stats_report_sizes(generator):
    stats = generator.get_graph_stats()
    assert stats["Nodes"]["Size"] == 4
    assert stats["Edges"]["Size"] == 4


def test_stats_count_flagged_nodes_and_edges(generator):
    stats = generator.get_graph_stats()
    assert stats["Nodes"]["Decay"] == 2
    assert stats["Nodes"]["Recycling"] == 0
    assert stats["Edges"]["Overflow"] == 1


def test_stats_report_edge_value_range(generator):
    stats = generator.get_graph_stats()
    assert stats["Edges"]["Min"] == 0.4
    assert stats["Edges"]["Max"] == 1


def test_stats_ignore_layout_coordinates():
    """X et Y viennent de Miro et ne doivent pas être comptés."""
    nodes = {
        "1": {"Decay": False, "Recycling": False, "Name": "A", "X": 1.5, "Y": 2.5},
        "2": {"Decay": False, "Recycling": False, "Name": "B", "X": 0.0, "Y": 0.0},
    }
    edges = {"10": {"From": 1, "To": 2, "Values": [1], "Overflow": False}}
    stats = gen.Dictgenerator("Example", nodes, edges).get_graph_stats()

    assert "X" not in stats["Nodes"]
    assert "Y" not in stats["Nodes"]


def test_stats_on_an_empty_graph_give_an_inverted_range():
    """Comportement actuel: sans edge, Min reste à 1 et Max à 0.

    L'intervalle est inversé et n'a donc pas de sens; à interpréter
    comme 'aucune valeur'.
    TODO: retourner None (ou lever) quand il n'y a aucun edge.
    """
    stats = gen.Dictgenerator("Vide", {}, {}).get_graph_stats()
    assert stats["Edges"]["Min"] == 1
    assert stats["Edges"]["Max"] == 0
