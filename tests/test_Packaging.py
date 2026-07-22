"""
Tests de packaging pour MoSiR

Garde-fous sur la configuration du projet : environment.yml et
pyproject.toml déclarent les mêmes dépendances, la version est cohérente
entre pyproject.toml et le wrapper Nuitka, et les données de package
listées existent réellement.

Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""
import re
import sys
import pathlib
import pytest

ROOT = pathlib.Path(__file__).resolve().parents[1]

yaml = pytest.importorskip("yaml", reason="pyyaml est requis (extra 'dev')")

if sys.version_info >= (3, 11):
    import tomllib
else:  # pragma: no cover - dépend de la version de Python
    tomllib = pytest.importorskip(
        "tomli", reason="tomllib requiert Python 3.11+, ou le paquet tomli")


def normalize(requirement: str) -> str:
    """Ramène 'flask >=2.2' et 'flask>=2.2' à une même forme comparable."""
    return re.sub(r"\s+", "", requirement).lower()


@pytest.fixture(scope="module")
def pyproject():
    with open(ROOT / "pyproject.toml", "rb") as f:
        return tomllib.load(f)


@pytest.fixture(scope="module")
def environment():
    with open(ROOT / "environment.yml", encoding="utf-8") as f:
        return yaml.safe_load(f)


@pytest.fixture(scope="module")
def conda_dependencies(environment):
    """Dépendances déclarées dans environment.yml, section pip incluse.

    Exclut l'interpréteur, pip lui-même, et les entrées commençant par un
    tiret (options comme '--editable .', qui installe MoSiR et non une
    dépendance).
    """
    raw = []
    for item in environment["dependencies"]:
        if isinstance(item, dict):
            raw.extend(item.get("pip", []))
        else:
            raw.append(item)

    deps = set()
    for item in raw:
        if item.strip().startswith("-"):
            continue
        name = normalize(item).split(">")[0].split("<")[0].split("=")[0]
        if name in ("python", "pip"):
            continue
        deps.add(normalize(item))
    return deps


@pytest.fixture(scope="module")
def pyproject_dependencies(pyproject):
    runtime = pyproject["project"]["dependencies"]
    dev = pyproject["project"]["optional-dependencies"]["dev"]
    return {normalize(i) for i in runtime + dev}


# Cohérence entre les deux fichiers de dépendances ----------------------------
def test_dependencies_are_in_sync(conda_dependencies, pyproject_dependencies):
    """environment.yml et pyproject.toml doivent lister les mêmes dépendances.

    Si ce test échoue, une dépendance a été ajoutée ou modifiée dans un
    seul des deux fichiers.
    """
    missing_in_pyproject = conda_dependencies - pyproject_dependencies
    missing_in_conda = pyproject_dependencies - conda_dependencies

    assert not missing_in_pyproject, \
        f"Présent dans environment.yml mais pas dans pyproject.toml: {sorted(missing_in_pyproject)}"
    assert not missing_in_conda, \
        f"Présent dans pyproject.toml mais pas dans environment.yml: {sorted(missing_in_conda)}"


def test_no_requirements_txt_left():
    """requirements.txt a été remplacé par environment.yml."""
    assert not (ROOT / "requirements.txt").exists(), \
        "requirements.txt est de retour: il doit rester une seule source de dépendances"


def test_no_setup_py_left():
    """setup.py a été remplacé par pyproject.toml."""
    assert not (ROOT / "setup.py").exists(), \
        "setup.py est de retour: la configuration vit dans pyproject.toml"


# Métadonnées ----------------------------------------------------------------
def test_conda_env_name_matches_nuitka_wrapper(environment):
    """Nuitka_wrapper.bat fait 'conda activate MoSiR'."""
    wrapper = (ROOT / "standalone" / "Nuitka_wrapper.bat").read_text(
        encoding="utf-8", errors="replace")
    assert f"conda activate {environment['name']}" in wrapper


def test_version_matches_nuitka_wrapper(pyproject):
    """La version du package et celle compilée dans l'exe doivent concorder."""
    version = pyproject["project"]["version"]
    wrapper = (ROOT / "standalone" / "Nuitka_wrapper.bat").read_text(
        encoding="utf-8", errors="replace")

    for flag in ("--product-version", "--file-version"):
        found = re.search(rf"{flag}=([\d.]+)", wrapper)
        assert found, f"{flag} introuvable dans Nuitka_wrapper.bat"
        assert found.group(1) == version, \
            f"{flag}={found.group(1)} mais pyproject.toml déclare {version}"


