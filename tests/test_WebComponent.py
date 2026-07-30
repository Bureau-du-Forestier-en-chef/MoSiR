"""
Tests de la couche Component (MoSiR/blueprint_component.py).

Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""
import os
import json
import pytest
from flask import Flask
from MoSiR.blueprint_component import Component
from MoSiR import mosir_calculator as mc


# Composants concrets minimaux -----------------------------------------------
# Component est abstrait; on en dérive deux implémentations sans HTML.

class _ClassifierComponent(Component):
    """Dossier utilisateur fixé en dur: la classification devient testable
    sans contexte Flask ni adresse IP."""
    def __init__(self, folder: str):
        Component.__init__(self, self.__class__.__name__, __name__)
        self._folder = folder
    def _get_uploads_folder(self) -> str:
        return self._folder
    def get_name(self): return "classifier"
    def get_description(self): return ""
    def add_all_endpoints(self): pass
    def get_symbol(self): return ""


class _PlainComponent(Component):
    """Garde le vrai _get_uploads_folder: sert à tester l'isolation par IP
    et l'injection de la racine de stockage."""
    def __init__(self):
        Component.__init__(self, self.__class__.__name__, __name__)
    def get_name(self): return "plain"
    def get_description(self): return ""
    def add_all_endpoints(self): pass
    def get_symbol(self): return ""


# Utilitaires ----------------------------------------------------------------

def _write(folder, name: str, data: dict) -> str:
    path = os.path.join(str(folder), name)
    with open(path, "w") as handle:
        json.dump(data, handle)
    return path


@pytest.fixture
def classifier(tmp_path):
    """Un composant dont le dossier utilisateur est tmp_path."""
    return _ClassifierComponent(str(tmp_path)), tmp_path


@pytest.fixture
def reset_uploads_root():
    """Restaure la racine de stockage: elle est globale (attribut de classe)."""
    saved = Component._uploads_root
    yield
    Component._uploads_root = saved


# Classification des fichiers ------------------------------------------------

def test_graphs_files_keep_only_graphs(classifier, e2e_graph_dict,
                                        e2e_input_dict, e2e_report_dict):
    comp, folder = classifier
    _write(folder, "graph.json", e2e_graph_dict)
    _write(folder, "inputs.json", e2e_input_dict)
    _write(folder, "report.json", e2e_report_dict)
    graphs = {os.path.basename(p) for p in comp._get_graphs_files()}
    assert graphs == {"graph.json"}


def test_inputs_files_keep_only_inputs(classifier, e2e_graph_dict,
                                       e2e_input_dict, e2e_report_dict):
    comp, folder = classifier
    _write(folder, "graph.json", e2e_graph_dict)
    _write(folder, "inputs.json", e2e_input_dict)
    _write(folder, "report.json", e2e_report_dict)
    inputs = {os.path.basename(p) for p in comp._get_inputs_files()}
    assert inputs == {"inputs.json"}


def test_reporting_files_keep_only_reporting(classifier, e2e_graph_dict,
                                             e2e_input_dict, e2e_report_dict):
    comp, folder = classifier
    _write(folder, "graph.json", e2e_graph_dict)
    _write(folder, "inputs.json", e2e_input_dict)
    _write(folder, "report.json", e2e_report_dict)
    reporting = {os.path.basename(p) for p in comp._get_reporting_files()}
    assert reporting == {"report.json"}


def test_files_are_sorted_into_distinct_categories(classifier, e2e_graph_dict,
                                                   e2e_input_dict, e2e_report_dict):
    """Capacité: chaque fichier tombe dans une seule catégorie, et un JSON
    quelconque n'en réclame aucune."""
    comp, folder = classifier
    _write(folder, "graph.json", e2e_graph_dict)
    _write(folder, "inputs.json", e2e_input_dict)
    _write(folder, "report.json", e2e_report_dict)
    _write(folder, "decoy.json", {"quelconque": "donnée"})

    graphs = {os.path.basename(p) for p in comp._get_graphs_files()}
    inputs = {os.path.basename(p) for p in comp._get_inputs_files()}
    reporting = {os.path.basename(p) for p in comp._get_reporting_files()}

    assert graphs.isdisjoint(inputs)
    assert inputs.isdisjoint(reporting)
    assert graphs.isdisjoint(reporting)
    assert "decoy.json" not in (graphs | inputs | reporting)


def test_read_graphs_json_yields_one_generator_per_graph(classifier, e2e_graph_dict):
    comp, folder = classifier
    _write(folder, "graph.json", e2e_graph_dict)
    generators = comp.read_graphs_json()
    assert [g.get_graph_name() for g in generators] == ["Example"]


# Le calculateur est invoqué et produit ses extrants -------------------------

def test_calculator_is_invoked_and_produces_classified_results(
        tmp_path, e2e_graph_dict, e2e_input_dict, e2e_report_dict):
    """Reproduit le point d'intégration du web (reporting/views.py appelle
    mc.run_calculator sur le dossier utilisateur): graphe + intrants +
    reporting déposés, puis calcul. On vérifie que des extrants sont produits
    et qu'ils sont rangés en résultats — sans dépendre du formulaire HTML,
    qui, lui, sera réécrit."""
    comp = _ClassifierComponent(str(tmp_path))
    graph_path = _write(tmp_path, "graph.json", e2e_graph_dict)
    inputs_path = _write(tmp_path, "inputs.json", e2e_input_dict)
    report_path = _write(tmp_path, "report.json", e2e_report_dict)

    assert comp._get_results_files() == []  # rien avant le calcul

    mc.run_calculator(graph_path, inputs_path, report_path, str(tmp_path))

    results = comp._get_results_files()
    assert results, "le calculateur doit produire des fichiers de sortie"
    # L'extension des résultats est celle déclarée dans le reporting.
    extension = e2e_report_dict["Output file extension"]
    assert all(r.endswith(extension) for r in results)


# Nettoyage des données utilisateur ------------------------------------------

def test_clear_users_data_removes_user_folders_but_keeps_root_files(tmp_path):
    user_folder = tmp_path / "1.2.3.4"
    user_folder.mkdir()
    (user_folder / "graph.json").write_text("{}")
    sentinel = tmp_path / ".gitkeep"
    sentinel.write_text("")

    Component.clear_users_data(str(tmp_path))

    assert not user_folder.exists()   # les dossiers utilisateur sont purgés
    assert sentinel.exists()          # les fichiers à la racine sont conservés


# Racine de stockage injectable ----------------------------------------------

def test_uploads_root_is_injectable(reset_uploads_root, tmp_path):
    Component.set_uploads_root(str(tmp_path))
    assert Component.get_uploads_root() == str(tmp_path)


def test_uploads_root_defaults_to_package_uploads(reset_uploads_root):
    Component.set_uploads_root(None)
    assert os.path.basename(Component.get_uploads_root()) == "uploads"


def test_uploads_folder_is_isolated_per_user(reset_uploads_root, tmp_path):
    Component.set_uploads_root(str(tmp_path))
    comp = _PlainComponent()
    app = Flask(__name__)

    with app.test_request_context(environ_base={"REMOTE_ADDR": "203.0.113.7"}):
        folder = comp._get_uploads_folder()
    with app.test_request_context(environ_base={"REMOTE_ADDR": "198.51.100.9"}):
        other = comp._get_uploads_folder()

    assert os.path.isdir(folder)
    assert os.path.basename(folder) == "203.0.113.7"
    assert folder != other            # deux utilisateurs, deux dossiers
