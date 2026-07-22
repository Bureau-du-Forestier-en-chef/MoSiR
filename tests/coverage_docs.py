"""
Génération des chiffres de couverture affichés dans les README.

Ce module ne contient que de la logique pure : il ne dépend ni de pytest,
ni de l'environnement, et ne fait aucune écriture. Le branchement sur
pytest (drapeaux --update-readme et --check-readme) vit dans conftest.py.

Voir tests/test_CoverageDocs.py pour les tests unitaires.

Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""
import re
import json
import pathlib

# Modules de l'interface web : ils n'ont pas de tests automatisés et ne
# font pas partie du calculateur, donc ils sont exclus du tableau. Ce
# sont eux qui expliquent l'écart entre le total et les chiffres du
# tableau, ce que la prose des README dit explicitement.
WEB_LAYER = frozenset({
    "MoSiR.py",
    "blueprint_component.py",
    "views.py",
})

BADGES_MARKER = "coverage-badges"
TABLE_MARKER = "coverage-table"

# Ce qui distingue les deux README : libellés, suffixe du badge et
# typographie du pourcentage (le français prend une espace avant le %).
LOCALES = {
    "README.md": {
        "tests_alt": "Tests",
        "tests_suffix": "passed",
        "coverage_alt": "Coverage",
        "coverage_slug": "coverage",
        "table_header": "| Module | Coverage |",
        "percent": "{}%",
        "footer": "Figures measured on MoSiR {version} with Python {python}.",
    },
    "README_fr.md": {
        "tests_alt": "Tests",
        "tests_suffix": "r%C3%A9ussis",
        "coverage_alt": "Couverture",
        "coverage_slug": "couverture",
        "table_header": "| Module | Couverture |",
        "percent": "{} %",
        "footer": "Chiffres mesurés sur MoSiR {version} avec Python {python}.",
    },
}


class MarkerError(Exception):
    """Un marqueur attendu est absent d'un README."""


def module_name(path: str) -> str:
    """Ramène une clé de coverage.json à un nom de module lisible.

    Les clés arrivent avec le séparateur de la plateforme : antislash
    sous Windows, barre oblique sous Linux (CI). Les deux doivent donner
    le même résultat, sinon le tableau diffère selon la plateforme et
    --check-readme échoue en CI alors que tout est à jour.
    """
    normalized = path.replace("\\", "/")
    prefix = "MoSiR/"
    if normalized.startswith(prefix):
        normalized = normalized[len(prefix):]
    return normalized


def load_coverage(path) -> dict:
    """Lit le rapport produit par `pytest --cov-report=json:...`."""
    return json.loads(pathlib.Path(path).read_text(encoding="utf-8"))


def total_percent(data: dict) -> str:
    """Couverture globale, arrondie comme le rapport `term`.

    On réutilise percent_covered_display de coverage.py pour que le
    README et la sortie terminal ne puissent pas diverger d'une unité.
    """
    return data["totals"]["percent_covered_display"]


def calculator_modules(data: dict) -> list[tuple[str, str]]:
    """Modules du calculateur, du mieux couvert au moins bien couvert.

    Exclut la couche web, les __init__.py (qui n'apportent rien au
    lecteur) et les fichiers sans instruction, qui afficheraient un 100%
    trompeur. Un éventuel sous-paquet du calculateur apparaîtrait
    normalement, sous la forme 'sous_paquet/module.py'.
    """
    modules = []
    for path, entry in data["files"].items():
        name = module_name(path)
        if name in WEB_LAYER or name.split("/")[-1] == "__init__.py":
            continue
        summary = entry["summary"]
        if summary["num_statements"] == 0:
            continue
        modules.append((name, summary["percent_covered_display"]))

    modules.sort(key=lambda item: (-int(item[1]), item[0]))
    return modules


def badge_color(percent) -> str:
    value = int(percent)
    if value >= 85:
        return "brightgreen"
    if value >= 70:
        return "yellow"
    return "red"


def render_badges(filename: str, tests: int, percent: str) -> str:
    locale = LOCALES[filename]
    return "\n".join([
        f"![{locale['tests_alt']}](https://img.shields.io/badge/"
        f"tests-{tests}_{locale['tests_suffix']}-brightgreen?style=flat-square)",
        f"![{locale['coverage_alt']}](https://img.shields.io/badge/"
        f"{locale['coverage_slug']}-{percent}%25-{badge_color(percent)}"
        f"?style=flat-square)",
    ])


def render_table(filename: str, modules: list[tuple[str, str]],
                 version: str, python: str) -> str:
    locale = LOCALES[filename]
    lines = [locale["table_header"], "| --- | --- |"]
    for name, percent in modules:
        lines.append(f"| `{name}` | {locale['percent'].format(percent)} |")
    lines.append("")
    lines.append(locale["footer"].format(version=version, python=python))
    return "\n".join(lines)


def replace_block(text: str, marker: str, content: str) -> str:
    """Remplace ce qui se trouve entre <!-- marker:start --> et :end."""
    start = f"<!-- {marker}:start -->"
    end = f"<!-- {marker}:end -->"
    pattern = re.compile(re.escape(start) + ".*?" + re.escape(end), re.DOTALL)

    if not pattern.search(text):
        raise MarkerError(
            f"Marqueurs '{start}' / '{end}' introuvables. "
            "Les ajouter autour de la zone à générer.")

    replacement = f"{start}\n{content}\n{end}"
    # lambda plutôt qu'une chaîne: re.sub interpréterait les antislashs
    return pattern.sub(lambda _: replacement, text, count=1)


def apply(text: str, filename: str, tests: int, data: dict,
          version: str, python: str) -> str:
    """Retourne le contenu du README avec ses chiffres à jour.

    Idempotent : réappliquer sur un texte déjà à jour ne change rien.
    """
    if filename not in LOCALES:
        raise KeyError(f"Aucune locale définie pour {filename}")

    percent = total_percent(data)
    text = replace_block(text, BADGES_MARKER,
                         render_badges(filename, tests, percent))
    text = replace_block(text, TABLE_MARKER,
                         render_table(filename, calculator_modules(data),
                                      version, python))
    return text


# Entrées/sorties -------------------------------------------------------------
# Les README sont en CRLF sur un poste Windows et en LF sous Linux (CI).
# On travaille en '\n' en mémoire et on restitue la fin de ligne d'origine,
# sans quoi chaque régénération réécrirait le fichier entier.

def read_markdown(path) -> tuple[str, str]:
    raw = pathlib.Path(path).read_bytes().decode("utf-8")
    newline = "\r\n" if "\r\n" in raw else "\n"
    return raw.replace("\r\n", "\n"), newline


def write_markdown(path, text: str, newline: str) -> None:
    pathlib.Path(path).write_bytes(text.replace("\n", newline).encode("utf-8"))
