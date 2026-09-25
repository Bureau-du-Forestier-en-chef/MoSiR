# Feuille de route : développements et défauts

La liste de travail de MoSiR : les défauts connus, les questions à trancher et les développements
prévus. On la lit avant de commencer une tâche et on la met à jour à la fin
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

## Par où commencer

1. **S01** : régénérer le secret de l'application Miro. C'est une action à faire dans Miro, pas dans
   le code.
2. **D01 et D02** : deux régressions de « Faster run » (db489c3), à corriger avant de publier la
   v2.0. Le CHANGELOG v2.0 annonce des résultats identiques, ce qui n'est vrai que pour les graphes
   testés.
3. **F1** : stabiliser le calcul pour les lots. C'est le prérequis de la refonte de l'interface et
   de Monte Carlo.
4. **F2** : refonte de l'interface, lot par lot.

## A. Défauts confirmés

Tous les défauts de cette section ont été reproduits le 2026-09-25 par leur test.

| ID | Gravité | Défaut | Statut |
| --- | --- | --- | --- |
| [D01](#d01--un-cycle-dont-le-seul-délai-est-un-decaynode-plante) | Haute | Un cycle dont le seul délai est un DecayNode plante | Ouvert |
| [D02](#d02--le-stock-dun-decaynode-dépend-de-lordre-des-requêtes) | Haute | Le stock d'un DecayNode dépend de l'ordre des requêtes | Ouvert |
| [D03](#d03--changer-alpha-ou-beta-après-un-calcul-ne-change-rien) | Moyenne | Changer alpha ou beta après un calcul ne change rien | Ouvert |
| [D04](#d04--une-requête-lointaine-dépasse-la-limite-de-récursion) | Moyenne | Une requête lointaine dépasse la limite de récursion | Ouvert |
| [D05](#d05--la-vérification-des-100--ignore-des-années) | Moyenne | La vérification des 100 % ignore des années | Ouvert |
| [D06](#d06--la-détection-de-boucle-peut-tourner-sans-fin) | Moyenne | La détection de boucle peut tourner sans fin | Ouvert |
| [D07](#d07--la-ligne-de-commande-radiative-est-inutilisable) | Basse | La ligne de commande radiative est inutilisable | Ouvert |
| [D08](#d08--les-json-accentués-sont-mal-lus-sous-windows) | Moyenne | Les JSON accentués sont mal lus sous Windows | Ouvert |
| [D09](#d09--des-paramètres-de-dégradation-invalides-donnent-des-nan) | Moyenne | Des paramètres de dégradation invalides donnent des NaN | Ouvert |
| [U00](#u00--un-deuxième-téléversement-efface-le-premier) | Haute | Un deuxième téléversement efface le premier | Ouvert |
| [U01](#u01--le-formulaire-calculer-perd-un-champ-par-sortie) | Basse | Le formulaire « Calculer » perd un champ par sortie | Ouvert, latent |
| [U02](#u02--beta-nest-pas-obligatoire-dans-le-formulaire) | Moyenne | Beta n'est pas obligatoire dans le formulaire | Ouvert |
| [U03](#u03--une-apostrophe-dans-un-nom-fait-échouer-limport) | Moyenne | Une apostrophe dans un nom fait échouer l'import | Ouvert |
| [U04](#u04--un-téléversement-peut-écrire-hors-du-dossier-de-lutilisateur) | Haute | Un téléversement peut écrire hors du dossier de l'utilisateur | Ouvert |
| [U05](#u05--un-téléchargement-peut-lire-nimporte-quel-fichier) | Haute | Un téléchargement peut lire n'importe quel fichier (Windows) | Ouvert |

### D01 — Un cycle dont le seul délai est un DecayNode plante

- **Où** : `DecayNode.get_flux_out`, [nodes.py:417](../MoSiR/graph_generator/nodes.py#L417), et
  `_extend_decay_vectors`, [nodes.py:350-368](../MoSiR/graph_generator/nodes.py#L350-L368).
- **Symptôme** : `RecursionError` dès l'année 1 pour Harvest → Mill → Products (Decay) → Mill.
  Régression de « Faster run » : l'ancien code ne lisait que les années 0 à t − 1 (`range(time)`).
- **Cause** : pour la sortie de l'année t, le vecteur des entrées est étendu jusqu'à t **inclus**.
  Or l'entrée de l'année t dépend, par la boucle, de la sortie de l'année t.
- **Correction proposée** : étendre jusqu'à t − 1 dans `get_flux_out`.
- **Test** : `tests/test_Calculator.py::test_cycle_whose_only_delay_is_a_decay_node_keeps_mass_balance`.

### D02 — Le stock d'un DecayNode dépend de l'ordre des requêtes

- **Où** : [nodes.py:363-368](../MoSiR/graph_generator/nodes.py#L363-L368).
- **Symptôme** : dans une boucle de recyclage, demander directement le stock de l'année 10 donne
  675,2 au lieu de 699,3. Régression de « Faster run ». Le rapport actuel demande les années dans
  l'ordre et n'est pas touché, mais les lots, Monte Carlo ou une requête isolée le seraient.
- **Cause** : pendant que `_extend_decay_vectors` calcule les années manquantes, la boucle le
  rappelle pour une année plus ancienne. L'appel interne allonge le vecteur, puis l'appel externe
  ajoute encore ses propres années : certaines années sont comptées deux fois.
- **Correction proposée** : ajouter les années une à une, en relisant la longueur du vecteur à
  chaque ajout.
- **Test** : `tests/test_Calculator.py::test_decay_stock_does_not_depend_on_the_order_of_the_queries`.

### D03 — Changer alpha ou beta après un calcul ne change rien

- **Où** : les setters `alpha` et `beta`, [nodes.py:370-384](../MoSiR/graph_generator/nodes.py#L370-L384).
- **Symptôme** : les valeurs déjà calculées restent en cache, et le stock ne reflète pas le
  nouveau beta. C'est un piège pour Monte Carlo ou toute réutilisation d'un graphe.
- **Correction proposée** : vider les caches du nœud (et de ce qui en dépend) dans les setters, ou
  refuser la modification après un calcul. La règle d'usage actuelle est de construire un graphe
  neuf.
- **Test** : `tests/test_Calculator.py::test_changing_decay_parameters_after_a_calculation_updates_the_results`.

### D04 — Une requête lointaine dépasse la limite de récursion

- **Où** : l'évaluation « pull » récursive ([Architecture](Architecture.md#déroulement-dun-calcul)).
- **Symptôme** : dans une boucle de recyclage, demander directement le flux de l'année 1000 lève
  `RecursionError`. Le seuil est vers t = 700 avec la limite de 3000, et vers t = 250 avec la
  limite par défaut de Python (1000).
- **Piège** : la limite vaut 3000 seulement parce que pyvis importe jedi, qui la relève. Quand le
  calcul ne chargera plus le web (F1), le seuil baissera.
- **Correction proposée** : faire interroger les années dans l'ordre par `simulate()` (F1), ou
  calculer par balayage des années plutôt que par récursion (F7).
- **Test** : `tests/test_Calculator.py::test_far_query_in_a_recycling_loop_stays_within_the_recursion_limit`.

### D05 — La vérification des 100 % ignore des années

- **Où** : `debugg_graph_02`, [graph_verificator.py:195-201](../MoSiR/graph_verificator.py#L195-L201).
- **Symptôme** : `{"0": 0.5, "10": 0.9}` avec `[0.5]` passe la vérification, alors que la somme
  vaut 140 % à partir de l'année 10.
- **Cause** : pour une proportion en dictionnaire, la boucle parcourt les années 0 à (nombre de
  clés − 1), pas les années données par les clés.
- **Correction proposée** : vérifier l'année 0 et chaque année où une proportion change (union des
  clés des dictionnaires et des indices des listes).
- **Test** : `tests/test_Verificator.py::test_pourc_is_checked_at_every_year_of_a_dict_proportion`.

### D06 — La détection de boucle peut tourner sans fin

- **Où** : `debugg_graph_05`, [graph_verificator.py:276-294](../MoSiR/graph_verificator.py#L276-L294).
- **Symptôme** : pour Top → S → A ⇄ B, si S est examiné en premier, la vérification ne se termine
  jamais. Dans `gv.main`, la vérification 04 lève une erreur avant d'arriver là, ce qui masque le
  problème. Le parcours est aussi exponentiel sur de grands graphes.
- **Cause** : le parcours ne garde pas la trace des nœuds visités (lignes 278 et 290 en
  commentaire) et ne reconnaît que les boucles qui reviennent au nœud de départ.
- **Correction proposée** : chercher un cycle (`networkx.find_cycle`) dans le sous-graphe formé des
  seuls `ProportionNode`.
- **Test** : `tests/test_Verificator.py::test_loop_check_ends_when_the_loop_does_not_return_to_the_start_node`.
  Le test borne le nombre d'appels pour transformer la boucle infinie en échec.

### D07 — La ligne de commande radiative est inutilisable

- **Où** : `carbon_to_radiatif.main`, [carbon_to_radiatif.py:34](../MoSiR/carbon_to_radiatif.py#L34).
- **Symptôme** : `-I "[1,0]"` devient une liste de caractères, et le calcul lève `TypeError`.
- **Cause** : `type=list[float]` appelle `list()` sur la chaîne.
- **Correction proposée** : lire la chaîne comme du JSON. Le code commenté juste en dessous
  (lignes 50-56) visait à faire cette conversion.
- **Test** : `tests/test_Radiatif.py::test_cli_reads_the_emission_series_as_numbers`.

### D08 — Les JSON accentués sont mal lus sous Windows

- **Où** : `JsonData`, [utilities.py:45](../MoSiR/utilities.py#L45).
- **Symptôme** : un JSON enregistré en UTF-8 est lu en cp1252 : « Sciage résineux » devient
  « Sciage rÃ©sineux ». Et le `except:` nu de la ligne 47 transforme toute erreur, y compris une
  erreur de syntaxe JSON, en « chemin invalide ».
- **Correction proposée** : `open(directory, encoding="utf-8")`, et attraper séparément
  `FileNotFoundError` et `json.JSONDecodeError`, avec un message propre à chacune.
- **Test** : `tests/test_Utilities.py::test_jsondata_reads_accented_names_as_utf8`. Il ne porte un
  `xfail` que si l'encodage local n'est pas UTF-8 : il passe donc déjà sur la CI Linux.

### D09 — Des paramètres de dégradation invalides donnent des NaN

- **Où** : `get_decay_input`, [import_info.py:121-133](../MoSiR/import_info.py#L121-L133).
- **Symptôme** : une dégradation `Custom` avec alpha = 0 est acceptée, et tous les stocks du nœud
  valent `NaN` dès l'année 0, sans message.
- **Correction proposée** : refuser alpha ≤ 0 et beta ≤ 0 avec une `DecayError` qui nomme le nœud.
- **Test** : `tests/test_Inputs.py::test_custom_decay_with_zero_alpha_is_rejected`.

### U00 — Un deuxième téléversement efface le premier

- **Où** : [upload/views.py:51](../MoSiR/upload/views.py#L51).
- **Symptôme** : chaque graphe téléversé efface le dossier de **tous** les utilisateurs, avec les
  intrants et les rapports déjà téléversés.
- **Correction proposée** : l'espace de travail de F2, sans aucun effacement implicite.
- **Test** : `tests/test_WebContracts.py::test_second_upload_keeps_the_first`, déjà présent avant
  cette feuille de route.

### U01 — Le formulaire Calculer perd un champ par sortie

- **Où** : [reporting/views.py:405-412](../MoSiR/reporting/views.py#L405-L412).
- **Symptôme** : le premier champ reçu pour une sortie ne sert qu'à créer l'entrée, et sa valeur
  est perdue. Le défaut reste latent tant que la page envoie `Output~…` en premier. Deux sorties de
  même nom se fusionnent aussi sans avertissement.
- **Correction proposée** : créer l'entrée, puis toujours appliquer la valeur. Le formulaire encodé
  dans les noms de champs disparaîtra avec F2.
- **Test** : `tests/test_WebContracts.py::test_report_form_keeps_every_field_whatever_their_order`.

### U02 — Beta n'est pas obligatoire dans le formulaire

- **Où** : [reporting/views.py:145](../MoSiR/reporting/views.py#L145).
- **Symptôme** : l'attribut est écrit `required"` au lieu de `required`. Le navigateur n'exige donc
  pas beta, et un beta vide provoque une erreur 500 au calcul (`float("Personnalisée")`).
- **Test** : `tests/test_WebContracts.py::test_decay_beta_field_is_required`.

### U03 — Une apostrophe dans un nom fait échouer l'import

- **Où** : [upload/views.py:46](../MoSiR/upload/views.py#L46).
- **Symptôme** : chaque `'` est remplacé par `"` avant de lire le JSON. Un nom comme
  « Bois d'oeuvre » rend le fichier illisible, et l'utilisateur obtient une erreur 500.
- **Correction proposée** : lire le JSON tel quel, en UTF-8. La ligne 45 décode aussi avec
  `sys.stdout.encoding`, qui n'est pas fiable dans l'exécutable sans console.
- **Test** : `tests/test_WebContracts.py::test_graph_with_an_apostrophe_in_a_node_name_is_saved`.

### U04 — Un téléversement peut écrire hors du dossier de l'utilisateur

- **Où** : [upload/views.py:73](../MoSiR/upload/views.py#L73).
- **Symptôme** : le fichier est enregistré sous le nom fourni par le client. Un nom comme
  `../x.json` est écrit dans le dossier parent.
- **Correction proposée** : `werkzeug.utils.secure_filename`, puis F2 avec des identifiants de
  fichiers générés par le serveur.
- **Test** : `tests/test_WebContracts.py::test_uploaded_file_cannot_leave_the_user_folder`.

### U05 — Un téléchargement peut lire n'importe quel fichier

- **Où** : [download/views.py:28](../MoSiR/download/views.py#L28).
- **Symptôme** : sous Windows, `/download/graphs_download/C:\…` renvoie n'importe quel fichier
  lisible par le serveur, car un chemin absolu remplace le dossier dans `os.path.join`. Avec CORS
  ouvert à tous (S02), une page web quelconque peut lire la réponse.
- **Correction proposée** : `send_from_directory(dossier_utilisateur, nom)`.
- **Test** : `tests/test_WebContracts.py::test_download_cannot_read_a_file_outside_the_user_folder`.
  Il ne porte un `xfail` que sous Windows.

### Défauts signalés, sans test pour l'instant

Ces défauts n'ont pas encore de test automatique, faute d'outil pour les exercer. Leur test
arrivera avec l'outil indiqué, ou avec la refonte de la page concernée (F2). Les points marqués
« à confirmer » viennent de la lecture du code et n'ont pas été reproduits.

- **JavaScript** ([templates/main.html](../MoSiR/templates/main.html)), sans harnais de test
  navigateur :
  - `checkTypes` s'exécute sur chaque page (ligne 136) et échoue là où il n'y a pas de tableau de
    dégradation (ligne 179, élément absent) ;
  - une quantité à 0 est refusée après que sa période a été enregistrée, d'où un faux « Cette
    période existe déjà » (à confirmer) ;
  - les boutons « Ajouter » sont retirés avant la fin du chargement : si les noms ne correspondent
    pas, rien ne signale l'échec et on ne peut pas réessayer (à confirmer).
- **Graphiques** : les couleurs seaborn (entre 0 et 1) sont écrites en `rgb(0.63, …)`, lu sur
  l'échelle 0-255, ce qui donne des barres presque noires
  ([reporting/views.py:508-519](../MoSiR/reporting/views.py#L508-L519)). Les CSV sont relus avec
  l'encodage par défaut, et les accents des légendes peuvent être corrompus (à confirmer).
- **Visualisation** : le HTML généré est servi par `render_template`, que Jinja garde en cache ; un
  graphe regénéré sous le même nom resterait affiché dans son ancienne version
  ([visualization/views.py:38-41](../MoSiR/visualization/views.py#L38-L41), à confirmer).
- **Générateur Miro** (sans simulateur de l'API Miro) :
  - `raise MESSAGE` lève une chaîne, ce qui produit un `TypeError`
    ([miro_generator.py:172](../MoSiR/mirowrapper/miro_generator.py#L172)) ;
  - `EdgeError()` est appelé sans son message obligatoire
    ([miro_generator.py:268](../MoSiR/mirowrapper/miro_generator.py#L268)).
- **Page Miro** : le bouton « Enregistrer » des clés appelle `saveKeys()`, qui n'est défini nulle
  part ([home.html:53](../MoSiR/mirowrapper/templates/home.html#L53)).

## B. Sécurité

### S01 — Identifiants Miro dans l'historique public

- **Constat** : `MoSiR/mirowrapper/mirowrapper.env` est suivi par git. Les commits 533b22e,
  86397cb, 398949f et aaf7c0b (juillet à septembre 2024) contiennent un identifiant de
  21 caractères et un secret de 34 caractères. Ces commits sont sur `master` et `dev`, dans un
  dépôt public. La version actuelle ne contient que des valeurs vides.
- **À faire, par la personne qui maintient le projet** : régénérer le secret de l'application
  dans les réglages développeur de Miro. Réécrire l'historique n'est pas nécessaire une fois le
  secret changé.
- **Ensuite, dans le code** : retirer `mirowrapper.env` du suivi git (la ligne existe déjà en
  commentaire dans `.gitignore`), et fournir un `mirowrapper.env.example` avec des valeurs vides.

### S02 — Serveur exposé au réseau

L'interface est pensée pour un usage local, mais :

- le serveur écoute sur toutes les interfaces, `0.0.0.0`
  ([MoSiR/MoSiR.py:32](../MoSiR/MoSiR.py#L32)), avec CORS ouvert à toutes les origines
  ([views.py:33](../MoSiR/views.py#L33)) ;
- le nom du dossier de l'utilisateur vient de l'en-tête `X-Forwarded-For`, que le client choisit
  ([blueprint_component.py:80-81](../MoSiR/blueprint_component.py#L80-L81)) ;
- `/shutdown` répond à un simple `GET`, que n'importe quelle page peut déclencher
  ([views.py:119](../MoSiR/views.py#L119)) ;
- les clés Miro se modifient sans authentification, et le secret est réaffiché dans la page
  (`mirowrapper/views.py:76-104`) ;
- les noms fournis par l'utilisateur sont insérés dans le HTML sans échappement.

**Correction proposée** : écouter sur `127.0.0.1`, retirer CORS, lire l'adresse du client dans
`request.remote_addr`, passer `/shutdown` en `POST`, et échapper par Jinja. Les règles pour le code
nouveau sont dans [CodingStandards.md](CodingStandards.md#code-de-linterface-web). U04 et U05 font
partie de ce chantier.

## C. Questions métier à trancher

Ce ne sont pas des bugs tant que la décision n'est pas prise. Une fois tranchée, la décision est
écrite ici, et un test la fige.

- **Q1 — Facteur du CO.** Le forçage radiatif multiplie le carbone du CO par 2,6666, soit 32/12
  ([carbon_to_radiatif.py:92](../MoSiR/carbon_to_radiatif.py#L92)). Les tCO2eq utilisent 2,3333,
  soit 28/12, le rapport de masse CO/C
  ([reporting_info.py:186](../MoSiR/reporting_info.py#L186)). La valeur 2,6666 est figée dans les
  tests : `MASSE` dans `tests/test_Radiatif.py` et `rad_dict` dans `tests/conftest.py`. Par
  ailleurs, les « tCO2eq » du CO ne sont que la masse de CO, sans PRG ni oxydation en CO2.
- **Q2 — « Stock » et « Cumulative ».** Un stock cumulé n'a pas de sens défini. Le
  `RecyclingNode` renvoie alors l'entrée cumulée ([nodes.py:500-501](../MoSiR/graph_generator/nodes.py#L500-L501)),
  tandis que `DecayNode` et `PoolNode` ignorent l'option. Faut-il refuser la combinaison ?
- **Q3 — Étalement de la loi Gamma.** Beta est fixé à 1 pour Gamma et à 2 pour Chi-square
  ([gamma_function.py:16-21](../MoSiR/gamma_function.py#L16-L21)). L'écart-type d'une Gamma vaut
  donc environ √(demi-vie) : 10 ans pour une demi-vie de 100 ans. L'étalement devrait-il être un
  paramètre ?
- **Q4 — Demi-vies courtes.** Les bornes de l'optimiseur
  ([gamma_function.py:62-67](../MoSiR/gamma_function.py#L62-L67)) font échouer Gamma et Chi-square
  pour une demi-vie de 0,5 an. Quelles demi-vies faut-il accepter ?
- **Q5 — Convention radiative.** Une émission de l'année j reçoit le facteur DynCO2 de l'« année 1 »
  dès l'année j. Les facteurs s'arrêtent à 2000 ans, ce qui tronque silencieusement un horizon plus
  long. Est-ce la convention voulue ?
- **Q6 — Reconnaissance des gaz.** Le gaz est reconnu par une sous-chaîne en majuscules dans le nom
  du nœud : « CO » est reconnu dans tout nom qui contient ces lettres, s'il ne contient pas « CO2 ».
  Faut-il un attribut explicite de gaz sur le nœud ?
- **Q7 — Liens overflow.** Seul le vérificateur les distingue ; le calcul ajoute leur carbone en
  plus des 100 %. Il faut écrire noir sur blanc leur sens (facteur d'émission ou flux ?) et les cas
  permis.

## D. Développements

Par ordre de priorité. Chaque développement indique l'issue GitHub, l'état actuel, l'approche
recommandée, les prérequis et la façon de mesurer le succès
([fiche d'amélioration](CodingStandards.md#fiche-damélioration)).

### F1 — Stabiliser le calcul pour les lots

- **Pourquoi** : les lots, Monte Carlo et la nouvelle interface vont appeler le calcul autrement
  qu'aujourd'hui : beaucoup de runs, et des requêtes dans un autre ordre. Aujourd'hui, seul
  l'usage du rapport est sûr.
- **Contenu** :
  - corriger D01 à D04 ;
  - ajouter `simulate()` et `write_results()` ([Architecture](Architecture.md#calcul)), avec
    vérification du graphe intégrée ;
  - faire en sorte que `MoSiR/__init__.py` ne charge plus le web.
- **Mesure du succès** :
  - les tests de D01 à D04 passent sans `xfail` ;
  - la caractérisation et le banc d'essai sont inchangés ;
  - le temps du banc d'essai est comparé avant et après ;
  - `import MoSiR.mosir_calculator` ne charge plus Flask (vérifiable dans `sys.modules`).

### F2 — Refonte de l'interface

- **Issues** : [#45](https://github.com/Bureau-du-Forestier-en-chef/MoSiR/issues/45) (plus d'un
  graphe), [#46](https://github.com/Bureau-du-Forestier-en-chef/MoSiR/issues/46) (plusieurs
  imports à la fois), [#36](https://github.com/Bureau-du-Forestier-en-chef/MoSiR/issues/36)
  (onglet import), [#37](https://github.com/Bureau-du-Forestier-en-chef/MoSiR/issues/37)
  (supprimer des imports), [#35](https://github.com/Bureau-du-Forestier-en-chef/MoSiR/issues/35)
  (intrants en tableau), [#43](https://github.com/Bureau-du-Forestier-en-chef/MoSiR/issues/43)
  (langue).
- **Aujourd'hui** : un fichier par téléversement, un seul run à la fois, un état fragile
  ([Architecture](Architecture.md#pourquoi-elle-casse-facilement)). Lancer 8 graphes avec 3
  fichiers d'intrants demande 24 runs manuels, ou le script `mosir_calculator_loop.py` hors
  interface.
- **Cible** : Flask restructuré en couches calcul, service et web
  ([Architecture](Architecture.md#architecture-cible)).
- **Prérequis** : F1.
- **Lots** (l'application reste utilisable après chacun) :
  1. **Service** : `Workspace`, `RunSpec`, `RunPlan`, `run_batch` avec son manifeste, et une ligne
     de commande de lot. Tests sans le web. La règle de correspondance des noms de graphes est à
     trancher ici ([Architecture](Architecture.md#service)).
  2. **Page Importer** : plusieurs fichiers à la fois (#46), message de confirmation et retour à
     la page (#36), suppression (#37), aucun effacement implicite (U00). Corrige U03 et U04.
  3. **Page Plan de runs** : choix des graphes, des intrants et des rapports, aperçu des
     combinaisons, lancement, suivi.
  4. **Page Résultats** : par run, téléchargement en archive, comparaison de runs.
  5. **Intrants en tableau** : import CSV ou Excel (#35), converti en fichier d'intrants.
  6. **Langue de l'interface** (#43) : les libellés dans les gabarits, des codes dans les
     échanges.
  7. **Retrait de l'ancien code** : HTML en chaînes, formulaire encodé dans les noms de champs,
     page `stats`. U01 et U02 disparaissent avec lui.
- **Suivi** : `Documentation/ETAT_interface.md`, créé au premier lot.
- **Mesure du succès** :
  - nombre d'actions pour 8 graphes × 3 intrants (24 runs manuels aujourd'hui) ;
  - chaque route testée avec le client Flask ;
  - aucun effacement implicite ;
  - temps d'un lot comparé à la somme des runs individuels.

### F3 — Recyclage paramétrable

- **Issue** : [#3](https://github.com/Bureau-du-Forestier-en-chef/MoSiR/issues/3) (choisir quand la
  matière recyclée revient dans le réseau).
- **Aujourd'hui** : le délai d'un an est codé en dur
  ([nodes.py:490](../MoSiR/graph_generator/nodes.py#L490)). Le **taux** de recyclage peut déjà
  varier dans le temps, par des proportions en liste ou en dictionnaire.
- **Proposition** :
  - un délai entier, au moins 1, par `RecyclingNode`, donné dans `Inputs.json` à côté de `Decay`
    (par exemple `"Recycling": {"<graphe>": {"<nœud>": {"Delay": 3}}}`) ;
  - 1 par défaut, pour que les fichiers existants donnent les mêmes résultats ;
  - un délai de 0 refusé, car il créerait une boucle instantanée.
- **Variante à évaluer ensuite** : un délai distribué, où une part revient après 1 an et une autre
  après 2 ans. C'est déjà possible en plaçant un `DecayNode` à courte demi-vie devant le
  `RecyclingNode` (une fois D01 corrigé, pour les boucles sans autre délai).
- **Tests** : délai de 1 identique à aujourd'hui (caractérisation), bilan de masse avec un délai
  de 3, refus d'un délai de 0.
- **Mesure du succès** : résultats identiques par défaut, et temps du banc d'essai inchangé.

### F4 — Classes de DHP

- **Question** : pour tenir compte du diamètre à hauteur de poitrine (DHP), faut-il un graphe par
  classe, ou un nœud qui modifie les pourcentages en aval ?
- **Élément clé** : le modèle est linéaire ([Architecture](Architecture.md#le-modèle-en-bref)).
  Calculer un graphe par classe, puis additionner les résultats, donne **exactement** le même
  résultat qu'un graphe unique qui tiendrait compte des classes.
- **Options** :

| Option | Principe | Changement au calcul | Coût |
| --- | --- | --- | --- |
| A | Un graphe par classe, puis une somme faite par le service de lots (F2) | Aucun | N graphes à maintenir, idéalement générés à partir d'un gabarit ; N fois le calcul ; `Combined` ne somme pas d'un graphe à l'autre |
| A′ | Si le DHP ne change que le premier partage après la récolte, un seul graphe avec des proportions pondérées : p(t) = Σ w_c(t) · p_c, où w_c(t) est la part de la classe c dans la récolte de l'année t | Aucun (prétraitement des proportions) | Exact seulement dans ce cas |
| B | Des branches par classe dans un même graphe, qui rejoignent ensuite les mêmes produits | Aucun | Le graphe grossit |
| C | Un nœud « DHP » qui calcule ses proportions sortantes à partir de la répartition des classes donnée dans les intrants | Oui : c'est l'enfant qui lit la proportion du lien ([nodes.py:289](../MoSiR/graph_generator/nodes.py#L289)), il faudrait la demander au parent ; nouveau type de nœud dans `GraphFactory`, format de `Values` par classe, vérification des 100 % par classe, convention dans Miro | Le plus élevé |

- **Recommandation** :
  - commencer par A, ou A′ si le cas s'y prête : c'est exact et sans risque pour le calcul ;
  - ne passer à C que si le nombre de graphes devient ingérable (essence × région × DHP ; il y a
    déjà 8 graphes essence × région dans `MoSiR_others/graph`) ;
  - décider sur un cas réel.

### F5 — Monte Carlo

- **Issue** : [#39](https://github.com/Bureau-du-Forestier-en-chef/MoSiR/issues/39), qui renvoie à
  la section 6.2 de la documentation HWP-vR.
- **Prérequis** : F1, et un générateur aléatoire avec graine
  ([règle](CodingStandards.md#calcul-numérique)).
- **Paramètres incertains possibles** : demi-vies, alpha et beta, proportions (tirées par une loi de
  Dirichlet pour que la somme reste 1), intrants, PRG, facteurs d'émission des liens overflow.
- **Sorties** : par année et par sortie, les quantiles (P5, P50, P95) et la moyenne. La graine et le
  nombre de tirages vont dans le manifeste du run.
- **Coût** :
  - environ 20 ms par tirage pour l'exemple (T = 100, lecture et écriture comprises, mesuré le
    2026-09-25) ;
  - 1,6 s à 4,8 s pour le banc d'essai (105 nœuds, T = 1000) selon le poste, donc 1000 tirages
    prennent 27 à 80 minutes sur un cœur. D'où un processus par tirage, avec des graphes neufs.
  - Si seuls les intrants sont incertains, la linéarité permet de calculer une fois la réponse à
    chaque intrant, puis de combiner les tirages presque sans coût.
- **Mesure du succès** : temps par tirage, et stabilité des quantiles quand on double le nombre de
  tirages.

### F6 — Origine des émissions

- **Issue** : [#11](https://github.com/Bureau-du-Forestier-en-chef/MoSiR/issues/11) (quelles
  émissions viennent du sciage, par exemple ?).
- **Aujourd'hui** : l'utilisateur extrait à la main les flux entrant dans le nœud, puis relance
  MoSiR sur la partie du graphe en aval, avec ces flux comme intrants.
- **Approche** : automatiser ce procédé dans le service. La linéarité le rend exact. Attention aux
  boucles de recyclage qui repassent par le nœud : il ne faut compter que la matière qui y entre
  pour la première fois, sinon elle est comptée deux fois.

### F7 — Performance

- **Issue** : [#20](https://github.com/Bureau-du-Forestier-en-chef/MoSiR/issues/20).
- **Aujourd'hui** : « Faster run » a rendu le calcul 20 fois plus rapide sur le banc d'essai, de
  100,3 s à 4,8 s sur le même poste ([RESULTS.md](../tests/benchmark/RESULTS.md)).
- **Quand** : seulement devant un besoin mesuré (Monte Carlo, gros lots).
- **Pistes** :
  - calculer par balayage des années, dans l'ordre topologique, plutôt que par récursion (règle
    aussi D04) ;
  - des vecteurs numpy par nœud ;
  - la recherche linéaire des intrants dans `TopNode`
    ([nodes.py:184-210](../MoSiR/graph_generator/nodes.py#L184-L210)) et des clés de proportions
    ([nodes.py:55](../MoSiR/graph_generator/nodes.py#L55)).
- Toute piste passe par la fiche d'amélioration et le
  [seuil de lisibilité](CodingStandards.md#optimisation-et-lisibilité).

### F8 — Miro

- [#32](https://github.com/Bureau-du-Forestier-en-chef/MoSiR/issues/32) : migrer les fonctions
  restantes de l'API v1 de Miro vers la v2.
- [#52](https://github.com/Bureau-du-Forestier-en-chef/MoSiR/issues/52) : nom des graphes importés
  depuis Miro.
- La liste des tableaux est lue en une seule requête, sans pagination, et indexée par nom
  ([mirowrapper/views.py:148-158](../MoSiR/mirowrapper/views.py#L148-L158)). Des tableaux de même
  nom se confondent, et au-delà de la première page, ils manqueraient (à confirmer).
- On ne peut choisir qu'un seul tableau (bouton radio dans `board_selection.html`), alors que le
  code en gère plusieurs.
- Plus tard (wiki) : d'autres tableaux blancs, comme ceux de Teams, pour ne pas dépendre de Miro.

### F9 — Long terme

Ces idées viennent de la page « Développements futurs » du wiki :

- d'autres gaz à effet de serre ;
- l'optimisation par programmation linéaire, pour trouver les flux qui atteignent une cible
  d'émissions.

## E. Dette et nettoyage

De petits chantiers indépendants, à faire à l'occasion d'un changement voisin ou dans un lot de
nettoyage, jamais au milieu d'un autre changement.

- **E01** : `MoSiR/__init__.py` importe le web ; tout usage du calcul charge Flask, pyvis et la
  configuration Miro (traité par F1).
- **E02** : `run_calculator` ne vérifie pas le graphe ; seule l'interface appelle
  `graph_verificator.main` (traité par F1).
- **E03** : pas d'exception de base commune dans `mosir_exceptions.py`. Il reste 7 `except:` nus,
  dans `import_info.py` (lignes 50, 74, 104, 117), `utilities.py` (47), `nodes.py` (57) et
  `miro_generator.py` (173).
- **E04** : les messages d'erreur écrits en f-strings continuées par `\` contiennent des séries
  d'espaces ([règle](CodingStandards.md#erreurs)).
- **E05** : docstrings incomplètes.
  - `_description_` et `_type_` restés dans `nodes.py`, `networkx_graph.py`,
    `mosir_calculator.py` et `gamma_function.py`.
  - Les docstrings de `get_predecessors` et `get_successors` sont inversées : la première dit
    « enfants », la seconde « parents »
    ([networkx_graph.py:123-152](../MoSiR/networkx_graph.py#L123-L152)).
  - Celle de `DecayNode` décrit un argument `HalfLife` qui n'existe pas.
- **E06** : code mort.
  - Vérifications 06 et 18, qui ne peuvent jamais échouer.
  - `import_info.py:88-92`, inatteignable.
  - La page `stats` et `Generator.get_graph_stats`, qui plante aussi sur les proportions en
    dictionnaire.
  - `__success_upload` dans `upload/views.py`.
  - Blocs en commentaire dans `reporting_info.py:200-208` et `carbon_to_radiatif.py:50-56`.
  - `MoSiR/__init__.pyc`, suivi par git.
- **E07** : noms à corriger en temps voulu, par des renommages à part.
  - La fixture `MOSIR_TOLERENCE`.
  - La numérotation `debugg_graph_NN`.
  - Les propriétés nommées `get_*`.
  - Les classes `Jsonparser`, `Dictgenerator`, `Miroerror`.
- **E08** : le chemin `License-Filename` des en-têtes (`LICENSES/EN/LiLiQ-R11unicode.txt`) n'existe
  pas. Les fichiers réels sont `LICENSES/EN/LILIQ-R11ENunicode.txt` et
  `LICENSES/FR/LiLiQ-R11unicode.txt`.
- **E09** : construction de l'exécutable.
  - `MoSiR.py` à la racine n'est pas suivi par git, mais `Nuitka_wrapper.bat` et `launch.json` en
    ont besoin.
  - `conda activate` est appelé sans `CALL` dans le `.bat`.
  - nuitka n'est pas dans `environment.yml`.
  - La version 1.1.0 est codée en dur dans le `.bat`.
- **E10** : dépôt.
  - `tests/test_calculator.py` est en minuscules dans git mais pas sur le disque.
  - Il n'y a pas de `.gitattributes`, d'où des fins de ligne mixtes.
  - La ligne `MoSiR.py` du `.gitignore` n'est pas ancrée (`/MoSiR.py`).
  - `.vs ` a un espace final dans le `.gitignore`.
- **E11** : port, hôte et adresse codés en dur dans `MoSiR/MoSiR.py:30-33`. Les liens de la barre
  latérale en tirent une adresse fixe, `http://localhost:3000`
  ([views.py:43](../MoSiR/views.py#L43), [108](../MoSiR/views.py#L108)) : ils ne fonctionnent pas
  si l'interface est ouverte depuis un autre poste.
- **E12** : les chemins de sortie sont construits par concaténation, et un dossier vide lève
  `IndexError` ([reporting_info.py:217-229](../MoSiR/reporting_info.py#L217-L229)). Utiliser
  `os.path.join`.
- **E13** : le badge des README annonce « N passed », alors que N compte tous les tests collectés,
  `xfail` et ignorés compris ([tests/coverage_docs.py:119-123](../tests/coverage_docs.py#L119-L123)).
- **E14** : le CHANGELOG v2.0 affirme que l'accélération donne des « résultats identiques ». Il
  faudra une entrée « Corrections » au moment de corriger D01 et D02.
