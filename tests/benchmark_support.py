# -*- coding: UTF-8 -*-
"""
Banc d'essai (benchmark) du calculateur MoSiR.

But: mesurer, de façon reproductible et versionnée, le temps de calcul sur un
gros graphe (~100 noeuds, plusieurs edges) sur un long horizon (T=1000), pour
comparer les gains d'une version à l'autre au fil des optimisations.

Représentation du graphe
------------------------
Le graphe est décrit par du code (build_dicts, lisible et paramétrable) ET
matérialisé en JSON versionné sous tests/benchmark/workload/ :

    graph.json  inputs.json  reports.json

Ces JSON sont la source utilisée par le test et sont réutilisables ailleurs
(par ex. `run_calculator(graph.json, inputs.json, reports.json, out)`). Un test
garde-fou (tests/test_Benchmark.py) vérifie que la copie JSON committée reste
identique à ce que produit le générateur, pour qu'elles ne dérivent jamais.

Deux entrées d'utilisation
--------------------------
1. Test pytest (tests/test_Benchmark.py): non-régression numérique à grande
   échelle, opt-in via MOSIR_BENCH=1.
2. Ligne de commande, pour chronométrer et laisser une trace:

       python -m tests.benchmark_support --record

Méthodologie de comparaison des temps
-------------------------------------
Les temps ABSOLUS ne sont comparables qu'entre exécutions faites sur la MÊME
machine et à la MÊME échelle. Chaque enregistrement capture donc l'empreinte de
la machine (CPU, OS, versions). La métrique d'intérêt est le POURCENTAGE
d'accélération entre deux exécutions sur le même ordinateur (avant/après une
optimisation). Un temps « normalisé » (temps / calibration) est aussi consigné
comme indicateur secondaire, approximativement comparable entre machines.

Régénérer les artéfacts (changement VOULU, avec approbation seulement):
    python -m tests.benchmark_support --regen-graph        # workload JSON
    python -m tests.benchmark_support --regen-reference    # référence de sortie

Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""
import os
import csv
import json
import math
import time
import platform
import argparse
import datetime
import hashlib
import subprocess
import pathlib
import tempfile
from importlib.metadata import version, PackageNotFoundError

from MoSiR import (
    graph_generator as gg,
    import_info as ip,
    reporting_info as rp,
)

# Emplacements des artéfacts versionnés --------------------------------------
BENCH_DIR = pathlib.Path(__file__).resolve().parent / "benchmark"
WORKLOAD_DIR = BENCH_DIR / "workload"
GRAPH_JSON = WORKLOAD_DIR / "graph.json"
INPUTS_JSON = WORKLOAD_DIR / "inputs.json"
REPORTS_JSON = WORKLOAD_DIR / "reports.json"
REFERENCE_FILE = BENCH_DIR / "reference_samples.json"
RESULTS_FILE = BENCH_DIR / "RESULTS.md"

GRAPH_NAME = "Bench"
GASES = ["CO2 emissions", "CH4 emissions", "N2O emissions", "CO emissions"]

# Charge canonique: ~105 noeuds / ~102 edges, T=1000. C'est LE banc d'essai;
# le générateur reste paramétrable pour l'expérimentation, mais les artéfacts
# committés (JSON + référence) correspondent à ces réglages.
WORKLOAD_PARAMS = {"tops": 14, "chain_pairs": 3, "recycling": True}
WORKLOAD_TIME = 1000

# Tolérance identique aux tests de caractérisation.
REL_TOL = 1e-9
ABS_TOL = 1e-12

# Instants échantillonnés pour la référence de sortie (compacte mais couvrant
# tôt, milieu et fin de l'horizon).
SAMPLE_TIMESTEPS = [0, 1, 2, 5, 10, 50, 100, 250, 500, 1000]


# Construction du gros graphe synthétique ------------------------------------
def build_dicts(params: dict = None, time_horizon: int = WORKLOAD_TIME):
    """Construit (graph_dict, input_dict, report_dict, meta) de façon déterministe.

    Le graphe est un ensemble de chaînes Top -> (Proportion -> Decay)* ->
    bassin de gaz, plus une boucle de recyclage avec sortie. Les proportions
    sortantes de chaque noeud somment à 1 (carbone conservé), ce qui permet
    d'affirmer que les stocks n'excèdent jamais le carbone entré.

    Aucune source d'aléatoire: les mêmes réglages produisent toujours le même
    graphe, donc les mêmes JSON et la même référence de sortie.
    """
    params = params or WORKLOAD_PARAMS
    tops = params["tops"]
    pairs = params["chain_pairs"]

    nodes: dict = {}
    edges: dict = {}
    inputs: dict = {}
    decay_params: dict = {}
    decay_names: list[str] = []
    prop_names: list[str] = []
    counters = {"node": 0, "edge": 0}

    def add_node(name: str, decay: bool = False, recycling: bool = False) -> int:
        counters["node"] += 1
        nid = counters["node"]
        nodes[str(nid)] = {"Decay": decay, "Recycling": recycling, "Name": name}
        return nid

    def add_edge(frm: int, to: int, values: list, overflow: bool = False) -> None:
        counters["edge"] += 1
        edges[str(counters["edge"])] = {
            "From": frm, "To": to, "Values": values, "Overflow": overflow}

    # Bassins de gaz (noeuds de fin)
    pool_ids = {gas: add_node(gas) for gas in GASES}

    # Chaînes principales
    for c in range(tops):
        top_name = f"Top {c}"
        top_id = add_node(top_name)
        inputs[top_name] = {str(y): float(100 + c * 10 + y) for y in range(6)}

        prev = top_id
        for p in range(pairs):
            prop_name = f"Prop {c}-{p}"
            prop_id = add_node(prop_name)
            prop_names.append(prop_name)
            add_edge(prev, prop_id, [1])
            prev = prop_id

            decay_name = f"Decay {c}-{p}"
            decay_id = add_node(decay_name, decay=True)
            decay_names.append(decay_name)
            add_edge(prev, decay_id, [1])
            prev = decay_id

            # alpha/beta « Custom » variés (évite l'optimiseur, reste déterministe)
            idx = len(decay_names)
            decay_params[decay_name] = {
                "Custom": {"alpha": 1.0 + (idx % 3), "beta": 5.0 + (idx % 40)}}

        add_edge(prev, pool_ids[GASES[c % len(GASES)]], [1])

    # Boucle de recyclage avec sortie (exerce le chemin RecyclingNode)
    if params["recycling"]:
        rec_top = add_node("Rec Top")
        rec_prop = add_node("Rec Prop")
        prop_names.append("Rec Prop")
        rec_node = add_node("Rec Node", recycling=True)
        inputs["Rec Top"] = {"0": 100.0, "1": 100.0, "2": 100.0}
        add_edge(rec_top, rec_prop, [1])
        add_edge(rec_prop, rec_node, [0.4])                  # boucle
        add_edge(rec_prop, pool_ids["CO emissions"], [0.6])  # sortie
        add_edge(rec_node, rec_prop, [1])                    # retour: délai d'un an

    graph_dict = {GRAPH_NAME: {"Nodes": nodes, "Edges": edges}}
    input_dict = {
        "Inputs": {GRAPH_NAME: inputs},
        "Decay": {GRAPH_NAME: decay_params},
        "Unit": "tC"}
    report_dict = {
        "Output": {GRAPH_NAME: {
            # Stock des DecayNode: convolution de survie O(T^2) (cible Phase 2)
            "Stocks": {
                "Nodes_name": decay_names, "Type": "Stock",
                "Cumulative": False, "Summarize": "Per node", "Unit": "tC"},
            # Flux sortant cumulatif: somme courante O(T^2) (cible Phase 1.1)
            "FluxOutCumul": {
                "Nodes_name": prop_names, "Type": "Flux out",
                "Cumulative": True, "Summarize": "Per node", "Unit": "tC"},
            # Forçage radiatif combiné: convolution radiative + lecture CSV
            "RadiativeCombined": {
                "Nodes_name": GASES, "Type": "Flux in",
                "Cumulative": True, "Summarize": "Combined", "Unit": "w/m2"},
            # Équivalent CO2 par noeud
            "CO2eq": {
                "Nodes_name": GASES, "Type": "Flux in",
                "Cumulative": False, "Summarize": "Per node", "Unit": "tCO2eq"},
        }},
        "PRG": {"CH4": 28, "N2O": 265},
        "Time": time_horizon,
        "Output file extension": ".csv"}

    meta = {
        "nodes": counters["node"], "edges": counters["edge"],
        "decay_nodes": len(decay_names), "reported_prop": len(prop_names),
        "time": time_horizon}
    return graph_dict, input_dict, report_dict, meta


# Copie JSON versionnée ------------------------------------------------------
def write_workload_json(params: dict = None, time_horizon: int = WORKLOAD_TIME) -> None:
    """(Ré)écrit les trois JSON committés à partir du générateur."""
    graph_dict, input_dict, report_dict, _ = build_dicts(params, time_horizon)
    WORKLOAD_DIR.mkdir(parents=True, exist_ok=True)
    for path, data in ((GRAPH_JSON, graph_dict),
                       (INPUTS_JSON, input_dict),
                       (REPORTS_JSON, report_dict)):
        path.write_text(json.dumps(data, indent=2, ensure_ascii=False) + "\n",
                        encoding="utf-8")


def load_workload_json():
    """Charge les trois JSON committés (source réutilisable ailleurs)."""
    return (
        json.loads(GRAPH_JSON.read_text(encoding="utf-8")),
        json.loads(INPUTS_JSON.read_text(encoding="utf-8")),
        json.loads(REPORTS_JSON.read_text(encoding="utf-8")),
    )


def workload_json_matches_generator() -> bool:
    """Vrai si la copie JSON committée == sortie actuelle du générateur."""
    graph_dict, input_dict, report_dict, _ = build_dicts()
    on_disk = load_workload_json()
    return on_disk == (graph_dict, input_dict, report_dict)


# Exécution & chronométrage --------------------------------------------------
def build_objects(graph_dict, input_dict, report_dict):
    """Objets FRAIS (caches vides) prêts pour output_creation."""
    graph = gg.GraphFactory(Dict=graph_dict)
    import_data = ip.ImportData(Dict=input_dict)
    report_data = rp.ReportData(Dict=report_dict)
    ip.add_import(graph, import_data)
    return graph, import_data, report_data


def timed_run(graph_dict, input_dict, report_dict, out_dir):
    """Un passage complet à froid. Retourne (temps_construction, temps_calcul)."""
    t0 = time.perf_counter()
    graph, import_data, report_data = build_objects(graph_dict, input_dict, report_dict)
    t_build = time.perf_counter() - t0
    t1 = time.perf_counter()
    rp.output_creation(graph, import_data, report_data, str(out_dir))
    t_calc = time.perf_counter() - t1
    return t_build, t_calc


def best_of(graph_dict, input_dict, report_dict, out_dir, repeats: int = 3):
    """Minimum de plusieurs passages à froid, pour réduire le bruit."""
    best_build = math.inf
    best_calc = math.inf
    for _ in range(repeats):
        t_build, t_calc = timed_run(graph_dict, input_dict, report_dict, out_dir)
        best_build = min(best_build, t_build)
        best_calc = min(best_calc, t_calc)
    return best_build, best_calc


def calibration() -> float:
    """Charge de référence fixe, pour normaliser (approximativement) entre machines.

    Meilleur de 3, sur une charge assez longue pour être peu sensible au bruit
    (turbo/thermique d'un portable), à l'image du profil mixte Python/numpy du
    calculateur.
    """
    import numpy as np
    best = math.inf
    for _ in range(3):
        t0 = time.perf_counter()
        s = 0.0
        for i in range(5_000_000):
            s += (i % 7) * 1.000001
        np.convolve(np.ones(50_000), np.ones(2_000))
        best = min(best, time.perf_counter() - t0)
    return best


# Référence de sortie (échantillonnée) ---------------------------------------
def output_filenames() -> list[str]:
    return [f"{GRAPH_NAME}~{name}.csv"
            for name in ("Stocks", "FluxOutCumul", "RadiativeCombined", "CO2eq")]


def read_csv(path):
    with open(path, newline="", encoding="utf-8") as f:
        reader = csv.DictReader(f)
        return reader.fieldnames, list(reader)


def sample_outputs(produced_dir) -> dict:
    """Extrait les valeurs aux SAMPLE_TIMESTEPS pour chaque fichier de sortie."""
    wanted = {str(t) for t in SAMPLE_TIMESTEPS}
    samples: dict = {}
    for filename in output_filenames():
        _, rows = read_csv(pathlib.Path(produced_dir) / filename)
        per_file: dict = {}
        for row in rows:
            if row.get("Time") in wanted:
                per_file[row["Time"]] = {
                    k: v for k, v in row.items() if k not in ("Time", "Unit")}
        samples[filename] = per_file
    return samples


def compare_to_reference(produced_dir) -> list[str]:
    """Compare les échantillons produits à la référence figée."""
    if not REFERENCE_FILE.is_file():
        return ["Référence manquante: reference_samples.json"]
    reference = json.loads(REFERENCE_FILE.read_text(encoding="utf-8"))
    produced = sample_outputs(produced_dir)
    problems = []
    for filename, ref_rows in reference.items():
        prod_rows = produced.get(filename, {})
        for tstep, ref_cols in ref_rows.items():
            prod_cols = prod_rows.get(tstep, {})
            for col, ref_val in ref_cols.items():
                if col not in prod_cols:
                    problems.append(f"{filename} T={tstep}: colonne '{col}' absente")
                    continue
                try:
                    got, want = float(prod_cols[col]), float(ref_val)
                except ValueError:
                    if prod_cols[col] != ref_val:
                        problems.append(f"{filename} T={tstep} '{col}': "
                                        f"{prod_cols[col]!r} != {ref_val!r}")
                    continue
                if not math.isclose(got, want, rel_tol=REL_TOL, abs_tol=ABS_TOL):
                    problems.append(f"{filename} T={tstep} '{col}': "
                                    f"{got!r} != {want!r} (réf)")
    return problems


def regenerate_reference(produced_dir) -> None:
    BENCH_DIR.mkdir(parents=True, exist_ok=True)
    samples = sample_outputs(produced_dir)
    REFERENCE_FILE.write_text(
        json.dumps(samples, indent=2, ensure_ascii=False) + "\n", encoding="utf-8")


# Métadonnées machine & enregistrement ---------------------------------------
def _lib_version(name: str) -> str:
    try:
        return version(name)
    except PackageNotFoundError:
        return "?"


def _git_commit() -> str:
    try:
        out = subprocess.run(
            ["git", "rev-parse", "--short", "HEAD"],
            cwd=str(BENCH_DIR), capture_output=True, text=True, timeout=5)
        return out.stdout.strip() or "?"
    except Exception:
        return "?"


def _cpu_brand() -> str:
    """Nom commercial du CPU avec sa fréquence (ex. « Intel(R) Core(TM)
    i5-7200U CPU @ 2.50GHz »).

    ``platform.processor()`` renvoie sur Windows une chaîne générique
    (« Intel64 Family 6 Model 142 Stepping 12, GenuineIntel ») qui ne dit
    rien sur la vitesse du processeur. On interroge donc la source native
    de chaque OS et on ne retombe sur ``platform.processor()`` qu'en dernier
    recours.
    """
    system = platform.system()
    try:
        if system == "Windows":
            import winreg
            with winreg.OpenKey(
                winreg.HKEY_LOCAL_MACHINE,
                r"HARDWARE\DESCRIPTION\System\CentralProcessor\0") as key:
                name, _ = winreg.QueryValueEx(key, "ProcessorNameString")
                if name:
                    return " ".join(name.split())
        elif system == "Linux":
            with open("/proc/cpuinfo", encoding="utf-8") as fh:
                for line in fh:
                    if line.lower().startswith("model name"):
                        return line.split(":", 1)[1].strip()
        elif system == "Darwin":
            out = subprocess.run(
                ["sysctl", "-n", "machdep.cpu.brand_string"],
                capture_output=True, text=True, timeout=5)
            name = out.stdout.strip()
            if name:
                return name
    except Exception:
        pass
    return platform.processor() or platform.machine()


def machine_metadata() -> dict:
    node = platform.node()
    cpu = _cpu_brand()
    fingerprint = hashlib.sha1(
        f"{node}|{cpu}|{platform.platform()}".encode()).hexdigest()[:8]
    return {
        "fingerprint": fingerprint,
        "machine": node or "?",
        "cpu": cpu or "?",
        "python": ".".join(platform.python_version_tuple()[:3]),
        "numpy": _lib_version("numpy"),
        "scipy": _lib_version("scipy"),
        "pandas": _lib_version("pandas"),
    }


RESULTS_HEADER = """# Banc d'essai — temps de calcul du calculateur MoSiR

Trace versionnée des temps de calcul, pour comparer les gains entre versions.

**Lecture des résultats.** Les temps ABSOLUS ne sont comparables qu'entre lignes
partageant la même **empreinte machine** et la même **échelle**. La métrique
d'intérêt est le **% d'accélération entre deux exécutions sur le même
ordinateur** (avant/après une optimisation). Le **temps normalisé** (calcul /
calibration) est un indicateur secondaire, approximativement comparable entre
machines. Reproduire un point de mesure:

    python -m tests.benchmark_support --record --label baseline

| Date (UTC) | Commit | Label | Empreinte | CPU | Python | numpy/scipy | Noeuds/Edges | T | Construction (s) | Calcul (s) | Calibration (s) | Normalisé |
|---|---|---|---|---|---|---|---|---|---|---|---|---|
"""


def record_result(label, meta, t_build, t_calc, calib, graph_meta):
    """Ajoute une ligne au journal Markdown versionné (opt-in)."""
    BENCH_DIR.mkdir(parents=True, exist_ok=True)
    if not RESULTS_FILE.exists():
        RESULTS_FILE.write_text(RESULTS_HEADER, encoding="utf-8")
    normalized = t_calc / calib if calib else float("nan")
    now = datetime.datetime.now(datetime.timezone.utc).strftime("%Y-%m-%d %H:%M")
    row = (f"| {now} | {_git_commit()} | {label} | {meta['fingerprint']} | "
           f"{meta['cpu']} | {meta['python']} | {meta['numpy']}/{meta['scipy']} | "
           f"{graph_meta['nodes']}/{graph_meta['edges']} | {graph_meta['time']} | "
           f"{t_build:.3f} | {t_calc:.3f} | {calib:.3f} | {normalized:.2f} |\n")
    with open(RESULTS_FILE, "a", encoding="utf-8") as f:
        f.write(row)
    return row


# CLI ------------------------------------------------------------------------
def main(argv=None):
    parser = argparse.ArgumentParser(description="Banc d'essai du calculateur MoSiR")
    parser.add_argument("--time", type=int, default=WORKLOAD_TIME,
                        help="Horizon T (défaut = canonique 1000; autre = exploration)")
    parser.add_argument("--repeats", type=int, default=3,
                        help="Nombre de passages à froid (minimum retenu)")
    parser.add_argument("--label", default="manual", help="Étiquette de la ligne du journal")
    parser.add_argument("--record", action="store_true",
                        help="Ajoute une ligne au journal versionné RESULTS.md")
    parser.add_argument("--regen-graph", action="store_true",
                        help="Réécrit les JSON du workload (avec approbation)")
    parser.add_argument("--regen-reference", action="store_true",
                        help="Réécrit la référence de sortie (avec approbation)")
    parser.add_argument("--check-reference", action="store_true",
                        help="Compare les sorties à la référence figée")
    args = parser.parse_args(argv)

    canonical = args.time == WORKLOAD_TIME

    if args.regen_graph:
        write_workload_json(time_horizon=args.time)
        print(f"Workload JSON (ré)écrit dans {WORKLOAD_DIR}")

    # Utilise la copie JSON committée si elle existe (source réutilisable),
    # sinon le générateur en mémoire.
    if GRAPH_JSON.is_file() and canonical:
        graph_dict, input_dict, report_dict = load_workload_json()
        _, _, _, graph_meta = build_dicts(time_horizon=args.time)
    else:
        graph_dict, input_dict, report_dict, graph_meta = build_dicts(time_horizon=args.time)
    graph_meta["time"] = args.time
    meta = machine_metadata()

    print(f"Graphe: {graph_meta['nodes']} noeuds, {graph_meta['edges']} edges, "
          f"{graph_meta['decay_nodes']} DecayNode | T={args.time}")
    print(f"Machine: {meta['machine']} ({meta['fingerprint']}) | {meta['cpu']} | "
          f"Python {meta['python']} | numpy {meta['numpy']} scipy {meta['scipy']}")

    with tempfile.TemporaryDirectory() as out_dir:
        print("Calibration…")
        calib = calibration()
        print(f"Chronométrage ({args.repeats} passage(s) à froid, minimum retenu)…")
        t_build, t_calc = best_of(graph_dict, input_dict, report_dict, out_dir, args.repeats)
        print(f"  Construction: {t_build:.3f} s")
        print(f"  Calcul:       {t_calc:.3f} s")
        print(f"  Calibration:  {calib:.3f} s  ->  temps normalisé = {t_calc/calib:.2f}")

        if args.regen_reference:
            if not canonical:
                print("ATTENTION: --time != 1000, référence NON réécrite (hors canonique)")
            else:
                regenerate_reference(out_dir)
                print(f"Référence de sortie (ré)écrite dans {REFERENCE_FILE}")
        elif args.check_reference:
            problems = compare_to_reference(out_dir)
            if problems:
                print(f"ÉCARTS ({len(problems)}):")
                for p in problems[:20]:
                    print(f"  - {p}")
            else:
                print("Sorties identiques à la référence ✓")

        if args.record:
            row = record_result(args.label, meta, t_build, t_calc, calib, graph_meta)
            print(f"Ligne ajoutée à {RESULTS_FILE}:\n{row}")


if __name__ == "__main__":
    main()
