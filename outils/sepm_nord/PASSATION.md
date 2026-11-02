# SEPM Nord : note sur le script de dessin et d'analyse

Note de passation du script `miro_json_to_image.py`, état au 23 octobre 2026. Elle décrit ce que
fait le script, les conventions de calcul validées et ce qu'il ne vérifie pas. Elle est conservée
dans le dépôt parce que les valeurs de référence du forage
([`tests/reference/sepm_nord/`](../../tests/reference/sepm_nord/README.md)) suivent ces
conventions, en particulier celles de la section 4.

**Version du graphe.** La note a été écrite pour l'architecture SEPM_NordV4.5. Le graphe du dépôt
(`tests/reference/sepm_nord/sepm_nord.json`) est une version plus récente : le script y compte
38 étages et 157 Répartitions, dont 10 communes, et signale 31 noms sans traduction française. Les
chiffres cités plus bas pour la V4.5 ne valent donc pas pour lui.

## 1. Fichiers dans le dépôt

| Fichier | Rôle |
|---|---|
| `outils/sepm_nord/miro_json_to_image.py` | Le script : JSON MoSiR vers schéma, Sankey (PDF FR et EN) et page HTML interactive |
| `outils/sepm_nord/extraire_reference.py` | Extrait de la page HTML les valeurs de référence du forage, après les avoir recalculées indépendamment |
| `tests/reference/sepm_nord/sepm_nord.json` | Le graphe exporté de Miro, jamais modifié |

Le vérificateur à sept contrôles décrit en section 8 n'est pas dans le dépôt. La version reçue le
2026-10-29 n'était plus compatible avec le script. `extraire_reference.py` refait les contrôles
de flux, de destinations finales et d'origines.

## 2. Relancer

```
pip install pillow cairosvg numpy
python outils/sepm_nord/miro_json_to_image.py tests/reference/sepm_nord/sepm_nord.json <dossier>/sepm_nord
```

## 3. Ce que fait le générateur

1. **Lecture du JSON.** Nœuds (`Name`, `X`, `Y`, `Decay`, `Recycling`) et liens
   (`From`, `To`, `Values`, `Overflow`). Le JSON n'est jamais modifié. `Values` peut être
   une liste ou un dictionnaire année vers proportion : le dessin montre la valeur la plus
   ancienne et le dit. `Overflow` n'est pas lu, il sert au logiciel de comptabilisation.
2. **Répartitions (rectangles jaunes).** Chaque nœud qui a des sorties passe par une
   Répartition qui porte les pourcentages. Certaines sont communes à plusieurs nœuds
   (`PROCESS_GROUPS`), seulement si leurs sorties sont strictement identiques.
3. **Schéma.** Étages tirés des ordonnées Miro, connecteurs orthogonaux avec sauts aux
   croisements et pastilles aux raccords, une étiquette de pourcentage par connecteur.
   Bandes à droite : Produits, Valorisation et bioénergie, Fin de vie et recyclage,
   Atmosphère. Ces bandes nomment une **région du dessin**, pas une étape : sous les
   produits, la chaîne du recyclage et celle de l'enfouissement occupent les mêmes
   étages, aucune limite horizontale ne peut les séparer. C'est la puce de la fiche qui
   tranche élément par élément, et c'est pourquoi les deux ne portent plus les mêmes
   mots. Le libellé d'une bande trop courte voit sa police réduite, jamais son texte
   tronqué.
4. **Sankey.** Régime permanent, 100 unités injectées à la racine. Les boucles sont
   coupées en paires de repères ↩ ↪ **à la sortie des nœuds de recyclage**, parce que
   c'est là que passe la frontière entre l'année X et l'année X+1. Encadré « Bilan » à droite.
5. **Page HTML.** Quatre vues (schéma et Sankey, FR et EN), recherche, fiche de nœud,
   filtres, mode chemin, mini‑carte, masquage des flux à 0 %.

## 4. Conventions de calcul (validées)

* **Base :** 100 unités de carbone entrent à la racine, c'est à dire le seul nœud sans
  lien entrant.
* **N2O :** les liens vers `N2O emissions` ne contiennent pas de carbone, le N2O est
  calculé en plus des 100 unités. C'est pour cela que certaines Répartitions ont des
  sorties qui dépassent 100 %.
* **Valeur d'un nœud :** ce qui y entre. Sur une boucle, **chaque passage est compté**.
  La fiche l'indique.
* **Quantité d'un chemin :** unités **distinctes**, un seul passage compté par unité.
  C'est une convention différente de la précédente, et les deux libellés le disent.
* **Destination finale d'un nœud :** part de son carbone qui finit en CO2, CH4, cendres
  ou stock, boucles comprises.
* **Origine du carbone d'un nœud (« parts ») :** convention **origine du bois**. Le
  carbone prend le nom de la **première** production qu'il traverse et le garde ensuite.
  Les coproduits du sciage transformés en panneaux restent donc du sciage, parce que
  c'est l'arbre récolté pour le sciage qui porte ce carbone. Tant qu'il n'a traversé
  aucune production, il est compté en **bois rond**. Les parts somment exactement au
  carbone qui passe par l'élément, c'est le septième contrôle du vérificateur.