def test_console_script_target_is_importable(pyproject):
    """L'entry point 'MoSiR' doit pointer vers une fonction qui existe."""
    import importlib

    target = pyproject["project"]["scripts"]["MoSiR"]
    module_name, function_name = target.split(":")
    module = importlib.import_module(module_name)
    assert callable(getattr(module, function_name))


def test_requires_python_allows_pep604_syntax(pyproject):
    """Le code utilise `list[float] | dict` dans des annotations: 3.10 minimum."""
    assert pyproject["project"]["requires-python"] == ">=3.10"


# Données de package ---------------------------------------------------------
@pytest.mark.parametrize("relative_path", [
    "radiative_forcing/Dynco2_Base.csv",
    "gamma_distribution/gamma_decay.xlsx",
    "templates/main.html",
    "mirowrapper/inputs/Node.json",
    "mirowrapper/inputs/Edge.json",
    "mirowrapper/inputs/Rendering.json",
])
def test_declared_package_data_exists(relative_path):
    """Les fichiers de données critiques doivent être présents dans le package."""
    assert (ROOT / "MoSiR" / relative_path).is_file(), \
        f"MoSiR/{relative_path} est déclaré comme package-data mais absent"


# Documentation ---------------------------------------------------------------
README_FILES = ["README.md", "README_fr.md"]


@pytest.fixture(scope="module")
def readmes():
    return {name: (ROOT / name).read_text(encoding="utf-8") for name in README_FILES}


@pytest.mark.parametrize("name", README_FILES)
def test_readme_documents_coverage(name, readmes):
    """Les deux README doivent décrire comment mesurer la couverture."""
    content = readmes[name]
    assert "--cov=MoSiR" in content
    assert "python -m pytest" in content


def test_readmes_announce_the_same_figures(readmes):
    """Une mise à jour dans un seul des deux README doit échouer.

    Sans ce garde-fou, la version anglaise et la version française
    finissent par annoncer des chiffres différents.
    """
    numbers = {}
    for name, content in readmes.items():
        numbers[name] = {
            "tests": re.findall(r"badge/tests-(\d+)", content),
            "coverage": re.findall(r"-(\d+)%25", content),
        }

    reference = numbers[README_FILES[0]]
    for name in README_FILES[1:]:
        assert numbers[name] == reference, \
            f"{name} annonce {numbers[name]} au lieu de {reference}"


def test_announced_test_count_matches_reality(readmes, request):
    """Le nombre de tests annoncé dans les badges doit être le vrai.

    Se met à jour en relançant la suite: si ce test échoue, corriger les
    badges des deux README avec le nombre indiqué dans le message.
    """
    collected = request.session.testscollected or len(request.session.items)
    announced = re.search(r"badge/tests-(\d+)", readmes["README.md"])

    assert announced, "Badge du nombre de tests introuvable dans README.md"
    assert int(announced.group(1)) == collected, (
        f"Les README annoncent {announced.group(1)} tests, "
        f"la suite en compte {collected}. Mettre à jour les deux badges.")


@pytest.mark.parametrize("name", README_FILES)
def test_readme_paths_exist(name, readmes):
    """Les chemins cités dans la documentation doivent exister."""
    for cited in ("environment.yml", "tests/test_Characterization.py",
                  "tests/reference/"):
        assert cited in readmes[name], f"{cited} n'est plus mentionné dans {name}"
        assert (ROOT / cited).exists(), f"{cited} est cité dans {name} mais absent"


@pytest.mark.parametrize("name", README_FILES)
def test_documented_regeneration_variable_matches_the_code(name, readmes):
    """Le nom de la variable d'environnement doit suivre le code."""
    from tests import test_Characterization as characterization

    variable = "MOSIR_REGEN_REFERENCE"
    assert variable in readmes[name]
    source = (ROOT / "tests" / "test_Characterization.py").read_text(encoding="utf-8")
    assert f'environ.get("{variable}")' in source
    assert hasattr(characterization, "REGENERATE")


def test_package_data_patterns_are_declared(pyproject):
    """Les répertoires de données réellement utilisés sont couverts par un motif."""
    patterns = pyproject["tool"]["setuptools"]["package-data"]["MoSiR"]
    prefixes = {p.split("/")[0] for p in patterns}
    for required in ("radiative_forcing", "gamma_distribution",
                     "templates", "mirowrapper", "static"):
        assert required in prefixes, \
            f"Aucun motif package-data ne couvre MoSiR/{required}/"
