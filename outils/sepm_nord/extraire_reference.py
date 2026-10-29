"""
Produit tests/reference/sepm_nord/forage_reference.json à partir de la page HTML de
miro_json_to_image.py, après une vérification indépendante de chaque valeur.

Les valeurs de référence du forage (F13) viennent du script écrit pour SEPM Nord : flux qui
traverse chaque nœud, destinations finales et parts d'origine par filière, en régime permanent,
pour 100 unités injectées dans le nœud d'entrée. Avant de les écrire, ce script les recalcule
par algèbre linéaire, sans rien reprendre du générateur, et refuse d'écrire au moindre écart.

Utilisation, depuis la racine du dépôt :

    pip install pillow cairosvg numpy
    python outils/sepm_nord/miro_json_to_image.py tests/reference/sepm_nord/sepm_nord.json <dossier>/sepm_nord
    python outils/sepm_nord/extraire_reference.py tests/reference/sepm_nord/sepm_nord.json <dossier>/sepm_nord.html

La première commande produit la page HTML (et les PDF), la seconde écrit la référence. Le
fichier de référence ne se modifie jamais à la main (AGENTS.md, règles de travail).

Copyright (c) 2026 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
"""
import json
import os
import sys

import numpy as np

# Écarts tolérés : la page arrondit ses valeurs à 6 chiffres significatifs.
TOLERANCE_RELATIVE = 1e-5
TOLERANCE_PART = 1e-5

# Les nœuds de production qui donnent son nom à chaque filière (convention « origine du
# bois » du script, voir PASSATION.md, section 4).
FILIERES = {
    "Sawnwood production": "sci",
    "Panels production": "pan",
    "P&P production": "pp",
    "Otherwood production": "aut",
    "Bioenergy production": "bio",
}
EXUTOIRES = {"co2": "CO2 emissions", "ch4": "CH4 emissions", "ash": "Ash", "n2o": "N2O emissions"}


def normalise(nom: str) -> str:
    """Retire les espaces en trop, comme le fait GraphFactory."""
    return " ".join(nom.split())


def lire_graphe(chemin: str):
    with open(chemin, encoding="utf-8") as fichier:
        donnees = json.load(fichier)
    cle = next(iter(donnees))
    graphe = donnees[cle]
    noeuds = graphe["Nodes"]
    liens = list(graphe["Edges"].values())
    for lien in liens:
        valeurs = lien["Values"]
        constante = (list(valeurs) == ["0"]) if isinstance(valeurs, dict) else (len(valeurs) == 1)
        if not constante:
            sys.exit("Les proportions doivent être constantes (une seule valeur, année 0).")
    return cle, noeuds, liens


def lire_page(chemin: str) -> dict:
    with open(chemin, encoding="utf-8") as fichier:
        page = fichier.read()
    debut = page.index("const DATA = ") + len("const DATA = ")
    donnees, _ = json.JSONDecoder().raw_decode(page, debut)
    return {k: v for k, v in donnees["schema_fr"]["nodes"].items() if not k.startswith("-")}