* **Convergence :** les flux sont obtenus par propagation itérative. Le critère d'arrêt
  est **relatif** à la plus grande valeur en jeu (`ITER_EPS = 1e-7`, mille fois plus fin
  que les 6 chiffres affichés), avec un plafond de garde (`ITER_MAX = 100000`) et un
  arrêt anticipé si l'écart ne diminue plus. Le script dit s'il n'a pas convergé.
* **Sankey :** épaisseur proportionnelle, barre au minimum 4 px, ruban trop fin tracé en
  filet de 1,2 px. Le minimum ne gonfle jamais un flux.
* **Routes d'un chemin :** chaque route en % du carbone qui fait le chemin. Les routes et
  la ligne « via les boucles de recyclage » font ensemble 100 %. L'énumération est
  plafonnée à 20000 routes et **le dit** si elle a été tronquée (les routes manquantes
  seraient sinon comptées dans les boucles).

## 5. Vocabulaire français validé

Sawnwood = **Sciage**, P&P reste **P&P**, Otherwood = **Autre**, Panels = **Panneaux**,
Landfilled MSW = **Enfouissement municipal**, Landfilled industrial = **Enfouissement
industriel**, storage = **Stock**, retirement = **Fin de vie**, Split = **Répartition**,
furnace = **Fournaise**, advanced = **appareil à haut rendement**, Unused biomass =
**Biomasse résiduelle**, recovery = **destiné à la valorisation**, litière = animal
bedding and mulch, CH4 to atmosphere = **CH4 non capté**, CH4 fugitive = **CH4 fugitif
vers l'atmosphère**, Degradable = **Fraction dégradable**, feedstock non traduit.

Ajouts de la V4.5 : Ecocentre = **Écocentre**, Sorting centre = **Centre de tri**,
`Sorting centre I` et `II` = **Centre de tri, 1re passe** et **2e passe** (ce sont deux
passes dans le même centre), Solid wood rejects = **Rejets de bois massif**,
Biomass for recycling = **Biomasse destinée à la valorisation**, Retired biomass to
incineration = **Biomasse en fin de vie vers incinération**, « other » au sens de
« autre chose que les panneaux » = **autres usages**.

**À ne pas modifier :** « Exportation », « Répartition », « P&P », et les noms des
Sites 1, 2 et 3. Les versions FR et EN doivent rester logiquement cohérentes.
La table complète est dans les dictionnaires `NAMES_FR` et `NAMES_EN` du script.

## 6. Ce qui dépend des noms du JSON

Les valeurs peuvent changer librement. Ces réglages, eux, cherchent des nœuds par leur
nom et doivent être mis à jour si vous renommez dans Miro.

| Réglage | Rôle | Signalé si absent |
|---|---|---|
| `SINKS` | les quatre puits, nom exact | oui |
| `LANDMARKS` | les quatre nœuds repères de la mise en page | oui |
| `PROCESS_GROUPS` et `PROCESS_NAMES` | Répartitions communes et leurs noms | oui, si sorties différentes |
| `ALIGN_WITH` | stocks alignés sur un étage de référence | non |
| `NAMES_FR`, `NAMES_EN`, `FR_PREFIX`, `EN_PREFIX` | traductions | oui |
| `FILIERES` | les cinq nœuds de production, origine de chaque filière | oui |
| clé racine du JSON | nom affiché, sans son suffixe de version | oui, repli sur le nom du fichier |

La comparaison ignore les espaces et les majuscules. Rien d'autre que ces tables ne
dépend des noms : la filière d'un élément est déduite de **l'amont**, un stock est
reconnu par son drapeau `Decay` et jamais par un nom finissant par « storage », et
l'étape d'un élément est déduite du drapeau `Recycling`.

### Deux notions distinctes, et c'est voulu

La page répond à deux questions différentes, qu'il ne faut pas confondre.

| | Puces de filière, en haut de la fiche, et filtre | Carte « Origine du carbone » |
|---|---|---|
| Question | d'où le carbone **peut** venir | d'où il vient, et en quelle proportion |
| Nature | un ensemble | des parts qui somment à 100 % |
| Méthode | union des filières de l'amont | traceur conservatif, convention origine du bois |

Conséquence voulue côté puces : un site d'enfouissement partagé appartient aux quatre
filières qui y déversent. Sur la V4.5, 39 éléments relèvent d'une seule filière, 59 de
deux, 52 de trois et 43 des quatre. C'est la réalité d'une fin de vie commune.

Conséquence voulue côté parts : sur la V4.5, 70 éléments mélangent plusieurs origines,
et 59 ne voient passer aucun carbone, auquel cas la carte le dit au lieu d'afficher une
répartition inventée. Les origines sous 1 % sont regroupées dans la légende, mais la
barre reste exacte.

### Étape, pour la puce et le filtre

