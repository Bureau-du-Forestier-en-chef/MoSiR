# Normes de code de MoSiR

Ce document définit comment écrire, tester et mesurer le code de MoSiR. Il s'applique au paquet
`MoSiR/` (calcul et interface web) et à `tests/`. Le fonctionnement du dépôt (commandes, pièges,
déroulement d'une tâche) est dans [AGENTS.md](../AGENTS.md). L'organisation du code en couches est
dans [Architecture.md](Architecture.md).

Chaque règle est écrite ici une seule fois. Quand une convention change, on modifie ce document
dans le même changement que le code.

## Table des matières

- [Poids des règles](#poids-des-règles)
- [Lisibilité](#lisibilité)
- [Nommage](#nommage)
- [Organisation des fichiers](#organisation-des-fichiers)
- [Documentation et commentaires](#documentation-et-commentaires)
- [Erreurs](#erreurs)
- [Calcul numérique](#calcul-numérique)
- [État et effets de bord](#état-et-effets-de-bord)
- [Code de l'interface web](#code-de-linterface-web)
- [Tests](#tests)
- [Mesurer une amélioration](#mesurer-une-amélioration)
- [Refactorisation](#refactorisation)
- [Compatibilité](#compatibilité)
- [Liste de vérification](#liste-de-vérification)

## Poids des règles

- **Doit** : obligatoire, sans exception.
- **Devrait** : la règle par défaut. On peut s'en écarter, à condition de dire pourquoi.
- **À éviter** : un piège connu.

Les règles marquées **Doit** sont peu nombreuses :

1. Chaque bug découvert **doit** devenir un test ([Tests](#tests)).
2. Chaque amélioration **doit** être quantifiée ([Mesurer une amélioration](#mesurer-une-amélioration)).
3. Un résultat numérique ne **doit** jamais changer sans que le changement soit annoncé et
   quantifié.
4. On ne **doit** jamais annoncer un résultat de test sans avoir lancé le test.
5. Tout nouveau fichier source **doit** porter l'en-tête de licence, être en UTF-8, et un fichier
   modifié **doit** garder ses fins de ligne.

La lisibilité n'est pas une règle parmi d'autres : c'est le critère qui départage toutes les
autres.

## Lisibilité

Le premier objectif du code de MoSiR est d'être lu, compris et modifié par la personne qui
maintient le projet. Le code **devrait** pouvoir se lire de haut en bas, comme une explication du
calcul, sans devoir reconstituer mentalement ce qu'une ligne compacte fait.

### Ce qu'on vise

- Des noms tirés du domaine : `flux_in`, `stock`, `half_life`, `harvest`, `recycled_share`.
- Des variables intermédiaires nommées plutôt qu'une longue expression.
- Une boucle explicite plutôt qu'une compréhension imbriquée ou un `zip(*…)` quand la boucle se lit
  mieux.
- Des fonctions courtes, qui font une seule chose à un seul niveau d'abstraction. Une fonction
  qui dépasse un écran se découpe en fonctions privées aux noms parlants.
- La solution la plus simple qui répond au besoin actuel.

### Ce qu'on évite

- **À éviter** : les abstractions « pour plus tard », la métaprogrammation, les décorateurs ou
  classes génériques qui cachent le calcul.
- **À éviter** : une ligne qui a besoin d'une copie « explicite » en commentaire pour être
  comprise. Dans ce cas, c'est la version explicite qu'on garde.
- **À éviter** : raccourcir pour raccourcir. La concision n'est pas un but ; « moins de lignes »
  n'est pas un argument.

### Optimisation et lisibilité

Une optimisation se juge sur le banc d'essai ([Mesurer une amélioration](#mesurer-une-amélioration)) :

- un gain de moins de **10 %** ne justifie aucune perte de lisibilité ;
- au-delà, l'optimisation est acceptée si le code reste lisible, et si un commentaire explique ce
  qu'elle calcule (la formule) et pourquoi elle existe (la mesure) ;
- un changement de complexité (O(T²) → O(T), par exemple) se justifie plus facilement qu'un
  micro-gain.

### Deux exemples tirés du code

À suivre : le commentaire de `DecayNode.get_flux_out`
([nodes.py:406-431](../MoSiR/graph_generator/nodes.py#L406-L431)). Il donne la formule
(`flux_out(t) = sum_{s<t} flux_in(s) * decay(t-s)`), dit que c'est une convolution, et explique
pourquoi un produit scalaire numpy remplace la boucle.

À éviter : le total « Combined » de
[reporting_info.py:197-208](../MoSiR/reporting_info.py#L197-L208). Une ligne en
`zip(*[...])` y est suivie de sa propre version explicite, laissée en commentaire parce que la
ligne ne se comprend pas seule. Mieux vaut garder la boucle explicite, ou une petite fonction au
nom clair, comme `sum_columns_per_year`.

## Nommage

- Suivre PEP 8 : `snake_case` pour les fonctions, méthodes et variables, `PascalCase` pour les
  classes, `MAJUSCULES` pour les constantes seulement.
- Ce qui est privé commence par un seul `_`. **À éviter** : les nouveaux noms en `__` (name-mangling),
  très présents dans l'interface web actuelle.
- **À éviter** : une propriété nommée comme une méthode (`get_data`, `get_name`). Une propriété
  porte un nom (`data`, `name`) ; une méthode porte un verbe.
- Garder les alias d'import en usage : `gg` (graph_generator), `wp` (networkx_graph),
  `gv` (graph_verificator), `me` (mosir_exceptions), `cr` (carbon_to_radiatif),
  `mc` (mosir_calculator), `ut` (utilities). Pour `import_info` et `reporting_info`, suivre l'alias
  du fichier (`ii`/`ri` dans les tests, `ip`/`rp` dans le paquet).
- Ne pas renommer du code existant en marge d'un autre changement. Un renommage est un changement
  à part ([Refactorisation](#refactorisation)).

## Organisation des fichiers

- Chaque fichier source commence par l'en-tête de licence du projet. Le copier tel quel depuis un
  fichier voisin, par exemple
  [mosir_calculator.py:1-6](../MoSiR/mosir_calculator.py#L1-L6). Dans un test, il se place à la fin
  de la docstring du module.
- Les fichiers sont en UTF-8. Il n'y a pas de `.gitattributes` : garder les fins de ligne du
  fichier qu'on modifie.
- Suivre le formatage du fichier : 4 espaces, lignes d'au plus 79 caractères quand c'est
  raisonnable. Ne pas reformater ce qu'on ne modifie pas.
- Un module a une responsabilité. Le calcul n'importe jamais le web ([Architecture](Architecture.md)).

## Documentation et commentaires

- Toute fonction ou classe publique a une docstring au format Google : une phrase de résumé, puis
  `Args:`, `Returns:`, `Raises:` au besoin.
- Aucune docstring ne garde un `_description_` ou `_type_` laissé par un générateur.
- Indiquer les unités (kgC, tC, tCO2eq, W/m²) et la convention de temps : années entières
  t = 0..Time, bornes incluses, soit Time + 1 valeurs.
- Un commentaire explique le **pourquoi** (formule, invariant, choix de performance, contrainte de
  compatibilité), pas le **quoi** que le code dit déjà.
- Supprimer le code mort au lieu de le commenter. Git en garde l'historique.

## Erreurs

- Lever une exception de [mosir_exceptions.py](../MoSiR/mosir_exceptions.py) (`GraphError`,
  `EdgeError`, `NodeError`, `DecayError`, `InvalidOption`…) plutôt qu'une exception générique.
- **À éviter** : `except:` nu. Attraper le type attendu et chaîner la cause :
  `raise me.InvalidOption(...) from error`.
- Un message d'erreur dit où (fichier, graphe, nœud, année), quoi, et ce que l'utilisateur peut
  faire.
- Écrire les messages longs avec des chaînes adjacentes entre parenthèses. Une f-string continuée
  par `\` garde l'indentation de la ligne suivante dans le message.

  ```python
  # À éviter : le message contient une série d'espaces
  raise me.EdgeError(f"La somme des liens sortants de \
      {node.NAME} n'est pas égale à 100%")

  # À suivre
  raise me.EdgeError(
      f"La somme des liens sortants de {node.NAME} n'est pas égale à 100 % "
      f"({total * 100} % à l'année {timestep}).")
  ```

- Ne jamais ignorer une erreur en silence. Une entrée invalide (proportion, paramètre de
  dégradation, unité) est refusée avec un message, pas transformée en `NaN` ou en zéro.
- Un attrape-tout n'est permis qu'à la frontière de l'interface web, pour afficher le message à
  l'utilisateur.

## Calcul numérique

- **À éviter** : `==` entre deux flottants. Utiliser `pytest.approx` ou une tolérance nommée : la
  fixture `MOSIR_TOLERENCE` (absolue, 1e-4) pour les bilans de masse, `REL_TOL = 1e-9` et
  `ABS_TOL = 1e-12` pour les tests de caractérisation.
- Une refactorisation garde l'ordre des sommes et des requêtes. Les tests de caractérisation
  comparent les résultats presque au bit près.
- Tout nouveau type de nœud ou de flux respecte le bilan de masse : le carbone entré est égal à la
  somme des stocks des nœuds Decay, Recycling et Pool, hors liens overflow. Un test le vérifie.
- Pour l'aléatoire (Monte Carlo) : un générateur `numpy.random.default_rng(graine)` passé en
  paramètre, et une graine inscrite dans les résultats. **À éviter** : `np.random.seed` et
  l'état aléatoire global.
- Le modèle est linéaire par rapport aux intrants ([Architecture](Architecture.md#le-modèle-en-bref)).
  Un changement qui brise cette linéarité est une décision de modélisation : on l'annonce.

## État et effets de bord

- **À éviter** : tout nouvel état global mutable (variable de module, attribut de classe modifié à
  l'exécution). `Caching.cache_open` et les singletons de l'interface web sont de la dette, pas un
  modèle.
- Une fonction de calcul reçoit ses données en paramètres et retourne ses résultats. Elle ne lit
  ni n'écrit de fichier au milieu du calcul.
- Un objet de calcul utilisé une fois ne se réutilise pas avec d'autres paramètres tant que D03
  n'est pas corrigé ([feuille de route](FeuilleDeRoute.md)). On en construit un nouveau.

## Code de l'interface web

Ces règles s'appliquent au code nouveau ou réécrit. L'interface actuelle ne les respecte pas encore
(voir [Architecture.md](Architecture.md#interface-actuelle)).

- Le HTML vit dans des gabarits Jinja (`templates/`), pas dans des chaînes Python.
- Le JavaScript vit dans des fichiers de `static/js/`, pas dans `main.html`.
- Un texte fourni par l'utilisateur (nom de graphe, de nœud, de fichier) n'est jamais inséré dans
  le HTML sans échappement. Jinja échappe par défaut ; ne pas utiliser `| safe` sur une donnée
  utilisateur.
- Un nom de fichier fourni par le client passe par `werkzeug.utils.secure_filename`, et un
  téléchargement passe par `send_from_directory`.
- Les formulaires envoient des codes (`flux_in`, `stock`, `combined`), pas des libellés français.
  Les libellés restent dans les gabarits, ce qui rendra possible une interface en deux langues
  (#43).
- Une route fait une seule chose : lire la requête, appeler la couche service, rendre le gabarit.

## Tests

### Un bug découvert, un test

Chaque bug découvert **doit** devenir un test, qu'il soit corrigé tout de suite ou non.

- **Corrigé dans le même changement** : le test échoue avant le correctif et passe après. Il reste
  comme test de régression.
- **Pas encore corrigé** : le test reproduit le défaut et porte un marqueur `xfail` strict. Le
  `reason` donne l'identifiant de la [feuille de route](FeuilleDeRoute.md) et une explication.
  `raises=` précise le symptôme quand c'est une exception précise.

  ```python
  @pytest.mark.xfail(strict=True, raises=RecursionError, reason=(
      "D01 — Un cycle dont le seul délai est un DecayNode lève une "
      "RecursionError: ..."))
  def test_cycle_whose_only_delay_is_a_decay_node_keeps_mass_balance(...):
  ```

  Avec `strict=True`, la suite échoue dès que le test se met à passer. On pense ainsi à retirer le
  marqueur au moment du correctif. `python -m pytest --runxfail -k <nom>` montre l'échec réel.
- Un bug qu'on ne peut pas encore tester (JavaScript, Miro, exécutable) est noté dans la feuille
  de route avec la raison et le moment où son test arrivera.

### Nouvelle fonctionnalité

Tester le cas nominal, une entrée invalide, les limites (année 0, dernière année, proportion 0 ou
1, graphe à deux nœuds) et le mode d'échec (le message attendu).

### Refactorisation

Une refactorisation ne change pas le comportement. Si ce comportement n'est pas couvert, ajouter
d'abord des tests de caractérisation, puis refactoriser.

### Écrire un test

- Un fichier par module : `tests/test_<Module>.py`. Le nom du test est une phrase qui décrit le
  comportement attendu : `test_second_upload_keeps_the_first`.
- Des données construites dans le test ou par une fixture de `tests/conftest.py` : graphes avec
  `gg.GraphFactory(Dict=...)`, intrants avec `ii.ImportData(Dict=...)`.
- Déterministe : aucun ordre entre les tests, aucun aléatoire sans graine, pas de réseau (Miro),
  aucun dossier réel. Utiliser `tmp_path`, et `Flaskwrapper(uploads_root=...)` pour le web.
- Le calcul se teste sans l'interface web ; l'interface se teste avec le client de test Flask
  (`tests/test_WebContracts.py`).
- La suite par défaut reste rapide. Un test long est marqué `slow`, ou soumis à `MOSIR_BENCH=1`.
- La couverture est un indicateur, pas un but. Une assertion utile vaut mieux qu'une ligne
  exécutée.

### Résultats de référence

`tests/reference/` et `tests/benchmark/reference_samples.json` figent les résultats numériques. On
ne les régénère que pour un changement voulu et approuvé, et le diff fait partie de la revue.

## Mesurer une amélioration

Chaque amélioration (performance, fonctionnalité, ergonomie, nettoyage) **doit** être quantifiée
sur quatre axes.

### Vitesse

- Chronométrer avant et après sur la **même machine** :

  ```bash
  python -m tests.benchmark_support --record --label avant-<sujet>
  # ... changement ...
  python -m tests.benchmark_support --record --label apres-<sujet>
  ```

  Chaque commande prend le meilleur de 3 exécutions et ajoute une ligne à
  [tests/benchmark/RESULTS.md](../tests/benchmark/RESULTS.md). La mesure à rapporter est le
  **pourcentage d'accélération** entre les deux lignes. Les temps absolus ne se comparent pas
  d'une machine à l'autre.
- Pour trouver où va le temps : `python -m cProfile -o profil.prof <script>`, puis un visualiseur
  comme snakeviz.
- Une mesure qui ne passe pas par le calculateur (interface, import) se chronomètre avec
  `time.perf_counter()` sur un cas décrit, et on donne le cas avec le chiffre.

### Impact sur les résultats

- Résultats identiques : `tests/test_Characterization.py` et, pour un changement du moteur,
  `MOSIR_BENCH=1 python -m pytest tests/test_Benchmark.py` passent sans régénération.
- Résultats différents : donner l'écart maximal absolu et relatif, sur quelles sorties, et
  pourquoi. C'est alors un changement de résultat annoncé dans le CHANGELOG.

### Impact sur le code

Lignes ajoutées et retirées (`git diff --stat`), fichiers touchés, et un jugement franc sur la
lisibilité : meilleure, égale ou moins bonne, et dans ce dernier cas, pourquoi le gain le
justifie ([seuil](#optimisation-et-lisibilité)).

### Impact pour l'utilisateur

Ce qui change pour la personne qui utilise MoSiR, chiffré quand c'est possible. Par exemple, lancer
8 graphes avec 3 fichiers d'intrants passe de 24 runs manuels à un seul plan de runs.

### Fiche d'amélioration

À recopier dans la description de la PR ; le CHANGELOG en reprend l'essentiel.

```markdown
### Amélioration : <titre court>
- **Quoi** : <ce qui change, en une ou deux phrases>
- **Vitesse** : avant X s, après Y s, soit −Z % (<commande>, même machine, meilleur de 3)
- **Résultats** : identiques | écart max absolu …, relatif … sur …, parce que …
- **Code** : +A / −B lignes dans … ; lisibilité : meilleure | égale | moins bonne, parce que …
- **Utilisateur** : <ce qui change, chiffré si possible>
- **Tests** : <tests ajoutés ou modifiés>
```

## Refactorisation

- Préserver le comportement observable : signatures publiques, résultats numériques, types
  d'exceptions, formats de fichiers.
- Un changement voulu de comportement est un correctif ou une fonctionnalité, pas une
  refactorisation.
- Garder les changements petits. **À éviter** : mélanger dans un même changement un déplacement,
  un renommage, un changement de comportement, un reformatage et une mise à jour de dépendances.
- Une seule implémentation de référence par comportement : pas de deuxième version parallèle.
- Mettre à jour [Architecture.md](Architecture.md) quand une responsabilité change de place.

## Compatibilité

Ce que les utilisateurs et leurs scripts voient :

- les noms publics exposés par `from MoSiR import graph_generator as gg` et par le paquet ;
- la ligne de commande `-G -D -R -E` ;
- les schémas des fichiers `Graph.json`, `Inputs.json` et `Reports.json` (décrits dans le wiki) ;
- les fichiers de résultats `<graphe>~<sortie>.csv|.json` et leurs colonnes `Time`, `Unit`,
  `Combined` ;
- les résultats numériques ;
- les routes de l'interface web et l'exécutable.

Avant de renommer, déplacer ou retirer un de ces éléments : garder un alias qui délègue au nouveau
code, documenter la dépréciation dans les deux CHANGELOG, et proposer une migration. Un changement
de format ou de résultat se revoit avec autant de soin qu'un changement d'API.

## Liste de vérification

C'est la seule liste de vérification du projet.

**Lisibilité**

- [ ] Le code se lit de haut en bas, sans reconstituer mentalement des lignes compactes ?
- [ ] Les noms viennent du domaine et disent ce qu'ils contiennent ?
- [ ] Chaque fonction fait une seule chose, à un seul niveau d'abstraction ?
- [ ] Aucune tournure dont le seul avantage est d'être plus courte ?
- [ ] Toute optimisation conservée est mesurée, au-dessus du seuil, et expliquée en commentaire ?

**Architecture**

- [ ] Le code est dans la bonne couche (calcul, service, web) ?
- [ ] Le calcul n'importe rien du web, et aucun état global n'a été ajouté ?

**Tests**

- [ ] Chaque bug découvert a son test, en `xfail` strict s'il n'est pas corrigé ?
- [ ] Chaque correctif retire son `xfail` et met à jour la feuille de route ?
- [ ] Une nouvelle fonctionnalité teste le cas nominal, une entrée invalide, les limites et
  l'échec ?
- [ ] Les tests sont déterministes, sans dossier réel ni réseau ?
- [ ] La suite complète a été lancée, et les chiffres des README sont à jour ?

**Mesure**

- [ ] La fiche d'amélioration est remplie (vitesse, résultats, code, utilisateur) ?
- [ ] Les résultats numériques sont identiques, ou l'écart est quantifié et annoncé ?

**Documentation**

- [ ] Les docstrings publiques sont à jour, sans `_description_` ?
- [ ] La feuille de route, `CHANGELOG.md` et `CHANGELOG_fr.md` sont à jour ?
- [ ] `Architecture.md` est à jour si une responsabilité a changé de place ?

**Compatibilité**

- [ ] Schémas JSON, fichiers de résultats, ligne de commande et routes sont préservés, ou le
  changement est annoncé avec une migration ?
- [ ] Le code mort a été supprimé plutôt que commenté ?