def main(chemin_graphe: str, chemin_page: str) -> None:
    cle, noeuds, liens = lire_graphe(chemin_graphe)
    page = lire_page(chemin_page)
    ids = list(noeuds)
    rang = {k: i for i, k in enumerate(ids)}
    n = len(ids)
    nom = {k: normalise(noeuds[k]["Name"]) for k in ids}

    proportions = np.zeros((n, n))
    for lien in liens:
        valeur = lien["Values"]["0"] if isinstance(lien["Values"], dict) else lien["Values"][0]
        proportions[rang[str(lien["From"])], rang[str(lien["To"])]] += valeur

    entrees = [k for k in ids if not any(str(l["To"]) == k for l in liens)]
    if len(entrees) != 1:
        sys.exit(f"Un seul nœud d'entrée est attendu, trouvé : {[nom[k] for k in entrees]}")
    injection = np.zeros(n)
    injection[rang[entrees[0]]] = 100.0

    # Flux qui traverse chaque nœud, chaque passage dans une boucle compté.
    inverse = np.linalg.inv(np.eye(n) - proportions.T)
    flux = inverse @ injection

    # Destinations finales : part d'une unité entrée dans le nœud qui finit dans chaque exutoire.
    sorties = {str(l["From"]) for l in liens}
    exutoires = {s: [k for k in ids if nom[k] == v] for s, v in EXUTOIRES.items()}
    stocks = [k for k in ids if k not in sorties and nom[k] not in EXUTOIRES.values()]

    # Parts d'origine : le carbone prend le nom de la première production qu'il traverse.
    production = {k: FILIERES[nom[k]] for k in ids if nom[k] in FILIERES}
    sans_marque = proportions.copy()
    for k in production:
        sans_marque[rang[k], :] = 0.0
    non_marque = np.linalg.solve(np.eye(n) - sans_marque.T, injection)

    ecarts = []
    reference = {}
    for k in ids:
        valeur_page = page[k]
        if abs(valeur_page["flux"] - flux[rang[k]]) > TOLERANCE_RELATIVE * max(1.0, abs(flux[rang[k]])):
            ecarts.append(("flux", nom[k], valeur_page["flux"], flux[rang[k]]))
        colonne = inverse[:, rang[k]]
        destinations = {s: sum(colonne[rang[j]] for j in liste) for s, liste in exutoires.items()}
        destinations["stock"] = sum(colonne[rang[j]] for j in stocks)
        for s, v in (valeur_page.get("fate") or {}).items():
            if abs(v - destinations[s]) > TOLERANCE_PART:
                ecarts.append(("destination", nom[k], s, v, destinations[s]))
        origines = {}
        for p, filiere in production.items():
            quantite = non_marque[rang[p]] * inverse[rang[k], rang[p]]
            if quantite > 1e-12:
                origines[filiere] = origines.get(filiere, 0.0) + quantite
        if k not in production and non_marque[rang[k]] > 1e-12:
            origines["brut"] = non_marque[rang[k]]
        for s in set(origines) | set(valeur_page.get("pt") or {}):
            attendu = origines.get(s, 0.0)
            obtenu = (valeur_page.get("pt") or {}).get(s, 0.0)
            if abs(obtenu - attendu) > TOLERANCE_RELATIVE * max(1.0, abs(attendu)):
                ecarts.append(("origine", nom[k], s, obtenu, attendu))
        reference[k] = {
            "nom": nom[k],
            "nom_affiche_fr": valeur_page.get("name"),
            "flux": valeur_page["flux"],
            "destinations": valeur_page.get("fate") or {},
            "origines": valeur_page.get("pt") or {},
            "filieres_possibles": valeur_page.get("fil") or [],
            "etape": valeur_page.get("st"),
        }

    if ecarts:
        for ecart in ecarts[:20]:
            print("Écart :", ecart)
        sys.exit(f"{len(ecarts)} écarts entre la page et le calcul indépendant : rien n'est écrit.")

    sortie = {
        "_description": (
            "Valeurs de référence du forage (F13) pour SEPM Nord, en régime permanent. "
            "Produites par outils/sepm_nord/miro_json_to_image.py, extraites et vérifiées "
            "indépendamment par outils/sepm_nord/extraire_reference.py. Ne pas modifier à la main."),
        "_conventions": {
            "injection": "100 unités de carbone dans le nœud d'entrée, proportions de l'année 0",
            "flux": "carbone qui entre dans le nœud, chaque passage dans une boucle compté",
            "destinations": "part d'une unité entrée dans le nœud qui finit dans chaque exutoire. "
                            "stock : nœuds finaux qui ne sont pas des exutoires. n2o : en plus du carbone",
            "origines": "quantités, sur les 100 unités, selon la première production traversée. "
                        "brut : pas encore passé par une production",
            "filieres": FILIERES,
        },
        "graphe": cle,
        "noeud_entree": nom[entrees[0]],
        "exutoires": {s: float(sum(flux[rang[j]] for j in liste)) for s, liste in exutoires.items()},
        "noeuds": reference,
    }
    destination = os.path.join(os.path.dirname(os.path.abspath(chemin_graphe)), "forage_reference.json")
    with open(destination, "w", encoding="utf-8") as fichier:
        json.dump(sortie, fichier, indent=2, ensure_ascii=False)
        fichier.write("\n")
    print(f"Vérification indépendante : {n} nœuds, aucun écart. Écrit : {destination}")


if __name__ == "__main__":
    if len(sys.argv) != 3:
        sys.exit("Utilisation : python extraire_reference.py <graphe.json> <page.html>")
    main(sys.argv[1], sys.argv[2])
