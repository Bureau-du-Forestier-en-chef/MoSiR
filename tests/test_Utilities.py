"""
Utilities tests for MoSiR

Couvre Htmlparser (nettoyage du HTML produit par Miro) et Jsonparser
(lecture des ressources du package, écriture de fichiers JSON).

Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""
import json
import pytest
from MoSiR import utilities as ut


# Htmlparser -----------------------------------------------------------------
@pytest.mark.parametrize("html_input, expected", [
    # Cas de base
    ("<p>test</p>", "test"),
    ("test", "test"),
    ("<p>345232e.5252</p>", "345232e.5252"),
    ("", ""),
    # Balises de mise en forme retirées
    ("<p><strong>bold</strong></p>", "bold"),
    ("<p><em>italique</em></p>", "italique"),
    ("<p><u>souligne</u></p>", "souligne"),
    ("<p><s>barre</s></p>", "barre"),
    ("<p><em>a</em><u>b</u><s>c</s><strong>d</strong></p>", "abcd"),
    # Plusieurs paragraphes concaténés sans séparateur
    ("<p>a</p><p>b</p>", "ab"),
    # Balises span avec style
    ('<p><span style="color:#ff0000">rouge</span></p>', "rouge"),
    ('<span style="font-size:14px;color:#1a1a1a">50%</span>', "50%"),
    # Entités HTML décodées
    ("<p>P&amp;P</p>", "P&P"),
    ("<p>a &lt; b</p>", "a < b"),
    ("&quot;cite&quot;", '"cite"'),
])
def test_html_parsing(html_input, expected):
    assert ut.Htmlparser.get_string_from_html(html_input) == expected


def test_html_realistic_miro_content():
    """Format typiquement reçu depuis un item Miro."""
    raw = '<p><strong>Half-life[565.78]</strong>Others P&amp;P, storage</p>'
    assert ut.Htmlparser.get_string_from_html(raw) == \
        "Half-life[565.78]Others P&P, storage"


def test_html_nbsp_becomes_non_breaking_space():
    """html.unescape convertit &nbsp; en U+00A0, pas en espace simple.

    Comportement documenté ici parce qu'il explique certains noms de noeuds
    qui semblent identiques mais ne le sont pas.
    """
    assert ut.Htmlparser.get_string_from_html("<p>a&nbsp;b</p>") == "a\xa0b"


def test_html_unknown_tags_are_kept():
    """Seules les balises listées sont retirées; les autres restent.

    Comportement actuel: <div> n'est pas géré par le parser.
    """
    assert ut.Htmlparser.get_string_from_html("<div>x</div>") == "<div>x</div>"


def test_html_is_idempotent():
    """Repasser un texte déjà nettoyé ne doit pas le modifier."""
    once = ut.Htmlparser.get_string_from_html('<p><strong>CO2 emissions</strong></p>')
    assert ut.Htmlparser.get_string_from_html(once) == once


# Jsonparser -----------------------------------------------------------------
@pytest.mark.parametrize("resource", [
    "mirowrapper/inputs/Node.json",
    "mirowrapper/inputs/Edge.json",
    "mirowrapper/inputs/Rendering.json",
])
def test_json_read_package_resource(resource):
    """Les ressources JSON embarquées dans le package sont lisibles."""
    data = ut.Jsonparser.read(resource)
    assert isinstance(data, (dict, list))


def test_json_read_missing_resource_raises():
    with pytest.raises(Exception):
        ut.Jsonparser.read("inputs/Does_not_exist.json")


def test_json_write_then_reread(tmp_path):
    target = tmp_path / "out.json"
    payload = {"Example": {"Nodes": {"1": {"Name": "Sawnwood"}}}, "Time": 100}

    ut.Jsonparser.write(str(target), payload)

    assert target.is_file()
    assert json.loads(target.read_text(encoding="utf-8")) == payload


def test_json_write_is_indented(tmp_path):
    """L'écriture utilise indent=4, les fichiers restent lisibles/diffables."""
    target = tmp_path / "out.json"
    ut.Jsonparser.write(str(target), {"a": 1})
    assert "\n    " in target.read_text(encoding="utf-8")


def test_json_write_overwrites(tmp_path):
    target = tmp_path / "out.json"
    ut.Jsonparser.write(str(target), {"first": 1})
    ut.Jsonparser.write(str(target), {"second": 2})
    assert json.loads(target.read_text(encoding="utf-8")) == {"second": 2}
