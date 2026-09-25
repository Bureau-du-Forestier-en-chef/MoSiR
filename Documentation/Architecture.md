# Architecture de MoSiR

Ce document décrit ce que MoSiR calcule, comment le code est organisé aujourd'hui, et vers quelle
organisation on veut aller, en particulier pour l'interface. Les normes d'écriture sont dans
[CodingStandards.md](CodingStandards.md). Les défauts connus et les étapes de travail sont dans
[FeuilleDeRoute.md](FeuilleDeRoute.md).

## Table des matières

- [Le modèle en bref](#le-modèle-en-bref)
- [Les couches aujourd'hui](#les-couches-aujourdhui)
- [Déroulement d'un calcul](#déroulement-dun-calcul)
- [Interface actuelle](#interface-actuelle)
- [Architecture cible](#architecture-cible)
- [Principe de décision](#principe-de-décision)

## Le modèle en bref

MoSiR suit le carbone récolté à travers un graphe orienté : des nœuds reliés par des liens qui
portent une proportion.

| Type de nœud | Comment il est reconnu dans `Graph.json` | Rôle |
| --- | --- | --- |
| `TopNode` | aucun lien entrant | Entrée de carbone (la récolte). Les quantités par année viennent de `Inputs.json`. |
| `ProportionNode` | ni `Decay` ni `Recycling`, liens entrants et sortants | Partage instantané selon les proportions de ses liens sortants. Pas de stock. |
| `DecayNode` | `"Decay": true` | Produit en usage : le carbone y reste, puis sort selon une loi de la famille gamma. |
| `RecyclingNode` | `"Recycling": true` | Remet le carbone en circulation l'année suivante. Le délai d'un an est fixe ([nodes.py:483-492](../MoSiR/graph_generator/nodes.py#L483-L492)). |
| `PoolNode` | aucun lien sortant | Puits final (émissions, enfouissement). Son stock est la somme de ses entrées. |

Le type est déduit par `GraphFactory` ([factory.py:61-86](../MoSiR/graph_generator/factory.py#L61-L86)).

**Temps.** Années entières t = 0..Time, bornes incluses, où `Time` vient de `Reports.json`. L'axe
est relatif : une clé « 2025 » dans les intrants veut dire t = 2025, pas l'année civile.

**Proportions.** Une proportion est une liste (une valeur par année, la dernière se prolonge) ou un
dictionnaire `{année de début: valeur}` (fonction en escalier, la clé `"0"` est requise). Voir
[nodes.py:32-60](../MoSiR/graph_generator/nodes.py#L32-L60). Les liens sortants d'un nœud, hors
overflow, somment à 1 chaque année.

**Liens overflow.** Ils ajoutent du carbone en plus des 100 %, par exemple les émissions du
transport égales à 5 % de la récolte. Seul le vérificateur les distingue ; le calcul les traite
comme des liens ordinaires.

**Dégradation.** La demi-vie est la médiane de la loi : `cdf(demi-vie) = 0,5`.

- `Exponential` : alpha = 1, beta ajusté.
- `Gamma` : beta = 1, alpha ajusté.
- `Chi-square` : beta = 2, alpha ajusté.
- `Custom` : alpha et beta donnés par l'utilisateur.

Voir [gamma_function.py:16-21](../MoSiR/gamma_function.py#L16-L21). Le carbone entré l'année s
est entièrement en stock l'année s, puis sort l'année s + k avec le poids `cdf(k) − cdf(k − 1)`.
Le stock vaut donc `stock(t) = somme sur s ≤ t de entrée(s) × (1 − cdf(t − s))`.

**Unités et gaz.** Les intrants sont en kgC ou en tC. Pour les tCO2eq, le gaz est reconnu dans le
nom du nœud (CO2, CH4, N2O, CO) et on applique un rapport de masse et un PRG
([reporting_info.py:175-191](../MoSiR/reporting_info.py#L175-L191)). Pour les W/m², les émissions
annuelles sont convoluées avec les facteurs DynCO2 par kg
([carbon_to_radiatif.py:71-110](../MoSiR/carbon_to_radiatif.py#L71-L110)).

**Linéarité.** Toutes les opérations sont linéaires par rapport aux intrants : partage, dégradation,
décalage du recyclage, conversions d'unités et de gaz, convolution radiative. Cela reste vrai tant
que les proportions ne dépendent que du temps, et pas des quantités. Trois conséquences :

1. doubler les intrants double tous les résultats ;
2. les résultats de deux jeux d'intrants s'additionnent ;
3. plusieurs graphes dont on additionne les résultats donnent exactement le total d'un graphe
   combiné.

Les approches proposées pour les classes de DHP, Monte Carlo et l'origine des émissions reposent
sur cette propriété ([feuille de route](FeuilleDeRoute.md#d-développements)).

## Les couches aujourd'hui

| Couche | Modules | Rôle |
| --- | --- | --- |
| Calcul | `graph_generator/` (`nodes`, `factory`, `caching`), `networkx_graph`, `gamma_function`, `carbon_to_radiatif` | Représentation du graphe et calcul des flux et des stocks. |
| Entrées et sorties | `utilities` (`JsonData`), `import_info`, `reporting_info`, `mosir_calculator` | Lecture des trois fichiers JSON, application des intrants, production des fichiers de résultats. |
| Vérification | `graph_verificator` | Contrôles de cohérence d'un graphe avant calcul. |
| Web | `MoSiR.py`, `views.py`, `blueprint_component.py`, `templates/main.html`, `upload/`, `download/`, `reporting/`, `visualization/`, `stats/`, `mirowrapper/` | Interface Flask locale et connexion à Miro. |

La séparation n'est pas encore étanche : [MoSiR/\_\_init\_\_.py](../MoSiR/__init__.py) importe
`views` et `blueprint_component`. Tout `import MoSiR`, même pour calculer, charge donc Flask, lit la
configuration Miro et, par pyvis, relève la limite de récursion.

## Déroulement d'un calcul

1. **Lecture.** `GraphFactory`, `ImportData` et `ReportData` héritent de `utilities.JsonData`.
   Chacun accepte un chemin (`DIR=`/`directory=`) ou un dictionnaire (`Dict=`).
2. **Construction.** `GraphFactory` crée un `WPGraph` par clé de premier niveau de `Graph.json`,
   déduit le type de chaque nœud, et refuse les proportions hors de [0, 1] et les boucles d'un
   nœud sur lui-même.
3. **Vérification.** `graph_verificator.main(graph)` lance les contrôles sur une copie. **Seule
   l'interface web l'appelle** : `run_calculator` calcule sans vérifier.
4. **Intrants.** `import_info.add_import(graph, import_data)` donne aux `TopNode` leurs quantités,
   et aux `DecayNode` leurs paramètres alpha et beta.
5. **Calcul à la demande.** `node.get_flux_in`, `get_flux_out` et `get_stock(graph, t, cumulative)`
   donnent la valeur d'un nœud à l'année t. Un nœud demande à ses parents leur sortie de l'année t
   (évaluation « pull »), récursivement. Chaque valeur est mémoïsée dans le nœud (`Caching`). La
   récursion se termine grâce aux délais : un `RecyclingNode` renvoie à t − 1, un `DecayNode` ne
   dépend que des années passées.
6. **Rapport.** `reporting_info.output_creation` parcourt graphe, puis sortie, puis nœud, pour les
   années 0..Time **dans l'ordre**. Il convertit ensuite les unités et les gaz, calcule `Combined`
   au besoin, et écrit `<dossier>/<graphe>~<sortie>.csv` ou `.json`.

`mosir_calculator.run_calculator(graph_file, import_file, report_file, output_dir)`
([mosir_calculator.py:41-58](../MoSiR/mosir_calculator.py#L41-L58)) enchaîne les étapes 1, 2, 4,
5 et 6. Il prend des chemins, ne retourne rien et écrit des fichiers. Il n'existe pas encore de
fonction qui retourne les résultats en mémoire.

Trois contraintes découlent de l'évaluation « pull » avec mémoïsation. Tant qu'elles ne sont pas
levées, elles s'imposent à tout nouvel usage (lots, Monte Carlo) :

- interroger les années dans l'ordre à partir de 0 (défauts D02 et D04) ;
- ne pas réutiliser un graphe déjà calculé avec d'autres paramètres (D03) ;
- un cycle dont le seul délai est un `DecayNode` plante (D01).

## Interface actuelle

- Flask, avec une classe `Component` (à la fois `Blueprint` et classe abstraite) par page.
  Chaque page est un objet unique créé à l'import du module. Son préfixe d'URL vient du nom de la
  classe ([blueprint_component.py:58-62](../MoSiR/blueprint_component.py#L58-L62)).
- Le HTML est assemblé en chaînes Python, puis injecté dans `templates/main.html` avec `| safe`.
  Tout le JavaScript est dans `main.html`.
- L'état est un dossier par adresse IP sous `MoSiR/uploads/`
  ([blueprint_component.py:79-90](../MoSiR/blueprint_component.py#L79-L90)). À chaque requête, le
  type de chaque fichier (graphe, intrants, rapport) est deviné en lisant ses clés. Les noms
  `inputs.json`, `report.json` et `histograms.json` sont fixes. Les résultats sont écrits dans le
  même dossier.
- Le formulaire « Calculer » encode ses données dans le nom des champs (`Quantity~graphe~nœud~période`,
  `Nodes_name~graphe~sortie`…). Le serveur les réassemble en `inputs.json` et `report.json`
  ([reporting/views.py:343-435](../MoSiR/reporting/views.py#L343-L435)), puis appelle
  `run_calculator` une fois par fichier de graphe
  ([reporting/views.py:437-442](../MoSiR/reporting/views.py#L437-L442)).

### Pourquoi elle casse facilement

1. **Un protocole implicite.** Le HTML construit en Python, le JavaScript et l'analyse des
   formulaires partagent un contrat qui n'est écrit nulle part : noms de champs, séparateur `~`,
   ordre des champs (U01), libellés français envoyés comme valeurs puis traduits à deux endroits.
   Changer un côté casse l'autre sans message.
2. **Un état partagé et des effacements implicites.** Téléverser un graphe efface les dossiers de
   tous les utilisateurs ([upload/views.py:51](../MoSiR/upload/views.py#L51)). La barre latérale et
   la connexion Miro sont partagées par tous.
3. **Tout se passe dans une requête.** Le calcul tourne pendant le POST, sans progression. La page
   de résultats relit tous les CSV du dossier, y compris ceux d'un run précédent.
4. **Un seul de chaque.** Un fichier par téléversement, un `inputs.json` et un `report.json` par
   run, des résultats sans identifiant de run. Impossible de lancer un lot.
5. **Aucun test des échanges.** Les analyseurs de formulaires et le JavaScript ne sont pas testés,
   et la couverture exclut les modules web.

## Architecture cible

L'interface reste en Flask. On sépare trois couches ; chacune n'appelle que celle du dessous.

```text
web       routes minces, gabarits Jinja, JavaScript dans static/js
  │
service   espace de travail, plan de runs, exécution par lots
  │
calcul    graphes, intrants, rapport : simulate()
```

- Le calcul n'importe ni Flask ni le service. À terme, `import MoSiR` ne charge plus le web, et
  `from MoSiR import graph_generator as gg` continue de fonctionner.
- Le service ne connaît pas HTTP. Il se teste sans navigateur ni client Flask.
- Le web ne calcule rien et ne devine rien : il lit la requête, appelle le service et rend un
  gabarit.

### Calcul

```python
results = simulate(graph_data, inputs_data, report_data, validate=True)
write_results(results, output_dir)
```

- `simulate` reçoit des dictionnaires déjà lus. Il vérifie le graphe si `validate` est vrai,
  construit des objets neufs à chaque appel, interroge les années dans l'ordre, et retourne un
  tableau de résultats (DataFrame) par couple (graphe, sortie). Il n'écrit aucun fichier.
- `write_results` écrit les fichiers au format actuel.
- `run_calculator` devient : lire les fichiers, `simulate`, `write_results`. La ligne de commande
  et les fichiers produits ne changent pas.

### Service

- **`Workspace`** : les fichiers importés par l'utilisateur. Chaque fichier a un identifiant, son
  nom d'origine et un type (graphe, intrants, rapport). Le type est détecté et le fichier validé
  une seule fois, à l'import. Un fichier reste jusqu'à ce que l'utilisateur le supprime : aucun
  effacement implicite. Il peut y avoir plusieurs fichiers de chaque type.
- **`RunSpec`** : un run, c'est-à-dire un graphe, un fichier d'intrants, un fichier de rapport et
  une étiquette.
- **`RunPlan`** : une liste de `RunSpec`, construite par des fonctions simples :
  - N graphes avec les mêmes intrants ;
  - un graphe avec N fichiers d'intrants ;
  - toutes les combinaisons choisies.
- **`run_batch(plan, output_root)`** : exécute chaque run dans `runs/<identifiant>/`, avec un
  `manifest.json` qui donne les fichiers utilisés, la version de MoSiR, la date, la durée, le
  statut et l'erreur éventuelle. Une erreur dans un run est consignée et n'arrête pas les autres.
- Une ligne de commande de lot rend la même chose possible sans l'interface. Elle remplace le script
  `mosir_calculator_loop.py` distribué à part.

**Point à trancher : la correspondance des noms.** `Inputs.json` et `Reports.json` sont indexés par
nom de graphe. Pour appliquer les mêmes intrants à N graphes de noms différents, il faut une règle.
Proposition : si un fichier d'intrants ou de rapport ne contient qu'un seul graphe, il s'applique au
graphe auquel on l'associe dans le plan. Les noms de nœuds doivent alors correspondre, et un message
clair liste ceux qui manquent.

### Web

- **Pages.**
  - Importer : plusieurs fichiers à la fois, liste des fichiers, suppression.
  - Plan de runs : choix des graphes, des intrants et des rapports, aperçu des combinaisons,
    lancement.
  - Résultats : par run ou en comparaison, téléchargement en archive.
  - Miro : inchangée au départ, puis sélection de plusieurs tableaux.
- Gabarits Jinja et JavaScript dans `static/js/` ; échanges en JSON pour ce qui est dynamique.
- L'état d'un utilisateur est son `Workspace`, pas des variables globales.
- La saisie d'intrants dans la page produit un fichier d'intrants enregistré dans l'espace de
  travail. Tout run part donc de fichiers, et le manifeste dit exactement avec quoi un résultat a
  été produit.
- Le serveur écoute sur `127.0.0.1` par défaut.

### Migration

La migration se fait par lots, et l'application reste utilisable après chacun. Les anciennes pages
sont remplacées une à une. Le détail des lots et leur état sont dans la
[feuille de route](FeuilleDeRoute.md#d-développements) (développement F2), puis, une fois la
campagne commencée, dans `Documentation/ETAT_interface.md`.

## Principe de décision

Quand deux solutions se valent, choisir celle que la personne qui maintient MoSiR comprendra le
plus vite en relisant le code dans six mois.