Quatre valeurs. Un exutoire est **Atmosphère**. Un nœud portant le drapeau `Recycling`
est **Recyclage** où qu'il soit dessiné. Au-dessus des stocks de produits, c'est
**Produits**. En dessous, c'est **Recyclage** si l'élément peut encore atteindre un nœud
de recyclage, donc si son carbone est susceptible de repartir dans un produit, et
**Fin de vie** sinon. Écocentres, centres de tri et biomasses recyclées relèvent donc du
recyclage, les enfouissements et les combustions de la fin de vie. Une Répartition suit
le nœud qu'elle dessert. Sur la V4.5 : 76 Produits, 16 Recyclage, 105 Fin de vie,
4 Atmosphère.

## 7. Les messages du script

Aucun message ne signifie que rien d'anormal n'a été détecté. Les messages possibles :

* puits absent du JSON, nom attendu exact
* nœud final qui n'est ni un puits connu ni un stock non dégradable
* sorties différentes, rectangle non commun
* un rectangle porte le nom d'un autre nœud du JSON
* nœud repère introuvable, mise en page approchée
* JSON sans clé racine nommée, le nom du fichier sert de nom d'architecture
* connecteurs verticaux superposés, aucun couloir libre
* flux du schéma, du Sankey, destinations finales ou parts d'origine non stabilisés
* somme des parts d'origine qui s'écarte du carbone passant par l'élément
* boucles ne passant par aucun nœud de recyclage, coupées à un endroit arbitraire
* liens du Sankey allant vers la gauche après classement des colonnes
* étiquettes du Sankey posées sans place libre
* noms sans traduction française
* liens portant plusieurs valeurs, année retenue

## 8. Le vérificateur et son périmètre

Il recalcule les flux par algèbre linéaire, sans reprendre aucun calcul du générateur, et
compare à la page. Sept contrôles :

1. flux de chaque nœud, page contre recalcul
2. part portée par chaque sortie de Répartition
3. total de chaque exutoire du Sankey
4. barres du Sankey contre les flux du schéma, dans la même page
5. les vues FR et EN décrivent le même graphe
6. aucun doublon de nom parmi les éléments terminaux du Sankey
7. somme des parts d'origine égale au flux de l'élément, et aucune origine inconnue

Codes de sortie : 0 conforme, 1 écarts, 2 calcul impossible (boucle qui renvoie tout).

**Il ne vérifie pas** la conservation du carbone, les noms et leurs traductions, le
classement par étape et par filière, la mise en page, ni la lisibilité du dessin. Un
« aucun écart » ne veut donc pas dire « le dessin est bon ».

## 9. Ce qui est couvert en amont, et pas ici

Volontairement hors périmètre, parce que l'outil qui produit le JSON s'en charge :

* la conservation du carbone, c'est à dire des sorties qui somment à 1
* l'unicité du nœud d'entrée, le générateur injecte 100 unités **par** nœud sans lien
  entrant, le vérificateur répartit 100 entre eux, les deux divergent dès qu'il y en a
  plusieurs et le vérificateur le signale
* la lecture de `Overflow`
* les noms de nœuds en double
* les boucles infinies, c'est à dire celles qui renvoient tout ce qui y entre

Une auto‑boucle n'est pas une boucle infinie : un nœud qui se renvoie 20 % de son flux
converge. Le script la dessine correctement, mais la validation amont ne la regarde pas.

## 10. Vérifier une nouvelle architecture

1. Lancer le générateur et **lire ses messages**.
2. Lancer `verifier_flux.py`, exiger les sept contrôles conformes.
3. Ouvrir la page : quatre vues, aucune erreur, fiches cohérentes, routes à 100 %.
4. Basculer « Masquer les flux à 0 % » : aucun saut ni pastille ne doit rester orphelin.
5. Regarder les PDF : étiquettes lisibles, pas de texte qui dépasse.

## 11. Points connus restants

* L'énumération des routes est plafonnée à 20000 (jamais atteint, le chemin le plus large
  de la V4.5 compte 188 routes) et prévient si elle tronque.
* Six étiquettes de pourcentage sur 304 sont posées sur un croisement. Cosmétique,
  compté et annoncé.
* Les puces de filière restent un ensemble, volontairement. Le filtre est donc
  permissif : filtrer sur « Sciage » laisse voir tout ce que le sciage alimente, même
  pour quelques pour cent. La carte « Origine du carbone » est là pour la proportion.
* Les bandes du dessin et la puce de la fiche ne disent plus la même chose, et leurs
  libellés le reflètent. Sur la V4.5, 16 éléments portent la puce Recyclage alors
  qu'ils sont dessinés dans la bande « Fin de vie et recyclage ». C'est inévitable :
  les deux chaînes partagent les étages 16 à 24.
* La convention d'origine suit le bois, pas le produit. Un panneau fait de coproduits de
  sciage est donc compté en sciage jusqu'au bout de sa fin de vie. La carte l'explique
  en toutes lettres pour que personne ne lise le chiffre de travers.
* `X` et `Y` ne sont pas requis par la nomenclature MoSiR, mais le script en dépend
  entièrement pour construire ses étages.
