# Charte graphique de l'interface

La charte de l'interface de MoSiR reprend celle du site du Bureau du Forestier en chef
([forestierenchef.gouv.qc.ca](https://forestierenchef.gouv.qc.ca/)). Elle a été relevée le
2026-10-29 dans la feuille de style du thème du site (`themes/forestier/dist/css/main.css`), puis
adaptée à une application. Le logo de MoSiR est gardé.

Toute page de l'interface suit ce document
([F15](FeuilleDeRoute_Interface.md#f15--ergonomie-générale)). Une valeur qui n'y figure pas
s'ajoute ici d'abord, puis dans le code.

## Mise en œuvre

- Une seule feuille de style commune, `static/css/mosir.css`, chargée par le gabarit de base dont
  héritent toutes les pages.
- Chaque couleur, police et taille de ce document y est définie une seule fois, en variable CSS
  (`--mosir-vert-foret`, par exemple). Aucune valeur en dur dans les pages ni dans le JavaScript.
  Le site répète ses couleurs en dur : MoSiR ne reprend pas cette pratique.
- Polices, icônes et feuilles de style sont fournies avec MoSiR. Rien n'est chargé depuis Internet.
- Polices au format WOFF2, déclarées avec `format()` et `font-display: swap`, pour un affichage
  rapide du texte (le site sert du TrueType sans ces réglages).
- Tailles en pixels dans ce document. Dans le code, en `rem` sur une base de 16 px.

## Couleurs

### Verts

| Nom | Code | Dans MoSiR | Sur le site |
| --- | --- | --- | --- |
| Vert forêt | `#027B6D` | Fond de la barre de navigation principale, puces de premier niveau, filets des encadrés | Couleur signature, menu principal |
| Vert profond | `#00574D` | Bandeaux (page d'accueil de l'espace de travail, en-têtes de sections larges) | Zone héros, bloc d'infolettre |
| Vert titre | `#0D6260` | Titres de niveau 1 seulement | Titres de niveau 1 |
| Turquoise | `#53C4B7` | Fond des boutons d'action, liens de troisième niveau des sous-menus. Jamais de texte turquoise sur du blanc | Accent d'action |
| Turquoise pâle | `#E1F2F0` | Fonds de blocs, fil d'Ariane, encadrés de mise en exergue | Blocs de l'accueil, fil d'Ariane |

### Bleus

| Nom | Code | Dans MoSiR | Sur le site |
| --- | --- | --- | --- |
| Bleu pétrole | `#013B50` | Liens, onglet actif, panneaux de sous-menus, texte du fil d'Ariane, texte posé sur du turquoise | Liens, onglet actif |
| Bleu moyen | `#007BA6` | Titres de niveaux 3 et 4, survol des liens, barre de navigation secondaire, en-têtes de tableaux, pagination, filet du pied de page | La couleur la plus employée |
| Bleu signature | `#095797` | Seulement si la signature du gouvernement du Québec est retenue : filet de 8 px en haut de page. Couleur imposée par le Programme d'identification visuelle, à ne jamais modifier | En-tête de signature |

### Neutres

| Nom | Code | Dans MoSiR |
| --- | --- | --- |
| Blanc | `#FFFFFF` | Fonds, texte sur couleur, séparateurs de 3 px entre les onglets |
| Noir | `#000000` | Titres de niveau 2 |
| Gris texte | `#333333` | Texte secondaire |
| Gris légende | `#737373` | Légendes, aides sous les champs (contraste de 4,7 pour 1, à ne pas éclaircir) |
| Gris pâle | `#F2F2F2` | Cellules de tableaux, cartes |
| Gris accordéon | `#F4F4F4` | Fond des blocs dépliables |
| Gris tableau | `#DEDEDE` | Pieds de tableaux |
| Gris bordure | `#D9D9D9` | Bordures de 1 px des blocs dépliables et des champs |

Le site déclare ses liens de pied de page en `gray` (`#808080`), sous le seuil de contraste. MoSiR
ne reprend pas cette valeur : un petit texte gris est au moins aussi foncé que `#595959`.

### Couleurs propres à MoSiR

Les couleurs des graphes, du Sankey et des filières du forage ne font pas partie de la charte du
site. Elles se définissent dans ce document au moment de F10 et F11, avec les mêmes règles de
contraste, et en partant des repères actuels de Miro pour les nœuds : contour pointillé pour
`Decay`, vert pour `Recycling` et `Overflow`, rectangle jaune pour les splits (F14).

## Typographie

### Familles

| Famille | Emploi | Fournie avec MoSiR |
| --- | --- | --- |
| Roboto | Titres de niveaux 1 et 2 | Oui, licence libre |
| Arial, puis Helvetica, puis Liberation Sans | Texte courant, titres de niveaux 3 et 4, fil d'Ariane, tableaux | Non, police du système (Liberation Sans a les mêmes largeurs qu'Arial, voir F11) |
| Arial Narrow, sinon Roboto Condensed | Barre de navigation, sous-menus, légendes d'images | Roboto Condensed oui, licence libre. Arial Narrow est sous licence et ne peut pas être fournie : elle n'est utilisée que si elle est installée |

Deux graisses seulement : normale et grasse, comme sur le site.

### Échelle

| Élément | Famille | Taille / interligne | Graisse | Couleur |
| --- | --- | --- | --- | --- |
| Titre 1 | Roboto | 32 / 35 px | Gras | `#0D6260` |
| Titre 2 | Roboto | 24 / 35 px | Gras | `#000000` |
| Titre 3 | Arial | 18 / 26 px | Gras | `#007BA6` |
| Titre 4 | Arial | 16 / 25 px | Gras italique | `#007BA6` |
| Paragraphe | Arial | 16 / 21 px | Normal | Celle du corps de page |
| Barre de navigation | Narrow | 19 / 22 px, majuscules | Normal | `#FFFFFF` |
| Sous-menu, niveau 2 | Narrow | 16 / 18 px | Normal | `#FFFFFF` |
| Sous-menu, niveau 3 | Narrow | 14 / 16 px | Normal | `#53C4B7` |
| Fil d'Ariane | Arial | 12 / 21 px | Normal | `#013B50` |
| Métadonnées (date, taille de fichier, statut) | Arial | 12 px | Normal | `#737373` |
| Titre de bloc | Arial | 16 px, majuscules | Gras | `#013B50` sur `#53C4B7` |

Marge sous les titres et les paragraphes : 12 px.

## Liens et boutons

| Élément | Repos | Survol et focus |
| --- | --- | --- |
| Lien dans un texte | `#013B50`, souligné | `#007BA6`, souligné |
| Lien de navigation, de bouton, du fil d'Ariane, de pagination | Sans soulignement | Souligné |

Bouton principal :

| Propriété | Repos | Survol, focus, activation |
| --- | --- | --- |
| Fond | `#53C4B7` | `#013B50` |
| Texte | `#013B50` | `#53C4B7` |
| Police | Arial gras 16 px | Idem |
| Bordure et ombre | Aucune | Aucune |
| Forme | Pilule (rayon de 9999 px, défini explicitement, pas hérité comme sur le site) | Idem |
| Transition | Fond, 0,4 s, `ease-in-out` | Idem |

Le bouton secondaire reprend les couleurs inversées : fond `#013B50`, texte `#53C4B7`. Un bouton
qui supprime ou écrase quelque chose demande une confirmation (F15).

## Navigation

| Élément | Traitement |
| --- | --- |
| Barre principale | Fond `#027B6D`, hauteur 70 px, texte blanc en majuscules, séparateurs blancs de 3 px entre les onglets. Logo de MoSiR à gauche, langue, aide et Quitter à droite |
| Onglet actif | Fond `#013B50`, gras |
| Panneau de sous-menu | Fond `#013B50`, filet blanc de 3 px, troisième niveau en `#53C4B7` |
| Barre secondaire (sous-sections d'une page, par exemple les vues du forage) | Fond `#007BA6`, hauteur 44 px, texte blanc |
| Fil d'Ariane | Fond `#E1F2F0`, hauteur 33 px, texte `#013B50` 12 px, chevron entre les niveaux |

## Tableaux

| Partie | Traitement |
| --- | --- |
| En-tête | Fond `#007BA6`, texte blanc, graisse normale, marge intérieure 10 px |
| Cellules | Fond `#F2F2F2`, espacement de 1 px entre les cellules. Les nombres sont alignés à droite, le texte à gauche (le site centre tout, ce qui gêne la lecture des chiffres) |
| Pied | Fond `#DEDEDE`, gras |
| Cadre | Filet inférieur de 2 px en `#007BA6`, fond blanc |

## Autres composants

- **Bloc dépliable** : fond `#F4F4F4`, bordure de 1 px `#D9D9D9`, contenu sur blanc, icônes de
  24 px pour ouvrir et fermer, zone cliquable de 20 px.
- **Puces de liste** : premier niveau, triangle vert `#027B6D` de 10 px. Second niveau, puce ronde
  `#53C4B7`. Retrait de 17 px par niveau.
- **Encadré de mise en exergue** (avertissements, aide) : fond `#E1F2F0`, filets haut et bas de
  1 px en `#027B6D`, marge intérieure 20 px.
- **Icônes de type de fichier** : 15 × 15 px, après chaque lien vers un fichier à télécharger.
  MoSiR en a besoin pour JSON, CSV et l'archive des résultats. Icône de lien externe de 12 px
  pour tout lien qui sort de MoSiR (wiki, GitHub).
- **Pied de page** : filet supérieur de 30 px en `#007BA6`. Version de MoSiR, licence, lien vers
  la documentation, comme aujourd'hui.
- **Focus** : anneau visible sur tout élément qui reçoit le focus au clavier, y compris les champs.
  Le site n'a qu'un anneau de 1 px sur les champs : MoSiR en met un sur tout élément interactif.

## Contrastes

Norme WCAG, niveau AA : 4,5 pour 1 pour le texte courant, 3 pour 1 pour le grand texte.

| Association | Ratio | Règle |
| --- | --- | --- |
| `#013B50` sur blanc | 12,0 : 1 | Libre |
| `#0D6260` sur blanc | 7,2 : 1 | Libre |
| Blanc sur `#027B6D` | 5,2 : 1 | Libre |
| `#013B50` sur `#53C4B7` | 5,7 : 1 | Libre |
| `#007BA6` sur blanc | 4,8 : 1 | Marge étroite : pas plus clair |
| `#737373` sur blanc | 4,7 : 1 | Marge étroite : pas plus clair |
| `#53C4B7` sur blanc | 2,1 : 1 | Fond seulement, jamais de texte |

Toute nouvelle association de couleurs (graphes, forage) est vérifiée et ajoutée à ce tableau.

## Ce qui n'est pas repris, et pourquoi

| Élément du site | Raison |
| --- | --- |
| Largeur fixe de 1000 px | Convient à des pages de lecture. Les pages de formulaires de MoSiR se centrent sur 1000 px, mais l'éditeur (F10) et le forage (F11) occupent toute la fenêtre |
| Points de rupture et menu mobile, bleu ardoise `#104556` | MoSiR vise un écran d'ordinateur portable ou plus grand (F15) |
| Zone héros, carrousel, cartes d'actualités, frise chronologique, bannière de bas de page, infolettre | Composants d'un site d'information, sans usage dans une application |
| Linearicons | Remplacé par un jeu d'icônes SVG sous licence libre, fourni avec MoSiR (à choisir, F15) |
| Fichier Arial Narrow servi par le site | Police sous licence : remplacée par Roboto Condensed quand elle n'est pas installée |
| Tableaux qui deviennent des cartes sous 600 px | Pas de version pour petit écran |
| Liens gris `#808080` du pied de page | Contraste insuffisant |

## Points à trancher

- La signature du gouvernement du Québec : obligatoire ou non dans un outil comme MoSiR, à vérifier
  avec les communications du Bureau.
- Le jeu d'icônes SVG, et la vérification des licences des polices et des icônes fournies.
- La hauteur de 70 px de la barre principale, à confirmer sur une maquette : l'éditeur et le
  forage ont besoin de hauteur.
