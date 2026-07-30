"""
Contrats HTTP de la couche web, via le client de test Flask.

Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""
import io
import json
import shutil
import tempfile
import pytest
from MoSiR.views import Flaskwrapper
from MoSiR.blueprint_component import Component
from MoSiR.upload.views import upload
from MoSiR.download.views import download
from MoSiR.reporting.views import reporting


# Points de contact HTTP. Un renommage de route ne se répercute qu'ici.
UPLOAD_URL = "/upload/graphs_upload/"
DOWNLOAD_URL = "/download/graphs_download/{name}"

# Le client de test Flask se présente toujours depuis 127.0.0.1: c'est donc
# le nom du sous-dossier utilisateur créé sous la racine de stockage.
TEST_USER_IP = "127.0.0.1"

# Graphe invalide: cycle sans noeud d'entrée (TopNode). Ses valeurs ont bien
# la forme {Nodes, Edges}, donc il passe par la validation — et échoue.
INVALID_GRAPH = {"Cycle": {
    "Nodes": {
        "1": {"Decay": False, "Recycling": False, "Name": "1"},
        "2": {"Decay": False, "Recycling": False, "Name": "2"},
        "3": {"Decay": False, "Recycling": False, "Name": "3"}},
    "Edges": {
        "1": {"From": 1, "To": 2, "Values": [1], "Overflow": False},
        "2": {"From": 2, "To": 3, "Values": [1], "Overflow": False},
        "3": {"From": 3, "To": 1, "Values": [1], "Overflow": False}}}}


@pytest.fixture(scope="module")
def web_client():
    """Construit l'application une seule fois: réenregistrer les blueprints
    dupliquerait leurs règles d'URL. shutdown_timer désarmé (sinon chaque
    requête laisse fuir un Timer d'une heure) et shutdown neutralisé (sinon
    /shutdown tuerait pytest via os._exit)."""
    build_root = tempfile.mkdtemp()
    wrapper = Flaskwrapper("http://localhost", "0.0.0.0", 3000, log=True,
                           uploads_root=build_root, shutdown_timer=False,
                           on_shutdown=lambda: None)
    wrapper.register(upload)
    wrapper.register(download)
    wrapper.register(reporting)
    yield wrapper.get_app().test_client()
    Component.set_uploads_root(None)
    shutil.rmtree(build_root, ignore_errors=True)


@pytest.fixture
def user_folder(tmp_path):
    """Redirige le stockage vers un dossier neuf par test: isolation totale,
    aucune vraie donnée touchée. Renvoie le dossier de l'utilisateur de test."""
    saved = Component._uploads_root
    Component.set_uploads_root(str(tmp_path))
    yield tmp_path / TEST_USER_IP
    Component._uploads_root = saved


def _upload(client, graph_dict, filename):
    payload = json.dumps(graph_dict).encode("utf-8")
    return client.post(
        UPLOAD_URL,
        data={"file": (io.BytesIO(payload), filename)},
        content_type="multipart/form-data")


def _saved_graphs(user_folder):
    if not user_folder.exists():
        return []
    return sorted(user_folder.glob("*.json"))


# Capacités ------------------------------------------------------------------

def test_valid_graph_is_saved_in_user_folder(web_client, user_folder, e2e_graph_dict):
    _upload(web_client, e2e_graph_dict, "graph.json")

    saved = _saved_graphs(user_folder)
    assert saved, "un graphe valide doit être enregistré dans le dossier utilisateur"
    # Le contenu enregistré est bien celui téléversé (round-trip).
    assert json.loads(saved[0].read_text()) == e2e_graph_dict


def test_invalid_graph_is_refused_and_not_saved(web_client, user_folder):
    _upload(web_client, INVALID_GRAPH, "bad.json")

    assert _saved_graphs(user_folder) == [], \
        "un graphe invalide ne doit rien laisser dans le dossier utilisateur"


def test_saved_graph_can_be_downloaded(web_client, user_folder, e2e_graph_dict):
    _upload(web_client, e2e_graph_dict, "graph.json")

    response = web_client.get(DOWNLOAD_URL.format(name="graph.json"))

    assert response.status_code == 200
    assert json.loads(response.data) == e2e_graph_dict


@pytest.mark.xfail(strict=True, reason=(
    "Comportement souhaité mais absent: upload/views.py appelle "
    "clear_users_data à chaque téléversement d'un graphe, ce qui efface les "
    "précédents. La correction fait l'objet d'un travail distinct."))
def test_second_upload_keeps_the_first(web_client, user_folder, e2e_graph_dict):
    graph_a = {"GraphA": e2e_graph_dict["Example"]}
    graph_b = {"GraphB": e2e_graph_dict["Example"]}

    _upload(web_client, graph_a, "a.json")
    _upload(web_client, graph_b, "b.json")

    assert len(_saved_graphs(user_folder)) == 2, \
        "téléverser un deuxième graphe ne doit pas effacer le premier"
