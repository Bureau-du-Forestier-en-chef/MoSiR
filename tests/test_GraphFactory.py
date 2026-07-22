"""
GraphFactory tests for MoSiR

Couvre la construction d'un réseau à partir d'un JSON: typage des noeuds
selon leur position et leurs drapeaux, validations structurelles et
immuabilité des données importées.

Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""
import os
import pytest
from MoSiR import (
    graph_generator as gg,
    mosir_exceptions as me,
)


def chain(name_1="N1", name_2="N2", name_3="N3", decay=None, recycling=None,
          graph_name="Example"):
    """Construit un dict de graphe en chaîne 1 -> 2 -> 3.

    decay/recycling: dict {id_noeud: bool} pour activer les drapeaux.
    """
    decay = decay or {}
    recycling = recycling or {}
    names = {1: name_1, 2: name_2, 3: name_3}
    return {graph_name: {
        "Nodes": {
            str(i): {
                "Decay": decay.get(i, False),
                "Recycling": recycling.get(i, False),
                "Name": names[i],
            } for i in (1, 2, 3)
        },
        "Edges": {
            "1": {"From": 1, "To": 2, "Values": [1], "Overflow": False},
            "2": {"From": 2, "To": 3, "Values": [1], "Overflow": False},
        },
    }}


# Sources de données ---------------------------------------------------------
def test_requires_a_directory_or_a_dict():
    with pytest.raises(me.InvalidOption):
        gg.GraphFactory()


def test_invalid_directory_raises():
    with pytest.raises(me.InvalidOption):
        gg.GraphFactory("Ce/chemin/nexiste/pas.json")


def test_directory_pointing_to_invalid_json_raises(tmp_path):
    broken = tmp_path / "broken.json"
    broken.write_text("{ ceci n'est pas du JSON", encoding="utf-8")
    with pytest.raises(me.InvalidOption):
        gg.GraphFactory(str(broken))


def test_loading_from_file_matches_loading_from_dict():
    file_path = os.path.join(os.path.dirname(os.path.abspath(__file__)),
                             "..", "examples", "Inputs", "Graph.json")
    from_file = gg.GraphFactory(file_path)
    from_dict = gg.GraphFactory(Dict=from_file.get_data)

    assert from_file.get_graph_name == from_dict.get_graph_name
    for name in from_file.get_graph_name:
        assert sorted(from_file.get_graph(name).get_nodes_names()) == \
            sorted(from_dict.get_graph(name).get_nodes_names())


# Typage des noeuds ----------------------------------------------------------
def test_node_types_follow_position_and_flags():
    factory = gg.GraphFactory(Dict=chain())
    nodes = {n.NAME: n for n in factory.get_graph("Example").nodes()}

    assert isinstance(nodes["N1"], gg.TopNode)
    assert isinstance(nodes["N3"], gg.PoolNode)
    assert type(nodes["N2"]) is gg.ProportionNode


def test_middle_node_with_decay_flag_becomes_a_decay_node():
    factory = gg.GraphFactory(Dict=chain(decay={2: True}))
    nodes = {n.NAME: n for n in factory.get_graph("Example").nodes()}
    assert type(nodes["N2"]) is gg.DecayNode


def test_middle_node_with_recycling_flag_becomes_a_recycling_node():
    factory = gg.GraphFactory(Dict=chain(recycling={2: True}))
    nodes = {n.NAME: n for n in factory.get_graph("Example").nodes()}
    assert type(nodes["N2"]) is gg.RecyclingNode


def test_decay_node_names_are_registered():
    factory = gg.GraphFactory(Dict=chain(decay={2: True}))
    assert factory.get_graph("Example").get_decaynode_names() == ["N2"]


def test_top_node_names_are_registered():
    factory = gg.GraphFactory(Dict=chain())
    assert factory.get_graph("Example").get_topnode_name() == ["N1"]


# Validations structurelles --------------------------------------------------
@pytest.mark.parametrize("flag", ["Decay", "Recycling"])
def test_top_node_cannot_carry_decay_or_recycling(flag):
    graph = chain()
    graph["Example"]["Nodes"]["1"][flag] = True
    with pytest.raises(me.GraphError):
        gg.GraphFactory(Dict=graph)


@pytest.mark.parametrize("flag", ["Decay", "Recycling"])
def test_last_node_cannot_carry_decay_or_recycling(flag):
    graph = chain()
    graph["Example"]["Nodes"]["3"][flag] = True
    with pytest.raises(me.GraphError):
        gg.GraphFactory(Dict=graph)


def test_node_cannot_be_both_decay_and_recycling():
    with pytest.raises(me.GraphError):
        gg.GraphFactory(Dict=chain(decay={2: True}, recycling={2: True}))


def test_graph_needs_at_least_two_nodes():
    graph = chain()
    del graph["Example"]["Nodes"]["2"]
    del graph["Example"]["Nodes"]["3"]
    graph["Example"]["Edges"] = {}
    with pytest.raises(me.GraphError):
        gg.GraphFactory(Dict=graph)


def test_graph_needs_at_least_one_edge():
    graph = chain()
    graph["Example"]["Edges"] = {}
    with pytest.raises(me.GraphError):
        gg.GraphFactory(Dict=graph)


def test_duplicate_node_names_are_rejected():
    with pytest.raises(me.NodeError):
        gg.GraphFactory(Dict=chain(name_1="Same", name_2="Same"))


def test_node_names_are_normalized():
    """Les espaces superflus sont retirés à la construction du noeud."""
    factory = gg.GraphFactory(Dict=chain(name_2="  Sawnwood   storage  "))
    assert "Sawnwood storage" in factory.get_graph("Example").get_nodes_names()


# Graphes multiples ----------------------------------------------------------
def test_multiple_graphs_are_all_built():
    graph = chain(graph_name="Beta")
    graph.update(chain(graph_name="Alpha"))
    factory = gg.GraphFactory(Dict=graph)
    assert factory.get_graph_name == ["Alpha", "Beta"]


def test_graph_names_are_sorted():
    graph = chain(graph_name="Zeta")
    graph.update(chain(graph_name="Mu"))
    graph.update(chain(graph_name="Alpha"))
    factory = gg.GraphFactory(Dict=graph)
    assert factory.get_graph_name == sorted(factory.get_graph_name)


def test_get_graph_returns_the_matching_graph():
    graph = chain(graph_name="Beta")
    graph.update(chain(graph_name="Alpha"))
    factory = gg.GraphFactory(Dict=graph)
    assert factory.get_graph("Alpha").get_name == "Alpha"
    assert factory.get_graph("Beta").get_name == "Beta"


def test_get_graph_with_unknown_name_raises():
    factory = gg.GraphFactory(Dict=chain())
    with pytest.raises(ValueError):
        factory.get_graph("Pas un nom de graphe")


# Immuabilité ----------------------------------------------------------------
def test_graph_names_cannot_be_reassigned():
    factory = gg.GraphFactory(Dict=chain())
    with pytest.raises(me.ConstError):
        factory.get_graph_name = ["Autre"]


def test_data_cannot_be_reassigned():
    factory = gg.GraphFactory(Dict=chain())
    with pytest.raises(me.ConstError):
        factory.get_data = {}


# Proportions variables dans le temps ----------------------------------------
def test_edge_values_list_is_preserved():
    graph = chain()
    graph["Example"]["Edges"]["1"]["Values"] = [0.5, 0.5, 0.75, 1]
    factory = gg.GraphFactory(Dict=graph)
    G = factory.get_graph("Example")
    nodes = {n.NAME: n for n in G.nodes()}

    assert G.get_edge_proportions(nodes["N1"], nodes["N2"]) == [0.5, 0.5, 0.75, 1]
