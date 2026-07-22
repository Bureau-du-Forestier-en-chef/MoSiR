"""
Coverage docs tests for MoSiR

Couvre la génération des chiffres de couverture injectés dans les README.
Un défaut ici produirait silencieusement une documentation fausse, ce qui
est pire que pas de chiffres du tout.

Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""
import json
import pytest
from tests import coverage_docs as cd

LOCALE_NAMES = list(cd.LOCALES)


def summary(statements, percent):
    return {"summary": {
        "num_statements": statements,
        "percent_covered": float(percent),
        "percent_covered_display": str(percent),
    }}


@pytest.fixture
def data():
    """Rapport minimal reproduisant la forme de coverage.json."""
    return {
        "totals": {"num_statements": 100, "percent_covered": 86.34,
                   "percent_covered_display": "86"},
        "files": {
            "MoSiR/utilities.py": summary(20, 100),
            "MoSiR/graph_generator.py": summary(368, 96),
            "MoSiR/carbon_to_radiatif.py": summary(64, 84),
            "MoSiR/generators.py": summary(57, 100),
            # Couche web: doit être exclue du tableau
            "MoSiR/views.py": summary(73, 27),
            "MoSiR/blueprint_component.py": summary(138, 37),
            "MoSiR/MoSiR.py": summary(28, 39),
            # Fichiers sans instruction ou __init__: exclus aussi
            "MoSiR/__init__.py": summary(12, 100),
            "MoSiR/reporting/__init__.py": summary(0, 100),
        },
    }


# Normalisation des chemins ---------------------------------------------------
@pytest.mark.parametrize("path, expected", [
    ("MoSiR/utilities.py", "utilities.py"),
    ("MoSiR\\utilities.py", "utilities.py"),
    ("MoSiR/reporting/__init__.py", "reporting/__init__.py"),
    ("MoSiR\\reporting\\__init__.py", "reporting/__init__.py"),
])
def test_module_name_is_platform_independent(path, expected):
    """Windows et Linux doivent produire le même nom.

    Sinon le tableau diffère selon la plateforme et --check-readme
    échoue en CI alors que les chiffres sont à jour.
    """
    assert cd.module_name(path) == expected


# Sélection des modules -------------------------------------------------------
def test_web_layer_is_excluded(data):
    names = [name for name, _ in cd.calculator_modules(data)]
    for excluded in ("views.py", "blueprint_component.py", "MoSiR.py"):
        assert excluded not in names


def test_init_files_are_excluded(data):
    names = [name for name, _ in cd.calculator_modules(data)]
    assert not any(name.endswith("__init__.py") for name in names)


def test_empty_files_are_excluded(data):
    data["files"]["MoSiR/vide.py"] = summary(0, 100)
    names = [name for name, _ in cd.calculator_modules(data)]
    assert "vide.py" not in names


def test_modules_are_sorted_by_coverage_then_name(data):
    assert cd.calculator_modules(data) == [
        ("generators.py", "100"),
        ("utilities.py", "100"),
        ("graph_generator.py", "96"),
        ("carbon_to_radiatif.py", "84"),
    ]


def test_a_future_subpackage_would_appear(data):
    """Un sous-paquet du calculateur ne doit pas être filtré en silence."""
    data["files"]["MoSiR/solveur/newton.py"] = summary(40, 90)
    names = [name for name, _ in cd.calculator_modules(data)]
    assert "solveur/newton.py" in names


def test_total_percent_reuses_the_coverage_display(data):
    """Le README doit afficher le même arrondi que la sortie terminal."""
    assert cd.total_percent(data) == "86"


# Couleur du badge ------------------------------------------------------------
@pytest.mark.parametrize("percent, color", [
    ("100", "brightgreen"), ("86", "brightgreen"), ("85", "brightgreen"),
    ("84", "yellow"), ("70", "yellow"),
    ("69", "red"), ("0", "red"),
])
def test_badge_color_thresholds(percent, color):
    assert cd.badge_color(percent) == color


# Rendu -----------------------------------------------------------------------
@pytest.mark.parametrize("name", LOCALE_NAMES)
def test_badges_contain_both_figures(name, data):
    rendered = cd.render_badges(name, 481, "86")
    assert "tests-481" in rendered
    assert "-86%25-" in rendered


def test_english_and_french_badges_differ_in_wording():
    english = cd.render_badges("README.md", 481, "86")
    french = cd.render_badges("README_fr.md", 481, "86")

    assert "passed" in english and "coverage-" in english
    assert "r%C3%A9ussis" in french and "couverture-" in french


def test_french_table_uses_a_space_before_percent(data):
    modules = cd.calculator_modules(data)
    english = cd.render_table("README.md", modules, "1.1.0", "3.12")
    french = cd.render_table("README_fr.md", modules, "1.1.0", "3.12")

    assert "| `utilities.py` | 100% |" in english
    assert "| `utilities.py` | 100 % |" in french


def test_table_reports_version_and_python(data):
    rendered = cd.render_table("README.md", cd.calculator_modules(data),
                               "9.9.9", "3.14")
    assert "9.9.9" in rendered
    assert "3.14" in rendered


# Remplacement entre marqueurs ------------------------------------------------
def document(marker, body="ancien contenu"):
    return (f"# Titre\n\nprose avant\n\n<!-- {marker}:start -->\n{body}\n"
            f"<!-- {marker}:end -->\n\nprose après\n")


def test_replace_block_only_touches_the_marked_region():
    result = cd.replace_block(document(cd.BADGES_MARKER), cd.BADGES_MARKER,
                              "nouveau")
    assert "prose avant" in result
    assert "prose après" in result
    assert "ancien contenu" not in result
    assert "nouveau" in result


def test_replace_block_keeps_the_markers():
    result = cd.replace_block(document(cd.TABLE_MARKER), cd.TABLE_MARKER, "x")
    assert f"<!-- {cd.TABLE_MARKER}:start -->" in result
    assert f"<!-- {cd.TABLE_MARKER}:end -->" in result


def test_replace_block_is_idempotent():
    once = cd.replace_block(document(cd.BADGES_MARKER), cd.BADGES_MARKER, "x")
    twice = cd.replace_block(once, cd.BADGES_MARKER, "x")
    assert once == twice


def test_replace_block_handles_backslashes_in_content():
    """re.sub interpréterait '\\g' ou '\\1' dans une chaîne de remplacement."""
    result = cd.replace_block(document(cd.BADGES_MARKER), cd.BADGES_MARKER,
                              r"C:\graph\1")
    assert r"C:\graph\1" in result


def test_missing_marker_raises_a_helpful_error():
    with pytest.raises(cd.MarkerError, match="introuvable"):
        cd.replace_block("# Un README sans marqueur\n", cd.BADGES_MARKER, "x")


# Application complète --------------------------------------------------------
@pytest.mark.parametrize("name", LOCALE_NAMES)
def test_apply_updates_both_regions(name, data):
    original = (document(cd.BADGES_MARKER, "vieux badges")
                + document(cd.TABLE_MARKER, "vieux tableau"))

    result = cd.apply(original, name, 481, data, "1.1.0", "3.12")

    assert "vieux badges" not in result
    assert "vieux tableau" not in result
    assert "tests-481" in result
    assert "`utilities.py`" in result


@pytest.mark.parametrize("name", LOCALE_NAMES)
def test_apply_is_idempotent(name, data):
    """Régénérer sans changement ne doit produire aucun diff git."""
    original = (document(cd.BADGES_MARKER) + document(cd.TABLE_MARKER))

    once = cd.apply(original, name, 481, data, "1.1.0", "3.12")
    twice = cd.apply(once, name, 481, data, "1.1.0", "3.12")

    assert once == twice


def test_apply_rejects_an_unknown_file():
    with pytest.raises(KeyError):
        cd.apply("", "README_es.md", 1, {}, "1.1.0", "3.12")


# Entrées/sorties -------------------------------------------------------------
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_line_endings_survive_a_roundtrip(tmp_path, newline):
    """Réécrire un README ne doit pas convertir tout le fichier.

    Les README sont en CRLF sur un poste Windows et en LF en CI: une
    conversion produirait un diff de plusieurs centaines de lignes.
    """
    target = tmp_path / "README.md"
    target.write_bytes(f"a{newline}b{newline}".encode("utf-8"))

    text, detected = cd.read_markdown(target)
    assert detected == newline
    assert text == "a\nb\n"

    cd.write_markdown(target, text, detected)
    assert target.read_bytes() == f"a{newline}b{newline}".encode("utf-8")


def test_load_coverage_reads_a_real_report(tmp_path, data):
    target = tmp_path / "coverage.json"
    target.write_text(json.dumps(data), encoding="utf-8")
    assert cd.load_coverage(target) == data


def test_accents_survive_a_roundtrip(tmp_path):
    """Le README français est en UTF-8 et doit le rester."""
    target = tmp_path / "README_fr.md"
    original = "Chiffres mesurés sur MoSiR\ndégradation\n"
    target.write_bytes(original.encode("utf-8"))

    text, newline = cd.read_markdown(target)
    cd.write_markdown(target, text, newline)

    assert target.read_bytes().decode("utf-8") == original
