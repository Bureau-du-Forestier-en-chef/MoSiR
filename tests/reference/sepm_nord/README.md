# Cas de référence SEPM Nord

Le graphe réel qui sert de référence au forage
([F13](../../../Documentation/FeuilleDeRoute_Calcul.md#f13--analyses-de-forage) et
[F11](../../../Documentation/FeuilleDeRoute_Interface.md#f11--page-de-forage)). Données
publiques, confirmé le 2026-10-29.

| Fichier | Contenu | Origine |
| --- | --- | --- |
| `sepm_nord.json` | Le graphe : 182 nœuds, 387 liens, un nœud d'entrée, 34 nœuds de dégradation, 4 de recyclage, 5 boucles, 35 liens overflow, proportions constantes | Export Miro, jamais modifié |
| `Inputs.json` | 100 tC injectées à l'année 0 dans `Roundwood_GCBM`, et des paramètres de dégradation | **Demi-vies fictives**, voir plus bas |
| `forage_reference.json` | Pour chaque nœud : flux, destinations finales, origines par filière, filières possibles, étape. Totaux des exutoires. | Généré, voir plus bas |

Les conventions de calcul du script (flux, destinations, origine du bois) sont décrites dans
[`outils/sepm_nord/PASSATION.md`](../../../outils/sepm_nord/PASSATION.md), section 4.

## Demi-vies fictives

Les paramètres de `Inputs.json` ont été choisis le 2026-10-29 pour être plausibles, sans valeur
scientifique : 20 ans en exponentielle pour les sites d'enfouissement, 2 ans pour les papiers,
cartons et pâtes, 1 an pour la litière, 25 à 35 ans en Gamma pour les produits du bois massif et
les panneaux. Ils ne servent qu'aux tests et aux mesures de temps.

Les valeurs de `forage_reference.json` n'en dépendent pas : les proportions de SEPM Nord sont
constantes, et à long terme la destination du carbone ne dépend pas de la vitesse de
dégradation. L'horizon et le temps de calcul, eux, en dépendent.

## Régénérer `forage_reference.json`

Ne jamais le modifier à la main. Depuis la racine du dépôt :

```bash
pip install pillow cairosvg numpy
python outils/sepm_nord/miro_json_to_image.py tests/reference/sepm_nord/sepm_nord.json <dossier>/sepm_nord
python outils/sepm_nord/extraire_reference.py tests/reference/sepm_nord/sepm_nord.json <dossier>/sepm_nord.html
```

`extraire_reference.py` recalcule chaque valeur par algèbre linéaire, sans rien reprendre du
générateur, et n'écrit rien au moindre écart. Deux exécutions donnent un fichier identique.

## Vérifications du 2026-10-29

| Vérification | Écart maximal |
| --- | --- |
| Flux de la page du script contre calcul indépendant | 3 × 10⁻⁶ relatif (arrondi de la page à 6 chiffres) |
| Destinations finales contre calcul indépendant | 6 × 10⁻⁷ |
| Origines par filière contre traceur indépendant | 5 × 10⁻⁵ sur 100 unités (même arrondi) |
| Calcul dynamique de MoSiR (pulse de 100 suivi 1500 ans) contre calcul indépendant | 3 × 10⁻¹⁵ relatif |

Le calcul de MoSiR demande la correction de
[D12](../../../Documentation/FeuilleDeRoute_Calcul.md#d12--les-paramètres-dun-nœud-dont-le-nom-a-des-espaces-en-trop-ne-sont-pas-appliqués) :
trois nœuds de dégradation ont des espaces en trop dans leur nom.
