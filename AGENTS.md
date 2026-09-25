# MoSiR — guide de travail

Guide opérationnel pour les personnes et les assistants de code qui travaillent dans ce dépôt.

Ce fichier dit ce qui est propre à MoSiR : où se trouvent les choses, comment lancer et tester, les
pièges faciles à rater et le déroulement d'une tâche. Il ne répète pas les règles de conception.
Chaque règle est écrite dans un seul document, et c'est ce document qu'on modifie quand la règle
change.

| Ce qu'on cherche | Où c'est défini |
| --- | --- |
| Le modèle, les couches, le déroulement d'un calcul, l'architecture cible de l'interface | [Documentation/Architecture.md](Documentation/Architecture.md) |
| Lisibilité, nommage, documentation, erreurs, numérique, tests, mesure des améliorations, compatibilité, liste de vérification | [Documentation/CodingStandards.md](Documentation/CodingStandards.md) |
| Développements prévus, défauts connus, questions métier, sécurité, dette | [Documentation/FeuilleDeRoute.md](Documentation/FeuilleDeRoute.md) |
| Carte du dépôt, commandes, pièges, déroulement d'une tâche | ce fichier |

## Trois règles de base

1. **La lisibilité passe avant tout.** Le code doit rester lisible et navigable par la personne
   qui maintient MoSiR. Gagner 1 ou 2 % de vitesse, ou quelques lignes, ne justifie jamais un code
   plus difficile à comprendre. [Règle complète](Documentation/CodingStandards.md#lisibilité)
2. **Chaque bug découvert devient un test**, même s'il n'est pas corrigé tout de suite.
   [Règle complète](Documentation/CodingStandards.md#tests)
3. **Chaque amélioration est quantifiée** : vitesse, et impact sur les résultats, sur le code et
   pour l'utilisateur. [Règle complète](Documentation/CodingStandards.md#mesurer-une-amélioration)

## Le projet en bref

MoSiR (Modèle de Simulation en Réseau) est développé par le Bureau du forestier en chef (BFEC).
Il suit le devenir du carbone des produits du bois dans un réseau de flux que l'utilisateur
dessine dans Miro ou écrit en JSON : partage entre produits, dégradation dans le temps,
recyclage, émissions. Les résultats sont des flux entrants, des flux sortants ou des stocks par
nœud et par année, en kgC, tC, tCO2eq ou W/m².

On se sert de MoSiR de deux façons :

- **l'interface web**, une application Flask locale ouverte dans le navigateur, aussi livrée en
  exécutable Windows construit avec Nuitka ;
- **le paquet Python**, directement, ou par la ligne de commande
  `python -m MoSiR.mosir_calculator -G graphe.json -D intrants.json -R rapport.json -E dossier`.

La documentation pour les utilisateurs est dans le
[wiki GitHub](https://github.com/Bureau-du-Forestier-en-chef/MoSiR/wiki), dont la page
« Nomenclature des fichiers JSON » décrit les trois fichiers d'entrée. Les demandes sont suivies
dans les [issues GitHub](https://github.com/Bureau-du-Forestier-en-chef/MoSiR/issues).

## Carte du dépôt

| Chemin | Contenu |
| --- | --- |
| `MoSiR/graph_generator/` | Le cœur du calcul : les types de nœuds (`nodes.py`), la construction d'un graphe à partir du JSON (`factory.py`), la mémoïsation (`caching.py`). S'importe sous l'alias `gg`. |
| `MoSiR/networkx_graph.py` | `WPGraph`, l'enveloppe du `networkx.DiGraph` qui porte les proportions des liens. |
| `MoSiR/graph_verificator.py` | Les vérifications d'un graphe avant calcul (`debugg_graph_01` à `18`), lancées par `main()`. |
| `MoSiR/import_info.py`, `MoSiR/reporting_info.py` | Lecture des fichiers d'intrants et de rapport ; `output_creation` produit les fichiers de résultats. |
| `MoSiR/gamma_function.py` | Conversion d'une demi-vie en paramètres alpha et beta de la loi gamma. |
| `MoSiR/carbon_to_radiatif.py` | Conversion des émissions en forçage radiatif (W/m²), avec les facteurs de `radiative_forcing/Dynco2_Base.csv`. |
| `MoSiR/mosir_calculator.py` | `run_calculator` et la ligne de commande `-G -D -R -E`. |
| `MoSiR/utilities.py`, `MoSiR/mosir_exceptions.py` | Lecture et écriture JSON ; exceptions propres à MoSiR. |
| `MoSiR/MoSiR.py`, `MoSiR/views.py`, `MoSiR/blueprint_component.py` | Démarrage du serveur web, `Flaskwrapper`, et la classe `Component` dont hérite chaque page. |
| `MoSiR/upload/`, `download/`, `reporting/`, `visualization/`, `stats/`, `mirowrapper/` | Les pages de l'interface. `reporting/` est la page « Calculer » ; `stats/` n'est pas branchée ; `mirowrapper/` gère la connexion à Miro. |
| `MoSiR/templates/main.html` | Le gabarit commun à toutes les pages, qui contient aussi tout le JavaScript. |
| `tests/` | La suite pytest. `tests/reference/` : résultats de référence ; `tests/benchmark/` : banc d'essai et journal des temps. |
| `examples/Inputs/` | Un exemple complet : `Graph.json`, `Inputs.json`, `Reports.json`. |
| `standalone/Nuitka_wrapper.bat` | Construction de l'exécutable Windows. |
| `Documentation/` | Architecture, normes, feuille de route, et fichiers `ETAT_<campagne>.md` des campagnes en cours. |

## Environnement et lancement

```bash
conda env create -f environment.yml
conda activate MoSiR
```

`make init` fait la même chose. L'environnement installe MoSiR en mode éditable, avec Python 3.12.

- Interface web : la commande `MoSiR`. Le serveur écoute sur le port 3000 et ouvre le navigateur.
- Ligne de commande : `python -m MoSiR.mosir_calculator -G … -D … -R … -E …`.
- Depuis Python : `from MoSiR import mosir_calculator as mc`, puis
  `mc.run_calculator(graphe, intrants, rapport, dossier_de_sortie)`.

## Tests

```bash
python -m pytest
```

La suite complète compte environ 560 tests et prend une dizaine de secondes (une vingtaine avec la
couverture). Elle tourne aussi en CI sur Ubuntu à chaque push sur `master` ou `dev`, et à chaque PR
([.github/workflows/tests.yml](.github/workflows/tests.yml)).

| Besoin | Commande |
| --- | --- |
| Couverture | `python -m pytest --cov=MoSiR --cov-report=term-missing` |
| Mettre à jour les chiffres des README | `make docs-coverage`, ou `python -m pytest --cov=MoSiR --cov-report=json:coverage.json --update-readme` |
| Vérifier les chiffres des README, comme la CI | `make docs-check` (`--check-readme`) |
| Voir l'échec réel des bugs connus | `python -m pytest --runxfail -k <nom du test>` |
| Banc d'essai numérique (lent) | `MOSIR_BENCH=1 python -m pytest tests/test_Benchmark.py` |
| Chronométrer le calculateur | `python -m tests.benchmark_support --record --label <étiquette>` |
| Régénérer les références | `MOSIR_REGEN_REFERENCE=1 python -m pytest tests/test_Characterization.py` |

Les régénérations (`MOSIR_REGEN_REFERENCE`, `MOSIR_BENCH_REGEN`, `--regen-reference`,
`--regen-graph`) remplacent des résultats de référence. On ne les lance que pour un changement
voulu et approuvé, puis on relit le diff.

Ne jamais annoncer que des tests passent sans les avoir lancés. Si une validation n'a pas pu être
faite, le dire explicitement.

## Pièges

| Piège | Ce que ça implique |
| --- | --- |
| Le nombre de tests et la couverture sont écrits dans `README.md` et `README_fr.md`, et la CI les vérifie | Après avoir ajouté ou retiré un test, relancer `make docs-coverage`, sinon la CI échoue. |
| `import MoSiR` charge aussi toute l'interface web | L'import lit `mirowrapper/mirowrapper.env` et vide des dossiers générés. Il relève aussi la limite de récursion à 3000, parce que pyvis importe jedi. Le calcul en dépend sans le dire (voir D04 dans la feuille de route). |
| `Caching.cache_open` est un attribut de classe, donc global au processus | Une fixture `autouse` de `tests/conftest.py` le remet à `True` après chaque test. Ne pas ajouter d'autre état global. |
| L'ordre des requêtes compte pour un `DecayNode` | Tant que D02 n'est pas corrigé, interroger les années dans l'ordre à partir de 0, comme le fait le rapport. |
| Un graphe interrogé une fois garde ses caches | Pour un nouveau calcul (autres paramètres, autre tirage), construire un nouveau graphe (D03). |
| Le caractère `~` sépare le graphe et la sortie dans les noms de fichiers de résultats, et les champs dans les formulaires web | Un nom de graphe ne peut contenir ni `~` ni espace (vérifications 16 et 17). |
| `mirowrapper/mirowrapper.env` est suivi par git | Ne jamais y enregistrer de vraies clés Miro (voir S01). |
| `MoSiR.py` à la racine n'est pas suivi par git (`.gitignore`), mais `standalone/Nuitka_wrapper.bat` et `.vscode/launch.json` en ont besoin | C'est une copie de `MoSiR/MoSiR.py`. Un clone neuf doit la recréer. |
| Git suit `tests/test_calculator.py` en minuscules, alors que le disque a `test_Calculator.py` | Ne pas renommer le fichier en passant ; la CI Linux voit le nom en minuscules. |
| `MakeFile` prend une majuscule | Sous Linux : `make -f MakeFile`. Les recettes s'indentent avec une tabulation. |
| Il n'y a pas de `.gitattributes` | Les fichiers sont en UTF-8, avec des fins de ligne mixtes dans le dossier de travail. Conserver celles du fichier qu'on modifie. |
| Le chemin `License-Filename` des en-têtes de licence ne correspond à aucun fichier réel | Copier l'en-tête tel quel dans un nouveau fichier ; sa correction est notée dans la feuille de route. |

## Langue

- Identifiants, docstrings et commentaires du paquet : en anglais. La migration depuis le français
  est en cours ; ne pas retraduire du code déjà passé en anglais.
- Messages visibles par l'utilisateur (erreurs, interface) : en français pour l'instant. La langue
  de l'interface est l'issue #43.
- Tests : nom en anglais, sous forme de phrase ; docstrings, `reason` et messages d'assertion en
  français.
- Documentation de ce dépôt, fichiers `ETAT_<campagne>.md`, `CHANGELOG_fr.md`, issues et PR : en
  français.
- `CHANGELOG.md` et `CHANGELOG_fr.md` couvrent les mêmes versions et se mettent à jour ensemble.
  Le commit indiqué à côté de la version en cours marque jusqu'où le journal a été rempli.

## Déroulement d'une tâche

1. Lire l'entrée concernée de la [feuille de route](Documentation/FeuilleDeRoute.md), et le fichier
   `ETAT_<campagne>.md` s'il s'agit d'une campagne en cours.
2. **Bug** : écrire d'abord le test qui le reproduit, ou retirer le `xfail` du test existant, puis
   corriger.
3. **Amélioration** : mesurer avant, modifier, mesurer après, puis remplir la fiche d'amélioration
   ([gabarit](Documentation/CodingStandards.md#mesurer-une-amélioration)).
4. Lancer la suite complète. Si le nombre de tests a changé, lancer `make docs-coverage`.
5. Mettre à jour la feuille de route (statut et date) et les deux CHANGELOG.
6. Dire ce qui a été vérifié et ce qui ne l'a pas été.

Ne pas créer de commit sans qu'on le demande : décrire ce qui a changé et laisser le commit à la
personne qui maintient le projet.

## Travail sur plusieurs sessions

Une campagne qui s'étale sur plusieurs sessions (refonte de l'interface, migration, grand
renommage) a son fichier d'état : `Documentation/ETAT_<campagne>.md`, en français. On le lit avant
chaque lot et on le met à jour après. Il contient :

- l'objectif, et ce qui est explicitement hors périmètre ;
- ce qui est fait et ce qui reste, lot par lot ;
- les décisions déjà prises, pour ne pas les rouvrir ;
- les pièges rencontrés ;
- la façon de vérifier le travail.

Un fichier d'état suit une campagne en cours. Ce fichier-ci, l'architecture, les normes et la
feuille de route sont permanents.

## Règles de travail

- Rester dans le périmètre demandé. Ne pas reformater un fichier qu'on ne fait que traverser, et
  ne pas lancer un grand renommage au milieu d'un autre changement.
- Ne pas modifier un artéfact généré sans passer par son générateur : `tests/reference/`,
  `tests/benchmark/workload/` et `reference_samples.json`, les blocs de chiffres des README.
- Ne pas toucher aux dépendances sauf si c'est la tâche. `environment.yml` et `pyproject.toml`
  restent synchronisés, et `tests/test_Packaging.py` le vérifie.
- Le code existant ne fait pas office de norme. À l'inverse, on ne réécrit pas un composant qui
  fonctionne pour le conformer à une règle, en marge d'un autre changement.
- Rapporter exactement ce qui a été vérifié et ce qui ne l'a pas été.

## Avant de terminer

Parcourir la [liste de vérification](Documentation/CodingStandards.md#liste-de-vérification) des
normes. C'est la seule liste du projet ; ce fichier n'en garde pas de copie.
