# Feuille de route : index

La liste de travail de MoSiR : les défauts connus, les questions métier, les développements prévus
et la dette. Elle est répartie en deux feuilles de route, qui suivent la séparation des couches de
l'[architecture cible](Architecture.md#architecture-cible) : l'interface appelle le calcul, jamais
l'inverse.

| Fichier | Contenu |
| --- | --- |
| [FeuilleDeRoute_Calcul.md](FeuilleDeRoute_Calcul.md) | Le cœur : calcul, lecture des fichiers, vérificateur, radiatif, ligne de commande, paquet Python, analyses du forage, questions métier |
| [FeuilleDeRoute_Interface.md](FeuilleDeRoute_Interface.md) | L'interface web : pages, sécurité du serveur, éditeur de graphe, page de forage, Miro, exécutables |
| ce fichier | Le mode d'emploi, l'ordre global du travail, la dette commune (dépôt, CI, code mort) et l'index de toutes les entrées |

On lit l'entrée concernée avant de commencer une tâche et on la met à jour à la fin
([AGENTS.md](../AGENTS.md#déroulement-dune-tâche)).

## Mode d'emploi

- Chaque entrée a un identifiant stable, qu'on ne renumérote jamais :
  - `D` : défaut du calcul ou de la lecture des fichiers ;
  - `U` : défaut de l'interface web ;
  - `S` : sécurité ;
  - `Q` : question métier ;
  - `F` : développement ;
  - `E` : dette et nettoyage.
- Une entrée se met à jour sur place, avec la date : « Corrigé le 2026-10-02 (commit abc1234) ».
  Une entrée corrigée n'est pas effacée tout de suite ; on la retire au moment de la version
  suivante, quand le CHANGELOG en garde la trace.
- Chaque défaut a son test ([règle](CodingStandards.md#tests)). Tant qu'il n'est pas corrigé, le
  test porte un `xfail(strict=True)` dont le `reason` commence par l'identifiant. Pour voir l'échec
  réel : `python -m pytest --runxfail -k <nom du test>`.
- Un nouveau défaut s'ajoute avec son test, dans le même changement.
  Exception du 2026-10-29 : les entrées ajoutées ce jour là (D10, D11, le complément de D02 et les
  décisions Q) décrivent le test à écrire, et leur issue en contient un code vérifié. Le test entre
  dans le dépôt avec la correction, ou avant elle en `xfail(strict=True)`.
- Un identifiant est unique sur l'ensemble des trois fichiers. Une entrée ne vit que dans un seul
  fichier : l'index ci dessous dit lequel.
- **Issues GitHub.** Chaque entrée a une issue dont le titre commence par son identifiant entre
  crochets, par exemple « [D01] Un cycle dont le seul délai est un DecayNode plante ». Les demandes
  antérieures à cette règle (#3, #11, #20, #32, #35, #36, #37, #39, #43, #45, #46, #52) sont citées
  par leur numéro dans l'entrée qui les suit, et un commentaire sur chacune renvoie à cette entrée.
  Une issue porte le label `Calculateur` ou `Interface` selon sa feuille de route. Quand une entrée
  est créée, modifiée ou close, son issue l'est dans le même changement.

## Par où commencer

1. **S01** : régénérer le secret de l'application Miro. C'est une action à faire dans Miro, pas
   dans le code.
2. **U06**, puis **E15** et **E16** : la CI est rouge depuis le 30 juillet à cause de U06. Tant
   qu'elle l'est, elle ne protège aucun des changements suivants. L'entrée U06 propose une solution
   d'attente. Ensuite, faire tourner la CI sous Ubuntu, Windows et macOS, et rendre les tests
   radiatifs capables d'échouer.
3. **F1** : stabiliser le calcul pour les lots, dont D01 à D04, `simulate()` et le calcul séparé du
   web. D01 et D02 sont deux régressions de « Faster run » (db489c3), à corriger avant de publier la
   v2.0 : le CHANGELOG v2.0 annonce des résultats identiques, ce qui n'est vrai que pour les graphes
   testés. F1 est aussi le prérequis de tout ce qui suit.
4. **Q1 à Q7** : appliquer les décisions du 2026-10-29. Q1 et Q2 changent des résultats ou en
   refusent : elles vont dans la v2.0 avec une mention au CHANGELOG.
5. **F2, lot 1** : le `Workspace`, avec le dossier de données de l'utilisateur et le serveur sur
   `127.0.0.1`.
6. **F10** : l'éditeur de graphe.
7. **F13**, puis **F11** : le calcul du forage, puis sa page.
8. **F2, lots 2 à 7** : importer, plan de runs, résultats, intrants en tableau, langue, retrait de
   l'ancien code.
9. **F8** : retrait de Miro, une fois l'éditeur adopté.
10. **F12** : exécutable macOS, seulement si c'est simple.
11. Ensuite, selon les besoins : F5 (Monte Carlo), F3 (recyclage paramétrable), F4 (classes de
    DHP), F7 (performance), F9 (long terme).

Les défauts D05 à D11 et U00 à U05 se corrigent au fil de l'eau, ou avec le lot de F2 qui les
traite.

## Dette commune

De petits chantiers indépendants, à faire à l'occasion d'un changement voisin ou dans un lot de
nettoyage, jamais au milieu d'un autre changement.

- **E06** : code mort.
  - Vérifications 06 et 18, qui ne peuvent jamais échouer.
  - `import_info.py:88-92`, inatteignable.
  - La page `stats` et `Generator.get_graph_stats`, qui plante aussi sur les proportions en
    dictionnaire.
  - `__success_upload` dans `upload/views.py`.
  - Blocs en commentaire dans `reporting_info.py:200-208` et `carbon_to_radiatif.py:50-56`.
  - `MoSiR/__init__.pyc`, suivi par git.
- **E10** : dépôt.
  - `tests/test_calculator.py` est en minuscules dans git mais pas sur le disque.
  - Il n'y a pas de `.gitattributes`, d'où des fins de ligne mixtes.
  - La ligne `MoSiR.py` du `.gitignore` n'est pas ancrée (`/MoSiR.py`).
  - `.vs ` a un espace final dans le `.gitignore`.
- **E13** : le badge des README annonce « N passed », alors que N compte tous les tests collectés,
  `xfail` et ignorés compris ([tests/coverage_docs.py:119-123](../tests/coverage_docs.py#L119-L123)).
- **E15** : la CI ne tourne que sous Ubuntu
  ([.github/workflows/tests.yml:18](../.github/workflows/tests.yml#L18)), alors que l'exécutable
  livré est Windows et que des défauts ne se manifestent que sous un système : U05 et D08 sous
  Windows, U06 sous Linux et macOS. Ajouter une matrice Ubuntu, Windows et macOS. Garder l'étape
  `--check-readme` sur un seul système : les chiffres de couverture dépendent du système (91,9 %
  sous Linux et Python 3.12, plus sous Windows où les tests de U06 passent). Les chiffres des README
  se mettent donc à jour sur le système de la CI.

## Index des entrées

| ID | Entrée | Feuille de route |
| --- | --- | --- |
| [D01](FeuilleDeRoute_Calcul.md#d01--un-cycle-dont-le-seul-délai-est-un-decaynode-plante) | Un cycle dont le seul délai est un DecayNode plante | Calcul |
| [D02](FeuilleDeRoute_Calcul.md#d02--le-stock-dun-decaynode-dépend-de-lordre-des-requêtes) | Le stock d'un DecayNode dépend de l'ordre des requêtes | Calcul |
| [D03](FeuilleDeRoute_Calcul.md#d03--changer-alpha-ou-beta-après-un-calcul-ne-change-rien) | Changer alpha ou beta après un calcul ne change rien | Calcul |
| [D04](FeuilleDeRoute_Calcul.md#d04--une-requête-lointaine-dépasse-la-limite-de-récursion) | Une requête lointaine dépasse la limite de récursion | Calcul |
| [D05](FeuilleDeRoute_Calcul.md#d05--la-vérification-des-100--ignore-des-années) | La vérification des 100 % ignore des années | Calcul |
| [D06](FeuilleDeRoute_Calcul.md#d06--la-détection-de-boucle-peut-tourner-sans-fin) | La détection de boucle peut tourner sans fin | Calcul |
| [D07](FeuilleDeRoute_Calcul.md#d07--la-ligne-de-commande-radiative-est-inutilisable) | La ligne de commande radiative est inutilisable | Calcul |
| [D08](FeuilleDeRoute_Calcul.md#d08--les-json-accentués-sont-mal-lus-sous-windows) | Les JSON accentués sont mal lus sous Windows | Calcul |
| [D09](FeuilleDeRoute_Calcul.md#d09--des-paramètres-de-dégradation-invalides-donnent-des-nan) | Des paramètres de dégradation invalides donnent des NaN | Calcul |
| [D10](FeuilleDeRoute_Calcul.md#d10--un-nœud-isolé-produit-une-erreur-de-bilan-de-masse-trompeuse) | Un nœud isolé produit une erreur de bilan de masse trompeuse | Calcul |
| [D11](FeuilleDeRoute_Calcul.md#d11--des-fichiers-dentrée-mal-remplis-donnent-des-erreurs-python-brutes) | Des fichiers d'entrée mal remplis donnent des erreurs Python brutes | Calcul |
| [U00](FeuilleDeRoute_Interface.md#u00--un-deuxième-téléversement-efface-le-premier) | Un deuxième téléversement efface le premier | Interface |
| [U01](FeuilleDeRoute_Interface.md#u01--le-formulaire-calculer-perd-un-champ-par-sortie) | Le formulaire Calculer perd un champ par sortie | Interface |
| [U02](FeuilleDeRoute_Interface.md#u02--beta-nest-pas-obligatoire-dans-le-formulaire) | Beta n'est pas obligatoire dans le formulaire | Interface |
| [U03](FeuilleDeRoute_Interface.md#u03--une-apostrophe-dans-un-nom-fait-échouer-limport) | Une apostrophe dans un nom fait échouer l'import | Interface |
| [U04](FeuilleDeRoute_Interface.md#u04--un-téléversement-peut-écrire-hors-du-dossier-de-lutilisateur) | Un téléversement peut écrire hors du dossier de l'utilisateur | Interface |
| [U05](FeuilleDeRoute_Interface.md#u05--un-téléchargement-peut-lire-nimporte-quel-fichier) | Un téléchargement peut lire n'importe quel fichier | Interface |
| [U06](FeuilleDeRoute_Interface.md#u06--la-lecture-des-json-par-chemin-absolu-est-cassée-hors-windows) | La lecture des JSON par chemin absolu est cassée hors Windows | Interface |
| [S01](FeuilleDeRoute_Interface.md#s01--identifiants-miro-dans-lhistorique-public) | Identifiants Miro dans l'historique public | Interface |
| [S02](FeuilleDeRoute_Interface.md#s02--serveur-exposé-au-réseau) | Serveur exposé au réseau | Interface |
| [Q1](FeuilleDeRoute_Calcul.md#b-questions-métier-tranchées) | Facteur du CO | Calcul |
| [Q2](FeuilleDeRoute_Calcul.md#b-questions-métier-tranchées) | « Stock » et « Cumulative » | Calcul |
| [Q3](FeuilleDeRoute_Calcul.md#b-questions-métier-tranchées) | Étalement de la loi Gamma | Calcul |
| [Q4](FeuilleDeRoute_Calcul.md#b-questions-métier-tranchées) | Demi-vies courtes | Calcul |
| [Q5](FeuilleDeRoute_Calcul.md#b-questions-métier-tranchées) | Convention radiative | Calcul |
| [Q6](FeuilleDeRoute_Calcul.md#b-questions-métier-tranchées) | Reconnaissance des gaz | Calcul |
| [Q7](FeuilleDeRoute_Calcul.md#b-questions-métier-tranchées) | Liens overflow | Calcul |
| [F1](FeuilleDeRoute_Calcul.md#f1--stabiliser-le-calcul-pour-les-lots) | Stabiliser le calcul pour les lots | Calcul |
| [F2](FeuilleDeRoute_Interface.md#f2--refonte-de-linterface) | Refonte de l'interface | Interface |
| [F3](FeuilleDeRoute_Calcul.md#f3--recyclage-paramétrable) | Recyclage paramétrable | Calcul |
| [F4](FeuilleDeRoute_Calcul.md#f4--classes-de-dhp) | Classes de DHP | Calcul |
| [F5](FeuilleDeRoute_Calcul.md#f5--monte-carlo) | Monte Carlo | Calcul |
| [F6](FeuilleDeRoute_Calcul.md#f6--origine-des-émissions) | Origine des émissions | Calcul |
| [F7](FeuilleDeRoute_Calcul.md#f7--performance) | Performance | Calcul |
| [F8](FeuilleDeRoute_Interface.md#f8--miro) | Miro | Interface |
| [F9](FeuilleDeRoute_Calcul.md#f9--long-terme) | Long terme | Calcul |
| [F10](FeuilleDeRoute_Interface.md#f10--éditeur-de-graphe) | Éditeur de graphe | Interface |
| [F11](FeuilleDeRoute_Interface.md#f11--page-de-forage) | Page de forage | Interface |
| [F12](FeuilleDeRoute_Interface.md#f12--exécutables-windows-et-macos) | Exécutables Windows et macOS | Interface |
| [F13](FeuilleDeRoute_Calcul.md#f13--analyses-de-forage) | Analyses de forage | Calcul |
| [E01](FeuilleDeRoute_Calcul.md#d-dette-du-calcul) | Le paquet importe le web | Calcul |
| [E02](FeuilleDeRoute_Calcul.md#d-dette-du-calcul) | run_calculator ne vérifie pas le graphe | Calcul |
| [E03](FeuilleDeRoute_Calcul.md#d-dette-du-calcul) | Pas d'exception de base commune, except nus | Calcul |
| [E04](FeuilleDeRoute_Calcul.md#d-dette-du-calcul) | Messages d'erreur avec des séries d'espaces | Calcul |
| [E05](FeuilleDeRoute_Calcul.md#d-dette-du-calcul) | Docstrings incomplètes | Calcul |
| [E06](#dette-commune) | Code mort | Index (ce fichier) |
| [E07](FeuilleDeRoute_Calcul.md#d-dette-du-calcul) | Noms à corriger | Calcul |
| [E08](FeuilleDeRoute_Calcul.md#d-dette-du-calcul) | Chemin License-Filename inexistant | Calcul |
| [E09](FeuilleDeRoute_Interface.md#e-dette-de-linterface) | Construction de l'exécutable | Interface |
| [E10](#dette-commune) | Dépôt : casse, fins de ligne, .gitignore | Index (ce fichier) |
| [E11](FeuilleDeRoute_Interface.md#e-dette-de-linterface) | Port, hôte et adresse codés en dur | Interface |
| [E12](FeuilleDeRoute_Calcul.md#d-dette-du-calcul) | Chemins de sortie construits par concaténation | Calcul |
| [E13](#dette-commune) | Badge des README trompeur | Index (ce fichier) |
| [E14](FeuilleDeRoute_Calcul.md#d-dette-du-calcul) | CHANGELOG v2.0 et résultats identiques | Calcul |
| [E15](#dette-commune) | CI seulement sous Ubuntu | Index (ce fichier) |
| [E16](FeuilleDeRoute_Calcul.md#d-dette-du-calcul) | Tests radiatifs incapables d'échouer | Calcul |
