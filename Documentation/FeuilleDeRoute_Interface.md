# Feuille de route de l'interface

L'interface web de MoSiR : pages, sécurité du serveur, éditeur de graphe, page de forage, Miro,
exécutables. Le mode d'emploi, l'ordre global et l'index de toutes les entrées sont dans
l'[index de la feuille de route](FeuilleDeRoute.md). Le calcul a sa propre
[feuille de route](FeuilleDeRoute_Calcul.md).

## A. Défauts confirmés

Les défauts U00 à U05 ont été reproduits le 2026-09-25 par leur test. U06 a été reproduit le
2026-10-29 : ses tests existent déjà et échouent sous Linux, d'où la CI rouge.

| ID | Gravité | Défaut | Statut |
| --- | --- | --- | --- |
| [U06](#u06--la-lecture-des-json-par-chemin-absolu-est-cassée-hors-windows) | Haute | La lecture des JSON par chemin absolu est cassée hors Windows, et la CI est rouge | Ouvert |
| [U00](#u00--un-deuxième-téléversement-efface-le-premier) | Haute | Un deuxième téléversement efface le premier | Ouvert |
| [U01](#u01--le-formulaire-calculer-perd-un-champ-par-sortie) | Basse | Le formulaire « Calculer » perd un champ par sortie | Ouvert, latent |
| [U02](#u02--beta-nest-pas-obligatoire-dans-le-formulaire) | Moyenne | Beta n'est pas obligatoire dans le formulaire | Ouvert |
| [U03](#u03--une-apostrophe-dans-un-nom-fait-échouer-limport) | Moyenne | Une apostrophe dans un nom fait échouer l'import | Ouvert |
| [U04](#u04--un-téléversement-peut-écrire-hors-du-dossier-de-lutilisateur) | Haute | Un téléversement peut écrire hors du dossier de l'utilisateur | Ouvert |
| [U05](#u05--un-téléchargement-peut-lire-nimporte-quel-fichier) | Haute | Un téléchargement peut lire n'importe quel fichier (Windows) | Ouvert |

### U06 : La lecture des JSON par chemin absolu est cassée hors Windows

- **Où** : `Jsonparser.read`, [utilities.py:59-62](../MoSiR/utilities.py#L59-L62), appelé par
  [blueprint_component.py](../MoSiR/blueprint_component.py) (lignes 106, 123, 134, 146 et 159),
  [reporting/views.py](../MoSiR/reporting/views.py) (lignes 459, 540 et 555),
  `visualization/animator.py` (ligne 19) et `mirowrapper/miro_generator.py` (ligne 14).
- **Symptôme** : sous Linux et macOS, `Jsonparser.read('/tmp/x.json')` cherche
  `<paquet>/tmp/x.json`. L'interface ne trouve plus aucun fichier téléversé. Six tests de
  `tests/test_WebComponent.py` échouent, et la CI de `dev` est rouge depuis le commit 02e7c4b
  (« new test interface », 30 juillet 2026).
- **Cause** : `pkgutil.get_data` lit une ressource du paquet par un chemin relatif. Il rattache tout
  chemin au dossier du paquet. Sous Windows, un chemin `C:\...` ne contient pas de `/` et
  `os.path.join` le garde tel quel, d'où un fonctionnement normal sur le poste de développement.
- **Correction proposée** : lire les fichiers avec `open(path, encoding="utf-8")`, en s'appuyant sur
  `JsonData` du même fichier, et réserver `pkgutil` ou `importlib.resources` aux ressources internes
  du paquet. Corrige aussi D08 pour ces appels.
- **Test** : les six tests existants de `tests/test_WebComponent.py` cités plus haut. Ils ne
  portent pas de `xfail`, d'où la CI rouge.
- **Option en attendant la correction** : les marquer `xfail(strict=True, raises=FileNotFoundError)`
  seulement hors Windows, ce qui remet la CI au vert sans masquer le défaut sous Windows, où ils
  restent des tests normaux. Un code proposé, vérifié le 2026-10-29, est joint à l'issue.

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

## C. Décisions du calcul à reporter dans l'interface

Les questions métier sont tranchées dans la
[feuille de route du calcul](FeuilleDeRoute_Calcul.md#b-questions-métier-tranchées). Trois décisions
demandent aussi un changement de l'interface :

- **Q2** : la page Calculer grise « Cumulatif » quand « Stock » est sélectionné.
- **Q4** : une demi-vie refusée affiche un message clair qui nomme le nœud, au lieu d'une erreur 500.
- **Q6** : l'attribut `Gas` d'un nœud se règle dans l'éditeur (F10).

## D. Développements de l'interface

Par ordre de priorité. Chaque développement indique l'issue GitHub, l'état actuel, l'approche
recommandée, les prérequis et la façon de mesurer le succès
([fiche d'amélioration](CodingStandards.md#fiche-damélioration)).

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
- **Ajouts (2026-10-29)** :
  - lot 1 : les données de l'utilisateur vont dans un dossier qui lui est propre
    (`%APPDATA%\MoSiR` sous Windows, `~/Library/Application Support/MoSiR` sous macOS) au lieu de
    `MoSiR/uploads/`. C'est un prérequis de F12, et ça évite d'écrire dans le dossier du programme.
  - toute nouvelle page (F10, F11) écrit ses libellés hors du code dès sa création, pour ne pas
    traduire deux fois (#43).
  - la page Visualiser est remplacée par la page de forage (F11), ce qui retire pyvis. Attention :
    sans pyvis, la limite de récursion redescend à 1000 et D04 apparaît vers 250 ans. F1 doit donc
    passer avant.

### F10 : Éditeur de graphe

- **Pourquoi** : ne plus dépendre de Miro (compte, clés, API v1, secret S01), et supprimer
  l'interprétation des formes et des couleurs par `miro_generator.py`, source d'erreurs.
- **Principe** : un tableau spécialisé dans l'interface. Chaque élément est déjà un objet MoSiR :
  il n'y a rien à interpréter, ce qu'on voit est le JSON. L'enregistrement produit un `Graph.json`
  avec `X` et `Y`, lisible par le calcul comme aujourd'hui.
- **Fonctions** :
  - créer un nœud, le déplacer, le renommer dans le cercle.
  - tracer un lien d'un nœud à l'autre et saisir sa proportion sur le lien, y compris une liste ou
    des années (`0: 75%, 20: 25%`).
  - `Decay`, `Recycling` et `Overflow` par case à cocher ou clic droit, avec les repères visuels de
    Miro : contour pointillé, remplissage vert, flèche verte. Attribut `Gas` (Q6).
  - sélection multiple, copier et coller, annuler et rétablir, zoom.
  - disposition automatique quand `X` et `Y` manquent, y compris à l'import d'un fichier venu
    d'ailleurs. Les coordonnées sont alors enregistrées : tout graphe de l'espace de travail a les
    siennes.
  - validation en direct par `graph_verificator`, avec l'erreur affichée sur le nœud concerné. Ça
    demande des erreurs qui portent l'identifiant du nœud, pas seulement un texte (E03).
  - annotations ignorées par le calcul : notes de texte et cadres de regroupement. Les cadres
    remplacent les rectangles de ventilation de Miro.
- **Hors périmètre** : la collaboration en temps réel (on partage des fichiers, une personne
  construit et les autres relisent) et le dessin libre.
- **Technique** : Cytoscape.js (licence MIT), avec ses extensions de tracé de liens et de
  disposition (dagre ou elk). JavaScript simple dans `static/js`, fichiers fournis avec MoSiR et non
  chargés depuis un CDN, sans étape de compilation. Libellés hors du code (#43).
- **Compatibilité** : un `Graph.json` venu de Miro s'ouvre avec sa mise en page. Le format ne change
  pas, à part l'attribut `Gas` facultatif.
- **Prérequis** : F2 lot 1 (`Workspace`).
- **Suite** : retrait de Miro (F8) une fois l'éditeur adopté.
- **Mesure du succès** :
  - SEPM Nord s'ouvre, se modifie et s'enregistre, et le calcul donne les mêmes résultats.
  - temps pour construire un graphe de 20 nœuds, comparé à Miro.
  - chaque route testée avec le client Flask.

### F11 : Page de forage

- **Pourquoi** : voir et comprendre un graphe de façon ergonomique, pour n'importe quelle
  architecture. Reprend le travail fait pour SEPM Nord avec `miro_json_to_image.py` (page HTML,
  schéma, Sankey), qui ne fonctionne que pour ce cas. Le calcul est F13.
- **Vues** : schéma et Sankey, en français et en anglais, recherche, fiche de nœud, filtres, mode
  chemin, mini-carte. En plus : les séries dans le temps d'un nœud (flux entrant, flux sortant,
  stock), et un Sankey pour une année ou une période choisie.
- **Fichier de lecture** (nouveau type de fichier, par exemple `Lecture.json`) :
  - filières (nom, couleur, nœud ou nœuds de départ), exutoires, bandes du dessin, libellés
    français et anglais, noms des répartitions.
  - indexé par nom de nœud, comme `Inputs.json`. Un nom inconnu est signalé.
  - créé dans la page (sélectionner un nœud, puis « Créer une filière à partir de ce nœud »),
    enregistré dans l'espace de travail et rechargeable. Un même graphe peut avoir plusieurs
    lectures.
  - sans fichier de lecture, la page fonctionne en mode simple : flux, destinations, routes,
    Sankey.
  - `Graph.json` reste le graphe de calcul, sans données de présentation.
- **Intrants** :
  - forage temporaire : quantités saisies dans la page, 100 par défaut sur chaque nœud d'entrée,
    rien n'est enregistré. C'est une exception voulue à la règle « tout run part de fichiers », à
    écrire dans `Architecture.md`.
  - vraies données : un `Inputs.json` de l'espace de travail, le résultat est rattaché au run.
  - dans les deux cas : tous les intrants, ou un pulse (année X suivie N années).
- **Dégradation, dans le forage seulement** : les paramètres du fichier sont chargés par défaut,
  modifiables dans la page, ou saisis s'il n'y en a pas. Une valeur modifiée est marquée, avec un
  bouton pour revenir à celle du fichier. La page peut superposer le résultat du fichier et celui
  des paramètres modifiés. La page Calculer, les fichiers et les runs ne sont jamais modifiés. Sans
  paramètres et avec des proportions variables, le calcul se fait à une année de référence choisie
  et affichée.
- **Traçabilité** : l'export d'un forage temporaire ou modifié porte en clair les quantités et les
  paramètres utilisés.
- **Exports** : SVG, PDF par l'impression du navigateur, et page autonome à partager avec quelqu'un
  qui n'a pas MoSiR.
- **Dépendances** : aucune nouvelle dépendance Python. Le texte est mesuré avec une table de
  largeurs fournie avec MoSiR au lieu de Pillow (Arial et Liberation Sans ont les mêmes largeurs de
  caractères). cairosvg n'est pas utilisé : les mini-cartes sont dessinées par le navigateur et les
  PDF passent par l'impression. La page remplace Visualiser et pyvis (voir F2).
- **Prérequis** : F1, F2 lot 1, F13, Q2, Q6, Q7.
- **Points à trancher** : les routes avec des proportions variables (voir F13), l'horizon par
  défaut.
- **Mesure du succès** :
  - chaque graphe du générateur de graphes aléatoires s'ouvre sans erreur.
  - SEPM Nord : mêmes chiffres que le script actuel, rendu comparable.
  - aucune dépendance native.

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
- **Mise à jour (2026-10-29)** : Miro est remplacé à terme par l'éditeur (F10). On garde l'import
  Miro pendant la transition, sans nouveau développement, puis on retire `mirowrapper` une fois
  l'éditeur adopté. Les issues #32 et #52 se ferment au retrait. S01 reste à faire dès maintenant,
  puisque le secret est dans l'historique public.

### F12 : Exécutables Windows et macOS

- **Priorité** : basse, à faire seulement si c'est simple.
- **Principe** : Nuitka ne construit pas d'un système vers l'autre. La CI construit un exécutable
  sur un runner Windows et une application `.app` sur un runner macOS, et publie les deux dans les
  Releases à chaque version. Apple Silicon d'abord, Intel seulement si le parc en compte encore.
- **Prérequis** : U06, le dossier de données utilisateur (F2 lot 1) et E15. Sous macOS, une
  application téléchargée et non signée est lancée depuis un emplacement en lecture seule (App
  Translocation) : MoSiR ne peut pas y écrire ses données.
- **Concession** : sans signature Apple, l'utilisateur doit autoriser l'application une fois dans
  Réglages Système, section Confidentialité et sécurité. La signature demande un compte du
  programme développeur d'Apple (environ 99 $ US par an, et un numéro D-U-N-S pour une
  organisation). C'est une décision administrative. Sous Windows, l'avertissement SmartScreen est
  déjà documenté dans le wiki.
- **Remplace** la construction manuelle par `Nuitka_wrapper.bat` (E09).

## E. Dette de l'interface

De petits chantiers indépendants, à faire à l'occasion d'un changement voisin ou dans un lot de
nettoyage, jamais au milieu d'un autre changement.

- **E09** : construction de l'exécutable.
  - `MoSiR.py` à la racine n'est pas suivi par git, mais `Nuitka_wrapper.bat` et `launch.json` en
    ont besoin.
  - `conda activate` est appelé sans `CALL` dans le `.bat`.
  - nuitka n'est pas dans `environment.yml`.
  - La version 1.1.0 est codée en dur dans le `.bat`.
- **E11** : port, hôte et adresse codés en dur dans `MoSiR/MoSiR.py:30-33`. Les liens de la barre
  latérale en tirent une adresse fixe, `http://localhost:3000`
  ([views.py:43](../MoSiR/views.py#L43), [108](../MoSiR/views.py#L108)) : ils ne fonctionnent pas
  si l'interface est ouverte depuis un autre poste.
