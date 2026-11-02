# Feuille de route du calcul

Le cœur de MoSiR : calcul, lecture des fichiers, vérificateur, radiatif, ligne de commande, paquet
Python, analyses du forage. Le mode d'emploi, l'ordre global et l'index de toutes les entrées sont
dans l'[index de la feuille de route](FeuilleDeRoute.md). L'interface a sa propre
[feuille de route](FeuilleDeRoute_Interface.md).

## A. Défauts confirmés

Les défauts D01 à D09 ont été reproduits le 2026-09-25 par leur test. D10, D11 et D12 ont été
reproduits le 2026-10-29 par un script : leur test est décrit dans l'entrée et reste à écrire.

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
| [D10](#d10--un-nœud-isolé-produit-une-erreur-de-bilan-de-masse-trompeuse) | Moyenne | Un nœud isolé produit une erreur de bilan de masse trompeuse | Ouvert, test à écrire |
| [D11](#d11--des-fichiers-dentrée-mal-remplis-donnent-des-erreurs-python-brutes) | Basse | Des fichiers d'entrée mal remplis donnent des erreurs Python brutes | Ouvert, test à écrire |
| [D12](#d12--les-paramètres-dun-nœud-dont-le-nom-a-des-espaces-en-trop-ne-sont-pas-appliqués) | Haute | Les paramètres d'un nœud dont le nom a des espaces en trop ne sont pas appliqués | Ouvert, test à écrire |

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
- **Complément (2026-10-29)** : le même décalage peut aussi faire **disparaître** du carbone, et il
  touche les flux entrants, pas seulement le stock. Sur un graphe tiré du générateur de graphes
  aléatoires (graine 387), demander le flux entrant de N2 à l'année 4, puis celui du `DecayNode` N3
  à l'année 9, donne 0 au lieu de 0,132. Seules les requêtes qui sautent des années sont touchées :
  sur 296 graphes aléatoires, les quatre ordres systématiques testés (par nœud ou par année, dans un
  sens ou dans l'autre) donnent tous les bons résultats.
- **Test à écrire** : `tests/test_calculator.py::test_decay_inflow_does_not_vanish_after_a_query_that_skips_years`,
  en `xfail(strict=True)` à côté du test de D02. Sur le graphe de la graine 387, le flux entrant de N3
  à l'année 9 doit valoir 0,132, que N2 ait été interrogé avant ou non. Un code proposé, vérifié le 2026-10-29, est joint à l'issue.

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

### D10 : Un nœud isolé produit une erreur de bilan de masse trompeuse

- **Où** : `debugg_graph_04`, [graph_verificator.py:237](../MoSiR/graph_verificator.py#L237), appelé
  avant `debugg_graph_07` ([graph_verificator.py:36-39](../MoSiR/graph_verificator.py#L36-L39)).
- **Symptôme** : un nœud sans aucun lien, par exemple un cercle oublié sur le tableau, donne « La
  quantité totale en intrant (200) au temps 0 n'est pas égale au total présent dans le système
  (100.0) ». L'utilisateur n'a saisi ni 200 ni 100 : ce sont les intrants fictifs de la
  vérification 04. Le nœud fautif n'est pas nommé.
- **Cause** : `GraphFactory` classe le nœud isolé comme `TopNode`. La vérification 04 lui donne
  100 unités par an qui ne vont nulle part. La vérification 07, qui signale les `TopNode` sans lien
  sortant, ne passe qu'après.
- **Correction proposée** : une vérification des nœuds sans aucun lien, avant le bilan de masse, qui
  lève une `NodeError` en les nommant.
- **Test à écrire** : `tests/test_Verificator.py::test_isolated_node_is_rejected_by_name`, en
  `xfail(strict=True, raises=QuantityError)`. `graph_verificator.main` doit lever une `NodeError` qui
  contient le nom du nœud isolé. Un code proposé, vérifié le 2026-10-29, est joint à l'issue.

### D11 : Des fichiers d'entrée mal remplis donnent des erreurs Python brutes

- **Où et symptômes** :
  - un PRG manquant pour un gaz utilisé en tCO2eq donne `KeyError: 'CH4'`
    ([reporting_info.py:182](../MoSiR/reporting_info.py#L182) et
    [184](../MoSiR/reporting_info.py#L184)). `validate_PRG` contrôle les valeurs présentes, pas
    les gaz absents.
  - une année non entière dans les intrants, par exemple `"1.5"`, donne
    `ValueError: invalid literal for int()` sans contexte
    ([import_info.py:82](../MoSiR/import_info.py#L82)).
  - un intrant négatif ou écrit en texte donne « Input value must be a list of non-negative
    numbers », sans nœud, sans année et sans valeur
    ([nodes.py:182](../MoSiR/graph_generator/nodes.py#L182)).
- **Correction proposée** : valider dans `ReportData` que chaque gaz utilisé en tCO2eq a son PRG,
  et valider les intrants dans `ImportData`. Chaque cas lève une exception de MoSiR dont le
  message, en français, nomme le nœud, l'année ou le gaz fautif.
- **Tests à écrire**, en `xfail(strict=True)` :
  - `tests/test_Report.py::test_missing_prg_for_a_used_gas_is_rejected_by_name` : `InvalidOption`
    qui contient « CH4 » (aujourd'hui `KeyError`).
  - `tests/test_Inputs.py::test_non_integer_input_year_is_rejected_by_name` : `InvalidOption` qui
    nomme le nœud (aujourd'hui `ValueError`).
  - `tests/test_Inputs.py::test_negative_input_is_rejected_with_node_year_and_value` :
    `QuantityError` qui nomme le nœud et la valeur (aujourd'hui `ValueError`).
- Un code proposé, vérifié le 2026-10-29, est joint à l'issue.

### D12 : Les paramètres d'un nœud dont le nom a des espaces en trop ne sont pas appliqués

- **Où** : `GraphFactory`, [factory.py:69](../MoSiR/graph_generator/factory.py#L69) et
  [81](../MoSiR/graph_generator/factory.py#L81).
- **Symptôme** : quand le nom d'un nœud contient des espaces en trop dans `Graph.json`, par exemple
  « Site 3 Stockage  Landfilled MSW Sawnwood », ses paramètres de dégradation ne peuvent pas lui
  être appliqués. Avec le nom normalisé dans `Inputs.json`, `add_import` lève une `NodeError`.
  Avec le nom brut, le fichier est accepté, mais alpha et beta restent vides et le calcul échoue
  avec une `TypeError`. SEPM Nord a 7 noms dans ce cas, dont 3 nœuds de dégradation : il ne peut
  pas être calculé. Le wiki promet pourtant que MoSiR retire les espaces en trop.
- **Cause** : `GraphFactory` normalise le nom du nœud (`node.NAME`), mais enregistre le nom brut
  dans les listes des `TopNode` et des `DecayNode`. `add_import` compare les noms du fichier
  d'intrants à ces listes brutes, puis applique les paramètres aux nœuds par leur nom normalisé.
- **Correction proposée** : enregistrer `new_node.NAME` au lieu de `node_data['Name']` aux deux
  lignes. Vérifié le 2026-10-29 : le test ci dessous passe, et MoSiR calcule SEPM Nord à partir des
  fichiers d'origine.
- **Test à écrire** : `tests/test_Inputs.py::test_decay_parameters_reach_a_node_whose_name_has_extra_spaces`,
  en `xfail(strict=True, raises=NodeError)`. Un code proposé, vérifié le 2026-10-29, est joint à
  l'issue.

## B. Questions métier tranchées

Ces questions ont été tranchées le 2026-10-29. Le texte d'origine de chaque question est conservé,
suivi de la décision et de ce qu'elle demande. Chaque décision s'applique avec un test qui la fige
et une mention dans les deux CHANGELOG.

- **Q1 — Facteur du CO.** Le forçage radiatif multiplie le carbone du CO par 2,6666, soit 32/12
  ([carbon_to_radiatif.py:92](../MoSiR/carbon_to_radiatif.py#L92)). Les tCO2eq utilisent 2,3333,
  soit 28/12, le rapport de masse CO/C
  ([reporting_info.py:186](../MoSiR/reporting_info.py#L186)). La valeur 2,6666 est figée dans les
  tests : `MASSE` dans `tests/test_Radiatif.py` et `rad_dict` dans `tests/conftest.py`. Par
  ailleurs, les « tCO2eq » du CO ne sont que la masse de CO, sans PRG ni oxydation en CO2.
  - **Décision (2026-10-29)** : 28/12 (2,3333) pour convertir le carbone du CO en masse de CO dans le
    calcul radiatif, et 44/12 (3,6667) pour les tCO2eq du CO, qui est compté comme le CO2 qu'il
    devient. Justification : `Dynco2_Base.csv` est exprimé par kg de gaz, et sa colonne CO vaut
    44/28 fois sa colonne CO2 (1,572 aux années 1 à 3). DynCO2 traite donc le CO comme du CO2 en
    devenir. Avec 2,3333, un kgC émis en CO réchauffe autant qu'un kgC émis en CO2 (rapport entre
    0,997 et 1,002 de l'année 1 à l'année 500). Avec 2,6666, il réchauffait 14 % de plus.
  - **À faire** : corriger [carbon_to_radiatif.py:92](../MoSiR/carbon_to_radiatif.py#L92) et
    [reporting_info.py:186](../MoSiR/reporting_info.py#L186), mettre les facteurs dans une seule
    constante, et mettre à jour `MASSE` dans `tests/test_Radiatif.py` et `rad_dict` dans
    `tests/conftest.py`.
  - **Tests à écrire**, en `xfail(strict=True)` jusqu'à la correction :
    `tests/test_Radiatif.py::test_one_kgc_as_co_warms_as_much_as_one_kgc_as_co2` (rapport des
    forçages CO et CO2 entre 0,99 et 1,01 sur 500 ans) et
    `tests/test_Report.py::test_one_tonne_of_carbon_as_co_is_worth_the_same_tco2eq_as_co2`
    (1 tC de CO vaut 3,6667 tCO2eq). Un code proposé, vérifié le 2026-10-29, est joint à l'issue.
- **Q2 — « Stock » et « Cumulative ».** Un stock cumulé n'a pas de sens défini. Le
  `RecyclingNode` renvoie alors l'entrée cumulée ([nodes.py:500-501](../MoSiR/graph_generator/nodes.py#L500-L501)),
  tandis que `DecayNode` et `PoolNode` ignorent l'option. Faut-il refuser la combinaison ?
  - **Décision (2026-10-29)** : refuser `Cumulative: true` avec `Type: Stock`, pour tous les types de
    nœuds. Le rapport lève une erreur claire : « un stock est déjà cumulé, mettez Cumulative à
    false ». L'interface grise le choix quand Stock est sélectionné
    ([feuille de route de l'interface](FeuilleDeRoute_Interface.md#c-décisions-du-calcul-à-reporter-dans-linterface)).
  - **À faire** : validation dans `ReportData`. Aucun résultat correct ne change : seul le
    `RecyclingNode` tenait compte de l'option.
  - **Migration** : un `Reports.json` qui demande un stock cumulé était accepté et sera refusé. Le
    message dit de mettre `Cumulative` à `false`. Mention dans les deux CHANGELOG.
  - **Test à écrire** : `tests/test_Report.py::test_cumulative_stock_is_rejected_for_every_node_type`,
    paramétré pour un `DecayNode`, un `RecyclingNode` et un `PoolNode`, en `xfail(strict=True)`
    jusqu'à la correction. Un code proposé, vérifié le 2026-10-29, est joint à l'issue.
- **Q3 — Étalement de la loi Gamma.** Beta est fixé à 1 pour Gamma et à 2 pour Chi-square
  ([gamma_function.py:16-21](../MoSiR/gamma_function.py#L16-L21)). L'écart-type d'une Gamma vaut
  donc environ √(demi-vie) : 10 ans pour une demi-vie de 100 ans. L'étalement devrait-il être un
  paramètre ?
  - **Décision (2026-10-29)** : aucun changement de calcul en v2, pour garder les mêmes résultats.
    `Custom` permet déjà de régler l'étalement.
  - **À faire** : documenter dans le wiki (page « Type de dégradation ») que l'écart-type d'une loi
    Gamma vaut environ la racine de la demi-vie.
- **Q4 — Demi-vies courtes.** Les bornes de l'optimiseur
  ([gamma_function.py:62-67](../MoSiR/gamma_function.py#L62-L67)) font échouer Gamma et Chi-square
  pour une demi-vie de 0,5 an. Quelles demi-vies faut-il accepter ?
  - **Décision (2026-10-29)** : accepter toute demi-vie strictement positive, et refuser zéro et les
    valeurs négatives avec un message qui nomme le nœud.
  - **À faire** : corriger les bornes de l'optimiseur, avec D09 pour les paramètres `Custom`. Revoir
    au même moment `test_optimization_failure_raises_decay_error` et
    `test_decay_error_message_points_to_the_excel_workaround`, qui comptent sur l'échec de
    l'optimiseur pour une demi-vie de 99999 ans.
  - **Tests à écrire** dans `tests/test_Gamma.py` : `test_short_halflife_is_accepted` (Gamma et
    Chi-square à 0,5 an) et `test_negative_halflife_is_rejected_by_name`, en `xfail(strict=True)`
    jusqu'à la correction, et `test_zero_halflife_is_rejected_by_name`, qui passe déjà et fige le
    refus de zéro. Un code proposé, vérifié le 2026-10-29, est joint à l'issue.
- **Q5 — Convention radiative.** Une émission de l'année j reçoit le facteur DynCO2 de l'« année 1 »
  dès l'année j. Les facteurs s'arrêtent à 2000 ans, ce qui tronque silencieusement un horizon plus
  long. Est-ce la convention voulue ?
  - **Décision (2026-10-29)** : aligner la convention sur l'outil DynCO2, et refuser un calcul en
    W/m² au delà de 2000 ans au lieu de tronquer en silence.
  - **À faire** : comparer un pulse calculé par MoSiR et par l'outil DynCO2, et faire valider la
    convention par la personne responsable du volet scientifique. Ajouter la validation de `Time`
    pour les sorties en W/m².
  - **Migration** : un rapport en W/m² avec un horizon de plus de 2000 ans était tronqué en silence
    et sera refusé. Le message propose un horizon de 2000 ans au plus, ou une autre unité. Mention
    dans les deux CHANGELOG.
  - **Test à écrire** : `tests/test_Report.py::test_radiative_output_beyond_the_dynco2_horizon_is_rejected`,
    en `xfail(strict=True)` jusqu'à la correction. Un code proposé, vérifié le 2026-10-29, est joint à l'issue.
- **Q6 — Reconnaissance des gaz.** Le gaz est reconnu par une sous-chaîne en majuscules dans le nom
  du nœud : « CO » est reconnu dans tout nom qui contient ces lettres, s'il ne contient pas « CO2 ».
  Faut-il un attribut explicite de gaz sur le nœud ?
  - **Complément (2026-10-29)** : l'ordre des tests diffère entre les deux chemins. Les tCO2eq testent
    CO2, CH4, N2O puis CO ([reporting_info.py:179-186](../MoSiR/reporting_info.py#L179-L186)), les
    W/m² testent CO2, CH4, CO puis N2O
    ([carbon_to_radiatif.py:139-145](../MoSiR/carbon_to_radiatif.py#L139-L145)). Un nœud
    « N2O emissions COGEN » est du N2O en tCO2eq et du CO en W/m².
  - **Décision (2026-10-29)** : un gaz à l'atmosphère est un **nœud final** (sans aucun lien
    sortant) dont le nom contient un gaz. Le gaz est un mot entier, en majuscules, quand on découpe le
    nom sur tout ce qui n'est ni lettre ni chiffre : « CO2 emissions » et « CO2_emissions » sont
    du CO2, « Recyclage COMPOST » n'est aucun gaz, « N2O emissions COGEN » est du N2O. Une seule
    fonction, partagée par les tCO2eq et les W/m². Les sorties en tCO2eq ou en W/m² ne sont
    acceptées que sur ces nœuds. Pas d'attribut supplémentaire dans `Graph.json`.
  - **Effet sur SEPM Nord** : la règle trouve exactement les trois exutoires gazeux (CO2, CH4, N2O).
    Les 9 autres nœuds finaux, cendres comprises, sont des stocks. Les 49 nœuds intermédiaires dont
    le nom contient un gaz (« CH4 to energy », « CH4 flared »…) ne sont pas des gaz à l'atmosphère.
  - **À faire** : la fonction commune, et la page wiki « Nomenclature des fichiers JSON ». Modifier au
    même moment `test_formatting_matches_on_substrings_not_on_words`, dont le nom ne correspondra
    plus à la règle (le cas « CO2_emissions » reste accepté).
  - **Migration** : une sortie en tCO2eq ou en W/m² sur un nœud intermédiaire, ou sur un nom où le
    gaz est collé à d'autres lettres (« CO2emissions »), était convertie et sera refusée. Le
    message nomme le nœud et explique la règle. Mention dans les deux CHANGELOG.
  - **Tests à écrire** : dans `tests/test_Report.py`, `test_tco2eq_does_not_read_co_inside_another_word`,
    `test_tco2eq_is_refused_on_an_intermediate_node`, ainsi que
    `test_tco2eq_reads_n2o_when_another_word_contains_co` et
    `test_tco2eq_reads_a_gas_joined_by_an_underscore`, qui passent déjà et figent la compatibilité.
    Dans `tests/test_Radiatif.py`, `test_formatting_reads_n2o_when_another_word_contains_co` et
    `test_formatting_does_not_read_co_inside_another_word`. Ceux qui ne passent pas encore sont en
    `xfail(strict=True)` jusqu'à la correction. Comparer les forçages en relatif (voir E16). Un code
    proposé, vérifié le 2026-10-29, est joint à l'issue.
- **Q7 — Liens overflow.** Seul le vérificateur les distingue ; le calcul ajoute leur carbone en
  plus des 100 %. Il faut écrire noir sur blanc leur sens (facteur d'émission ou flux ?) et les cas
  permis.
  - **Décision (2026-10-29)** : un lien overflow est un facteur d'émission additionnel. Il est hors
    du bilan des 100 %, et un nœud ne reçoit pas un mélange de liens normaux et overflow
    (vérifications 03 et 03_1). Le forage (F13) lit le drapeau `Overflow` et non le nom du nœud, et
    présente ces flux à part.
  - **À faire** : écrire cette définition dans `Architecture.md` et dans la page wiki « Comment
    utiliser MoSiR avec Miro et l'interface web ».

## C. Développements du calcul

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
- **Ajout (2026-10-29)** : F1 est aussi le prérequis du forage (F13 et F11). Le forage recalcule
  sur un graphe neuf à chaque changement de quantité ou de paramètre, ce qui demande `simulate()`
  et la correction de D03.

### F14 : Splits

- **Pourquoi** : les rectangles jaunes de Miro, les splits, ne servent pas au calcul, mais ils
  rendent l'architecture lisible à l'œil. Un split porte aussi des proportions partagées : les
  pourcentages de ses liens sortants valent pour tous les nœuds qui y entrent. Dans SEPM Nord, les
  six stocks de bois massif partagent ainsi « Split, Solid wood retirement ». Décision du
  2026-10-29 : les splits font partie du graphe, dans l'éditeur (F10) comme dans le forage (F11 et
  F13).
- **Aujourd'hui** : l'import Miro aplatit les rectangles (`__SimplifyEdgesForks`,
  [miro_generator.py:307-330](../MoSiR/mirowrapper/miro_generator.py#L307-L330)). Chaque source est
  reliée directement à chaque cible, avec le produit des proportions, et `Graph.json` ne garde ni
  les rectangles ni leur position. Deux rectangles à la suite donnent une erreur peu claire. Le
  script de forage de SEPM Nord reconstruit les rectangles avec des tables écrites à la main
  (`PROCESS_GROUPS` et `PROCESS_NAMES` de `outils/sepm_nord/miro_json_to_image.py`).
- **Format** : une clé facultative `Splits` à côté de `Nodes` et `Edges`, de la même forme que
  `Nodes` : identifiant, `Name`, `X` et `Y`. Un lien peut aller d'un nœud vers un split ou d'un
  split vers un nœud. Proportions, listes, années et `Overflow` s'écrivent sur les liens comme
  aujourd'hui.
- **Règles**, vérifiées sur le graphe avec ses splits, chacune avec un message qui nomme le split :
  - **un split n'est jamais un élément final** : il reçoit au moins un lien, venu d'un nœud, et en
    envoie au moins un, vers un nœud. Il n'est donc jamais un stock ni un exutoire gazeux (Q6). Dans
    l'import Miro, un rectangle sans sortie est aujourd'hui supprimé en silence (U07).
  - un lien d'un split vers un split est refusé : **jamais deux splits à la suite**.
  - les liens sortants d'un split font 100 % chaque année, comme ceux d'un nœud.
  - un split n'a ni `Decay` ni `Recycling`, et ne reçoit pas d'intrants.
  - son nom suit les règles d'un nom de nœud, et il est unique parmi les nœuds et les splits.
  - aucun rapport sur un split en v2.0 : `Reports.json` ne peut pas le nommer.
- **Aplatissement** : une seule fonction du cœur, appelée par `GraphFactory`. Chaque paire formée
  d'un lien entrant et d'un lien sortant d'un split devient un lien direct, avec le produit des
  proportions année par année. Un lien direct est `Overflow` si l'un des deux liens l'est, comme
  dans l'import Miro aujourd'hui. Les vérifications habituelles, dont celles de Q7, portent ensuite
  sur le graphe aplati. Le calcul, les intrants et les rapports ne voient jamais de split. Le code
  de l'import Miro sert de modèle, sans que l'import soit modifié.
- **Import Miro** : inchangé (décision du 2026-10-29, aucun développement sur Miro). Un tableau Miro
  arrive donc aplati, sans ses rectangles, comme aujourd'hui. On peut ensuite ajouter des splits
  dans l'éditeur (F10).
- **Compatibilité** : c'est un élément clé de la v2.0. Un `Graph.json` sans `Splits` est lu tel quel
  et donne les mêmes résultats. Un graphe avec splits n'a pas à s'ouvrir dans MoSiR 1.x (décision du
  2026-10-29). La reconnaissance d'un fichier de graphe au téléversement accepte la clé `Splits`
  ([upload/views.py:50](../MoSiR/upload/views.py#L50) n'accepte aujourd'hui que `Nodes` et `Edges`).
- **Prérequis** : aucun. F14 passe avant F10 et F13, qui en dépendent.
- **Tests à écrire** :
  - un graphe avec un split partagé par deux nœuds donne les mêmes résultats, à 1e-12 près, que le
    même graphe aplati à la main, avec des proportions constantes puis variables.
  - chaque règle a son test de refus, dont deux splits à la suite, et un split sans lien sortant,
    qu'il reçoive une partie ou toute la sortie d'un nœud.
  - un `Graph.json` sans `Splits` donne des résultats identiques (la suite existante le couvre).
  - l'aplatissement d'un split donne les mêmes liens que l'import Miro pour le même montage : le
    produit des proportions, année par année.
- **Cas de référence** : SEPM Nord reste sans splits, puisqu'il vient de Miro. Les tests utilisent
  de petits graphes écrits pour l'occasion.
- **Mesure du succès** :
  - les tests ci dessus passent.
  - aucun graphe existant ne change de résultat.

### F13 : Analyses de forage

- **Pourquoi** : explorer un graphe sans écrire de rapport : où va le carbone, par où il passe,
  d'où il vient. C'est le moteur de la page de forage
  ([F11](FeuilleDeRoute_Interface.md#f11--page-de-forage)), utilisable aussi sans l'interface.
  Remplace F6 pour l'origine des émissions (#11).
- **Origine** : le script `miro_json_to_image.py` écrit pour SEPM Nord. Ses analyses sont générales,
  mais ses tables de noms (filières, exutoires, repères, traductions, rectangles) ne valent que pour
  cette architecture.
- **Contenu** :
  - pour un graphe et des intrants : le flux cumulé qui traverse chaque nœud, les destinations
    finales de chaque nœud et, pour un chemin choisi, ses routes.
  - trois sources d'intrants : tous ceux d'un fichier, un pulse (une seule année d'injection,
    suivie N années), ou des quantités passées directement pour le forage temporaire.
  - paramètres de dégradation : ceux du fichier par défaut, remplaçables par l'appelant sans
    modifier le fichier.
  - horizon adaptatif : le calcul avance jusqu'à ce qu'il reste moins de 1 % (seuil réglable) du
    carbone injecté dans les `DecayNode` et `RecyclingNode`, dans la limite de 1500 ans. Il retourne
    l'horizon atteint et le reste exact.
  - origine par filière, par linéarité : un calcul par filière, avec la méthode décrite en F6. Les
    filières viennent du fichier de lecture (F11).
  - les flux overflow sont reconnus par le drapeau `Overflow` (Q7) et présentés à part.
  - les splits (F14) : le calcul tourne sur le graphe aplati, puis le module redonne, année par
    année, le flux de chaque lien qui entre dans un split ou qui en sort. Le flux d'un split est la
    somme de ses liens entrants. Un split a, comme un nœud, ses destinations finales et ses origines
    par filière, et les routes d'un chemin le traversent.
  - aucun nom de nœud ou de split en dur dans le module.
- **Méthode** : le calcul dynamique de MoSiR par `simulate()` (F1), sur un graphe neuf à chaque
  appel. Il est exact avec des proportions variables, plusieurs nœuds d'entrée et n'importe quelle
  boucle.
- **Mesures du 2026-10-29, graphe d'exemple** :
  - un pulse suivi 1500 ans : 0,2 s. Un pulse en 2050 suivi jusqu'à 3550 : 0,5 s.
  - avec des proportions constantes, un pulse suivi 1500 ans donne exactement la solution du
    système linéaire x = s + Pᵀx (écart maximal 6 × 10⁻¹⁴). Ce raccourci n'est à envisager qu'après
    mesure sur un gros graphe ([règle](CodingStandards.md#mesurer-une-amélioration)).
  - les proportions variables comptent : 100 tC injectées à l'année 0 donnent 27,0 tC dans `Paper`,
    les mêmes injectées en 2050 en donnent 60,0.
  - horizon à 1 % : environ 6,6 fois la demi-vie pour une loi exponentielle, beaucoup moins pour
    une Gamma (demi-vie de 35 ans : 233 ans en exponentielle, 51 ans en Gamma). Graphe d'exemple :
    46 ans.
- **Mesures du 2026-10-29, SEPM Nord** (182 nœuds, demi-vies fictives de
  `tests/reference/sepm_nord/Inputs.json`) :
  - le calcul dynamique de MoSiR, avec un pulse de 100 suivi 1500 ans, retrouve les flux en régime
    permanent du script à 3 × 10⁻⁶ près (l'arrondi de la page), et ceux d'un calcul indépendant à
    3 × 10⁻¹⁵ près.
  - moins de 1 % du carbone reste dans les `DecayNode` et `RecyclingNode` après 99 ans, moins de
    0,1 % après 165 ans. Ces deux chiffres dépendent des demi-vies, fictives ici.
  - temps de calcul : 2,3 s pour les stocks année par année jusqu'à 1500 ans, plus 0,8 s pour les
    flux cumulés. Un forage avec l'origine par filière (5 filières, donc 6 calculs) prendrait de
    l'ordre de 20 s : à mesurer une fois F13 écrit.
- **Points à trancher** :
  - les routes d'un chemin quand les proportions varient : calculées pour une année choisie, ou
    agrégées sur la période.
  - les deux conventions de comptage (chaque passage dans une boucle, ou unités distinctes) restent
    nommées en toutes lettres dans chaque résultat.
- **Prérequis** : F1, F14, Q7, D12 (sans lui, SEPM Nord ne peut pas être calculé).
- **Tests** :
  - cas de référence : `tests/reference/sepm_nord/`. `forage_reference.json` donne, pour chaque
    nœud, le flux, les destinations finales et les origines par filière produits par le script de
    SEPM Nord, vérifiés indépendamment. Il se régénère avec `outils/sepm_nord/extraire_reference.py`
    (voir le `README.md` du dossier).
  - les vérifications indépendantes de `extraire_reference.py` (flux, destinations, origines)
    remplacent celles de `verifier_flux.py`, dont la version reçue n'est plus compatible avec le
    générateur (elle appelle `merge_identical_branches`, qui n'existe plus).
  - les graphes aléatoires du générateur de comparaison servent de garde-fou pour les formes que
    SEPM Nord ne couvre pas (plusieurs entrées, proportions variables).
  - splits : sur un graphe avec un split partagé, le flux du split égale la somme de ses flux
    entrants et la somme de ses flux sortants, et les destinations des nœuds sont les mêmes que sur
    le graphe aplati.
- **Mesure du succès** :
  - sur SEPM Nord, mêmes flux, destinations et origines que `forage_reference.json`, à 1e-5 près.
  - temps d'un forage complet sur SEPM Nord, comparé aux 3,1 s mesurées sans l'origine par filière.
  - le module ne contient aucun nom de nœud ni de split.

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

### F6 — Origine des émissions

- **Issue** : [#11](https://github.com/Bureau-du-Forestier-en-chef/MoSiR/issues/11) (quelles
  émissions viennent du sciage, par exemple ?).
- **Aujourd'hui** : l'utilisateur extrait à la main les flux entrant dans le nœud, puis relance
  MoSiR sur la partie du graphe en aval, avec ces flux comme intrants.
- **Approche** : automatiser ce procédé dans le service. La linéarité le rend exact. Attention aux
  boucles de recyclage qui repassent par le nœud : il ne faut compter que la matière qui y entre
  pour la première fois, sinon elle est comptée deux fois.
- **Statut (2026-10-29)** : absorbé par F13, qui calcule l'origine par filière, et par F11, la page
  de forage qui l'affiche. L'issue #11 est suivie par ces deux entrées.

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
- **Mise à jour (2026-10-29, #20)** : #20 a été fermée le 2026-10-29 (« Réglé dans dev »), puisque
  « Faster run » est sur `dev`. L'entrée reste pour la suite : une issue « [F7] » sera ouverte
  quand un besoin mesuré se présentera.

### F9 — Long terme

Ces idées viennent de la page « Développements futurs » du wiki :

- d'autres gaz à effet de serre ;
- l'optimisation par programmation linéaire, pour trouver les flux qui atteignent une cible
  d'émissions.

## D. Dette du calcul

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
- **E07** : noms à corriger en temps voulu, par des renommages à part.
  - La fixture `MOSIR_TOLERENCE`.
  - La numérotation `debugg_graph_NN`.
  - Les propriétés nommées `get_*`.
  - Les classes `Jsonparser`, `Dictgenerator`, `Miroerror`.
- **E08** : le chemin `License-Filename` des en-têtes (`LICENSES/EN/LiLiQ-R11unicode.txt`) n'existe
  pas. Les fichiers réels sont `LICENSES/EN/LILIQ-R11ENunicode.txt` et
  `LICENSES/FR/LiLiQ-R11unicode.txt`.
- **E12** : les chemins de sortie sont construits par concaténation, et un dossier vide lève
  `IndexError` ([reporting_info.py:217-229](../MoSiR/reporting_info.py#L217-L229)). Utiliser
  `os.path.join`.
- **E14** : le CHANGELOG v2.0 affirme que l'accélération donne des « résultats identiques ». Il
  faudra une entrée « Corrections » au moment de corriger D01 et D02.
- **E16** : les tests radiatifs ne détectent pas une erreur de calcul. Les forçages valent environ
  1e-13, et `tests/test_Radiatif.py` les compare avec la tolérance absolue `MOSIR_TOLERENCE`
  (1e-4) : deux forçages quelconques y sont toujours « égaux ». Vérifié le 2026-10-29 en doublant
  volontairement tous les forçages dans `rad_convolve` : les 60 tests de `test_Radiatif.py` passent,
  seul `test_Characterization.py` échoue. Comparer en relatif (`pytest.approx(..., rel=1e-6, abs=0)`,
  la tolérance absolue par défaut de `pytest.approx` étant elle aussi trop grande), puis refaire
  l'essai du doublement pour vérifier que les tests échouent.
