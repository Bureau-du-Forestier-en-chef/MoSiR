"""
Contrats HTTP de la couche web, via le client de test Flask.

Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""
import io
import sys
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
REPORTING_URL = "/reporting/"
REPORT_URL = "/reporting/report"

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


# Bugs connus de l'interface --------------------------------------------------
# Chaque test de cette section reproduit un défaut décrit dans
# Documentation/FeuilleDeRoute.md (section A). Au moment du correctif,
# retirer le marqueur xfail: le test devient le test de régression.

@pytest.mark.xfail(strict=True, raises=AssertionError, reason=(
    "U01 — Le formulaire « Calculer » perd le premier champ reçu pour "
    "chaque sortie: ce champ ne sert qu'à créer l'entrée "
    "(reporting/views.py:405-412). La page actuelle n'y échappe que parce "
    "qu'elle envoie le champ Output~ en premier."))
def test_report_form_keeps_every_field_whatever_their_order(web_client, user_folder):
    # Chaque champ d'une sortie est encodé dans son nom:
    # <champ>~<graphe>~<sortie>. Nodes_name est volontairement envoyé en
    # premier.
    form = {
        "Nodes_name~Example~Stocks": "Sawnwood",
        "Output~Example~Stocks": "Stocks",
        "Type~Example~Stocks": "Stock",
        "Cumulative~Example~Stocks": "non",
        "Summarize~Example~Stocks": "par noeud",
        "Unit~Example~Stocks": "tC",
        "Time": "10",
        "Output file extension": ".csv",
        "CH4": "28",
        "N2O": "265",
    }

    # Seul le report.json tiré du formulaire est vérifié: la suite de la
    # requête (calcul, graphiques) n'est pas l'objet de ce test.
    web_client.post(REPORT_URL, data=form)

    report = json.loads((user_folder / "report.json").read_text())
    assert report["Output"]["Example"]["Stocks"]["Nodes_name"] == ["Sawnwood"]


@pytest.mark.xfail(strict=True, raises=AssertionError, reason=(
    "U02 — Le champ beta d'une dégradation porte un attribut mal formé, "
    "required\" au lieu de required (reporting/views.py:145): le "
    "navigateur ne l'exige donc pas, et un beta vide provoque une erreur "
    "500 au moment du calcul."))
def test_decay_beta_field_is_required(web_client, user_folder, e2e_graph_dict):
    _upload(web_client, e2e_graph_dict, "graph.json")

    page = web_client.get(REPORTING_URL).get_data(as_text=True)

    assert "beta_value~Example~Sawnwood" in page, \
        "la page doit proposer le champ beta du noeud de dégradation"
    assert 'required"' not in page, "attribut required mal formé"


@pytest.mark.xfail(strict=True, raises=AssertionError, reason=(
    "U03 — Le téléversement remplace chaque apostrophe par un guillemet "
    "avant de lire le JSON (upload/views.py:46): un nom comme "
    "« Bois d'oeuvre » rend le fichier illisible et l'import échoue."))
def test_graph_with_an_apostrophe_in_a_node_name_is_saved(web_client, user_folder,
                                                          e2e_graph_dict):
    e2e_graph_dict["Example"]["Nodes"]["2"]["Name"] = "Bois d'oeuvre"

    _upload(web_client, e2e_graph_dict, "graph.json")

    assert _saved_graphs(user_folder), \
        "un nom de noeud contenant une apostrophe doit être accepté"


@pytest.mark.xfail(strict=True, raises=AssertionError, reason=(
    "U04 — Le fichier téléversé est enregistré sous le nom fourni par le "
    "client (upload/views.py:73): un nom comme ../x.json est écrit hors du "
    "dossier de l'utilisateur."))
def test_uploaded_file_cannot_leave_the_user_folder(web_client, user_folder):
    _upload(web_client, {"Inputs": {}}, "../escape.json")

    assert not (user_folder.parent / "escape.json").exists(), \
        "le fichier ne doit pas être écrit hors du dossier de l'utilisateur"


# Sous Linux, un chemin absolu commence par « / » et la route le refuse: le
# défaut U05 n'apparaît que sous Windows, où il commence par « C:\ ».
@pytest.mark.xfail(sys.platform == "win32", strict=True, raises=AssertionError,
                   reason=(
    "U05 — Un chemin absolu dans l'URL de téléchargement remplace le dossier "
    "de l'utilisateur dans os.path.join (download/views.py:28): n'importe "
    "quel fichier lisible par le serveur peut être téléchargé."))
def test_download_cannot_read_a_file_outside_the_user_folder(web_client, user_folder):
    outside_file = user_folder.parent / "hors_dossier.txt"
    outside_file.write_text("contenu privé")

    response = web_client.get(DOWNLOAD_URL.format(name=str(outside_file)))

    assert b"contenu priv" not in response.data, \
        "un fichier hors du dossier de l'utilisateur ne doit pas être servi"
