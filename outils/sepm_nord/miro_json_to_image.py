#!/usr/bin/env python3
"""
Génère, à partir du JSON exporté depuis Miro, le schéma de l'architecture de flux,
le diagramme de Sankey (PDF, en français et en anglais) et une page HTML interactive
bilingue (recherche, fiches, filtres, chemins).

Usage :
    python miro_json_to_image.py sepm_nord.json sortie/sepm_nord_flux
    options : --lang fr|en|both (PDF), --no-html, --png-svg (ajoute PNG et SVG)

Dépendances : pillow (mesure du texte), cairosvg (PDF, PNG et mini-cartes du HTML)
    pip install pillow cairosvg

Vérification indépendante des valeurs : verifier_flux.py (voir PASSATION.md).
"""
import argparse
import bisect
import json
import math
import os
import re
from collections import defaultdict, Counter
from xml.sax.saxutils import escape

from PIL import ImageFont

# ----------------------------------------------------------------------------
# Paramètres visuels
# ----------------------------------------------------------------------------
R = 50                      # rayon des cercles (unités Miro)
FONT_FAMILY = "Liberation Sans, Arial, Helvetica, sans-serif"

C_NODE, C_NODE_STROKE = "#9BCBF5", "#5B8FC7"
C_DECAY_STROKE = "#2F4F9E"
C_RECYCLE, C_RECYCLE_STROKE = "#80C343", "#5A9A2C"
C_TEXT = "#14263D"
C_BLACK = "#2B2B2B"
C_TAG_FILL, C_TAG_STROKE, C_TAG_TEXT = "#DDF2BE", "#8BC34A", "#2F5D14"
C_HEAD = "#E8593C"
C_RED = "#D62020"
C_HUB, C_HUB_STROKE = "#FFE45C", "#B89A00"
RECT_W, RECT_H = 150, 58

SINKS = {
    "CH4 emissions": dict(fill="#14BFCB", line="#22C4D6"),
    "N2O emissions": dict(fill="#CDE83A", line="#3FCF4F"),
    "CO2 emissions": dict(fill="#FF3FE0", line="#FF62E4"),
    "Ash":           dict(fill="#FBF33A", line="#F0D000"),
}

# Nom de l'architecture dessinée. Il vient de la clé racine du JSON, celle qui contient
# « Nodes » et « Edges », et à défaut du nom du fichier. Il est affiché sur le dessin et
# dans la page pour qu'un lecteur sache toujours QUELLE architecture il a sous les yeux.
# Ce qui compte pour le lecteur est le groupe d'essences et la géographie, pas le numéro
# de version : « SEPM_NordV4.5 » devient « SEPM Nord ». Le nom complet reste en infobulle
# sur la pastille de la page, et --nom impose n'importe quel autre libellé.
GRAPH = {"name": "", "brut": ""}
# un suffixe de version en fin de nom : V4, v2.1, _4.5, « - 3 »
VERSION = re.compile(r"(?:[ _.-]*[Vv]\d+(?:\.\d+)*|[ _.-]+\d+(?:\.\d+)*)\s*$")


def graph_name(data, json_path=None):
    """Nom brut de l'architecture : clé racine du JSON, à défaut nom du fichier."""
    cle = next(iter(data), None)
    if "Nodes" not in data and isinstance(cle, str) and cle.strip():
        return cle.strip()
    if json_path:
        return os.path.splitext(os.path.basename(json_path))[0]
    return ""


def graph_label(brut):
    """Ce qu'on affiche : le nom sans son numéro de version, soulignés en espaces."""
    nm = VERSION.sub("", brut.strip())
    nm = re.sub(r"[_]+", " ", nm)
    return re.sub(r"\s{2,}", " ", nm).strip() or brut.strip()


# Nœuds repères de la mise en page. Ce sont les seuls noms du JSON dont dépend la
# position des bandeaux (Produits, Recyclage, Fin de vie) et des en-têtes de colonnes,
# ainsi que le classement des nœuds par étape dans la page HTML. Si l'un est renommé
# dans Miro, il faut le corriger ici, et le script le signale.
LANDMARKS = {
    "prod": "Sawnwood production",          # premier étage de production
    "bio":  "Biofuel transport",            # début de la bande bioénergie
    "eol":  "Bioenergy feedstock P&P",      # début de la bande fin de vie
    "sto":  "Sawnwood storage",             # étage des stocks de produits
}


# Nœuds de production, origine de chaque filière. C'est la seule chose que le script
# sait des filières : tout le reste est déduit des liens, en remontant l'amont.
FILIERES = {
    "Sawnwood production": "sci",
    "Panels production": "pan",
    "P&P production": "pp",
    "Otherwood production": "aut",
    "Bioenergy production": "bio",
}


def row_or(row, defaut):
    """Étage trouvé, ou valeur de repli. L'étage 0 est valide, « or » ne convient pas."""
    return defaut if row is None else row


# Résolution des boucles de recyclage : les flux sont obtenus en propageant les
# 100 unités passe après passe, jusqu'à ce que les chiffres cessent de bouger.
# Le critère est RELATIF à la plus grande valeur en jeu : sur une boucle serrée les
# flux cumulés deviennent grands et un seuil absolu tomberait sous le bruit de calcul
# des flottants, donc ne serait jamais atteint. 1e-7 reste nettement plus fin que les
# 6 chiffres significatifs affichés, et le message ne se déclenche donc que lorsque
# l'écart serait visible à l'écran. Le plafond n'est qu'un garde-fou contre une
# boucle qui ne convergerait jamais, et le script dit s'il l'atteint.
ITER_MAX = 100000
ITER_EPS = 1e-7


def stable(gap, valeurs):
    """Les chiffres ont-ils cessé de bouger, à l'échelle des valeurs en jeu ?"""
    return gap <= ITER_EPS * max(1.0, max((abs(v) for v in valeurs), default=1.0))


_ANNEE = [None]     # année effectivement dessinée, pour le message de fin


def edge_value(e):
    """Part portée par un lien, selon la nomenclature MoSiR. « Values » peut être
    une liste de valeurs, ou un dictionnaire année vers proportion. Le dessin est une
    image d'une seule année : on prend la première, c'est à dire l'année la plus
    ancienne, et le script dit laquelle à la fin."""
    v = e["Values"]
    if isinstance(v, (int, float)):
        return float(v)
    if isinstance(v, list):
        if not v:
            raise SystemExit("Lien sans valeur : « Values » est une liste vide.")
        if len(v) > 1 and _ANNEE[0] is None:
            _ANNEE[0] = "la première des %d valeurs de la liste" % len(v)
        return float(v[0]) or 0.0
    if isinstance(v, dict):
        if not v:
            raise SystemExit("Lien sans valeur : « Values » est vide.")
        def _cle(k):
            try:
                return (0, float(k))
            except (TypeError, ValueError):
                return (1, str(k))
        k0 = sorted(v, key=_cle)[0]
        if len(v) > 1 and _ANNEE[0] is None:
            _ANNEE[0] = "l'année %s, la plus ancienne des %d présentes" % (k0, len(v))
        return float(v[k0]) or 0.0
    raise SystemExit("Lien dont « Values » n'est ni une liste ni un dictionnaire : %r" % (v,))

FONT_PATHS = [
    "/usr/share/fonts/truetype/liberation/LiberationSans-Regular.ttf",
    "/usr/share/fonts/truetype/dejavu/DejaVuSans.ttf",
    "C:/Windows/Fonts/arial.ttf",
    "/Library/Fonts/Arial.ttf",
    "/System/Library/Fonts/Supplemental/Arial.ttf",
]
_font = None
for p in FONT_PATHS:
    if os.path.exists(p):
        _font = ImageFont.truetype(p, 100)
        break


def text_w(s, size):
    if _font is None:
        return len(s) * size * 0.54
    return _font.getlength(s) * size / 100.0


# ----------------------------------------------------------------------------
# Texte dans les cercles
# ----------------------------------------------------------------------------
def tokenize(name):
    toks = []
    for w in name.split():
        if "/" in w and len(w) > 10:
            parts = w.split("/")
            for i, p in enumerate(parts):
                t = p + ("/" if i < len(parts) - 1 else "")
                toks.append((t, i > 0))
        else:
            toks.append((w, False))
    return toks


def wrap(toks, maxw, size):
    lines, cur = [], ""
    for t, glue in toks:
        cand = (cur + t) if (glue or not cur) else (cur + " " + t)
        if cur and text_w(cand, size) > maxw:
            lines.append(cur)
            cur = t
        else:
            cur = cand
    if cur:
        lines.append(cur)
    return lines


def fit_label(name):
    toks = tokenize(name)
    ri = R - 4
    size = 15.5
    while size >= 6.5:
        lh = size * 1.14
        for maxw in (62, 70, 78, 86, 94):
            lines = wrap(toks, maxw, size)
            n = len(lines)
            ok = True
            for i, ln in enumerate(lines):
                dy = abs((i - (n - 1) / 2) * lh) + lh / 2
                if dy >= ri:
                    ok = False
                    break
                chord = 2 * math.sqrt(ri * ri - dy * dy)
                if text_w(ln, size) > chord:
                    ok = False
                    break
            if ok:
                return lines, size, lh
        size -= 0.5
    lines = wrap(toks, 90, 6.5)
    return lines, 6.5, 7.4


# ----------------------------------------------------------------------------
# Utilitaires
# ----------------------------------------------------------------------------
def fmt_val(v):
    """Fraction (0 à 1) vers pourcentage lisible."""
    pct = v * 100.0
    if abs(pct) < 1e-12:
        return "0%"
    txt = f"{pct:.8f}".rstrip("0").rstrip(".")
    if txt == "0":
        txt = f"{pct:.10f}".rstrip("0").rstrip(".")
    return txt + "%"


def arrow(x, y, ang_deg, color, size=13):
    a = math.radians(ang_deg)
    ux, uy = math.cos(a), math.sin(a)
    px, py = -uy, ux
    bx, by = x - ux * size, y - uy * size
    pts = [(x, y), (bx + px * size * 0.45, by + py * size * 0.45),
           (bx - px * size * 0.45, by - py * size * 0.45)]
    return f'<polygon points="{" ".join(f"{a_:.1f},{b_:.1f}" for a_, b_ in pts)}" fill="{color}"/>'


def tag_svg(x, y, s):
    w = text_w(s, 10) + 9
    return (f'<g><rect x="{x - w / 2:.1f}" y="{y - 7.5:.1f}" width="{w:.1f}" height="15" rx="3" '
            f'fill="{C_TAG_FILL}" stroke="{C_TAG_STROKE}" stroke-width="1"/>'
            f'<text x="{x:.1f}" y="{y + 3.6:.1f}" font-size="10" text-anchor="middle" '
            f'fill="{C_TAG_TEXT}">{escape(s)}</text></g>')


def densify(pts, step=5.0):
    out, acc = [], 0.0
    for (xa, ya), (xb, yb) in zip(pts[:-1], pts[1:]):
        L = math.hypot(xb - xa, yb - ya)
        n = max(1, int(L / step))
        for i in range(n):
            t = i / n
            out.append((xa + (xb - xa) * t, ya + (yb - ya) * t, acc + L * t))
        acc += L
    out.append((pts[-1][0], pts[-1][1], acc))
    return out


NON_DEG = re.compile(r"non[\s\-]*degradable", re.I)

# ----------------------------------------------------------------------------
# Paramètres de mise en page
# ----------------------------------------------------------------------------
FX = 1.55             # étirement horizontal global (garde les colonnes alignées)
SP = 2 * R + 96       # distance minimale entre centres dans un même étage
TS = 20               # écart entre deux pistes de connecteurs dans un couloir
LANE_STEP = 14        # pas des couloirs verticaux
LANE_MARGIN = 11      # marge entre un couloir vertical et un réservoir
ROW_GAP = 76          # marge haute d'un couloir avant la première piste
GAS_ORDER = ["CH4 emissions", "N2O emissions", "CO2 emissions", "Ash"]
SINK_RX = 600



# ----------------------------------------------------------------------------
# Langue d'affichage (FR / EN)
# ----------------------------------------------------------------------------
# Le JSON reste en anglais. La traduction ne touche que l'affichage : toute la
# logique (couleurs, Splits communs) continue de s'appuyer sur les noms d'origine.
# Pour corriger une traduction, modifier NAMES_FR, FR_PREFIX ou _LF_KIND ci-dessous.
LANG = "fr"


def T(fr, en):
    """Texte d'interface dans la langue courante."""
    return fr if LANG == "fr" else en


def _key(s):
    """Clé de comparaison des noms : sans différence d'espaces ni de majuscules."""
    return re.sub(r"\s+", " ", s).strip().lower()


def _norm(s):
    return re.sub(r"\s+", " ", s).strip()


# Préfixes des nœuds d'enfouissement (CH4, biométhane, sites…)
FR_PREFIX = {
    "Biomethane": "Biométhane",
    "CH4 flared": "CH4 brûlé à la torchère",
    "CH4 fugitif": "CH4 non capté",                       # même rôle que « CH4 to atmosphere »
    "CH4 fugitive": "CH4 fugitif vers l'atmosphère",     # Répartitions des nœuds « CH4 fugitive to atmosphere »
    "CH4 fugitive to atmosphere": "CH4 fugitif vers l'atmosphère",
    "CH4 oxydation": "Oxydation du CH4",
    "CH4 produced": "CH4 produit",
    "CH4 production": "CH4 produit",
    "CH4 to atmosphere": "CH4 non capté",                 # 10 % s'oxyde, 90 % s'échappe ensuite
    "CH4 to energy": "CH4 valorisé en énergie",
    "Degradable": "Fraction dégradable",
    "Non degradable": "Fraction non dégradable",
    "Non-degradable": "Fraction non dégradable",
    "Site 1 Stockage": "Site 1 Stockage",
    "Site 2 Stockage": "Site 2 Stockage",
    "Site 3 Stockage": "Site 3 Stockage",
    "CH4/CO2": "CH4/CO2",
    # V4 : passage par l'écocentre et le centre de tri avant l'enfouissement
}
NAMES_FR = {
    # --- écocentre, centre de tri et fin de vie commune du bois massif ---
    # « Sorting centre I » et « II » sont deux passes successives dans le même centre
    "Ecocentre": "Écocentre",
    "Ecocentre to sorting centre": "Écocentre vers centre de tri",
    "Ecocentre to MSW landfills": "Écocentre vers enfouissement municipal",
    "Sorting centre I": "Centre de tri, 1re passe",
    "Sorting centre II": "Centre de tri, 2e passe",
    "Sorting centre P&P": "Centre de tri P&P",
    "Sorting centre to MSW landfills": "Centre de tri vers enfouissement municipal",
    "Sorting centre rejects to MSW landfills":
        "Rejets du centre de tri vers enfouissement municipal",
    "Biomass for recycling": "Biomasse destinée à la valorisation",
    "Retired biomass to incineration": "Biomasse en fin de vie vers incinération",
    "Solid wood retired Industrial": "Bois massif en fin de vie, industriel",
    "Solid wood retired other": "Bois massif en fin de vie, autres usages",
    "Recycled biomass": "Biomasse recyclée",
    "Recycled biomass to other uses": "Biomasse recyclée vers autres usages",
    "Recycled biomass to non structural panels": "Biomasse recyclée vers panneaux non structuraux",
    # nom du rectangle commun aux six stocks de bois massif
    "Solid wood retirement": "Fin de vie Sciage/Panneaux/Autre",
    # --- nœuds ---
    "Roundwood_GCBM": "Bois rond récolté (GCBM)",
    "Industrial Roundwood": "Bois rond industriel",
    "Ash": "Cendres",
    "CH4 emissions": "Émissions de CH4",
    "CO2 emissions": "Émissions de CO2",
    "N2O emissions": "Émissions de N2O",
    "Bio-CH4 Unused P&P": "Biométhanisation, biomasse résiduelle P&P",
    "Bioenergy feedstock Otherwood": "Bioénergie Autre",
    "Bioenergy feedstock P&P": "Bioénergie P&P",
    "Bioenergy feedstock Panels": "Bioénergie Panneaux",
    "Bioenergy feedstock Sawnwood": "Bioénergie Sciage",
    "Bioenergy production": "Production de bioénergie",
    "Biofuel non-transport": "Biocarburant hors transport",
    "Biofuel transport": "Biocarburant transport",
    "Biomethanisation combustion": "Combustion du biométhane",
    "Cardboards produced": "Cartons produits",
    "Cardboards storage": "Stock cartons",
    "Compostage Unused P&P": "Compostage, biomasse résiduelle P&P",
    "Compostage to epandage": "Compost vers épandage",
    "Coproducts Otherwood produced": "Coproduits Autre générés",
    "Coproducts produced": "Coproduits Sciage générés",
    "Coproducts recycled to Bioenergy": "Coproduits valorisés en bioénergie",
    "Coproducts recycled to P&P": "Coproduits recyclés en P&P",
    "Coproducts recycled to Panels": "Coproduits recyclés en Panneaux",
    "Engineered wood produced": "Bois d'ingénierie produit",
    "Engineered wood storage": "Stock bois d'ingénierie",
    "Institutional heat": "Chauffage institutionnel",
    "Institutional heat combustion gaz fraction": "Chauffage institutionnel, fraction gazeuse",
    "Land application": "Épandage",
    "Litiere storage": "Stock litière et paillis",
    "Non Residential": "Bioénergie non résidentielle",
    "Non Structural panels": "Panneaux non structuraux",
    "Non Structural panels storage": "Stock panneaux non structuraux",
    "Otherwood Habitation bois rond produced": "Autre, habitations en bois rond produites",
    "Otherwood Poteaux produced": "Autre, poteaux produits",
    "Otherwood litiere et paillis produced": "Autre, litière et paillis produits",
    "Otherwood production": "Production Autre",
    "Otherwood storage": "Stock habitations en bois rond",   # seule entrée : habitations en bois rond
    "P&P Recycled biomass": "Biomasse recyclée P&P",
    "P&P production": "Production P&P",
    "Panels Recycled products": "Produits recyclés Panneaux",
    "Panels production": "Production Panneaux",
    "Papers produced": "Papiers produits",
    "Papers storage": "Stock papiers",
    "Poteaux storage": "Stock poteaux",
    "Pulp produced": "Pâte produite",
    "Pulp storage": "Stock pâte",
    "Recycling Coproducts end-use": "Valorisation des coproduits Sciage",
    "Residential": "Bioénergie résidentielle",
    "Residential Bioenergy advanced": "Bioénergie résidentielle, appareil à haut rendement",
    "Residential Bioenergy advanced incineration gaz fraction":
        "Bioénergie résidentielle, appareil à haut rendement, fraction gazeuse",
    "Residential Bioenergy furnace": "Bioénergie résidentielle, fournaise",
    "Residential Bioenergy furnace incineration gaz fraction":
        "Bioénergie résidentielle, fournaise, fraction gazeuse",
    "Sawnwood produced": "Produits de sciage",
    "Sawnwood production": "Production Sciage",
    "Sawnwood storage": "Stock Sciage",
    "Solid bioenergy feedstock gaz fraction": "Bioénergie solide, fraction gazeuse",
    "Solid wood retired incineration gaz fraction": "Bois massif en fin de vie, incinération, fraction gazeuse",
    "Structural panels": "Panneaux structuraux",
    "Structural panels storage": "Stock panneaux structuraux",
    "Unused Otherwood biomass": "Biomasse résiduelle Autre",
    "Unused P&P biomass": "Biomasse résiduelle P&P",
    "Unused Panels biomass": "Biomasse résiduelle Panneaux",
    "Unused Sawnwood biomass": "Biomasse résiduelle Sciage",
    # --- Splits (sans le préfixe « Split, ») ---
    "Bioenergy allocation": "Bioénergie",
    "Biofuel non-transport, combustion": "Biocarburant hors transport, combustion",
    "Biofuel transport, combustion": "Biocarburant transport, combustion",
    "Biomethanisation": "Biométhanisation",
    "Biomethanisation, combustion": "Combustion du biométhane",
    "Cardboards end-use": "Cartons, usage final",
    "Compostage": "Compostage",
    "Coproducts Sawnwood end-use": "Coproduits Sciage, usage final",
    "Coproducts Otherwood end-use": "Coproduits Autre, usage final",
    "Engineered wood end-use": "Bois d'ingénierie, usage final",
    "Harvested Roundwood": "Bois rond récolté",
    "Industrial allocation": "Bois rond industriel",
    "Institutional heat, combustion": "Chauffage institutionnel, combustion",
    "Institutional heat, combustion, gaz fraction": "Chauffage institutionnel, fraction gazeuse",
    "Non-residential bioenergy": "Bioénergie non résidentielle",
    "Otherwood allocation": "Autre",
    "Otherwood habitation end-use": "Autre, habitations en bois rond, usage final",
    "Otherwood litiere et paillis end-use": "Autre, litière et paillis, usage final",
    "Otherwood poteaux end-use": "Autre, poteaux, usage final",
    "P&P": "P&P",
    "P&P retirement": "Fin de vie P&P",
    "P&P, Recycled biomass": "Biomasse recyclée P&P",
    "Panels allocation": "Panneaux",
    "Panels, Recycled products": "Produits recyclés Panneaux",
    "Papers end-use": "Papiers, usage final",
    "Pulp end-use": "Pâte, usage final",
    "Recycling, Coproducts end-use": "Valorisation des coproduits Sciage",
    "Residential Bioenergy, advanced, combustion": "Bioénergie résidentielle, appareil à haut rendement, fraction gazeuse",
    "Residential Bioenergy, advanced, incineration": "Bioénergie résidentielle, appareil à haut rendement, combustion",
    "Residential Bioenergy, furnace, combustion": "Bioénergie résidentielle, fournaise, fraction gazeuse",
    "Residential Bioenergy, furnace, incineration": "Bioénergie résidentielle, fournaise, combustion",
    "Residential bioenergy": "Bioénergie résidentielle",
    "Sawnwood": "Sciage",
    "Sawnwood end-use": "Sciage, usage final",
    "Solid bioenergy feedstock, gaz fraction": "Bioénergie solide, fraction gazeuse",
    "Solid bioenergy feedstock, incineration": "Bioénergie solide, combustion",
    "Solid wood retired, incineration, gaz fraction": "Bois massif en fin de vie, incinération, fraction gazeuse",
    "Unused Otherwood end-use": "Biomasse résiduelle Autre",
    "Unused P&P biomass retirement": "Biomasse résiduelle P&P",
    "Unused Panels biomass end-use": "Biomasse résiduelle Panneaux",
    "Unused Sawnwood biomass end-use": "Biomasse résiduelle Sciage",
}
# Affichage anglais : les noms du JSON, nettoyés (mots français, fautes) et alignés sur
# les mêmes concepts que la version française. Le JSON n'est pas modifié.
EN_PREFIX = {
    "Biomethane": "Biomethane",
    "CH4 flared": "CH4 flared",
    "CH4 fugitif": "CH4 not captured",
    "CH4 fugitive": "CH4 fugitive to atmosphere",
    "CH4 fugitive to atmosphere": "CH4 fugitive to atmosphere",
    "CH4 oxydation": "CH4 oxidation",
    "CH4 produced": "CH4 produced",
    "CH4 production": "CH4 produced",
    "CH4 to atmosphere": "CH4 not captured",
    "CH4 to energy": "CH4 to energy",
    "Degradable": "Degradable fraction",
    "Non degradable": "Non-degradable fraction",
    "Non-degradable": "Non-degradable fraction",
    "Site 1 Stockage": "Site 1 storage",
    "Site 2 Stockage": "Site 2 storage",
    "Site 3 Stockage": "Site 3 storage",
    "CH4/CO2": "CH4/CO2",
}
NAMES_EN = {
    # --- « other » veut dire autre chose que les panneaux ---
    # « Sorting centre I » et « II » sont deux passes successives dans le même centre
    "Sorting centre I": "Sorting centre, 1st pass",
    "Sorting centre II": "Sorting centre, 2nd pass",
    "Solid wood retired other": "Solid wood retired, other uses",
    "Solid wood retired Industrial": "Solid wood retired, industrial",
    "Recycled biomass to non structural panels": "Recycled biomass to non-structural panels",
    "Solid wood retirement": "Solid wood retirement",
    # --- nœuds ---
    "Roundwood_GCBM": "Harvested roundwood (GCBM)",
    "Bio-CH4 Unused P&P": "Biomethanisation, residual P&P biomass",
    "Compostage Unused P&P": "Composting, residual P&P biomass",
    "Compostage to epandage": "Compost to land application",
    "Coproducts produced": "Coproducts Sawnwood produced",
    "Coproducts recycled to Bioenergy": "Coproducts recovered as bioenergy",
    "Institutional heat combustion gaz fraction": "Institutional heat, gas fraction",
    "Litiere storage": "Animal bedding and mulch storage",
    "Non Residential": "Non-residential bioenergy",
    "Residential": "Residential bioenergy",
    "Non Structural panels": "Non-structural panels",
    "Non Structural panels storage": "Non-structural panels storage",
    "Otherwood Habitation bois rond produced": "Otherwood log homes produced",
    "Otherwood Poteaux produced": "Otherwood poles produced",
    "Otherwood litiere et paillis produced": "Otherwood animal bedding and mulch produced",
    "Poteaux storage": "Poles storage",
    "Otherwood storage": "Log homes storage",
    "Recycling Coproducts end-use": "Sawnwood coproducts recovery",
    "Residential Bioenergy advanced": "Residential bioenergy, high-efficiency appliance",
    "Residential Bioenergy advanced incineration gaz fraction": "Residential bioenergy, high-efficiency appliance, gas fraction",
    "Residential Bioenergy furnace": "Residential bioenergy, furnace",
    "Residential Bioenergy furnace incineration gaz fraction": "Residential bioenergy, furnace, gas fraction",
    "Solid bioenergy feedstock gaz fraction": "Solid bioenergy feedstock, gas fraction",
    "Solid wood retired incineration gaz fraction": "Solid wood retired, incineration, gas fraction",
    "Biomethanisation combustion": "Biomethane combustion",
    "Industrial Roundwood": "Industrial roundwood",
    "P&P Recycled biomass": "Recycled P&P biomass",
    "Panels Recycled products": "Recycled Panels products",
    "Cardboards produced": "Cardboard produced",
    "Cardboards storage": "Cardboard storage",
    "Papers produced": "Paper produced",
    "Papers storage": "Paper storage",
    "Unused Otherwood biomass": "Residual Otherwood biomass",
    "Unused P&P biomass": "Residual P&P biomass",
    "Unused Panels biomass": "Residual Panels biomass",
    "Unused Sawnwood biomass": "Residual Sawnwood biomass",
    # --- Splits (sans le préfixe « Split, ») ---
    "Compostage": "Composting",
    "Solid bioenergy feedstock, incineration": "Solid bioenergy feedstock, combustion",
    "Biomethanisation, combustion": "Biomethane combustion",
    "Industrial allocation": "Industrial roundwood",
    "Harvested Roundwood": "Harvested roundwood",
    "Bioenergy allocation": "Bioenergy",
    "Panels allocation": "Panels",
    "Otherwood allocation": "Otherwood",
    "P&P, Recycled biomass": "Recycled P&P biomass",
    "Panels, Recycled products": "Recycled Panels products",
    "Cardboards end-use": "Cardboard end-use",
    "Papers end-use": "Paper end-use",
    "Otherwood habitation end-use": "Otherwood log homes end-use",
    "Otherwood litiere et paillis end-use": "Otherwood animal bedding and mulch end-use",
    "Otherwood poteaux end-use": "Otherwood poles end-use",
    "Recycling, Coproducts end-use": "Sawnwood coproducts recovery",
    "Residential bioenergy": "Residential bioenergy",
    "Residential Bioenergy, advanced, combustion": "Residential bioenergy, high-efficiency appliance, gas fraction",
    "Residential Bioenergy, advanced, incineration": "Residential bioenergy, high-efficiency appliance, combustion",
    "Residential Bioenergy, furnace, combustion": "Residential bioenergy, furnace, gas fraction",
    "Residential Bioenergy, furnace, incineration": "Residential bioenergy, furnace, combustion",
    "Institutional heat, combustion, gaz fraction": "Institutional heat, gas fraction",
    "Solid bioenergy feedstock, gaz fraction": "Solid bioenergy feedstock, gas fraction",
    "Solid wood retired, incineration, gaz fraction": "Solid wood retired, incineration, gas fraction",
    "Unused Otherwood end-use": "Residual Otherwood biomass",
    "Unused P&P biomass retirement": "Residual P&P biomass",
    "Unused Panels biomass end-use": "Residual Panels biomass",
    "Unused Sawnwood biomass end-use": "Residual Sawnwood biomass",
}

_MISSING_FR = set()


_LF_KIND = {"fr": {"msw": "Enfouissement municipal", "industrial": "Enfouissement industriel"},
            "en": {"msw": "Municipal landfill", "industrial": "Industrial landfill"}}
_LF_PROD = {"fr": {"p&p": "P&P", "sawnwood": "Sciage", "panels": "Panneaux", "otherwood": "Autre"},
            "en": {"p&p": "P&P", "sawnwood": "Sawnwood", "panels": "Panels", "otherwood": "Otherwood"}}


def _landfill(name, lang):
    """Nœuds et Splits d'enfouissement : « <préfixe> <contexte> », virgules ou non.
    Le produit est facultatif : « CH4 produced Landfilled MSW P&P » comme
    « CH4 produced Landfilled MSW » sont traduits."""
    flat = _norm(name.replace(",", " "))
    m = re.match(r"^(.*?)\s*(?:Landfilled\s+)?(MSW|industrial)"
                 r"(?:\s+(P&P|Sawnwood|Panels|Otherwood))?"
                 r"(?:\s+(Site \d))?$", flat, re.I)
    if not m:
        return None
    pre, kind, prod, site = m.groups()
    ctx = _LF_KIND[lang][kind.lower()] + (" " + _LF_PROD[lang][prod.lower()] if prod else "")
    table = {_key(k): v for k, v in (FR_PREFIX if lang == "fr" else EN_PREFIX).items()}
    ms = re.match(r"^Site (\d)\b", pre, re.I)
    if not pre:
        tete = None
    elif _key(pre) in table:
        tete = table[_key(pre)]
    elif ms:                                   # « Site 2 A », « Site 1 Stockage »… : un site de stockage
        tete = table["site %s stockage" % ms.group(1)]
    else:
        return None
    # ordre choisi : <préfixe>, <site>, <contexte>. Le numéro de site vient juste après
    # ce que fait l'élément, le contexte d'enfouissement ferme la phrase.
    if tete is None:
        return ctx if not site else "%s, %s" % (site, ctx[0].lower() + ctx[1:])
    return ", ".join([tete] + ([site] if site else []) + [ctx[0].lower() + ctx[1:]])


def disp(n):
    """Nom affiché d'un nœud (les repères de boucle sont déjà traduits)."""
    return n["Name"] if n.get("loop") else tr(n["Name"])


_NK = {}


def _names(lang):
    """Table de traduction indexée sans différence d'espaces ni de majuscules."""
    if lang not in _NK:
        _NK[lang] = {_key(k): v for k, v in (NAMES_FR if lang == "fr" else NAMES_EN).items()}
    return _NK[lang]


def tr(name):
    """Nom d'un nœud ou d'un Split dans la langue courante."""
    n = _norm(name)
    split = n.lower().startswith("split,")
    core = _norm(n[len("Split,"):]) if split else n
    if LANG != "fr":
        en = _names("en").get(_key(core)) or _landfill(core, "en") or core
        return ("Split, " + en) if split else en
    fr = _names("fr").get(_key(core)) or _landfill(core, "fr")
    if fr is None:
        _MISSING_FR.add(n)
        fr = core
    return ("Répartition, " + fr) if split else fr


# Nœuds à dessiner sur le même étage qu'un nœud de référence (les stocks de panneaux
# sont plus bas que les autres stocks dans le tableau Miro)
ALIGN_WITH = {
    "Structural panels storage": "Sawnwood storage",
    "Non Structural panels storage": "Sawnwood storage",
}

_SAID = set()


def _say(*a):
    """Affiche un message une seule fois (le dessin est construit pour chaque langue et chaque vue)."""
    m = " ".join(str(x) for x in a)
    if m not in _SAID:
        _SAID.add(m)
        print(m)


# ----------------------------------------------------------------------------
# Processus Miro (rectangles jaunes)
# ----------------------------------------------------------------------------
# Rectangles communs à plusieurs réservoirs (relevés sur le tableau Miro)
PROCESS_GROUPS = {
    "Split, Bioenergy allocation": ["Bioenergy production", "Coproducts recycled to Bioenergy"],
    "Split, P&P": ["P&P production", "Coproducts recycled to P&P"],
    "Panels allocation": ["Panels production", "Coproducts recycled to Panels"],
    # commune aux trois biomasses recyclées. Le nom ne mentionne plus de destination :
    # en V4 le rectangle porte deux sorties, vers les panneaux et vers les autres usages.
    "Split, P&P retirement": ["Papers storage", "Cardboards storage", "Pulp storage"],
    # fin de vie commune aux six stocks de bois massif. Si leurs sorties diffèrent
    # (architecture antérieure à la V4), le script retombe sur un rectangle par stock.
    "Split, Solid wood retirement": ["Sawnwood storage", "Engineered wood storage",
                                     "Structural panels storage", "Non Structural panels storage",
                                     "Poteaux storage", "Otherwood storage"],
    # repli par famille de produits, utilisé seulement si le rectangle commun ci-dessus
    # n'a pas pu être formé (un groupe dont un membre est déjà pris est ignoré)
    "Split, Sawnwood retirement": ["Sawnwood storage", "Engineered wood storage"],
    "Split, Panels retirement": ["Structural panels storage", "Non Structural panels storage"],
    "Otherwood retirement": ["Poteaux storage", "Otherwood storage"],
    "Split, Landfilled, industrial Otherwood": ["Landfilled industrial Otherwood", "Litiere storage"],
    "Split, Solid bioenergy feedstock, incineration": ["Bioenergy feedstock P&P", "Bioenergy feedstock Sawnwood",
                                                       "Bioenergy feedstock Panels", "Bioenergy feedstock Otherwood"],
    "Split, Land application": ["Land application", "Compostage to epandage"],
}

# Rectangles propres à un réservoir dont le nom ne suit pas la règle « Split, <réservoir> »
PROCESS_NAMES = {
    "Roundwood_GCBM": "Harvested Roundwood",
    "Industrial Roundwood": "Industrial allocation",
    "Otherwood production": "Otherwood allocation",
    "Sawnwood production": "Split, Sawnwood",
    "P&P Recycled biomass": "Split, P&P, Recycled biomass",
    "Panels Recycled products": "Split, Panels, Recycled products",
    "Papers produced": "Papers end-use",
    "Cardboards produced": "Cardboards end-use",
    "Pulp produced": "Pulp end-use",
    "Sawnwood produced": "Sawnwood end-use",
    "Engineered wood produced": "Engineered wood end-use",
    "Coproducts produced": "Coproducts Sawnwood end-use",          # alimenté par Sawnwood production
    "Coproducts Otherwood produced": "Coproducts Otherwood end-use",
    "Unused Sawnwood biomass": "Unused Sawnwood biomass end-use",
    "Unused Panels biomass": "Unused Panels biomass end-use",
    "Unused Otherwood biomass": "Unused Otherwood end-use",
    "Unused P&P biomass": "Split, Unused P&P biomass retirement",
    "Otherwood Poteaux produced": "Otherwood poteaux end-use",
    "Otherwood Habitation bois rond produced": "Otherwood habitation end-use",
    "Otherwood litiere et paillis produced": "Otherwood litiere et paillis end-use",
    "Recycling Coproducts end-use": "Split, Recycling, Coproducts end-use",
    "Structural panels": "Split, Structural panels",
    "Non Structural panels": "Split, Non Structural panels",
    "Non Residential": "Split, Non-residential bioenergy",
    "Residential": "Split, Residential bioenergy",
    "Institutional heat": "Split, Institutional heat, combustion",
    "Biofuel transport": "Split, Biofuel transport, combustion",
    "Biofuel non-transport": "Split, Biofuel non-transport, combustion",
    "Residential Bioenergy furnace": "Split, Residential Bioenergy, furnace, incineration",
    "Residential Bioenergy advanced": "Split, Residential Bioenergy, advanced, incineration",
    "Residential Bioenergy furnace incineration gaz fraction": "Split, Residential Bioenergy, furnace, combustion",
    "Residential Bioenergy advanced incineration gaz fraction": "Split, Residential Bioenergy, advanced, combustion",
    # nom tel qu'écrit dans Miro sous « Institutional heat, combustion, gaz fraction »
    "Institutional heat combustion gaz fraction": "Split, Institutional heat, combustion, gaz fraction",
    "Bio-CH4 Unused P&P": "Split, Biomethanisation",
    "Compostage Unused P&P": "Split, Compostage",
    "Biomethanisation combustion": "Split, Biomethanisation, combustion",
    "Solid bioenergy feedstock gaz fraction": "Split, Solid bioenergy feedstock, gaz fraction",
    "Solid wood retired incineration gaz fraction": "Split, Solid wood retired, incineration, gaz fraction",
}

_PRODS = {"p&p": "P&P", "sawnwood": "Sawnwood", "panels": "Panels", "otherwood": "Otherwood"}


def with_split(name):
    """Tous les rectangles commencent par « Split, »."""
    return name if name.startswith("Split,") else "Split, " + name


def process_name(src_name):
    """Nom Miro du rectangle qui suit un réservoir."""
    nm = " ".join(src_name.split())
    if nm in PROCESS_NAMES:
        return with_split(PROCESS_NAMES[nm])
    # le produit est facultatif : depuis que les fins de vie sont fusionnées en amont,
    # les nœuds d'enfouissement n'en portent plus
    m = re.match(r"^(.*?)\s*(?:Landfilled|Lanfilled)?\s*(MSW|industrial)"
                 r"(?:\s+(P&P|sawnwood|Sawnwood|Panels|Otherwood))?$", nm, re.I)
    if m and m.group(3) is None and not re.search(r"lan?dfilled", nm, re.I):
        m = None            # « Solid wood retired Industrial » n'est pas un enfouissement :
                            # sans nom de produit, le mot « Landfilled » devient obligatoire
    if m:
        pre, kind = m.group(1).strip(), m.group(2)
        prod = _PRODS[m.group(3).lower()] if m.group(3) else None
        tail = f"Landfilled, {kind} {prod}" if prod else f"Landfilled, {kind}"
        site = re.match(r"^Site\s*(\d)", pre, re.I)
        if site:
            return f"Split, CH4/CO2, {tail}, Site {site.group(1)}"
        if pre == "":
            return f"Split, {tail}"
        if pre.lower().startswith("ch4 produc"):
            return f"Split, CH4 produced, {tail}"
        if pre.lower().startswith("ch4 fugitive to atmosphere"):
            return f"Split, CH4 fugitive, {tail}"
        return f"Split, {pre}, {tail}"
    return with_split(nm)


def fit_rect_label(name):
    toks = tokenize(name)
    size = 13.0
    while size >= 7:
        lh = size * 1.15
        lines = wrap(toks, RECT_W - 14, size)
        if len(lines) * lh <= RECT_H - 8 and all(text_w(l, size) <= RECT_W - 10 for l in lines):
            return lines, size, lh
        size -= 0.5
    return wrap(toks, RECT_W - 10, 7), 7, 8


class TagPlacer:
    """Place les étiquettes sur leur propre connecteur, sur un tronçon droit,
    sans jamais tomber sur un coin, un croisement ou un autre trait."""

    def __init__(self, circles, edges, rects=()):
        self.placed = []
        self.rects = [(rx - RECT_W / 2 - 3, ry - RECT_H / 2 - 3, rx + RECT_W / 2 + 3, ry + RECT_H / 2 + 3)
                      for (rx, ry) in rects]
        self.cell = 60
        self.grid = defaultdict(list)
        self.cgrid = defaultdict(list)
        self.sgrid = defaultdict(list)      # segments de tous les connecteurs
        self.segs = []
        self.vgrid = defaultdict(list)      # sommets (coins) des connecteurs
        for (cx, cy) in circles:
            for gx in range(int((cx - R - 60) // self.cell), int((cx + R + 60) // self.cell) + 1):
                for gy in range(int((cy - R - 60) // self.cell), int((cy + R + 60) // self.cell) + 1):
                    self.cgrid[(gx, gy)].append((cx, cy))
        seen = set()
        for e in edges:
            gid = e["lead"]["gid"]
            src = e["From"]
            for (xa, ya), (xb, yb) in zip(e["pts"][:-1], e["pts"][1:]):
                key = (round(xa, 1), round(ya, 1), round(xb, 1), round(yb, 1), gid, src)
                if key in seen:
                    continue
                seen.add(key)
                sid = len(self.segs)
                self.segs.append((min(xa, xb), min(ya, yb), max(xa, xb), max(ya, yb), gid, src))
                for gx in range(int(min(xa, xb) // self.cell), int(max(xa, xb) // self.cell) + 1):
                    for gy in range(int(min(ya, yb) // self.cell), int(max(ya, yb) // self.cell) + 1):
                        self.sgrid[(gx, gy)].append(sid)
            for (x, y) in e["pts"]:
                self.vgrid[(int(x // self.cell), int(y // self.cell))].append((x, y, gid))

    def penalty(self, x, y, w, gid, src, h=15, relax=False):
        x0, y0, x1, y1 = x - w / 2 - 2, y - h / 2 - 2, x + w / 2 + 2, y + h / 2 + 2
        pen, seen = 0, set()
        for gx in range(int(x0 // self.cell), int(x1 // self.cell) + 1):
            for gy in range(int(y0 // self.cell), int(y1 // self.cell) + 1):
                for rid in self.grid.get((gx, gy), ()):
                    if rid in seen:
                        continue
                    seen.add(rid)
                    a0, b0, a1, b1 = self.placed[rid]
                    if x0 < a1 and x1 > a0 and y0 < b1 and y1 > b0:
                        pen += 3
        for gx in range(int(x0 // self.cell), int(x1 // self.cell) + 1):
            for gy in range(int(y0 // self.cell), int(y1 // self.cell) + 1):
                for sid in self.sgrid.get((gx, gy), ()):
                    if ("s", sid) in seen:
                        continue
                    seen.add(("s", sid))
                    sx0, sy0, sx1, sy1, g, gs = self.segs[sid]
                    if gs == src and g != gid and sx0 - 0.5 <= x <= sx1 + 0.5 and sy0 - 0.5 <= y <= sy1 + 0.5:
                        pen += 5                     # tronc commun : le label doit être après l'embranchement
                        continue
                    if relax and gs == src:
                        continue                     # ligne sœur voisine (même départ) : tolérée
                    if (g != gid or gs != src) and sx0 <= x1 and sx1 >= x0 and sy0 <= y1 and sy1 >= y0:
                        pen += 2                     # un autre trait passe sous l'étiquette
                for (vx, vy, g) in self.vgrid.get((gx, gy), ()):
                    if g == gid and x0 - 6 <= vx <= x1 + 6 and y0 - 6 <= vy <= y1 + 6:
                        pen += 2                     # un coin du trait sous l'étiquette
        for (cx, cy) in self.cgrid.get((int(x // self.cell), int(y // self.cell)), ()):
            dx = max(x0 - cx, 0, cx - x1)
            dy = max(y0 - cy, 0, cy - y1)
            if dx * dx + dy * dy < (R + 3) ** 2:
                pen += 3
        for (a0, b0, a1, b1) in self.rects:
            if x0 < a1 and x1 > a0 and y0 < b1 and y1 > b0:
                pen += 3
        return pen

    def commit(self, x, y, w, h=15):
        rect = (x - w / 2 - 2, y - h / 2 - 2, x + w / 2 + 2, y + h / 2 + 2)
        rid = len(self.placed)
        self.placed.append(rect)
        for gx in range(int(rect[0] // self.cell), int(rect[2] // self.cell) + 1):
            for gy in range(int(rect[1] // self.cell), int(rect[3] // self.cell) + 1):
                self.grid[(gx, gy)].append(rid)

    NEAR, MID = 240, 520

    def on_sibling(self, x, y, gid, src):
        """Le point est-il sur un trait frère (même départ), donc sur une partie commune ?"""
        for sid in self.sgrid.get((int(x // self.cell), int(y // self.cell)), ()):
            sx0, sy0, sx1, sy1, g, gs = self.segs[sid]
            if gs == src and g != gid and sx0 - 0.5 <= x <= sx1 + 0.5 and sy0 - 0.5 <= y <= sy1 + 0.5:
                return True
        return False

    def place(self, pts, text, gid, src, limit=None, prefer_h=False):
        """Label posé sur son propre trait, le plus près possible du départ :
        1) tronçon horizontal proche du départ, sans rien recouvrir ;
        2) n'importe où dans la zone proche, sans rien recouvrir ;
        3) zone proche, en tolérant une ligne sœur (même départ) sous le label ;
        4) zone intermédiaire, sans rien recouvrir ;
        5) sinon, la position la moins gênante de la zone proche (jamais loin)."""
        w = text_w(text, 10) + 9
        dense = densify(pts, 5.0)
        total = dense[-1][2]
        t0 = 0.0
        for (x_, y_, t_) in dense:
            if t_ > 2 and not self.on_sibling(x_, y_, gid, src):
                t0 = t_
                break
        lo_near = max(30, t0 + 14)      # juste assez pour dégager la pastille de l'embranchement
        hi_near = min(t0 + self.NEAR, total - 12)
        near = [p for p in dense if lo_near <= p[2] <= hi_near] or [dense[len(dense) // 2]]
        order = []
        if prefer_h:
            acc = 0.0
            for (xa, ya), (xb, yb) in zip(pts[:-1], pts[1:]):
                L = math.hypot(xb - xa, yb - ya)
                if acc > hi_near:
                    break
                if abs(ya - yb) < 0.05 and L >= 60:
                    order += [p for p in dense if max(acc + 24, lo_near) <= p[2] <= min(acc + L - 24, hi_near)]
                acc += L
        mid = [p for p in dense if hi_near < p[2] <= min(t0 + self.MID, total - 12)]
        for cands, relax in ((order, False), (near, False), (near, True), (mid, False)):
            for (x, y, t) in cands:
                if self.penalty(x, y, w, gid, src, relax=relax) == 0:
                    self.commit(x, y, w)
                    return (x, y), (0 if not relax else 0.5), t
        best = min(near, key=lambda p: (self.penalty(p[0], p[1], w, gid, src, relax=True), p[2]))
        self.commit(best[0], best[1], w)
        return (best[0], best[1]), self.penalty(best[0], best[1], w, gid, src), best[2]


def orthogonalize(pts):
    """Redresse les tronçons presque verticaux ou presque horizontaux (écart < 2)."""
    out = [tuple(pts[0])]
    for (x, y) in pts[1:]:
        px, py = out[-1]
        if abs(x - px) < 2 and abs(y - py) >= abs(x - px):
            x = px
        elif abs(y - py) < 2:
            y = py
        out.append((x, y))
    return out


def simplify(pts):
    out = []
    for p in pts:
        if out and abs(out[-1][0] - p[0]) < 0.05 and abs(out[-1][1] - p[1]) < 0.05:
            continue
        out.append(p)
    # fusion des morceaux alignés (un point intermédiaire sur une ligne droite)
    res = []
    for p in out:
        if len(res) >= 2:
            (ax, ay), (bx, by) = res[-2], res[-1]
            if (abs(ax - bx) < 0.05 and abs(bx - p[0]) < 0.05) or (abs(ay - by) < 0.05 and abs(by - p[1]) < 0.05):
                if (p[0] - bx) * (bx - ax) >= 0 and (p[1] - by) * (by - ay) >= 0:
                    res[-1] = p
                    continue
        res.append(p)
    return res


HOP_R = 5.5


def path_with_hops(pts, hops, r=HOP_R):
    """Trace la polyligne. Chaque croisement est signalé par un saut de taille unique :
    le trait horizontal enjambe le vertical. Les croisements confondus (mêmes abscisses)
    sont fusionnés et les croisements très proches partagent un même saut."""
    d = f"M{pts[0][0]:.1f},{pts[0][1]:.1f}"
    for i in range(len(pts) - 1):
        (xa, ya), (xb, yb) = pts[i], pts[i + 1]
        xs = sorted(set(round(x, 1) for x in hops.get(i, [])))
        if abs(ya - yb) < 0.05 and xs:
            clusters = []
            for x in xs:
                if clusters and x - clusters[-1][-1] < 2 * r + 2:
                    clusters[-1].append(x)
                else:
                    clusters.append([x])
            direction = 1 if xb > xa else -1
            if direction == -1:
                clusters = [c[::-1] for c in reversed(clusters)]
            sweep = 1 if direction == 1 else 0
            for c in clusters:
                start, end = c[0] - direction * r, c[-1] + direction * r
                d += f" L{start:.1f},{ya:.1f} A{r},{r} 0 0 {sweep} {start + direction * r:.1f},{ya - r:.1f}"
                if abs((end - direction * r) - (start + direction * r)) > 0.1:
                    d += f" L{end - direction * r:.1f},{ya - r:.1f}"
                d += f" A{r},{r} 0 0 {sweep} {end:.1f},{ya:.1f}"
        d += f" L{xb:.1f},{yb:.1f}"
    return d


# ----------------------------------------------------------------------------
# Construction
# ----------------------------------------------------------------------------
_CANON = None


def canon_name(name):
    """Nom tel que l'écrit le script, si le nom du JSON n'en diffère que par des espaces
    ou des majuscules (ex. « Landfilled MSW sawnwood » -> « Landfilled  MSW Sawnwood »).
    Un nom inconnu du script est gardé tel quel."""
    global _CANON
    if _CANON is None:
        _CANON = {}
        known = [list(NAMES_EN), list(NAMES_FR), list(PROCESS_NAMES),
                 [m for ms in PROCESS_GROUPS.values() for m in ms],
                 list(ALIGN_WITH) + list(ALIGN_WITH.values()) + ["Sawnwood storage"],
                 list(SINKS)]
        for group in known:                    # les derniers groupes ont priorité
            for nm in group:
                _CANON[_key(nm)] = nm
    return _CANON.get(_key(name), name)


def build(data, interactive=False):
    if not GRAPH["name"]:
        GRAPH["brut"] = graph_name(data)
        GRAPH["name"] = graph_label(GRAPH["brut"])
    root = data[next(iter(data))] if "Nodes" not in data else data
    nodes = {int(k): dict(v, Name=canon_name(v["Name"])) for k, v in root["Nodes"].items()}
    edges = [dict(e) for e in root["Edges"].values()]
    sink_ids = {i: n["Name"] for i, n in nodes.items() if n["Name"] in SINKS}
    # contrôles de cohérence des noms : les puits sont reconnus par leur nom exact
    for nm in SINKS:
        if nm not in sink_ids.values():
            _say("Attention : puits absent du JSON (nom attendu exact) :", nm)
    has_out = {e["From"] for e in edges}
    for i, n in nodes.items():
        if i not in sink_ids and i not in has_out and not NON_DEG.search(n["Name"]):
            _say("Attention : nœud final qui n'est ni un puits connu ni un stock non dégradable,"
                 " compté comme carbone stocké :", n["Name"].strip())
    real = [i for i in nodes if i not in sink_ids]

    # 0. Processus (rectangles jaunes du tableau Miro). Chaque réservoir qui a des sorties
    #    passe par un rectangle. Certains rectangles sont communs à plusieurs réservoirs
    #    (liste PROCESS_GROUPS). Les traits réservoir -> rectangle n'ont pas de %, les
    #    pourcentages sont portés par les traits qui sortent du rectangle.
    byname = {n["Name"].strip(): i for i, n in nodes.items()}
    outs = defaultdict(list)
    for e in edges:
        outs[e["From"]].append((e["To"], round(edge_value(e), 12)))
    proc_of, procs = {}, {}
    for pname, members in PROCESS_GROUPS.items():
        ids = []
        for m in members:
            ids.append(byname.get(m))
        ids = list(dict.fromkeys(ids))   # un rectangle commun peut viser le même nœud deux fois
        if None in ids or any(q not in outs for q in ids):
            continue
        if any(q in proc_of for q in ids):
            continue        # réservoir déjà pris par un rectangle commun plus large
        if len({tuple(sorted(outs[q])) for q in ids}) != 1:
            _say("Attention : sorties différentes, rectangle non commun :", pname)
            continue
        pid = -(len(procs) + 1)
        procs[pid] = dict(name=with_split(pname), srcs=ids)
        for q in ids:
            proc_of[q] = pid
    for src in sorted(outs, key=lambda q: (nodes[q]["Y"], nodes[q]["X"])):
        if src in proc_of:
            continue
        pid = -(len(procs) + 1)
        procs[pid] = dict(name=process_name(nodes[src]["Name"]), srcs=[src])
        proc_of[src] = pid
    # contrôle : un rectangle ne doit pas porter le nom d'un réservoir du JSON, sinon
    # deux objets différents s'affichent sous la même étiquette traduite
    _node_keys = {_key(n["Name"]): n["Name"].strip() for n in nodes.values()}
    for p in procs.values():
        k = _key(re.sub(r"^Split,\s*", "", p["name"]))
        if k not in _node_keys:
            continue
        if any(_key(nodes[q]["Name"]) == k for q in p["srcs"]):
            continue        # rectangle nommé d'après son propre réservoir : normal
        _say("Attention : un rectangle porte le nom d'un autre nœud du JSON :",
             _node_keys[k], "(renommer l'un des deux)")
    new_edges = []
    for pid, p in procs.items():
        srcs = sorted(p["srcs"], key=lambda q: nodes[q]["X"])
        p["srcs"] = srcs
        nodes[pid] = dict(Name=p["name"], hub=True, Decay=False, Recycling=False,
                          X=sum(nodes[q]["X"] for q in srcs) / len(srcs),
                          Y=max(nodes[q]["Y"] for q in srcs) + 1)
        for q in srcs:
            new_edges.append(dict(From=q, To=pid, Values={"0": 1.0}, Overflow=False))   # 100% comme dans Miro
        for (t, v) in sorted(outs[srcs[0]], key=lambda tv: nodes[tv[0]]["X"]):
            new_edges.append(dict(From=pid, To=t, Values={"0": v}, Overflow=False))
    edges = new_edges
    hubs = procs
    HH = {i: (RECT_H / 2 if nodes[i].get("hub") else R) for i in nodes}
    HW = {i: (RECT_W / 2 if nodes[i].get("hub") else R) for i in nodes}

    def sep(a_, b_):
        ha, hb = bool(nodes[a_].get("hub")), bool(nodes[b_].get("hub"))
        return HW[a_] + HW[b_] + (96 if not (ha or hb) else 44 if (ha and hb) else 90)

    # 1. Étages : regroupement des réservoirs par ordonnée proche ; chaque point de
    #    regroupement a son propre étage, juste sous la plus basse de ses sources.
    real = [i for i in nodes if i not in sink_ids and not nodes[i].get("hub")]
    # alignements imposés : un nœud prend l'ordonnée d'un nœud de référence (le JSON
    # n'est pas modifié, seulement l'étage où le nœud est dessiné)
    byname_ = {_norm(n["Name"]): i for i, n in nodes.items()}
    for nm, ref in ALIGN_WITH.items():
        if nm in byname_ and ref in byname_:
            nodes[byname_[nm]] = dict(nodes[byname_[nm]], Y=nodes[byname_[ref]]["Y"])
    order = sorted(real, key=lambda i: nodes[i]["Y"])
    rows, cur = [], [order[0]]
    for i in order[1:]:
        if nodes[i]["Y"] - nodes[cur[-1]]["Y"] > 45:
            rows.append(cur)
            cur = [i]
        else:
            cur.append(i)
    rows.append(cur)
    row_tmp = {i: r for r, row in enumerate(rows) for i in row}
    # Placement des rectangles « entre » leurs réservoirs, comme dans Miro :
    #  a) cas général : étage de rectangles juste sous la plus basse des sources ;
    #  b) rectangle commun qui alimente un seul réservoir plus haut que ses sources :
    #     étage de rectangles juste au-dessus de ce réservoir ;
    #  c) rectangle dont les cibles sont sur le même étage que la source ou juste
    #     au-dessus (ex. Split, Recycling) : posé DANS l'étage de la source, entre la
    #     source et ses cibles.
    hub_at = defaultdict(list)
    inline = set()
    for hid, h in hubs.items():
        srcs = h["srcs"]
        ms = max(row_tmp[q] for q in srcs)
        reals = [t for (t, v) in outs[srcs[0]] if t not in sink_ids]
        if (len(srcs) == 1 and reals
                and all(ms - 2 <= row_tmp[t] <= ms for t in reals)
                and all(abs(nodes[t]["X"] - nodes[srcs[0]]["X"]) < 350 for t in reals)):
            inline.add(hid)
            rows[row_tmp[srcs[0]]].append(hid)
            continue
        if len(srcs) > 1 and len(reals) == 1 and 1 <= row_tmp[reals[0]] <= ms:
            hub_at[row_tmp[reals[0]] - 1].append(hid)
        else:
            hub_at[ms].append(hid)
    is_proc_row = []
    rows2 = []
    for r, row in enumerate(rows):
        rows2.append(row)
        is_proc_row.append(False)
        if hub_at.get(r):
            rows2.append(hub_at[r])
            is_proc_row.append(True)
    rows = rows2
    real = [i for row in rows for i in row]
    M = len(rows)
    row_of = {i: r for r, row in enumerate(rows) for i in row}
    RH = [max(HH[i] for i in row) for row in rows]

    # 2. Abscisses : étirement global puis écart minimal dans chaque étage. Un rectangle
    #    est placé sous sa source (ou au milieu de ses sources) ; un rectangle commun qui
    #    n'alimente qu'un seul réservoir est placé au-dessus de ce réservoir.
    xmin = min(nodes[i]["X"] for i in real if not nodes[i].get("hub"))
    X = {i: (nodes[i]["X"] - xmin) * FX + 300 for i in nodes}

    def push_row(row):
        ids = sorted(row, key=lambda i: X[i])
        for _ in range(800):
            moved = False
            for a_, b_ in zip(ids, ids[1:]):
                d = X[b_] - X[a_]
                need = sep(a_, b_)
                if d < need:
                    push = (need - d) / 2 + 0.01
                    X[a_] -= push
                    X[b_] += push
                    moved = True
            ids.sort(key=lambda i: X[i])
            if not moved:
                break

    for r, row in enumerate(rows):
        for pid in [q for q in row if q in inline]:
            src = hubs[pid]["srcs"][0]
            reals = [t for (t, v) in outs[src] if t not in sink_ids]
            above = [t for t in reals if row_of[t] < r]
            same = [t for t in reals if row_of[t] == r]
            if above:
                X[pid] = X[min(above, key=lambda t: abs(X[t] - X[src]))]
            elif same:
                t = min(same, key=lambda t: abs(X[t] - X[src]))
                X[pid] = (X[src] + X[t]) / 2
        if is_proc_row[r]:
            for pid in row:
                srcs = hubs[pid]["srcs"]
                reals = [t for (t, v) in outs[srcs[0]] if t not in sink_ids]
                if len(srcs) > 1 and len(reals) == 1:
                    X[pid] = X[reals[0]]
                else:
                    X[pid] = sum(X[q] for q in srcs) / len(srcs)
        push_row(row)
    # la cible juste au-dessus d'un rectangle « dans l'étage » est recalée pile au-dessus
    for pid in inline:
        src = hubs[pid]["srcs"][0]
        for t in [t for (t, v) in outs[src] if t not in sink_ids and row_of[t] < row_of[pid]]:
            if abs(X[t] - X[pid]) < 150 and all(abs(X[j] - X[pid]) >= sep(t, j) - 1
                                                for j in rows[row_of[t]] if j != t):
                X[t] = X[pid]
    rows_x = [sorted(X[i] for i in row) for row in rows]

    # 3. Arêtes : valeur et couleur (noir, sauf les liaisons vers les 4 exutoires finaux)
    in_edges = defaultdict(list)
    for k, e in enumerate(edges):
        e["v"] = edge_value(e)
        e["sink"] = e["To"] in sink_ids
        if e["sink"]:
            e["gas"] = sink_ids[e["To"]]
            e["color"] = SINKS[e["gas"]]["line"]
        else:
            e["color"] = C_BLACK
            in_edges[e["To"]].append(e["From"])

    # 3b. Alignement des colonnes : un réservoir un peu décalé par rapport à son parent
    #     direct (étage juste au-dessus) est recalé pile en dessous, pour éviter les
    #     petits décrochages inutiles.
    for r in range(1, M):
        for i in sorted(rows[r], key=lambda q: X[q]):
            best = None
            for p in in_edges.get(i, []):
                if row_of[p] == r - 1:
                    dx = abs(X[i] - X[p])
                    if 0.5 < dx < 60 and (best is None or dx < best[0]):
                        best = (dx, X[p])
            if best is not None:
                newx = best[1]
                if all(abs(X[j] - newx) >= sep(i, j) - 1 for j in rows[r] if j != i):
                    X[i] = newx
    # positions entières : un trait vertical l'est exactement (pas de biais d'un demi-point)
    for i in list(X):
        X[i] = float(round(X[i]))
    rows_x = [sorted(X[i] for i in row) for row in rows]
    rows_nodes = [sorted((X[i], i) for i in row) for row in rows]

    # 4. Recherche de couloirs verticaux libres de réservoirs
    lane_occ = []
    LANE_CLEAR = 28

    def blocked(x, rws):
        for r in rws:
            xs = rows_x[r]
            i = bisect.bisect_left(xs, x - (RECT_W / 2 + LANE_MARGIN))
            while i < len(xs) and xs[i] <= x + RECT_W / 2 + LANE_MARGIN:
                if abs(xs[i] - x) < HW[rows_nodes[r][i][1]] + LANE_MARGIN:
                    return True
                i += 1
        return False

    def clear_between(r, x, xt, tid):
        for (mx, mid) in rows_nodes[r]:
            if mid != tid and min(x, xt) - (HW[mid] + 6) < mx < max(x, xt) + (HW[mid] + 6):
                return False
        return True

    n_lane_clash = [0]      # couloirs verticaux attribués alors qu'aucun n'était libre

    def find_lane(xa, xt, c_lo, c_hi, gid, side=None):
        rws = range(c_lo, c_hi)
        lo, hi = 2 * c_lo, 2 * c_hi
        cands = set()
        for base in (xa, xt):
            for j in range(-50, 51):
                cands.add(float(round(base + j * LANE_STEP)))

        def cost(x):
            c = abs(x - xa) + abs(x - xt)
            for ref in (xa, xt):
                if 0.5 < abs(x - ref) < 45:
                    c += 90            # pas de petit décrochage inutile
            return c

        for x in sorted(cands, key=lambda x: (cost(x), abs(x - xt))):
            if blocked(x, rws):
                continue
            if side is not None:
                tid, tr = side
                if abs(x - xt) < 82 or not clear_between(tr, x, xt, tid):
                    continue
            if any(g != gid and abs(lx - x) < LANE_CLEAR and min(hi, l1) - max(lo, l0) > 0
                   for (lx, l0, l1, g) in lane_occ):
                continue
            lane_occ.append((x, lo, hi, gid))
            return x
        # aucun couloir libre : on superpose, faute de mieux, mais on le dit
        n_lane_clash[0] += 1
        lane_occ.append((xa, lo, hi, gid))
        return xa

    # 5. Chaque connecteur a son propre tracé et son propre label. Tous partent du même
    #    point (bas du réservoir) par un tronc vertical commun, puis se séparent à
    #    des hauteurs différentes, sans jamais partager une piste.
    leads, segs = [], defaultdict(list)
    for k, e in enumerate(edges):
        s_, t_ = e["From"], e["To"]
        if e["sink"] or not (s_ in inline or t_ in inline):
            continue
        rs, rt = row_of[s_], row_of[t_]
        if rs == rt:
            lo_, hi_ = sorted((X[s_], X[t_]))
            if not any(lo_ < X[j] < hi_ for j in rows[rs] if j not in (s_, t_)):
                e["plan"], e["dir"] = "straight", "h"
        elif s_ in inline and rt < rs and abs(X[s_] - X[t_]) < 1 and not blocked(X[s_], range(rt + 1, rs)):
            e["plan"], e["dir"] = "straight", "up"
            lane_occ.append((X[s_], 2 * (rt + 1), 2 * rs, k))
    order_e = sorted(range(len(edges)),
                     key=lambda k: (row_of[edges[k]["From"]], X[edges[k]["From"]], edges[k]["sink"], k))
    for k in order_e:
        e = edges[k]
        src = e["From"]
        x0 = X[src]
        a = row_of[src] + 1
        # deux connecteurs de même valeur vers le même réservoir (sources différentes)
        # partagent le même identifiant de groupe : ils peuvent se rejoindre et se confondre
        gid = k
        ld = dict(src=src, edges=[k], sink=e["sink"], v=e["v"], xg=x0, gid=gid, ord=k, a=a)
        e["lead"] = ld
        leads.append(ld)
        if e.get("plan") == "straight":
            continue

        def mkseg(c, x_a, x_b, ups, downs):
            seg = dict(lo=min(x_a, x_b), hi=max(x_a, x_b), gid=gid, src=src, ups=ups, downs=downs, track=None)
            segs[c].append(seg)
            return seg

        if e["sink"]:
            e["plan"] = "sink"
            e["xL"] = find_lane(x0, x0, a, M, gid) if a < M else x0
            if abs(e["xL"] - x0) > 0.5:
                e["seg1"] = mkseg(a, x0, e["xL"], [x0], [e["xL"]])
        else:
            T = e["To"]
            xt, b = X[T], row_of[T]
            e["b"] = b
            if b == a:
                e["plan"] = "adj"
                if abs(xt - x0) > 0.5:
                    e["seg1"] = mkseg(a, x0, xt, [x0], [xt])
            elif b > a:
                e["plan"] = "lane"
                e["xL"] = find_lane(x0, xt, a, b, gid)
                if abs(e["xL"] - x0) > 0.5:
                    e["seg1"] = mkseg(a, x0, e["xL"], [x0], [e["xL"]])
                if abs(e["xL"] - xt) > 0.5:
                    e["seg2"] = mkseg(b, e["xL"], xt, [e["xL"]], [xt])
            else:
                # cible plus haut ou sur le même étage : on monte le long d'un couloir libre
                # puis on entre directement par le côté du réservoir, sans passer par-dessus
                e["plan"] = "side"
                e["xL"] = find_lane(x0, xt, b, a, gid, side=(T, b))
                e["seg1"] = mkseg(a, x0, e["xL"], [x0, e["xL"]], [])

    # 5b. Une seule ligne horizontale par départ : toutes les branches noires d'un même
    #     départ partagent la même piste (présentation « Miro »), d'où un seul embranchement.
    #     Les branches colorées vers les émissions gardent chacune leur trait.
    bus_of = defaultdict(list)
    for k, e in enumerate(edges):
        if e.get("plan") in ("adj", "lane", "side") and e.get("seg1") is not None:
            bus_of[e["From"]].append(k)
    for src, ks in bus_of.items():
        if len(ks) < 2:
            continue
        a = row_of[src] + 1
        old = [edges[k]["seg1"] for k in ks]
        for sg in old:
            segs[a].remove(sg)
        x0 = X[src]
        bus = dict(lo=min(sg["lo"] for sg in old), hi=max(sg["hi"] for sg in old), gid=("bus", src),
                   src=src, ups=[x0] + [u for sg in old for u in sg["ups"] if abs(u - x0) > 0.5],
                   downs=[d for sg in old for d in sg["downs"]], track=None)
        segs[a].append(bus)
        for k in ks:
            edges[k]["seg1"] = bus
    # les traits directement sous le départ passent aussi par cette ligne (même hauteur)
    for k, e in enumerate(edges):
        if e.get("plan") in ("adj", "lane") and e.get("seg1") is None and e["From"] in bus_of \
                and len(bus_of[e["From"]]) >= 2:
            e["seg1"] = edges[bus_of[e["From"]][0]]["seg1"]

    # 6. Attribution des pistes : un segment dont la verticale « montante » tombe dans
    #    l'intervalle d'un autre se place au-dessus de lui (et inversement pour les
    #    descentes), ce qui évite le maximum de croisements.
    PAD = 26
    n_tracks = {}
    for c in range(M + 1):
        S = segs.get(c, [])
        n = len(S)
        preds = [set() for _ in range(n)]
        # contrainte forte : B arrive sur la verticale d'où part A (même x). Si B
        # passait au-dessus, son flux rejoindrait le tronc de A avant que A ne s'en
        # sépare, et l'on ne saurait plus quelle branche porte quoi. Un croisement,
        # lui, est signalé par un saut : c'est donc l'autre contrainte qui cède.
        strong = [set() for _ in range(n)]
        for i, A in enumerate(S):
            for j, B in enumerate(S):
                if i != j and A["gid"] != B["gid"] and A["src"] != B["src"] and \
                        any(abs(d - u) < 0.5 for d in B["downs"] for u in A["ups"]):
                    strong[j].add(i)
        for i, A in enumerate(S):
            for j, B in enumerate(S):
                if i == j or A["gid"] == B["gid"]:
                    continue
                same = A["src"] == B["src"]
                # une verticale commune aux deux (même départ ou même arrivée) n'impose rien
                up_c = any(B["lo"] - 4 <= u <= B["hi"] + 4 and all(abs(u - u2) > 0.5 for u2 in B["ups"])
                           for u in A["ups"])
                dn_c = any(A["lo"] - 4 <= d <= A["hi"] + 4 and all(abs(d - d2) > 0.5 for d2 in A["downs"])
                           for d in B["downs"])
                if (not same and up_c) or dn_c:
                    preds[j].add(i)
        placed, tracks = set(), []
        while len(placed) < n:
            avail = [i for i in range(n) if i not in placed and preds[i] <= placed]
            if not avail:
                rem = [i for i in range(n) if i not in placed]
                ok = [q for q in rem if strong[q] <= placed] or rem
                avail = [min(ok, key=lambda q: (len(preds[q] - placed), S[q]["lo"]))]
            i = min(avail, key=lambda q: (S[q]["lo"], S[q]["hi"]))
            seg = S[i]
            # après une contrainte forte, une piste vide : le flux qui continue tout droit
            # garde un tronçon à lui, assez long pour porter son pourcentage
            kmin = max([S[p]["track"] + 1 for p in preds[i] if p in placed]
                       + [S[p]["track"] + 2 for p in strong[i] if p in placed] or [0])
            kk = kmin
            while True:
                while len(tracks) <= kk:
                    tracks.append([])
                if all(o["gid"] == seg["gid"] or o["hi"] + PAD < seg["lo"] or o["lo"] - PAD > seg["hi"]
                       for o in tracks[kk]):
                    break
                kk += 1
            tracks[kk].append(seg)
            seg["track"] = kk
            placed.add(i)
            # réserve la piste suivante autour de la verticale partagée : personne ne
            # viendra croiser le tronçon propre du flux qui continue tout droit
            for j in range(n):
                if i in strong[j]:
                    for u in seg["ups"]:
                        if any(abs(d - u) < 0.5 for d in S[j]["downs"]):
                            while len(tracks) <= kk + 1:
                                tracks.append([])
                            tracks[kk + 1].append(dict(lo=u - 4, hi=u + 4, gid=("réserve", u), src=None))
        n_tracks[c] = len(tracks)

    # 7. Géométrie verticale
    def find_row(name):
        """Étage d'un nœud repère. Renvoie None s'il est absent, jamais 0 par défaut :
        l'étage 0 est un étage valide, le confondre avec « introuvable » décale les
        bandeaux et les en-têtes."""
        for i, n in nodes.items():
            if _key(n["Name"]) == _key(name):
                return row_of[i]
        _say("Attention : nœud repère introuvable, mise en page approchée :", name,
             "(voir LANDMARKS en tête de script)")
        return None

    def gap(c):
        # sous un étage de rectangles, les traits portent un % : on garde de la place
        return ROW_GAP if (c >= 1 and is_proc_row[c - 1]) else 44

    r_prod = row_or(find_row(LANDMARKS["prod"]), 2)
    extra = {r_prod: 100}
    H = {}
    for c in range(M + 1):
        n = n_tracks.get(c, 0)
        if c == 0:
            H[c] = 50 + n * TS
        elif c < M:
            tail = 58 if (c >= 1 and is_proc_row[c - 1]) else 36
            H[c] = max(72 if is_proc_row[c] else 100, gap(c) + n * TS + tail) + extra.get(c, 0)
        else:
            H[c] = gap(c) + n * TS + 26 + 34 * 3 + 90 + 2 * SINK_RY_
    ch_top, y_row = {}, {}
    ch_top[0] = 290
    y_row[0] = ch_top[0] + H[0] + RH[0]
    for c in range(1, M + 1):
        ch_top[c] = y_row[c - 1] + RH[c - 1]
        if c < M:
            y_row[c] = ch_top[c] + H[c] + RH[c]

    def ytrack(c, k):
        return ch_top[c] + gap(c) + extra.get(c, 0) + k * TS

    Y = {i: y_row[row_of[i]] for i in real}
    base_bus = ch_top[M] + gap(M) + n_tracks.get(M, 0) * TS + 26
    bus_y = {g: base_bus + 34 * j for j, g in enumerate(GAS_ORDER)}
    sink_cy = base_bus + 34 * 3 + 90 + SINK_RY_
    for i in sink_ids:
        X[i] = (nodes[i]["X"] - xmin) * FX + 300
        Y[i] = sink_cy

    # point d'arrivée unique par exutoire : sommet de l'ellipse
    for sid, gas in sink_ids.items():
        for k, e in enumerate(edges):
            if e["To"] == sid:
                e["ex"], e["ey"] = X[sid], Y[sid] - SINK_RY_

    # 8. Chemins : tronc vertical, branche horizontale, couloir, arrivée
    for k, e in enumerate(edges):
        src = e["From"]
        if e.get("plan") == "straight":
            T = e["To"]
            if e["dir"] == "h":
                sg = 1 if X[T] > X[src] else -1
                y_ = Y[src]
                xs_, xe_ = X[src] + sg * HW[src], X[T] - sg * HW[T]
                pts = [(xs_, y_), (xe_ - sg * 8, y_)]
                tip = (xe_, y_, 0 if sg == 1 else 180)
            else:
                pts = [(X[src], Y[src] - HH[src]), (X[src], Y[T] + HH[T] + 8)]
                tip = (X[src], Y[T] + HH[T], -90)
            e["pts"], e["tip"] = pts, tip
            continue
        x0, y0 = X[src], Y[src] + HH[src]
        a = row_of[src] + 1
        s1, s2 = e.get("seg1"), e.get("seg2")
        ya = ytrack(a, s1["track"]) if s1 else None
        pts = [(x0, y0)]
        if e["plan"] == "sink":
            yb_ = bus_y[e["gas"]]
            if s1:
                pts += [(x0, ya), (e["xL"], ya)]
            pts += [(e["xL"], yb_), (e["ex"], yb_), (e["ex"], e["ey"] - 8)]
            tip = (e["ex"], e["ey"], 90)
        else:
            T = e["To"]
            xt, ytop = X[T], Y[T] - HH[T]
            if e["plan"] == "adj":
                if s1:
                    pts += [(x0, ya), (xt, ya)]
                pts += [(xt, ytop - 8)]
                tip = (xt, ytop, 90)
            elif e["plan"] == "lane":
                if s1:
                    pts += [(x0, ya), (e["xL"], ya)]
                if s2:
                    yb = ytrack(e["b"], s2["track"])
                    pts += [(e["xL"], yb), (xt, yb)]
                pts += [(xt, ytop - 8)]
                tip = (xt, ytop, 90)
            else:
                sgn = 1 if e["xL"] < xt else -1
                if nodes[T].get("hub"):
                    yc, xc = Y[T], xt - sgn * RECT_W / 2
                else:
                    yc = Y[T] - R * 0.5
                    xc = xt - sgn * R * math.cos(math.radians(30))
                pts += [(x0, ya), (e["xL"], ya), (e["xL"], yc), (xc - sgn * 8, yc)]
                tip = (xc, yc, 0 if sgn == 1 else 180)
        e["pts"] = simplify(orthogonalize(pts))
        e["tip"] = tip

    # 9. Croisements : le trait horizontal enjambe le vertical
    vsegs = []
    for k, e in enumerate(edges):
        for (xa_, ya_), (xb_, yb_) in zip(e["pts"][:-1], e["pts"][1:]):
            if abs(xa_ - xb_) < 0.05 and abs(ya_ - yb_) > 0.05:
                vsegs.append((xa_, min(ya_, yb_), max(ya_, yb_), e["lead"]["gid"], k))
    vsegs.sort(key=lambda v: (v[0], v[1], v[2]))
    vx = [v[0] for v in vsegs]
    n_cross = 0
    cross_pts = set()
    for k, e in enumerate(edges):
        e["hops"] = defaultdict(list)
        # pour chaque saut, les connecteurs qui le justifient (ceux dont le trait vertical
        # est enjambé). Si tous disparaissent, le saut doit disparaître avec eux.
        e["hopown"] = defaultdict(set)
        for i, ((xa_, ya_), (xb_, yb_)) in enumerate(zip(e["pts"][:-1], e["pts"][1:])):
            if abs(ya_ - yb_) < 0.05 and abs(xa_ - xb_) > 14:
                lo, hi = min(xa_, xb_) + 7, max(xa_, xb_) - 7
                j0, j1 = bisect.bisect_left(vx, lo), bisect.bisect_right(vx, hi)
                for (vxx, v0, v1, g, owner) in vsegs[j0:j1]:
                    if g != e["lead"]["gid"] and v0 + 3 < ya_ < v1 - 3:
                        e["hops"][i].append(vxx)
                        e["hopown"][(i, round(vxx, 1))].add(owner)
                        cross_pts.add((round(vxx), round(ya_)))

    n_cross = len(cross_pts)

    # 9b. Embranchements : un coin d'un connecteur posé à l'intérieur d'un segment d'un
    #     connecteur apparenté (même départ ou même arrivée) est un raccord -> point noir.
    by_src_e, by_dst_e = defaultdict(list), defaultdict(list)
    for k, e in enumerate(edges):
        by_src_e[e["From"]].append(k)
        by_dst_e[e["To"]].append(k)
    dots = defaultdict(set)
    dot_pairs = defaultdict(set)        # point -> paires de connecteurs qui s'y raccordent
    for k, e in enumerate(edges):
        rel = set(by_src_e[e["From"]]) | set(by_dst_e[e["To"]])
        rel.discard(k)
        for (px, py) in e["pts"][1:-1]:
            for k2 in rel:
                p2 = edges[k2]["pts"]
                for (xa_, ya_), (xb_, yb_) in zip(p2[:-1], p2[1:]):
                    if abs(xa_ - xb_) < 0.05 and abs(px - xa_) < 0.05 and \
                            min(ya_, yb_) + 0.5 < py < max(ya_, yb_) - 0.5:
                        dots[(round(px, 1), round(py, 1))] |= {k, k2}
                        dot_pairs[(round(px, 1), round(py, 1))].add((min(k, k2), max(k, k2)))
                    elif abs(ya_ - yb_) < 0.05 and abs(py - ya_) < 0.05 and \
                            min(xa_, xb_) + 0.5 < px < max(xa_, xb_) - 0.5:
                        dots[(round(px, 1), round(py, 1))] |= {k, k2}
                        dot_pairs[(round(px, 1), round(py, 1))].add((min(k, k2), max(k, k2)))
    # Un point de jonction n'a de sens que si DEUX connecteurs raccordés y subsistent.
    # Compter les connecteurs vivants ne suffit pas : il faut qu'une paire entière vive,
    # sinon le point reste affiché entre un flux présent et un flux masqué.
    dot_svg = ['<circle class="lnk dot" data-e="%s" data-p="%s" cx="%.1f" cy="%.1f" r="4" fill="%s"/>'
               % (",".join(str(q) for q in sorted(dots[(x, y)])),
                  " ".join("%d-%d" % p for p in sorted(dot_pairs[(x, y)])), x, y, C_BLACK)
               for (x, y) in sorted(dots)]

    # 10. Tracés : chaque tronçon est dessiné UNE seule fois, même s'il est partagé par
    #     plusieurs connecteurs (tronc commun, arrivée commune). Sinon la superposition
    #     rend le trait plus épais et plus foncé. Les traits colorés d'abord, les noirs ensuite.
    pieces = defaultdict(list)          # (couleur, 'h'|'v', coordonnée) -> [(début, fin, sauts, arêtes)]
    n_oblique = [0]
    for ke, e in enumerate(edges):
        p = e["pts"]
        for i, ((xa_, ya_), (xb_, yb_)) in enumerate(zip(p[:-1], p[1:])):
            if abs(ya_ - yb_) < 0.05 and abs(xa_ - xb_) >= 0.05:
                pieces[(e["color"], "h", round(ya_, 1))].append(
                    (min(xa_, xb_), max(xa_, xb_), list(e["hops"].get(i, [])), {ke}))
            elif abs(xa_ - xb_) < 0.05 and abs(ya_ - yb_) >= 0.05:
                pieces[(e["color"], "v", round(xa_, 1))].append((min(ya_, yb_), max(ya_, yb_), [], {ke}))
            elif abs(xa_ - xb_) >= 0.05 or abs(ya_ - yb_) >= 0.05:
                # tronçon oblique (ne devrait plus arriver) : dessiné tel quel, jamais supprimé
                pieces[(e["color"], "d", (round(xa_, 1), round(ya_, 1), round(xb_, 1), round(yb_, 1)))] \
                    .append((0, 0, [], {ke}))
                n_oblique[0] += 1
    merged = []
    for (col, t, c), lst in pieces.items():
        lst.sort(key=lambda q: q[0])
        cur = None
        for (lo, hi, hp, ke) in lst:
            if cur and lo <= cur[1] + 0.2:
                cur[1] = max(cur[1], hi)
                cur[2].extend(hp)
                cur[3] |= ke
            else:
                if cur:
                    merged.append((col, t, c, cur))
                cur = [lo, hi, list(hp), set(ke)]
        if cur:
            merged.append((col, t, c, cur))
    # Connecteurs qui subsistent quand on masque les flux à 0 %, avec la même règle que
    # la page : depuis les racines, en ne suivant que les liens non nuls.
    _out_e = defaultdict(list)
    for k, e in enumerate(edges):
        _out_e[e["From"]].append(k)
    _has_in = {e["To"] for e in edges}
    _live_n = {i for i in nodes if i not in _has_in}
    _st = list(_live_n)
    while _st:
        u = _st.pop()
        for k in _out_e[u]:
            if edges[k]["v"] == 0:
                continue
            t = edges[k]["To"]
            if t not in _live_n:
                _live_n.add(t)
                _st.append(t)
    live_e = [e["v"] != 0 and e["From"] in _live_n for e in edges]

    paths, arrows = [], []
    if interactive:
        # chaque connecteur a son propre tracé : masquage et surbrillance exacts
        for ke, e in sorted(enumerate(edges), key=lambda q: q[1]["color"] == C_BLACK):
            sw = 2.4 if e["color"] == C_BLACK else 1.9
            d_full = path_with_hops(e["pts"], e["hops"])
            # deuxième tracé, sans les sauts dont le trait enjambé est masqué à 0 %
            hops0 = {}
            for i, xs in e["hops"].items():
                keep = [x for x in xs
                        if any(live_e[o] for o in e["hopown"].get((i, round(x, 1)), ()))]
                if keep:
                    hops0[i] = keep
            d_zero = path_with_hops(e["pts"], hops0)
            alt = "" if d_zero == d_full else f' data-d0="{d_zero}"'
            paths.append(f'<path class="lnk" data-e="{ke}"{alt} d="{d_full}" '
                         f'stroke="{e["color"]}" stroke-width="{sw}" fill="none" '
                         f'stroke-linejoin="round" stroke-linecap="square"/>')
            arrows.append('<g class="lnk" data-e="%d">%s</g>'
                          % (ke, arrow(e["tip"][0], e["tip"][1], e["tip"][2], e["color"])))
    for (col, t, c, (lo, hi, hp, kes)) in ([] if interactive else
                                           sorted(merged, key=lambda m: m[0] == C_BLACK)):
        sw = 2.4 if col == C_BLACK else 1.9
        if t == "d":
            d = f"M{c[0]:.1f},{c[1]:.1f} L{c[2]:.1f},{c[3]:.1f}"
        elif t == "h":
            pts_ = [(lo, c), (hi, c)]
            d = path_with_hops(pts_, {0: [x for x in hp if lo + 1 < x < hi - 1]})
        else:
            d = f"M{c:.1f},{lo:.1f} L{c:.1f},{hi:.1f}"
        paths.append(f'<path class="lnk" data-e="{",".join(str(q) for q in sorted(kes))}" d="{d}" '
                     f'stroke="{col}" stroke-width="{sw}" fill="none" stroke-linecap="square"/>')
    tip_of = defaultdict(list)
    if interactive:
        tip_of = None
    for ke, e in ([] if interactive else enumerate(edges)):
        tip_of[(round(e["tip"][0], 1), round(e["tip"][1], 1), e["tip"][2], e["color"])].append(ke)
    seen_tip = set()
    for ke, e in ([] if interactive else sorted(enumerate(edges), key=lambda q: not q[1]["sink"])):
        key = (round(e["tip"][0], 1), round(e["tip"][1], 1), e["tip"][2], e["color"])
        if key in seen_tip:
            continue                      # une seule flèche par point d'arrivée
        seen_tip.add(key)
        arrows.append('<g class="lnk" data-e="%s">%s</g>' % (
            ",".join(str(q) for q in sorted(tip_of[key])),
            arrow(e["tip"][0], e["tip"][1], e["tip"][2], e["color"])))

    # 11. Étiquettes : une par connecteur, sur sa propre branche, jamais sur un coin,
    #     un croisement ou un autre trait
    placer = TagPlacer([(X[i], Y[i]) for i in real if not nodes[i].get("hub")], edges,
                       [(X[i], Y[i]) for i in real if nodes[i].get("hub")])
    tags = []
    n_bad = 0
    for ld in sorted(leads, key=lambda l: (l["sink"], l["ord"])):
        e = edges[ld["edges"][0]]
        if ld["v"] is None:
            continue
        txt = fmt_val(ld["v"])
        (x, y), pen, _arc = placer.place(e["pts"], txt, ld["gid"], ld["src"], prefer_h=True)
        pen = 0 if pen == 0.5 else pen
        n_bad += 1 if pen else 0
        tags.append('<g class="lnk" data-e="%d">%s</g>' % (ld["ord"], tag_svg(x, y, txt)))
    # contrôle : chaque connecteur doit être entièrement couvert par les tronçons dessinés
    drawn_h = defaultdict(list)
    drawn_v = defaultdict(list)
    for (col, t, c, (lo, hi, hp, kes)) in merged:
        if t == "h":
            drawn_h[(col, c)].append((lo, hi))
        elif t == "v":
            drawn_v[(col, c)].append((lo, hi))
    missing = 0
    for e in edges:
        for (xa_, ya_), (xb_, yb_) in zip(e["pts"][:-1], e["pts"][1:]):
            if abs(ya_ - yb_) < 0.05 and abs(xa_ - xb_) >= 0.05:
                ok = any(lo - 0.3 <= min(xa_, xb_) and max(xa_, xb_) <= hi + 0.3
                         for (lo, hi) in drawn_h[(e["color"], round(ya_, 1))])
            elif abs(xa_ - xb_) < 0.05 and abs(ya_ - yb_) >= 0.05:
                ok = any(lo - 0.3 <= min(ya_, yb_) and max(ya_, yb_) <= hi + 0.3
                         for (lo, hi) in drawn_v[(e["color"], round(xa_, 1))])
            else:
                ok = True
            if not ok:
                missing += 1
    if (missing and not interactive) or n_oblique[0]:
        print(f"ATTENTION : {missing} tronçons non dessinés, {n_oblique[0]} tronçons obliques")
    if n_lane_clash[0]:
        _say("Attention : %d connecteurs verticaux superposés, aucun couloir libre n'a été"
             " trouvé. Le dessin reste juste mais deux traits se confondent." % n_lane_clash[0])
    info_extra = dict(labels_on_crossing=n_bad, dots=dot_svg, n_hubs=len(hubs),
                      n_shared=sum(1 for h in hubs.values() if len(h["srcs"]) > 1))

    # 12. Réservoirs
    node_svg = []
    for i, n in nodes.items():
        if i in sink_ids:
            g = SINKS[n["Name"]]
            cx, cy = X[i], Y[i]
            node_svg.append(
                f'<g class="nd" data-n="{i}">'
                f'<ellipse cx="{cx:.1f}" cy="{cy:.1f}" rx="{SINK_RX}" ry="{SINK_RY_}" '
                f'fill="{g["fill"]}" stroke="#6b6b6b" stroke-width="2"/>'
                f'<text x="{cx:.1f}" y="{cy + 16:.1f}" font-size="46" text-anchor="middle" '
                f'fill="#222">{escape(tr(n["Name"]))}</text></g>')
            continue
        x, y = X[i], Y[i]
        if n.get("hub"):
            node_svg.append(f'<g class="nd" data-n="{i}">')
            node_svg.append(f'<rect x="{x - RECT_W / 2:.1f}" y="{y - RECT_H / 2:.1f}" width="{RECT_W}" '
                            f'height="{RECT_H}" rx="3" fill="{C_HUB}" stroke="{C_HUB_STROKE}" stroke-width="1.6"/>')
            lines, size, lh = fit_rect_label(tr(n["Name"]))
            y_first = y - (len(lines) - 1) / 2 * lh + size * 0.35
            tsp = "".join(f'<tspan x="{x:.1f}" y="{y_first + j * lh:.1f}">{escape(ln)}</tspan>'
                          for j, ln in enumerate(lines))
            node_svg.append(f'<text font-size="{size}" text-anchor="middle" fill="#3A3000">{tsp}</text></g>')
            continue
        sw, extra_ = 3, ""
        if n.get("Recycling"):
            fill, stroke = C_RECYCLE, C_RECYCLE_STROKE
        elif NON_DEG.search(n["Name"]):
            fill, stroke, sw = C_NODE, C_RED, 5
        elif n.get("Decay"):
            fill, stroke, extra_ = C_NODE, C_DECAY_STROKE, ' stroke-dasharray="9 6"'
        else:
            fill, stroke = C_NODE, C_NODE_STROKE
        lines, size, lh = fit_label(tr(n["Name"]))
        node_svg.append(f'<g class="nd" data-n="{i}">')
        node_svg.append(f'<circle cx="{x:.1f}" cy="{y:.1f}" r="{R}" fill="{fill}" '
                        f'stroke="{stroke}" stroke-width="{sw}"{extra_}/>')
        y_first = y - (len(lines) - 1) / 2 * lh + size * 0.35
        tsp = "".join(f'<tspan x="{x:.1f}" y="{y_first + j * lh:.1f}">{escape(ln)}</tspan>'
                      for j, ln in enumerate(lines))
        node_svg.append(f'<text font-size="{size}" text-anchor="middle" fill="{C_TEXT}">{tsp}</text></g>')

    graph = dict(
        nodes={str(i): dict(name=tr(n["Name"]),
                            kind="sink" if i in sink_ids else ("split" if n.get("hub") else "node"),
                            decay=bool(n.get("Decay")))
               for i, n in nodes.items()},
        edges=[dict(f=str(e["From"]), t=str(e["To"]), v=e["v"]) for e in edges])

    info = dict(graph=graph, rows=M, crossings=n_cross, y_row=y_row, ch_top=ch_top, r_prod=r_prod,
                row_of=row_of, nodes=nodes, **info_extra, X=X, Y=Y, sink_ids=sink_ids, edges=edges,
                find_row=find_row, H=H, n_tracks=n_tracks, xmin=xmin)
    return info, paths, arrows, tags, node_svg


SINK_RY_ = 98


def node_meta(info, r_sto, r_eol):
    """Métadonnées de chaque élément du schéma, pour la page HTML : carbone qui y passe
    (pour 100 unités injectées), destination finale du carbone (boucles comprises),
    filières et étape (bandeaux du schéma)."""
    G, N, sinks = info["graph"], info["nodes"], info["sink_ids"]
    ids = list(G["nodes"])
    name = {str(i): N[i]["Name"] for i in N}
    hub = {str(i) for i in N if N[i].get("hub")}
    sink_of = {str(i): n for i, n in sinks.items()}
    row_of = {str(i): r for i, r in info["row_of"].items()}
    out, inn = defaultdict(list), defaultdict(list)
    for e in G["edges"]:
        out[e["f"]].append((e["t"], e["v"]))
        inn[e["t"]].append((e["f"], e["v"]))
    roots = [k for k in ids if not inn[k]]
    if not roots:
        raise SystemExit(
            "Aucun nœud d'entrée : tous les nœuds reçoivent au moins un lien, même de"
            " valeur nulle. Le carbone ne peut pas être injecté. Vérifiez qu'aucun lien"
            " ne revient vers le bois rond.")
    # 1. carbone qui passe par chaque élément (régime permanent, boucles comprises)
    F = {k: 0.0 for k in ids}
    conv, prev, stall = False, float("inf"), 0
    for _ in range(ITER_MAX):
        new = {k: 0.0 for k in ids}
        for r in roots:
            new[r] = SANKEY_IN
        for k in ids:
            if F[k]:
                for t, v in out[k]:
                    new[t] += F[k] * v
        d = max(abs(new[k] - F[k]) for k in ids)
        F = new
        if stable(d, F.values()):
            conv = True
            break
        stall = stall + 1 if d >= prev * 0.999999 else 0
        prev = d
        if stall > 200:       # l'écart ne diminue plus : boucle sans issue
            break
    if not conv:
        _say("Attention : flux du schéma non stabilisés après %d passes (écart restant %.3g)."
             " Une boucle de recyclage renvoie presque tout ce qui y entre." % (ITER_MAX, d))
    # 2. destination finale du carbone d'un élément ; N2O (sans carbone) compté à part
    cats = ("co2", "ch4", "ash", "stock")
    code = {"CO2 emissions": "co2", "CH4 emissions": "ch4", "Ash": "ash",
            "N2O emissions": "n2o"}       # sinon le filtre « N2O » masque l'exutoire N2O
    n2o = next((k for k, n in sink_of.items() if n == "N2O emissions"), None)
    fate = {k: dict.fromkeys(cats + ("n2o",), 0.0) for k in ids}
    term = set()
    for k in ids:
        if k in sink_of:
            term.add(k)
            if sink_of[k] in code:
                fate[k][code[sink_of[k]]] = 1.0
        elif not out[k]:
            term.add(k)
            fate[k]["stock"] = 1.0
    for _ in range(ITER_MAX):
        d = 0.0
        for k in ids:
            if k in term:
                continue
            nf = dict.fromkeys(cats + ("n2o",), 0.0)
            for t, v in out[k]:
                if t == n2o:
                    nf["n2o"] += v
                    continue
                for c in nf:
                    nf[c] += v * fate[t][c]
            d = max(d, max(abs(nf[c] - fate[k][c]) for c in nf))
            fate[k] = nf
        if d <= ITER_EPS:          # les parts valent au plus 1, pas de mise à l'échelle
            conv2 = True
            break
    else:
        conv2 = False
    if not conv2:
        _say("Attention : destinations finales non stabilisées après %d passes"
             " (écart restant %.3g)." % (ITER_MAX, d))
    # 3. filières : déduites de l'amont, et non du nom. Chaque nœud de production est
    #    l'origine d'une filière, et tout élément hérite de l'union des filières qui
    #    l'alimentent. Un site d'enfouissement partagé appartient donc aux quatre
    #    filières qui y déversent, ce qu'un classement par le nom ne pouvait pas voir.
    par_nom = {_key(nm): k for k, nm in name.items()}
    graine = {}
    for nm, f in FILIERES.items():
        k = par_nom.get(_key(nm))
        if k is None:
            _say("Attention : nœud de production introuvable, filière non attribuée :", nm,
                 "(voir FILIERES en tête de script)")
        else:
            graine[k] = f
    fil = {k: ({graine[k]} if k in graine else set()) for k in ids}
    common = {k for k in ids if k in sink_of or k in roots}
    for _ in range(len(ids) + 2):
        changed = False
        for k in ids:
            if k in common or k in graine:
                continue
            u = set()
            for s_, _v in inn[k]:
                u |= fil[s_]
            if u - fil[k]:
                fil[k] |= u
                changed = True
        if not changed:
            break
    # 3 bis. parts d'origine : d'où vient, en proportion, le carbone qui passe ici.
    #    Convention « origine du bois » : le carbone est étiqueté par la PREMIÈRE
    #    production qu'il traverse et garde cette étiquette jusqu'au bout. Les
    #    coproduits du sciage transformés en panneaux restent donc du sciage, parce que
    #    c'est bien l'arbre récolté pour le sciage qui porte ce carbone. Tant qu'il n'a
    #    traversé aucune production, il est compté en bois rond.
    #    C'est une notion différente des filières ci-dessus : celles-ci disent d'où le
    #    carbone PEUT venir, les parts disent dans quelle proportion il en vient.
    ORIG = tuple(sorted(set(FILIERES.values()))) + ("brut",)
    P = {k: dict.fromkeys(ORIG, 0.0) for k in ids}
    conv3, prev3, stall3 = False, float("inf"), 0
    d3 = 0.0
    for _ in range(ITER_MAX):
        new = {k: dict.fromkeys(ORIG, 0.0) for k in ids}
        for r in roots:
            new[r]["brut"] = SANKEY_IN
        for k in ids:
            pk = P[k]
            for t, v in out[k]:
                nt = new[t]
                for c in ORIG:
                    if pk[c]:
                        nt[c] += pk[c] * v
        for k, f in graine.items():      # la production étiquette ce qui ne l'est pas
            new[k][f] += new[k]["brut"]
            new[k]["brut"] = 0.0
        d3 = max(abs(new[k][c] - P[k][c]) for k in ids for c in ORIG)
        P = new
        if stable(d3, [v for k in ids for v in P[k].values()]):
            conv3 = True
            break
        stall3 = stall3 + 1 if d3 >= prev3 * 0.999999 else 0
        prev3 = d3
        if stall3 > 200:
            break
    if not conv3:
        _say("Attention : parts d'origine non stabilisées après %d passes"
             " (écart restant %.3g)." % (ITER_MAX, d3))
    ecart = max((abs(sum(P[k].values()) - F[k]) for k in ids), default=0.0)
    if ecart > 1e-6 * max(1.0, max(F.values(), default=1.0)):
        _say("Attention : la somme des parts d'origine s'écarte du carbone qui passe"
             " par l'élément, au plus de %.3g." % ecart)
    # 4. étape, pour la puce de la fiche et le filtre. Après les produits, un élément
    #    relève du recyclage s'il peut encore atteindre un nœud de recyclage, donc si
    #    son carbone est susceptible de repartir dans un produit : écocentres, centres
    #    de tri et biomasses recyclées en sont, les enfouissements et les combustions
    #    non. L'étage où l'élément est dessiné ne peut pas servir de critère, les deux
    #    chaînes y sont entrelacées. C'est pourquoi les bandeaux du schéma ne portent
    #    plus les mêmes libellés que la puce : ils nomment une région du dessin.
    recyc = {str(k) for k, n in N.items() if n.get("Recycling")}
    revient = set(recyc)
    pile = list(revient)
    while pile:
        u = pile.pop()
        for s_, _v in inn[u]:
            if s_ not in revient:
                revient.add(s_)
                pile.append(s_)

    def etape(k):
        if k in sink_of:
            return "atm"
        if k in recyc:        # un nœud de recyclage l'est où qu'il soit dessiné
            return "recy"
        r = row_of.get(k)
        if r is None or r <= r_sto:
            return "prod"
        return "recy" if k in revient else "eol"
    st = {k: etape(k) for k in ids}
    # Une Répartition n'est pas une étape en soi : elle suit le ou les nœuds qu'elle
    # dessert, sans quoi un rectangle jaune pourrait être classé autrement que le nœud
    # placé juste au-dessus de lui.
    for k in ids:
        if k in hub:
            amont = {st[s_] for s_, _v in inn[k]}
            if len(amont) == 1:
                st[k] = amont.pop()
    r6 = lambda x: float(f"{x:.6g}")
    return {k: dict(flux=r6(F[k]), fate={c: r6(v) for c, v in fate[k].items()},
                    fil=sorted(fil[k]), st=st[k],
                    pt={c: r6(P[k][c]) for c in ORIG if P[k][c]}) for k in ids}


def render(data, interactive=False):
    info, paths, arrows, tags, node_svg = build(data, interactive)
    X, Y, sink_ids, edges = info["X"], info["Y"], info["sink_ids"], info["edges"]
    y_row, ch_top, M = info["y_row"], info["ch_top"], info["rows"]

    allx = [p[0] for e in edges for p in e["pts"]] + [X[i] for i in X]
    x0 = min(allx) - 140
    x1 = max(max(allx) + 140, max(X[i] + SINK_RX for i in sink_ids)) + 480
    y0 = 20
    y1 = max(Y[i] for i in sink_ids) + SINK_RY_ + 70
    W, H = x1 - x0, y1 - y0
    bx = x1 - 200

    head = []
    cols = [(T("Bioénergie", "Bioenergy"), 620), ("P&P", 1980), (T("Sciage", "Sawnwood"), 2520),
            (T("Panneaux", "Panels"), 3640), (T("Autre", "Otherwood"), 4740)]
    yh = ch_top[info["r_prod"]] + 62
    for name, cx_o in cols:
        cx = (cx_o - info["xmin"]) * FX + 300
        w = text_w(name, 64)
        head.append(f'<text x="{cx:.0f}" y="{yh:.0f}" font-size="64" font-weight="bold" '
                    f'text-anchor="middle" fill="{C_HEAD}">{escape(name)}</text>')
        head.append(f'<line x1="{cx - w * 0.55:.0f}" y1="{yh + 14:.0f}" x2="{cx + w * 0.55:.0f}" '
                    f'y2="{yh + 14:.0f}" stroke="{C_HEAD}" stroke-width="5"/>')

    fr = info["find_row"]
    r_bio = row_or(fr(LANDMARKS["bio"]), info["r_prod"] + 4)
    r_eol = row_or(fr(LANDMARKS["eol"]), r_bio + 1)
    # « Produits » s'arrête aux nœuds Storage. Les bandeaux nomment une RÉGION du
    # dessin, pas une étape : sous les produits, la chaîne du recyclage et celle de
    # l'enfouissement partagent les mêmes étages, aucune limite horizontale ne peut les
    # séparer. Les libellés les nomment donc ensemble, et c'est la puce de la fiche qui
    # tranche élément par élément.
    r_sto = row_or(fr(LANDMARKS["sto"]), r_bio)
    bands = [(T("Produits", "Products"), ch_top[info["r_prod"]] + 40, y_row[r_sto] + R + 10),
             (T("Valorisation et bioénergie", "Recovery and bioenergy"),
              y_row[r_sto] + R + 50, ch_top[r_eol] - 30),
             (T("Fin de vie et recyclage", "End of life and recycling"),
              ch_top[r_eol] + 10, ch_top[M] - 10),
             (T("Atmosphère", "Atmosphere"), ch_top[M] + 10, y1 - 40)]
    for name, ya, yb in bands:
        cy = (ya + yb) / 2
        # le libellé est tourné : il doit tenir dans la HAUTEUR du bandeau, sans quoi il
        # déborde sur les bandeaux voisins. On réduit la police plutôt que de tronquer.
        fs, place = 64, max(1.0, (yb - ya) - 40)
        if text_w(name, fs) > place:
            fs = max(32, int(fs * place / text_w(name, fs)))
        head.append(f'<line x1="{bx}" y1="{ya:.0f}" x2="{bx}" y2="{yb:.0f}" stroke="{C_HEAD}" '
                    f'stroke-width="5" stroke-linecap="round" opacity="0.6"/>')
        head.append(f'<text transform="translate({bx + 72},{cy:.0f}) rotate(90)" font-size="{fs}" '
                    f'font-weight="bold" text-anchor="middle" fill="{C_HEAD}">{escape(name)}</text>')

    lx, ly = x0 + 150, y0 + 40
    titre = T("Architecture des flux de matière", "Material flow architecture")
    leg = [f'<text x="{lx}" y="{ly + 40}" font-size="72" font-weight="bold" fill="#222">'
           f'{escape(titre)}</text>']
    # le nom de l'architecture, à droite du titre : deux versions se ressemblent trop
    # pour qu'un lecteur puisse les distinguer sans qu'on le lui dise. text_w mesure du
    # romain, le titre est en gras, d'où la marge de 6 %.
    if GRAPH["name"]:
        leg.append(f'<text x="{lx + text_w(titre, 72) * 1.06 + 48:.0f}" y="{ly + 40}" font-size="52" '
                   f'fill="#657080">{escape(GRAPH["name"])}</text>')
    yy = ly + 110
    items = []
    items.append(f'<circle cx="{lx + 30}" cy="{yy}" r="30" fill="{C_NODE}" stroke="{C_NODE_STROKE}" stroke-width="3"/>'
                 f'<text x="{lx + 75}" y="{yy + 9}" font-size="26" fill="#222">{T("Noeud", "Node")}</text>')
    items.append(f'<circle cx="{lx + 320}" cy="{yy}" r="30" fill="{C_NODE}" stroke="{C_DECAY_STROKE}" '
                 f'stroke-width="3" stroke-dasharray="7 5"/>'
                 f'<text x="{lx + 365}" y="{yy + 9}" font-size="26" fill="#222">{T("Noeud avec dégradation", "Node with decay")}</text>')
    items.append(f'<circle cx="{lx + 800}" cy="{yy}" r="30" fill="{C_RECYCLE}" stroke="{C_RECYCLE_STROKE}" stroke-width="3"/>'
                 f'<text x="{lx + 845}" y="{yy + 9}" font-size="26" fill="#222">{T("Recyclage", "Recycling")}</text>')
    items.append(f'<circle cx="{lx + 1110}" cy="{yy}" r="30" fill="{C_NODE}" stroke="{C_RED}" stroke-width="5"/>'
                 f'<text x="{lx + 1155}" y="{yy + 9}" font-size="26" fill="#222">{T("Non dégradable", "Non degradable")}</text>')
    leg += items
    yy2 = yy + 70
    xx = lx
    flows = [("CH4", SINKS["CH4 emissions"]["line"]), ("N2O", SINKS["N2O emissions"]["line"]),
             ("CO2", SINKS["CO2 emissions"]["line"]), (T("Cendres", "Ash"), SINKS["Ash"]["line"]),
             (T("Autres flux", "Other flows"), C_BLACK)]
    for nm, col in flows:
        leg.append(f'<line x1="{xx}" y1="{yy2}" x2="{xx + 46}" y2="{yy2}" stroke="{col}" stroke-width="5"/>'
                   f'<text x="{xx + 56}" y="{yy2 + 9}" font-size="26" fill="#222">{escape(nm)}</text>')
        xx += 56 + text_w(nm, 26) + 40
    leg.append(tag_svg(xx + 24, yy2, "50%"))
    leg.append(f'<text x="{xx + 62}" y="{yy2 + 9}" font-size="26" fill="#222">{T("Part du flux", "Share of the flow")}</text>')
    xx += 62 + text_w(T("Part du flux", "Share of the flow"), 26) + 60
    yy3 = yy2 + 70
    xx = lx
    leg_split = T("Répartition : le flux entrant est réparti selon les % sortants",
                  "Split: the incoming flow is divided according to the outgoing %")
    leg.append(f'<rect x="{xx}" y="{yy3 - 20}" width="84" height="40" rx="3" '
               f'fill="{C_HUB}" stroke="{C_HUB_STROKE}" stroke-width="1.6"/>'
               f'<text x="{xx + 42}" y="{yy3 + 5}" font-size="13" text-anchor="middle" fill="#3A3000">{T("Répartition", "Split")}</text>'
               f'<text x="{xx + 100}" y="{yy3 + 9}" font-size="26" fill="#222">{escape(leg_split)}</text>')
    xx += 100 + text_w(leg_split, 26) + 60
    leg.append(f'<line x1="{xx}" y1="{yy3}" x2="{xx + 50}" y2="{yy3}" stroke="{C_BLACK}" stroke-width="2.4"/>'
               f'<line x1="{xx + 25}" y1="{yy3 - 24}" x2="{xx + 25}" y2="{yy3}" stroke="{C_BLACK}" stroke-width="2.4"/>'
               f'<circle cx="{xx + 25}" cy="{yy3}" r="4" fill="{C_BLACK}"/>'
               f'<text x="{xx + 66}" y="{yy3 + 9}" font-size="26" fill="#222">{T("Embranchement (traits reliés)", "Junction (connected lines)")}</text>')
    xx += 66 + text_w(T("Embranchement (traits reliés)", "Junction (connected lines)"), 26) + 60
    leg.append(f'<path d="M{xx},{yy3} L{xx + 19.5},{yy3} A5.5,5.5 0 0 1 {xx + 30.5},{yy3} L{xx + 50},{yy3}" '
               f'stroke="{C_BLACK}" stroke-width="2.4" fill="none"/>'
               f'<line x1="{xx + 25}" y1="{yy3 - 24}" x2="{xx + 25}" y2="{yy3 + 24}" stroke="{C_BLACK}" stroke-width="2.4"/>'
               f'<text x="{xx + 66}" y="{yy3 + 9}" font-size="26" fill="#222">{T("Croisement sans lien (saut)", "Crossing without connection (hop)")}</text>')
    yy4 = yy3 + 62
    leg.append(f'<line x1="{lx}" y1="{yy4}" x2="{lx + 84}" y2="{yy4}" stroke="{SINKS["N2O emissions"]["line"]}" stroke-width="5"/>'
               f'<text x="{lx + 100}" y="{yy4 + 9}" font-size="26" fill="#222">'
               + escape(T("Liens vers N2O (« Overflow » dans le modèle) : N2O ne contient pas de carbone, "
                          "il s'ajoute aux 100 % de carbone répartis par la Répartition",
                          "Links to N2O (\"Overflow\" in the model): N2O contains no carbon, "
                          "it is added on top of the 100% of carbon divided by the Split"))
               + '</text>')

    svg = [f'<svg xmlns="http://www.w3.org/2000/svg" viewBox="{x0:.0f} {y0:.0f} {W:.0f} {H:.0f}" '
           f'width="{W:.0f}" height="{H:.0f}" font-family="{FONT_FAMILY}">',
           f'<rect x="{x0:.0f}" y="{y0:.0f}" width="{W:.0f}" height="{H:.0f}" fill="#FFFFFF"/>']
    if interactive:
        for k, m in node_meta(info, r_sto, r_eol).items():
            info["graph"]["nodes"][k].update(m)
    svg += head + leg + paths + arrows + info["dots"] + node_svg + tags
    svg.append("</svg>")
    return "\n".join(svg), W, H, info


# ----------------------------------------------------------------------------
# Version HTML interactive
# ----------------------------------------------------------------------------
HTML_TEMPLATE = r"""<!doctype html>
<html lang="fr">
<meta charset="utf-8">
<meta name="viewport" content="width=device-width, initial-scale=1">
<title>Architecture des flux de matière</title>
<style>
  :root { --bg:#f6f7f9; --panel:#fff; --line:#d7dce3; --txt:#1d2733; --muted:#657080; --accent:#2f6fd0;
          --co2:#FF3FE0; --ch4:#14BFCB; --ash:#E6D200; --stock:#D62020; --n2o:#9BC53D; }
  * { box-sizing:border-box; }
  html,body { margin:0; height:100%; font-family:"Liberation Sans",Arial,Helvetica,sans-serif;
              color:var(--txt); background:var(--bg); overflow:hidden; }
  #bar { position:fixed; inset:0 0 auto 0; min-height:52px; display:flex; align-items:center; gap:10px 14px;
         flex-wrap:wrap; padding:8px 14px; background:var(--panel); border-bottom:1px solid var(--line); z-index:30;
         box-shadow:0 1px 4px rgba(0,0,0,.05); }
  #bar > * { flex:none; }
  #bar h1 { font-size:15px; margin:0 4px 0 0; font-weight:700; white-space:nowrap; }
  /* nom de l'architecture : toujours visible, pour qu'on sache quelle version on lit */
  #gname { font-size:12px; font-weight:700; color:var(--accent); background:#e8f0fd;
           border:1px solid #c6daf7; border-radius:10px; padding:3px 9px; white-space:nowrap;
           max-width:26ch; overflow:hidden; text-overflow:ellipsis; }
  #gname:empty { display:none; }
  @media (max-width: 1680px) { #bar h1 { display:none; } }
  .ctl { display:flex; align-items:center; gap:7px; font-size:14px; white-space:nowrap; }
  .sw { position:relative; width:38px; height:21px; background:#c8cfd8; border-radius:11px;
        cursor:pointer; transition:background .15s; flex:none; }
  .sw::after { content:""; position:absolute; top:2px; left:2px; width:17px; height:17px;
               background:#fff; border-radius:50%; transition:left .15s; }
  .sw.on { background:var(--accent); } .sw.on::after { left:19px; }
  .sw.off { opacity:.4; pointer-events:none; }
  button { font:inherit; padding:5px 11px; border:1px solid var(--line); background:#fff;
           border-radius:6px; cursor:pointer; white-space:nowrap; color:var(--txt); }
  button:hover { background:#eef2f7; }
  button.on { background:var(--accent); border-color:var(--accent); color:#fff; }
  .seg { display:flex; } .seg button { border-radius:0; margin-left:-1px; }
  .seg button:first-child { border-radius:6px 0 0 6px; margin-left:0; }
  .seg button:last-child { border-radius:0 6px 6px 0; }
  #tabs button { font-weight:600; }
  #btnFilt .badge { display:none; margin-left:6px; background:#fff; color:var(--accent); border-radius:9px;
                    padding:0 6px; font-size:12px; font-weight:700; }
  #btnFilt.active .badge { display:inline; }
  /* recherche */
  #search { position:relative; }
  #q { font:inherit; font-size:14px; width:215px; padding:6px 10px 6px 30px; border:1px solid var(--line);
       border-radius:6px; background:#fff url("data:image/svg+xml,%3Csvg xmlns='http://www.w3.org/2000/svg' width='16' height='16' viewBox='0 0 24 24' fill='none' stroke='%23657080' stroke-width='2.4'%3E%3Ccircle cx='11' cy='11' r='7'/%3E%3Cpath d='M20 20l-3.5-3.5'/%3E%3C/svg%3E") no-repeat 9px 50%; }
  #q:focus { outline:2px solid #9cbcf0; border-color:var(--accent); }
  #qres { position:absolute; top:calc(100% + 4px); left:0; width:min(470px, 92vw); max-height:60vh; overflow:auto;
          background:var(--panel); border:1px solid var(--line); border-radius:8px; box-shadow:0 6px 22px rgba(0,0,0,.14);
          display:none; z-index:40; }
  #qres.open { display:block; }
  #qres .it { padding:7px 11px; cursor:pointer; display:flex; gap:10px; align-items:baseline; font-size:13.5px; }
  #qres .it:hover, #qres .it.cur { background:#eef3fb; }
  #qres .it .nm { flex:1; }
  #qres .it .tag { font-size:11px; color:var(--muted); white-space:nowrap; }
  #qres .none { padding:9px 11px; color:var(--muted); font-size:13px; }
  /* scènes */
  .stage { position:fixed; inset:52px 0 0 0; overflow:hidden; cursor:grab; }
  .stage.drag { cursor:grabbing; } .stage.hidden { display:none; }
  .stage > svg { position:absolute; top:0; left:0; transform-origin:0 0; max-width:none; }
  /* panneaux */
  .drawer { position:fixed; bottom:0; background:var(--panel); border:1px solid var(--line); z-index:20;
            overflow:auto; box-shadow:0 4px 18px rgba(0,0,0,.10); font-size:13.5px; }
  #filt { left:0; width:270px; border-left:none; display:none; padding:12px 14px 16px; }
  #filt.open { display:block; }
  #panel { right:0; width:380px; max-width:92vw; border-right:none; display:none; padding:0; background:#f3f5f8; }
  #panel.open { display:flex; flex-direction:column; }
  .drawer h3 { margin:12px 0 6px; font-size:11.5px; text-transform:uppercase; letter-spacing:.05em; color:var(--muted); }
  .x { position:absolute; top:8px; right:10px; border:none; background:none; font-size:20px; line-height:1;
       padding:2px 6px; color:var(--muted); }
  .x:hover { background:#eef2f7; }
  #filt h3:first-of-type { margin-top:4px; }
  #filt label { display:flex; align-items:center; gap:8px; padding:3px 0; cursor:pointer; }
  #filt label i { width:12px; height:12px; border-radius:3px; display:inline-block; flex:none; }
  #filt .row { display:flex; gap:8px; margin-top:12px; }
  #filt .count { margin-top:10px; color:var(--muted); font-size:12.5px; }
  #panel .hd { position:sticky; top:0; z-index:2; background:#fff; padding:12px 40px 11px 16px; border-bottom:1px solid var(--line); }
  #panel .chips span { display:inline-block; font-size:11px; padding:2px 8px; border-radius:10px; margin:0 4px 4px 0;
                       background:#eef1f5; color:#3d4652; }
  #panel .chips .k-split { background:#fff1b8; } #panel .chips .k-sink { background:#e7e3fb; }
  #panel .chips .s-prod { background:#e3eefc; } #panel .chips .s-recy { background:#e3f4dc; }
  #panel .chips .s-eol { background:#fbe9df; } #panel .chips .s-atm { background:#f0e6fb; }
  #panel h2 { font-size:16.5px; margin:2px 0 6px; line-height:1.3; }
  #panel .card { background:#fff; margin:10px 12px 0; border:1px solid var(--line); border-radius:9px; padding:10px 13px 12px; }
  #panel .card h3 { margin:0 0 8px; display:flex; align-items:center; gap:6px; }
  #panel .card h3 .n { background:#eef1f5; color:#3d4652; border-radius:9px; padding:0 7px; font-size:11px; letter-spacing:0; }
  #panel .card.path { border-color:#e9b56c; background:#fffaf1; }
  #panel .card.path .pr { display:flex; align-items:center; gap:8px; margin:3px 0; font-size:13px; }
  #panel .card.path .dot { width:10px; height:10px; border-radius:50%; flex:none; }
  #panel .card.path .dot.a { background:#e08a1e; } #panel .card.path .dot.b { background:#2f6fd0; }
  #panel .card.path .share { margin:8px 0 2px; font-size:13px; } #panel .card.path .share b { font-size:18px; }
  #panel .card.path .row { margin-top:8px; }
  #panel .big b { font-size:24px; font-variant-numeric:tabular-nums; }
  #panel .sub { color:var(--muted); font-size:12px; line-height:1.4; }
  #panel .note { background:#f3f6fa; border-radius:6px; padding:7px 9px; margin:8px 0 0; color:#3d4652; font-size:12.5px; }
  #panel .foot { position:sticky; bottom:0; margin-top:auto; background:#fff; border-top:1px solid var(--line);
                 padding:10px 12px; display:flex; flex-wrap:wrap; gap:6px; z-index:2; }
  #panel section.card:last-of-type { margin-bottom:12px; }
  #panel .foot button, #panel .card button { font-size:12.5px; padding:5px 10px; }
  .fate { display:flex; height:14px; border-radius:4px; overflow:hidden; margin:2px 0 8px; background:#eef1f5; }
  .fate span { display:block; height:100%; }
  .leg { display:grid; grid-template-columns:auto 1fr auto; gap:3px 8px; font-size:12.5px; }
  .leg i { width:10px; height:10px; border-radius:2px; display:inline-block; margin-top:3px; }
  .leg .v { text-align:right; font-variant-numeric:tabular-nums; }
  .nb { list-style:none; margin:0; padding:0; }
  .nb li { position:relative; display:flex; gap:8px; padding:6px 7px; border-radius:5px; cursor:pointer;
           align-items:baseline; overflow:hidden; }
  .nb li + li { margin-top:2px; }
  .nb li .bar { position:absolute; left:0; top:0; bottom:0; background:rgba(47,111,208,.09); }
  .nb li:hover { background:#eef3fb; }
  .nb li .nm { position:relative; flex:1; color:var(--accent); }
  .nb li .v { position:relative; color:var(--muted); font-size:12px; white-space:nowrap; font-variant-numeric:tabular-nums; }
  .nb .empty { color:var(--muted); cursor:default; } .nb .empty:hover { background:none; }
  /* fiche de chemin */
  #panel .chips .k-path { background:#fde3bf; color:#7a4300; }
  #panel .ab { margin:4px 0 8px; }
  #panel .ab .pr { display:flex; gap:8px; align-items:baseline; font-size:14.5px; font-weight:600; line-height:1.3; cursor:pointer; }
  #panel .ab .pr:hover .nm { text-decoration:underline; }
  #panel .ab .pr.wait { cursor:default; font-weight:400; color:var(--muted); font-style:italic; }
  #panel .ab .pr.wait:hover .nm { text-decoration:none; }
  #panel .ab .arr { color:#7d8794; font-size:15px; line-height:1; margin:3px 0 3px 0; }
  #panel .dot { width:10px; height:10px; border-radius:50%; flex:none; position:relative; top:1px; }
  #panel .dot.a { background:#e08a1e; } #panel .dot.b { background:#2f6fd0; }
  #panel .dot.b.off { background:none; border:2px dashed #2f6fd0; width:6px; height:6px; }
  #panel .hd .row { display:flex; gap:6px; flex-wrap:wrap; }
  #panel h4 { margin:10px 0 3px; font-size:12px; color:#3d4652; }
  #panel button.mini { font-size:11.5px; padding:2px 8px; margin-left:auto; text-transform:none; letter-spacing:0; }
  #panel .kpi { display:grid; grid-template-columns:repeat(3, 1fr); gap:7px; }
  #panel .kpi div { background:#f6f8fb; border-radius:7px; padding:8px 8px 7px; }
  #panel .kpi b { display:block; font-size:19px; font-variant-numeric:tabular-nums; color:#1d2733; }
  #panel .kpi span { display:block; font-size:11.5px; color:var(--muted); line-height:1.3; margin-top:3px; }
  #panel .card.back { background:#fffaf1; border-color:#e9b56c; }
  #panel .card.back .sub { margin-top:5px; }
  .rt { list-style:none; margin:0; padding:0; }
  .rt > li { position:relative; padding:7px 9px; border-radius:6px; cursor:pointer; overflow:hidden; border:1px solid transparent; }
  .rt > li + li { margin-top:3px; }
  .rt > li .bar { position:absolute; left:0; top:0; bottom:0; background:rgba(224,138,30,.13); }
  .rt > li:hover { background:#fff6ea; }
  .rt > li.on { border-color:#e9b56c; background:#fffaf1; }
  .rt .top { position:relative; display:flex; gap:8px; align-items:baseline; }
  .rt .top b { font-size:13.5px; font-variant-numeric:tabular-nums; }
  .rt .top .u { color:var(--muted); font-size:11.5px; font-variant-numeric:tabular-nums; }
  .rt .top .k { margin-left:auto; color:var(--muted); font-size:11px; }
  .rt .steps { position:relative; font-size:12.5px; color:#3d4652; line-height:1.45; margin-top:2px; }
  .rt .steps i { color:#b5bdc8; font-style:normal; padding:0 4px; }
  .rt ol.stp { position:relative; margin:8px 0 2px 2px; padding:0; list-style:none; border-left:2px solid #e9b56c; }
  .rt ol.stp li { display:flex; gap:8px; padding:3px 6px 3px 11px; font-size:12.5px; line-height:1.35; }
  .rt ol.stp li:hover { background:#fdeed6; }
  .rt ol.stp li.sp { color:#8a93a0; font-style:italic; }
  .rt ol.stp li .f { margin-left:auto; color:var(--muted); font-variant-numeric:tabular-nums; white-space:nowrap; font-style:normal; }
  .loopln { margin-top:8px; padding:7px 9px; border-radius:6px; background:#f3f6fa; font-size:12.5px; }
  .loopln .sub { margin-top:3px; } .loopln .u { color:var(--muted); font-size:11.5px; }
  #panel .tot { margin-top:8px; font-size:12px; color:var(--muted); text-align:right; }
  #pickbar { position:fixed; top:62px; left:50%; transform:translateX(-50%); z-index:25; display:none;
             background:#fff7e8; border:1px solid #efc27b; color:#5a3d00; padding:8px 14px; border-radius:8px;
             font-size:13.5px; box-shadow:0 3px 12px rgba(0,0,0,.12); max-width:min(560px, 80vw); text-align:center; }
  #pickbar.on { display:block; }
  /* mini-carte */
  #mini { position:fixed; left:14px; bottom:14px; z-index:15; background:#fff; border:1px solid var(--line);
          border-radius:6px; box-shadow:0 2px 10px rgba(0,0,0,.10); overflow:hidden; cursor:crosshair; }
  #mini img { display:block; width:100%; height:auto; opacity:.9; user-select:none; -webkit-user-drag:none; }
  #mini .vp { position:absolute; border:2px solid var(--accent); background:rgba(47,111,208,.10); pointer-events:none; }
  #mini.hide { display:none; }
  body.filtering #mini { left:284px; }
  #hint { position:fixed; right:14px; bottom:14px; max-width:min(300px, 40vw); z-index:15;
          font-size:12.5px; line-height:1.45; color:#657080; background:rgba(255,255,255,.92);
          border:1px solid var(--line); border-radius:8px; padding:8px 12px; pointer-events:none; }
  #hint b { color:#3d4652; font-weight:600; }
  body.paneled #hint { display:none; }
  #tip { position:fixed; padding:6px 9px; background:#1d2733; color:#fff; font-size:12.5px;
         border-radius:5px; pointer-events:none; display:none; z-index:50; white-space:nowrap; }
  /* dessin */
  .nd, .snd { cursor:pointer; }
  svg .lnk path, svg .lnk, svg path.lnk { shape-rendering:crispEdges; }
  svg .flt { opacity:.07; }
  svg.focus .lnk, svg.focus .nd, svg.focus .sl, svg.focus .snd { opacity:.08; }
  svg.focus .lnk.hi, svg.focus .nd.hi, svg.focus .snd.hi { opacity:1; }
  svg.focus .sl.hi { opacity:1; fill-opacity:.72; } svg.focus .sl.hair.hi { fill-opacity:1; }
  svg .nd.me, svg .snd.me { filter:drop-shadow(0 0 5px #2f6fd0) drop-shadow(0 0 13px #2f6fd0); }
  svg .nd.pin, svg .snd.pin { filter:drop-shadow(0 0 5px #e08a1e) drop-shadow(0 0 13px #e08a1e); }
  svg.pathmode path.lnk.hi { stroke:#e07b10; stroke-width:var(--pw, 5px); }
  svg.pathmode g.lnk.hi polygon, svg.pathmode circle.lnk.dot.hi { fill:#e07b10; }
  svg.pathmode circle.lnk.dot.hi { r:calc(var(--pw, 5px) * 1.2); }
  svg.pathmode .sl.hi { fill:#e8891c; }
  svg .lnk.zero.hide, svg .nd.zero.hide { display:none; }
  .sl { cursor:pointer; } .sl:hover { fill-opacity:.8; }
  .snd:hover rect:not(.hit) { stroke:#2f6fd0; stroke-width:2.5; }
  .snd:hover .slab { font-weight:700; }
</style>
<div id="bar">
  <h1 data-i="title"></h1>
  <span id="gname" title="__GRAPH_BRUT__">__GRAPH__</span>
  <div class="seg" id="tabs"><button data-v="schema" class="on" data-i="tab_schema"></button><button data-v="sankey" data-i="tab_sankey"></button></div>
  <div id="search"><input id="q" type="search" autocomplete="off" spellcheck="false"><div id="qres"></div></div>
  <div class="ctl"><span data-i="dir"></span>
    <div class="seg" id="segDir"><button data-m="down" class="on" data-i="down"></button><button data-m="up" data-i="up"></button><button data-m="both" data-i="both"></button></div>
  </div>
  <div class="ctl"><div class="sw" id="swZero"></div><label for="swZero" data-i="zero"></label></div>
  <button id="btnFilt"><span data-i="filters"></span><span class="badge"></span></button>
  <button id="reset" data-i="reset"></button>
  <button id="fit" data-i="fit"></button>
  <div class="seg" id="segLang" title="Langue / Language"><button data-l="fr" class="on">FR</button><button data-l="en">EN</button></div>
</div>
<div id="hint" data-i="hint"></div>
<div class="stage" id="st_schema_fr">__SVG_SCHEMA_FR__</div>
<div class="stage hidden" id="st_schema_en">__SVG_SCHEMA_EN__</div>
<div class="stage hidden" id="st_sankey_fr">__SVG_SANKEY_FR__</div>
<div class="stage hidden" id="st_sankey_en">__SVG_SANKEY_EN__</div>
<div id="filt" class="drawer"></div>
<div id="panel" class="drawer"></div>
<div id="mini"><img alt=""><div class="vp"></div></div>
<div id="pickbar"></div>
<div id="tip"></div>
<script>
const DATA = __DATA__;
const SIZE = __SIZE__;
const MINI = __MINI__;
const I18N = {
  fr: { title: "Architecture des flux de matière", tab_schema: "Schéma", tab_sankey: "Sankey",
        dir: "Sens :", down: "Aval", up: "Amont", both: "Les deux", zero: "Masquer les flux à 0%",
        reset: "Tout afficher", fit: "Ajuster", filters: "Filtres", search: "Rechercher un nœud…",
        hint: "<b>Recherche</b> : tapez un nom en haut<br>"
            + "<b>Clic</b> sur un nœud ou un flux : surbrillance et fiche, recliquer pour annuler<br>"
            + "<b>Molette</b> : zoom avant ou arrière<br>"
            + "<b>Maintenir le clic et bouger la souris</b> : se déplacer dans l’architecture<br>"
            + "<b>Échap</b> : tout désélectionner",
        noresult: "Aucun élément ne correspond.",
        k_node: "Nœud", k_split: "Répartition", k_sink: "Exutoire", k_marker: "Repère de boucle",
        fil_sci: "Sciage", fil_pan: "Panneaux", fil_pp: "P&P", fil_aut: "Autre", fil_bio: "Bioénergie", fil_all: "toutes filières",
        st_prod: "Produits", st_recy: "Recyclage", st_eol: "Fin de vie", st_atm: "Atmosphère",
        c_co2: "CO2", c_ch4: "CH4", c_ash: "Cendres", c_stock: "Stocké (non dégradable)", c_n2o: "N2O (sans carbone, en plus)",
        h_fil: "Filière", h_st: "Étape", h_dest: "Destination finale du carbone", h_in: "Entrées", h_out: "Sorties",
        h_orig: "Origine du carbone",
        o_sci: "Sciage", o_pan: "Panneaux", o_pp: "P&P", o_aut: "Autre", o_bio: "Bioénergie",
        o_brut: "Bois rond (avant répartition)", o_petit: "moins de 1 % chacune",
        orig_sub: "D’où vient le carbone qui passe ici. Le carbone prend le nom de la <b>première</b> production qu’il traverse et le garde ensuite : les coproduits du sciage transformés en panneaux restent du sciage, parce que c’est l’arbre récolté pour le sciage qui porte ce carbone. À ne pas confondre avec les puces de filière en haut de la fiche, qui disent d’où le carbone <b>peut</b> venir, et non dans quelle proportion.",
        orig0: "Aucun carbone ne passe ici dans le modèle actuel, il n’y a donc pas d’origine à répartir.",
        all: "Tout cocher", count: (a, b) => a + " éléments visibles sur " + b,
        flux: "Carbone qui y passe", per100: "sur 100 unités entrées au début de la chaîne (bois rond récolté), chaque passage d'une boucle compté", h_flux: "Carbone qui y passe",
        flux0: "Aucun carbone ne passe ici dans le modèle actuel.",
        loopnote: "Nœud sur une boucle de recyclage : la valeur cumule chaque passage du même carbone.",
        dest_sub: "En part du carbone qui passe par ce nœud, boucles de recyclage comprises.",
        noin: "Aucune entrée", noout: "Aucune sortie (destination finale)",
        center: "Centrer", pathA: "Départ du chemin", pathB: "Arrivée du chemin", pathClear: "Effacer le chemin",
        pathT: "Chemin", pathWait: "Choisissez l’arrivée : cliquez un élément en surbrillance, ou utilisez la recherche.",
        pathFrom: "Tracer un chemin depuis ici", unreach: "Cet élément n’est pas atteignable depuis le départ.",
        pick: "<b>Arrivée du chemin</b> : cliquez un élément en surbrillance, ou utilisez la recherche. Échap pour annuler.",
        pathShare: (p) => "<b>" + p + " %</b> du carbone qui passe par le départ atteint l’arrivée",
        pathNone: "Aucun flux de carbone ne relie ces deux éléments dans le modèle actuel.",
        pInv: "Inverser", pFig: "Chiffres clés",
        k1: "du carbone qui passe par le départ atteint l’arrivée",
        k2: "unités distinctes, sur les 100 entrées au début de la chaîne, font ce chemin (un seul passage compté par unité)",
        k3: "de tout le carbone qui atteint l’arrivée est passé par le départ",
        k1n: "N2O produit, en part du carbone qui passe par le départ",
        k2n: "unités de N2O produites par ce chemin, pour 100 unités de carbone entrées",
        k3n: "de tout le N2O vient de ce chemin",
        n2oNote: "Le N2O ne contient pas de carbone : ces valeurs sont des quantités de N2O, calculées en plus du carbone.",
        pRoutes: "Principales routes",
        pRoutesSub: "Comment le carbone qui fait ce chemin s’y répartit : part de chaque route, en % du carbone qui va du départ à l’arrivée. Les routes et les boucles font 100 %. Cliquez une route pour la voir seule sur le dessin, recliquez pour toutes ses étapes.",
        pTot: (n, r, l) => "Total : " + n + " routes = " + r + " %" + (l !== null ? ", boucles = " + l + " %" : "") + ", soit 100 % du chemin.",
        pTronque: m => "Attention : plus de " + m + " routes, l’énumération a été arrêtée. Les routes manquantes sont comptées dans la ligne « via les boucles de recyclage », qui est donc surestimée.",
        pAll: n => "Afficher les " + n + " routes", pLess: "Afficher moins", pBackAll: "Toutes les routes",
        pLoop: "Via les boucles de recyclage",
        pLoopSub: "Carbone qui fait au moins un tour de boucle de recyclage avant d’arriver. Il n’est compté dans aucune des routes listées.",
        pDirect: "Lien direct", of100: "sur 100", stepF: "part de l’étape précédente",
        pFit: "Cadrer le chemin", pFicheA: "Fiche départ", pFicheB: "Fiche arrivée", pBack: "Revenir au chemin",
        pAbsent: "Le départ ou l’arrivée n’existe pas dans le Sankey (Répartition, ou élément sans flux). Le chemin est visible dans le schéma.",
        pickT: "Choisissez l’arrivée", freq: "Arrivées fréquentes",
        freqSub: "Part du carbone du départ qui y arrive. Cliquez pour choisir.",
        gFinal: "Destinations finales", gStock: "Stocks de produits", noArr: "Aucune destination atteignable.",
        pickOr: "Vous pouvez aussi cliquer un élément en surbrillance sur le dessin, ou utiliser la recherche en haut.",
        cancel: "Annuler",
        absent: "Absent du Sankey : les Répartitions n’existent que dans le schéma, et le Sankey omet les éléments sans flux.",
        q_down: "En aval", q_up: "En amont", q_both: "En amont et en aval",
        nodes: " nœuds, ", splits: " Répartitions, ", sinks: " exutoires, ", conns: " connecteurs",
        loop: "Ce nœud est sur une boucle de recyclage : son carbone finit par y revenir, d’où des éléments en surbrillance situés plus haut dans la chaîne.",
        unit: " % du carbone initial",
        decay: " · stock qui se dégrade, montré ici une fois entièrement dégradé",
        lout: " · ce carbone retourne en amont, voir le repère « ↪ revient de … »",
        lin: " · carbone revenu par le recyclage, voir le repère « ↩ repart vers … »",
        mk_out: "Ce carbone repart en amont, par le recyclage.", mk_in: "Carbone revenu par le recyclage.",
        of: "de", colon: " : " },
  en: { title: "Material flow architecture", tab_schema: "Diagram", tab_sankey: "Sankey",
        dir: "Direction:", down: "Downstream", up: "Upstream", both: "Both", zero: "Hide 0% flows",
        reset: "Show all", fit: "Fit", filters: "Filters", search: "Search a node…",
        hint: "<b>Search</b>: type a name at the top<br>"
            + "<b>Click</b> a node or a flow: highlight and details, click again to cancel<br>"
            + "<b>Mouse wheel</b>: zoom in or out<br>"
            + "<b>Hold the click and move the mouse</b>: move around the architecture<br>"
            + "<b>Esc</b>: clear the selection",
        noresult: "No matching element.",
        k_node: "Node", k_split: "Split", k_sink: "Sink", k_marker: "Loop marker",
        fil_sci: "Sawnwood", fil_pan: "Panels", fil_pp: "P&P", fil_aut: "Otherwood", fil_bio: "Bioenergy", fil_all: "all product lines",
        st_prod: "Products", st_recy: "Recycling", st_eol: "End of life", st_atm: "Atmosphere",
        c_co2: "CO2", c_ch4: "CH4", c_ash: "Ash", c_stock: "Stored (non degradable)", c_n2o: "N2O (no carbon, on top)",
        h_fil: "Product line", h_st: "Stage", h_dest: "Final destination of the carbon", h_in: "Inputs", h_out: "Outputs",
        h_orig: "Origin of the carbon",
        o_sci: "Sawnwood", o_pan: "Panels", o_pp: "P&P", o_aut: "Otherwood", o_bio: "Bioenergy",
        o_brut: "Roundwood (before allocation)", o_petit: "less than 1 % each",
        orig_sub: "Where the carbon flowing through here comes from. Carbon takes the name of the <b>first</b> production it goes through and keeps it afterwards: sawmill coproducts turned into panels remain sawnwood, because the carbon is carried by a tree harvested for sawnwood. Not to be confused with the product-line chips at the top of the card, which say where the carbon <b>may</b> come from, not in what proportion.",
        orig0: "No carbon flows through here in the current model, so there is no origin to break down.",
        all: "Check all", count: (a, b) => a + " elements visible out of " + b,
        flux: "Carbon flowing through", per100: "out of 100 units entering at the start of the chain (harvested roundwood), each pass through a loop counted", h_flux: "Carbon flowing through",
        flux0: "No carbon flows here in the current model.",
        loopnote: "Node on a recycling loop: the value adds up every pass of the same carbon.",
        dest_sub: "As a share of the carbon flowing through this node, recycling loops included.",
        noin: "No input", noout: "No output (final destination)",
        center: "Center", pathA: "Path start", pathB: "Path end", pathClear: "Clear path",
        pathT: "Path", pathWait: "Choose the end: click a highlighted element, or use the search.",
        pathFrom: "Trace a path from here", unreach: "This element cannot be reached from the start.",
        pick: "<b>Path end</b>: click a highlighted element, or use the search. Esc to cancel.",
        pathShare: (p) => "<b>" + p + " %</b> of the carbon flowing through the start reaches the end",
        pathNone: "No carbon flow links these two elements in the current model.",
        pInv: "Reverse", pFig: "Key figures",
        k1: "of the carbon flowing through the start reaches the end",
        k2: "distinct units, out of the 100 entering at the start of the chain, take this path (each unit counted once)",
        k3: "of all the carbon reaching the end went through the start",
        k1n: "N2O produced, as a share of the carbon flowing through the start",
        k2n: "units of N2O produced by this path, per 100 units of carbon entering",
        k3n: "of all the N2O comes from this path",
        n2oNote: "N2O contains no carbon: these values are quantities of N2O, computed on top of the carbon.",
        pRoutes: "Main routes",
        pRoutesSub: "How the carbon taking this path splits between routes: share of each route, in % of the carbon going from the start to the end. Routes and loops add up to 100 %. Click a route to see it alone on the drawing, click again for all its steps.",
        pTot: (n, r, l) => "Total: " + n + " routes = " + r + " %" + (l !== null ? ", loops = " + l + " %" : "") + ", i.e. 100 % of the path.",
        pTronque: m => "Warning: more than " + m + " routes, the enumeration was stopped. The missing routes are counted in the \"via recycling loops\" line, which is therefore overstated.",
        pAll: n => "Show all " + n + " routes", pLess: "Show fewer", pBackAll: "All routes",
        pLoop: "Through recycling loops",
        pLoopSub: "Carbon going around a recycling loop at least once before arriving. It is not counted in any listed route.",
        pDirect: "Direct link", of100: "of 100", stepF: "share of the previous step",
        pFit: "Fit the path", pFicheA: "Start details", pFicheB: "End details", pBack: "Back to the path",
        pAbsent: "The start or the end does not exist in the Sankey (a Split, or an element without flow). The path is visible in the diagram.",
        pickT: "Choose the end", freq: "Common ends",
        freqSub: "Share of the start's carbon arriving there. Click to choose.",
        gFinal: "Final destinations", gStock: "Product stocks", noArr: "No reachable destination.",
        pickOr: "You can also click a highlighted element on the drawing, or use the search at the top.",
        cancel: "Cancel",
        absent: "Not in the Sankey: Splits only exist in the diagram, and the Sankey leaves out elements without flow.",
        q_down: "Downstream", q_up: "Upstream", q_both: "Upstream and downstream",
        nodes: " nodes, ", splits: " Splits, ", sinks: " sinks, ", conns: " connectors",
        loop: "This node is on a recycling loop: its carbon eventually comes back to it, hence highlighted elements further up the chain.",
        unit: " % of initial carbon",
        decay: " · decaying stock, shown here once fully decayed",
        lout: " · this carbon goes back upstream, see the marker \"↪ comes back from …\"",
        lin: " · carbon brought back by recycling, see the marker \"↩ returns to …\"",
        mk_out: "This carbon goes back upstream through recycling.", mk_in: "Carbon brought back by recycling.",
        of: "of", colon: ": " }
};
const FILS = ["sci", "pan", "pp", "aut", "bio"], STS = ["prod", "recy", "eol", "atm"],
      DESTS = ["co2", "ch4", "ash", "stock", "n2o"];
const DCOL = { co2: "var(--co2)", ch4: "var(--ch4)", ash: "var(--ash)", stock: "var(--stock)", n2o: "var(--n2o)" };
/* parts d'origine : d'où vient réellement le carbone, à distinguer des filières ci-dessus */
const ORIGS = ["sci", "pan", "pp", "aut", "bio", "brut"];
const OCOL = { sci: "#4a7fb5", pan: "#c08a3e", pp: "#6b9e5f", aut: "#9b7bb8", bio: "#c45f52", brut: "#9aa3ab" };
const tip = document.getElementById('tip'), panel = document.getElementById('panel'),
      filt = document.getElementById('filt'), mini = document.getElementById('mini');
let tab = 'schema', lang = 'fr', mode = 'down', current = null, pathA = null, pathB = null, pickB = false;
try { const l = localStorage.getItem('sepm_lang'); if (l === 'fr' || l === 'en') lang = l; } catch (e) {}
const vk = () => tab + '_' + lang;
const S = k => I18N[lang][k];
const META = () => DATA['schema_' + lang].nodes;          /* fiche : toujours le graphe du schéma */
const f3 = v => { if (!+v) return '0'; const t = (+v).toPrecision(3); return t.includes('e') ? String(+t) : t; };
const pct = v => { const p = v * 100; return p === 0 ? '0' : p < 0.01 ? '<0.01' : p >= 99.995 && p < 100 ? '>99.99' : String(+p.toFixed(p < 1 ? 2 : 1)); };
const esc = s => String(s).replace(/[&<>"]/g, c => ({ '&': '&amp;', '<': '&lt;', '>': '&gt;', '"': '&quot;' }[c]));

function mkView(stageId, key, nodeSel, linkSel) {
  const stage = document.getElementById(stageId);
  const svg = stage.querySelector('svg');
  const G = DATA[key];
  const outE = {}, inE = {};
  G.edges.forEach((e, i) => { (outE[e.f] = outE[e.f] || []).push(i); (inE[e.t] = inE[e.t] || []).push(i); });
  const lnks = [...svg.querySelectorAll(linkSel)].map(el => ({ el, e: el.dataset.e !== undefined
      ? el.dataset.e.split(',').map(Number) : [Number(el.dataset.s)] }));
  const nds = [...svg.querySelectorAll(nodeSel)].map(el => ({ el, n: el.dataset.n }));
  const vb = svg.viewBox.baseVal;
  const V = { stage, svg, G, outE, inE, lnks, nds, key, z: 1, tx: 0, ty: 0, vb };
  V.walk = (start, dir) => {
    const adj = dir === 'down' ? outE : inE;
    const nodes = new Set([start]), eds = new Set(), stack = [start];
    while (stack.length) { const u = stack.pop();
      (adj[u] || []).forEach(i => { eds.add(i);
        const v = dir === 'down' ? G.edges[i].t : G.edges[i].f;
        if (!nodes.has(v)) { nodes.add(v); stack.push(v); } }); }
    return { nodes, eds };
  };
  V.flows = start => {
    if (!(start in G.nodes)) return null;
    if (mode !== 'both') return V.walk(start, mode);
    const d = V.walk(start, 'down'), u = V.walk(start, 'up');
    return { nodes: new Set([...d.nodes, ...u.nodes]), eds: new Set([...d.eds, ...u.eds]) };
  };
  V.clear = () => { V.svg.classList.remove('focus');
    V.svg.querySelectorAll('.hi,.me,.pin').forEach(el => el.classList.remove('hi', 'me', 'pin')); };
  V.paint = (r, me, pins) => {
    V.svg.querySelectorAll('.hi,.me,.pin').forEach(el => el.classList.remove('hi', 'me', 'pin'));
    V.svg.classList.toggle('pathmode', !!(r && pathA && pathB));
    if (!r) { V.svg.classList.remove('focus'); return; }
    V.svg.classList.add('focus');
    V.lnks.forEach(o => {
      const garde = o.el.classList.contains('dot')
        ? dotPaire(o.el, i => r.eds.has(i))
        : o.e.every(i => r.eds.has(i));
      if (garde) o.el.classList.add('hi'); });
    V.nds.forEach(o => { if (r.nodes.has(o.n)) o.el.classList.add('hi'); });
    (me || []).forEach(id => { const el = V.svg.querySelector(`[data-n="${id}"]`); if (el) el.classList.add('me'); });
    (pins || []).forEach(id => { const el = V.svg.querySelector(`[data-n="${id}"]`); if (el) el.classList.add('pin'); });
  };
  V.show = id => { const r = V.flows(id); V.paint(r, [id]); return r; };
  V.apply = () => { V.svg.style.transform = `translate(${V.tx}px,${V.ty}px) scale(${V.z})`;
    V.svg.style.setProperty('--pw', Math.max(5, 3.2 / V.z).toFixed(2) + 'px');   /* trait du chemin : lisible à tout zoom */
    if (V.key === vk()) drawMini(); };
  V.fit = () => { const [W, H] = SIZE[key];
    V.z = Math.min(stage.clientWidth / W, stage.clientHeight / H) * 0.97;
    V.tx = (stage.clientWidth - W * V.z) / 2; V.ty = (stage.clientHeight - H * V.z) / 2; V.apply(); };
  V.centerOn = (id, zmin) => {
    const g = V.svg.querySelector(`[data-n="${id}"]`); if (!g) return false;
    const el = g.querySelector('circle, ellipse, rect:not(.hit)') || g;     /* la forme, pas l'étiquette */
    const bb = el.getBBox(), cx = bb.x + bb.width / 2 - V.vb.x, cy = bb.y + bb.height / 2 - V.vb.y;
    const left = filt.classList.contains('open') ? filt.offsetWidth : 0;
    const right = panel.classList.contains('open') ? panel.offsetWidth : 0;
    const w = stage.clientWidth - left - right, h = stage.clientHeight;
    V.z = Math.max(V.z, zmin || (V.key.startsWith('sankey') ? 0.3 : 0.75));
    V.tx = left + w / 2 - cx * V.z; V.ty = h / 2 - cy * V.z;
    V.apply();
    return true;
  };
  V.fitTo = ids => {                       /* cadre un ensemble d'éléments dans la place libre */
    let x0 = Infinity, y0 = Infinity, x1 = -Infinity, y1 = -Infinity;
    ids.forEach(id => { const g = V.svg.querySelector(`[data-n="${id}"]`); if (!g) return;
      const bb = (g.querySelector('circle, ellipse, rect:not(.hit)') || g).getBBox();
      x0 = Math.min(x0, bb.x); y0 = Math.min(y0, bb.y); x1 = Math.max(x1, bb.x + bb.width); y1 = Math.max(y1, bb.y + bb.height); });
    if (!(x1 > x0)) return false;
    const left = filt.classList.contains('open') ? filt.offsetWidth : 0;
    const right = panel.classList.contains('open') ? panel.offsetWidth : 0;
    const w = stage.clientWidth - left - right, h = stage.clientHeight, pad = 60;
    V.z = Math.min((w - 2 * pad) / (x1 - x0), (h - 2 * pad) / (y1 - y0), V.key.startsWith('sankey') ? 0.8 : 1.2);
    V.z = Math.max(V.z, 0.02);
    const cx = (x0 + x1) / 2 - V.vb.x, cy = (y0 + y1) / 2 - V.vb.y;
    V.tx = left + w / 2 - cx * V.z; V.ty = h / 2 - cy * V.z; V.apply();
    return true;
  };
  svg.removeAttribute('width'); svg.removeAttribute('height');
  svg.setAttribute('width', SIZE[key][0]); svg.setAttribute('height', SIZE[key][1]);
  stage.addEventListener('wheel', ev => { ev.preventDefault();
    const r = stage.getBoundingClientRect(), mx = ev.clientX - r.left, my = ev.clientY - r.top;
    const k = Math.exp(-ev.deltaY * 0.0014), nz = Math.max(0.01, Math.min(16, V.z * k));
    V.tx = mx - (mx - V.tx) * (nz / V.z); V.ty = my - (my - V.ty) * (nz / V.z); V.z = nz; V.apply();
  }, { passive: false });
  let drag = null;
  stage.addEventListener('mousedown', ev => { if (ev.button === 0)
    drag = { x: ev.clientX, y: ev.clientY, tx: V.tx, ty: V.ty, moved: false }; });
  window.addEventListener('mousemove', ev => { if (!drag) return;
    const dx = ev.clientX - drag.x, dy = ev.clientY - drag.y;
    if (Math.abs(dx) + Math.abs(dy) > 4) { drag.moved = true; stage.classList.add('drag'); }
    if (drag.moved) { V.tx = drag.tx + dx; V.ty = drag.ty + dy; V.apply(); } });
  window.addEventListener('mouseup', () => {
    if (drag && drag.moved) window.addEventListener('click', e => e.stopPropagation(), { capture: true, once: true });
    drag = null; stage.classList.remove('drag'); });
  let tp = null;
  stage.addEventListener('touchstart', ev => { if (ev.touches.length === 1)
    tp = { x: ev.touches[0].clientX, y: ev.touches[0].clientY, tx: V.tx, ty: V.ty }; }, { passive: true });
  stage.addEventListener('touchmove', ev => { if (!tp || ev.touches.length !== 1) return;
    V.tx = tp.tx + ev.touches[0].clientX - tp.x; V.ty = tp.ty + ev.touches[0].clientY - tp.y; V.apply();
  }, { passive: true });
  stage.addEventListener('touchend', () => { tp = null; });
  return V;
}

function syncTop() { const h = document.getElementById('bar').offsetHeight;
  document.querySelectorAll('.stage').forEach(s => s.style.top = h + 'px');
  document.querySelectorAll('.drawer').forEach(s => s.style.top = h + 'px');
  const pb = document.getElementById('pickbar'); if (pb) pb.style.top = (h + 10) + 'px'; }
const views = {};
['fr', 'en'].forEach(l => {
  views['schema_' + l] = mkView('st_schema_' + l, 'schema_' + l, '.nd', '.lnk');
  views['sankey_' + l] = mkView('st_sankey_' + l, 'sankey_' + l, '.snd', '.sl');
});
syncTop(); window.addEventListener('resize', () => { syncTop(); drawMini(); });

/* --- mini-carte --- */
function drawMini() {
  const V = views[vk()]; if (!V) return;
  const [W, H] = SIZE[V.key], mw = Math.min(230, Math.max(150, window.innerWidth * 0.16)), s = mw / W;
  const img = mini.querySelector('img');
  if (img.dataset.k !== V.key) { img.src = MINI[V.key]; img.dataset.k = V.key; }
  mini.style.width = mw + 'px';
  const vp = mini.querySelector('.vp');
  const x = -V.tx / V.z, y = -V.ty / V.z, w = V.stage.clientWidth / V.z, h = V.stage.clientHeight / V.z;
  const cx = Math.max(0, x), cy = Math.max(0, y), cw = Math.min(W, x + w) - cx, ch = Math.min(H, y + h) - cy;
  vp.style.display = cw > 0 && ch > 0 ? 'block' : 'none';
  vp.style.left = cx * s + 'px'; vp.style.top = cy * s + 'px';
  vp.style.width = Math.max(4, cw * s) + 'px'; vp.style.height = Math.max(4, ch * s) + 'px';
}
let miniDrag = false;
function miniMove(ev) {
  const V = views[vk()], r = mini.getBoundingClientRect(), s = r.width / SIZE[V.key][0];
  const px = (ev.clientX - r.left) / s, py = (ev.clientY - r.top) / s;
  V.tx = V.stage.clientWidth / 2 - px * V.z; V.ty = V.stage.clientHeight / 2 - py * V.z; V.apply();
}
mini.addEventListener('mousedown', ev => { ev.preventDefault(); ev.stopPropagation(); miniDrag = true; miniMove(ev); });
window.addEventListener('mousemove', ev => { if (miniDrag) miniMove(ev); });
window.addEventListener('mouseup', () => { miniDrag = false; });

/* --- masquage des flux à 0% (schéma seulement : le Sankey les exclut déjà) --- */
['schema_fr', 'schema_en'].forEach(k => {
  const V = views[k], G = V.G;
  const roots = Object.keys(G.nodes).filter(n => !G.edges.some(e => e.t === n));
  const live = new Set(roots), st = [...roots];
  while (st.length) { const u = st.pop();
    (V.outE[u] || []).forEach(i => { if (G.edges[i].v === 0) return;
      const v = G.edges[i].t; if (!live.has(v)) { live.add(v); st.push(v); } }); }
  const liveE = G.edges.map(e => e.v !== 0 && live.has(e.f));
  V.lnks.forEach(o => {
    if (o.el.classList.contains('dot')) {
      /* un point de jonction ne subsiste que si une PAIRE entière de connecteurs
         raccordés subsiste. Compter les connecteurs vivants laisserait des points
         entre un flux présent et un flux masqué. */
      if (!dotPaire(o.el, i => liveE[i])) o.el.classList.add('zero');
    } else if (o.e.filter(i => liveE[i]).length < o.e.length) {
      o.el.classList.add('zero');
    } });
  V.nds.forEach(o => { if (!live.has(o.n)) o.el.classList.add('zero'); });
  /* tracés dont un saut de croisement doit tomber avec le trait qu'il enjambait */
  V.alt = [...V.svg.querySelectorAll('path[data-d0]')].map(
    el => ({ el, full: el.getAttribute('d'), zero: el.dataset.d0 }));
});
const swZero = document.getElementById('swZero');
swZero.onclick = () => { swZero.classList.toggle('on');
  const on = swZero.classList.contains('on');
  ['schema_fr', 'schema_en'].forEach(k => {
    views[k].svg.querySelectorAll('.zero').forEach(el => el.classList.toggle('hide', on));
    (views[k].alt || []).forEach(o => o.el.setAttribute('d', on ? o.zero : o.full)); }); };

/* --- filtres : filière, étape, destination finale --- */
const FSEL = { fil: new Set(FILS), st: new Set(STS), dest: new Set(DESTS) };
function passes(id) {
  const m = META()[id]; if (!m) return null;
  const f = FSEL.fil.size === FILS.length || !m.fil.length || m.fil.some(x => FSEL.fil.has(x));
  const s = FSEL.st.size === STS.length || FSEL.st.has(m.st);
  const d = FSEL.dest.size === DESTS.length || [...FSEL.dest].some(c => (m.fate[c] || 0) > 1e-9);
  return f && s && d;
}
function applyFilters() {
  const ok = {}; Object.keys(META()).forEach(id => ok[id] = passes(id));
  const active = FSEL.fil.size + FSEL.st.size + FSEL.dest.size < FILS.length + STS.length + DESTS.length;
  Object.values(views).forEach(V => {
    const G = V.G, okN = {};
    Object.keys(G.nodes).forEach(id => { okN[id] = ok[id] !== undefined && ok[id] !== null ? ok[id] : null; });
    Object.keys(G.nodes).forEach(id => { if (okN[id] === null)        /* repères de boucle : comme leurs voisins */
      okN[id] = [...(V.outE[id] || []).map(i => G.edges[i].t), ...(V.inE[id] || []).map(i => G.edges[i].f)]
        .some(n => ok[n]); });
    const okE = G.edges.map(e => !!(okN[e.f] && okN[e.t]));
    V.nds.forEach(o => o.el.classList.toggle('flt', active && !okN[o.n]));
    V.lnks.forEach(o => {
      const garde = o.el.classList.contains('dot')
        ? dotPaire(o.el, i => okE[i])
        : o.e.every(i => okE[i]);
      o.el.classList.toggle('flt', active && !garde); });
  });
  const tot = Object.keys(META()).length, vis = Object.values(ok).filter(Boolean).length;
  const b = document.getElementById('btnFilt');
  b.classList.toggle('active', active); b.querySelector('.badge').textContent = active ? vis : '';
  const c = filt.querySelector('.count'); if (c) c.textContent = S('count')(vis, tot);
}
function buildFilters() {
  const grp = (key, list, lab, col) => '<h3>' + S(key === 'fil' ? 'h_fil' : key === 'st' ? 'h_st' : 'h_dest') + '</h3>'
    + list.map(x => `<label><input type="checkbox" data-g="${key}" value="${x}"${FSEL[key].has(x) ? ' checked' : ''}>`
      + (col ? `<i style="background:${DCOL[x]}"></i>` : '') + esc(S(lab + x)) + '</label>').join('');
  filt.innerHTML = '<button class="x" title="×">×</button>' + grp('fil', FILS, 'fil_') + grp('st', STS, 'st_')
    + grp('dest', DESTS, 'c_', true)
    + `<div class="row"><button id="fAll">${esc(S('all'))}</button></div><div class="count"></div>`;
  filt.querySelector('.x').onclick = () => { filt.classList.remove('open'); document.getElementById('btnFilt').classList.remove('on');
    document.body.classList.remove('filtering'); };
  filt.querySelectorAll('input').forEach(cb => cb.onchange = () => {
    FSEL[cb.dataset.g][cb.checked ? 'add' : 'delete'](cb.value); applyFilters(); });
  filt.querySelector('#fAll').onclick = () => { FSEL.fil = new Set(FILS); FSEL.st = new Set(STS); FSEL.dest = new Set(DESTS);
    buildFilters(); applyFilters(); };
  applyFilters();
}
document.getElementById('btnFilt').onclick = () => {
  const o = filt.classList.toggle('open'); document.getElementById('btnFilt').classList.toggle('on', o);
  document.body.classList.toggle('filtering', o); };

/* --- calculs de chemin (graphe du schéma, indexé pour aller vite) --- */
const RG = {};
function rg() {
  if (RG[lang]) return RG[lang];
  const G = DATA['schema_' + lang], ids = Object.keys(G.nodes), ix = {};
  ids.forEach((k, i) => ix[k] = i);
  const n2oId = ids.find(k => G.nodes[k].kind === 'sink' && /N2O/.test(G.nodes[k].name));
  const out = ids.map(() => []), inn = ids.map(() => []);
  G.edges.forEach((e, i) => { if (!(e.v > 0)) return;
    out[ix[e.f]].push({ t: ix[e.t], v: e.v, i }); inn[ix[e.t]].push({ f: ix[e.f], v: e.v, i }); });
  const roots = ids.filter(k => !G.edges.some(e => e.t === k)), hasOut = new Set(G.edges.map(e => e.f));
  return RG[lang] = { G, ids, ix, out, inn, n2o: ix[n2oId], n2oId, roots, hasOut, units: {} };
}
function reachShare(a, b) {
  /* part de ce qui passe par a et atteint b (b absorbant). Les sorties vers N2O
     (sans carbone, en plus) ne comptent que si b est le N2O. */
  const R = rg(), A = R.ix[a], B = R.ix[b], n = R.ids.length;
  if (A === undefined || B === undefined) return 0;
  if (A === B) return 1;
  let m = new Float64Array(n), nx = new Float64Array(n), got = 0;
  m[A] = 1;
  for (let it = 0; it < 6000; it++) {
    nx.fill(0); let rest = 0;
    for (let u = 0; u < n; u++) { const x = m[u]; if (!x) continue;
      for (const e of R.out[u]) { if (e.t === R.n2o && B !== R.n2o) continue;
        const q = x * e.v; if (e.t === B) got += q; else nx[e.t] += q; } }
    for (let u = 0; u < n; u++) rest += nx[u];
    const t = m; m = nx; nx = t;
    if (rest < 1e-14) break;
  }
  return got;
}
function units(x) {
  /* carbone (sur 100 unités entrées) qui passe au moins une fois par x */
  const R = rg();
  if (x in R.units) return R.units[x];
  const M = R.G.nodes;
  const u = R.roots.includes(x) ? M[x].flux : R.roots.reduce((s, r) => s + (M[r].flux || 0) * reachShare(r, x), 0);
  return R.units[x] = u;
}
function routes(a, b) {
  /* chemins simples de a vers b (aucun nœud deux fois), du plus lourd au plus léger */
  const R = rg(), A = R.ix[a], B = R.ix[b], n = R.ids.length, res = [];
  if (A === undefined || B === undefined || A === B) return res;
  const skip = t => t === R.n2o && B !== R.n2o;
  const can = new Uint8Array(n), st = [B]; can[B] = 1;
  while (st.length) { const x = st.pop();
    R.inn[x].forEach(e => { if (skip(x) || can[e.f]) return; can[e.f] = 1; st.push(e.f); }); }
  const on = new Uint8Array(n), path = [A], eds = [];
  on[A] = 1;
  res.tronque = false;
  (function dfs(u, w) {
    if (res.length > ROUTES_MAX) { res.tronque = true; return; }
    for (const e of R.out[u]) {
      if (skip(e.t) || !can[e.t] || on[e.t]) continue;
      const ww = w * e.v; if (!(ww > 0)) continue;
      if (e.t === B) { res.push({ w: ww, nodes: [...path, B].map(i => R.ids[i]), eds: [...eds, e.i] }); continue; }
      on[e.t] = 1; path.push(e.t); eds.push(e.i);
      dfs(e.t, ww);
      on[e.t] = 0; path.pop(); eds.pop();
    }
  })(A, 1);
  return res.sort((x, y) => y.w - x.w);
}
const ROUTES_MAX = 20000;   /* au delà, l'énumération des routes est tronquée */
/* Une pastille noire marque le raccord de DEUX connecteurs apparentés. Elle n'a donc
   de sens que si une paire entière satisfait le test, et non deux connecteurs
   quelconques parmi ceux qui s'y croisent. Même règle pour le masquage des flux nuls,
   la surbrillance et les filtres, qui divergeaient. */
function dotPaire(el, test) {
  return (el.dataset.p || '').split(' ').filter(x => x).some(x => {
    const [a, b] = x.split('-').map(Number); return test(a) && test(b); });
}
let PC = null;
function curPath() {
  const key = lang + '|' + pathA + '|' + pathB;
  if (PC && PC.key === key) return PC;
  const sh = reachShare(pathA, pathB), uA = units(pathA), uB = units(pathB), rs = routes(pathA, pathB);
  const sumR = rs.reduce((s, r) => s + r.w, 0);
  return PC = { key, sh, uA, uB, Q: uA * sh, rs, sumR, loop: Math.max(0, sh - sumR),
                tronque: !!rs.tronque };
}
function keySteps(rt) {
  /* étapes utiles d'une route : sans Répartitions, sans les passages obligés (100 %),
     et sans répéter le contexte déjà nommé (« Fraction dégradable » au lieu de
     « Fraction dégradable, enfouissement municipal P&P ») */
  const G = DATA['schema_' + lang], M = G.nodes, out = [], seen = [M[rt.nodes[0]].name.toLowerCase()];
  let acc = 1;
  for (let i = 1; i < rt.nodes.length - 1; i++) {
    acc *= G.edges[rt.eds[i - 1]].v;
    const nd = M[rt.nodes[i]];
    if (nd.kind === 'split') continue;
    if (acc < 0.999) {
      let nm = nd.name; const c = nm.indexOf(', ');
      if (c > 0) { const ctx = nm.slice(c + 2).toLowerCase(); if (seen.some(s => s.includes(ctx))) nm = nm.slice(0, c); }
      out.push(nm);
    }
    seen.push(nd.name.toLowerCase()); acc = 1;
  }
  return out;
}
function arrivals(a) {
  /* arrivées fréquentes : destinations finales (sans le N2O) et stocks de produits */
  const R = rg(), M = R.G.nodes, EN = DATA.schema_en.nodes, down = views['schema_' + lang].walk(a, 'down').nodes;
  const fin = [], sto = [];
  R.ids.forEach((k, i) => {
    if (k === a || !down.has(k) || i === R.n2o || M[k].kind === 'split') return;
    const term = !R.hasOut.has(k);
    const stock = !term && !!M[k].decay;   /* nœud de dégradation, et non un nom en « storage » */
    if (!term && !stock) return;
    const w = reachShare(a, k); if (!(w > 1e-12)) return;
    (term ? fin : sto).push({ id: k, name: M[k].name, w, v: pct(w) + ' %' });
  });
  const by = (x, y) => y.w - x.w;
  return { fin: fin.sort(by), sto: sto.sort(by).slice(0, 8) };
}

/* --- chemin : état et dessin --- */
let routeSel = null, routeOpen = false, routeAll = false, prevPath = null;
function pathSets(V, a, b) {
  const d = V.walk(a, 'down'), u = V.walk(b, 'up');
  const nodes = new Set([...d.nodes].filter(n => u.nodes.has(n)));
  const eds = new Set([...d.eds].filter(i => u.eds.has(i)));
  return { nodes, eds };
}
function routeSets(V, rt) {
  if (V.key.startsWith('schema')) return { nodes: new Set(rt.nodes), eds: new Set(rt.eds) };
  /* Sankey : sans Répartitions, et les retours en arrière passent par une paire de repères */
  const G = V.G, keep = rt.nodes.filter(id => id in G.nodes), nodes = new Set(keep), eds = new Set();
  for (let k = 0; k + 1 < keep.length; k++) {
    const u = keep[k], v = keep[k + 1], os = V.outE[u] || [];
    const d = os.find(i => G.edges[i].t === v);
    if (d !== undefined) { eds.add(d); continue; }
    os.forEach(i => { const o = G.edges[i].t; if (!G.nodes[o] || G.nodes[o].loop !== 'out') return;
      (V.outE[o] || []).forEach(j => { const i2 = G.edges[j].t;
        (V.outE[i2] || []).forEach(m => { if (G.edges[m].t !== v) return;
          [i, j, m].forEach(x => eds.add(x)); nodes.add(o); nodes.add(i2); }); }); });
  }
  return { nodes, eds };
}
function showPath() {
  const rt = pathA && pathB && routeSel !== null ? (curPath().rs[routeSel] || null) : null;
  Object.values(views).forEach(V => {
    if (!(pathA in V.G.nodes)) { V.paint(null); return; }
    if (pathB) {
      if (!(pathB in V.G.nodes)) { V.paint(null); return; }
      V.paint(rt ? routeSets(V, rt) : pathSets(V, pathA, pathB), [pathB], [pathA]);
    } else V.paint(V.walk(pathA, 'down'), [], [pathA]);   /* en attente de l'arrivée : tout ce qui est atteignable reste visible */
  });
}
function fitPath() {
  const V = views[vk()]; if (!pathA || !pathB) return;
  const rt = routeSel !== null ? curPath().rs[routeSel] : null;
  const ids = rt ? rt.nodes : [...pathSets(V, pathA, pathB).nodes];
  V.fitTo(ids.filter(id => id in V.G.nodes));
}
const pickbar = document.getElementById('pickbar');
function resetRoute() { routeSel = null; routeOpen = false; routeAll = false; }
function startPath(id) {
  pathA = id; pathB = null; pickB = true; current = id; prevPath = null; resetRoute();
  showPath(); renderPanel(); openPanel();
  pickbar.innerHTML = S('pick'); pickbar.classList.add('on');
}
function endPick() { pickB = false; pickbar.classList.remove('on'); }
function clearPath() { pathA = pathB = null; resetRoute(); endPick(); }
function setArrival(id) {
  if (id === pathA) return false;
  if (!views['schema_' + lang].walk(pathA, 'down').nodes.has(id)) {
    pickbar.innerHTML = S('pick') + '<br><b>' + S('unreach') + '</b>'; return false; }
  pathB = id; resetRoute(); endPick(); current = id; showPath(); renderPanel(); openPanel();
  return true;
}
function setPath(a, b) {
  pathA = a; pathB = b; resetRoute(); endPick(); current = b; showPath(); renderPanel(); openPanel();
}

/* --- panneau de droite : une fiche différente selon ce qu'on regarde --- */
function renderPanel() {
  if (pathA && pickB) pickCard();
  else if (pathA && pathB) pathCard();
  else if (current) fiche(current);
}
function pickCard() {
  const M = META(), a = pathA, ar = arrivals(a);
  let h = '<div class="hd"><button class="x" title="×">×</button>'
    + `<div class="chips"><span class="k-path">${S('pathT')}</span></div>`
    + `<div class="ab"><div class="pr" data-c="${a}"><span class="dot a"></span><span class="nm">${esc(M[a].name)}</span></div>`
    + `<div class="arr">↓</div><div class="pr wait"><span class="dot b off"></span><span class="nm">${S('pickT')}</span></div></div>`
    + '</div>';
  h += `<section class="card"><h3>${S('freq')}</h3><div class="sub" style="margin-bottom:6px">${S('freqSub')}</div>`
    + (ar.fin.length ? `<h4>${S('gFinal')}</h4>` + rows(ar.fin, '', 'pick') : '')
    + (ar.sto.length ? `<h4>${S('gStock')}</h4>` + rows(ar.sto, '', 'pick') : '')
    + (ar.fin.length + ar.sto.length ? '' : `<div class="sub">${S('noArr')}</div>`)
    + '</section>';
  h += `<section class="card"><div class="note" style="margin:0">${S('pickOr')}</div></section>`;
  h += `<div class="foot"><button data-a="cancel">${S('cancel')}</button></div>`;
  panel.innerHTML = h;
  panel.querySelector('.x').onclick = () => clearSel();
  panel.querySelectorAll('[data-pick]').forEach(li => li.onclick = () => goTo(li.dataset.pick));
  panel.querySelectorAll('[data-c]').forEach(el => el.onclick = () => { ensureVisible(el.dataset.c); views[vk()].centerOn(el.dataset.c); });
  panel.querySelector('[data-a="cancel"]').onclick = () => { const x = pathA; clearPath(); select(x, true); };
}
function pathCard() {
  const M = META(), G = DATA['schema_' + lang], a = pathA, b = pathB, P = curPath();
  const isN = b === rg().n2oId, sfx = isN ? 'n' : '';
  const canInv = views['schema_' + lang].walk(b, 'down').nodes.has(a);
  let h = '<div class="hd"><button class="x" title="×">×</button>'
    + `<div class="chips"><span class="k-path">${S('pathT')}</span></div>`
    + `<div class="ab"><div class="pr" data-c="${a}"><span class="dot a"></span><span class="nm">${esc(M[a].name)}</span></div>`
    + `<div class="arr">↓</div><div class="pr" data-c="${b}"><span class="dot b"></span><span class="nm">${esc(M[b].name)}</span></div></div>`
    + `<div class="row">${canInv ? `<button data-a="inv">⇅ ${S('pInv')}</button>` : ''}`
    + `<button data-a="clear">${S('pathClear')}</button></div></div>`;
  if (tab === 'sankey' && !(a in views[vk()].G.nodes && b in views[vk()].G.nodes))
    h += `<section class="card"><div class="note" style="margin:0">${S('pAbsent')}</div></section>`;
  /* chiffres clés */
  h += `<section class="card"><h3>${S('pFig')}</h3>`;
  if (P.sh > 0) {
    h += '<div class="kpi">'
      + `<div><b>${pct(P.sh)} %</b><span>${S('k1' + sfx)}</span></div>`
      + `<div><b>${f3(P.Q)}</b><span>${S('k2' + sfx)}</span></div>`
      + `<div><b>${P.uB > 0 ? pct(Math.min(1, P.Q / P.uB)) + ' %' : '–'}</b><span>${S('k3' + sfx)}</span></div></div>`
      + (isN ? `<div class="note">${S('n2oNote')}</div>` : '');
  } else h += `<div class="sub">${S('pathNone')}</div>`;
  h += '</section>';
  /* principales routes */
  if (P.rs.length) {
    const shown = routeAll ? P.rs.length : Math.min(5, P.rs.length);
    h += `<section class="card"><h3>${S('pRoutes')} <span class="n">${P.rs.length}</span>`
      + (routeSel !== null ? `<button class="mini" data-a="allr">${S('pBackAll')}</button>` : '') + '</h3>'
      + `<div class="sub" style="margin-bottom:6px">${S('pRoutesSub')}</div><ul class="rt">`;
    for (let i = 0; i < shown; i++) {
      const r = P.rs[i], ks = keySteps(r), on = i === routeSel;
      h += `<li data-r="${i}" class="${on ? 'on' : ''}"><span class="bar" style="width:${Math.min(1, r.w / P.sh) * 100}%"></span>`
        + `<div class="top"><b>${pct(r.w / P.sh)} %</b><span class="u">${f3(P.uA * r.w)} ${S('of100')}</span><span class="k">${on ? (routeOpen ? '▾' : '▸') : '#' + (i + 1)}</span></div>`
        + `<div class="steps">${ks.length ? ks.map(esc).join('<i>›</i>') : S('pDirect')}</div>`;
      if (on && routeOpen) {
        h += '<ol class="stp">' + r.nodes.map((id, k) => { const nd = M[id];
          return `<li data-c="${id}" class="${nd.kind === 'split' ? 'sp' : ''}"><span>${esc(nd.name)}</span>`
            + (k ? `<span class="f" title="${esc(S('stepF'))}">${pct(G.edges[r.eds[k - 1]].v)} %</span>` : '') + '</li>'; }).join('') + '</ol>';
      }
      h += '</li>';
    }
    h += '</ul>';
    if (P.rs.length > 5) h += `<div class="row" style="margin-top:6px"><button class="mini" data-a="more">${routeAll ? S('pLess') : S('pAll')(P.rs.length)}</button></div>`;
    const hasLoop = P.loop > Math.max(1e-9, P.sh * 1e-4);
    if (hasLoop)
      h += `<div class="loopln"><b>↻ ${S('pLoop')}${S('colon')}${pct(P.loop / P.sh)} %</b> <span class="u">${f3(P.uA * P.loop)} ${S('of100')}</span>`
        + `<div class="sub">${S('pLoopSub')}</div></div>`;
    h += `<div class="tot">${S('pTot')(P.rs.length, pct(P.sumR / P.sh), hasLoop ? pct(P.loop / P.sh) : null)}`
       + (P.tronque ? `<br><b>${S('pTronque')(ROUTES_MAX)}</b>` : '') + `</div>`;
    h += '</section>';
  }
  h += `<div class="foot"><button data-a="fit">${S('pFit')}</button><button data-a="fa">${S('pFicheA')}</button>`
    + `<button data-a="fb">${S('pFicheB')}</button></div>`;
  panel.innerHTML = h;
  const btn = x => panel.querySelector(`[data-a="${x}"]`);
  panel.querySelector('.x').onclick = () => clearSel();
  panel.querySelectorAll('.ab [data-c]').forEach(el => el.onclick = () => { ensureVisible(el.dataset.c); views[vk()].centerOn(el.dataset.c); });
  if (btn('inv')) btn('inv').onclick = () => setPath(b, a);
  btn('clear').onclick = () => { const x = pathA; clearPath(); select(x, true); };
  btn('fit').onclick = () => fitPath();
  btn('fa').onclick = () => { select(a); views[vk()].centerOn(a); };
  btn('fb').onclick = () => { select(b); views[vk()].centerOn(b); };
  if (btn('allr')) btn('allr').onclick = () => { resetRouteSel(); };
  if (btn('more')) btn('more').onclick = () => { routeAll = !routeAll; pathCard(); };
  panel.querySelectorAll('.rt > li').forEach(li => li.onclick = ev => {
    const st = ev.target.closest('[data-c]');
    if (st) { ensureVisible(st.dataset.c); views[vk()].centerOn(st.dataset.c); return; }
    const i = +li.dataset.r;
    if (routeSel === i) routeOpen = !routeOpen;
    else { routeSel = i; routeOpen = false; showPath(); fitPath(); }
    pathCard();
  });
}
function resetRouteSel() { routeSel = null; routeOpen = false; showPath(); pathCard(); }

/* --- fiche d'un élément --- */
function hlSummary(id) {                 /* ce que la surbrillance montre dans la vue courante */
  const V = views[vk()];
  if (!(id in V.G.nodes)) return `<div class="note">${S('absent')}</div>`;
  const G = V.G, r = V.flows(id), nb = { node: 0, split: 0, sink: 0 };
  r.nodes.forEach(k => { if (k !== id && G.nodes[k] && nb[G.nodes[k].kind] !== undefined) nb[G.nodes[k].kind]++; });
  const quoi = mode === 'down' ? S('q_down') : mode === 'up' ? S('q_up') : S('q_both');
  const sp = tab === 'schema' ? nb.split + S('splits') : '';
  return `<div class="sub">${quoi}${S('colon')}${nb.node}${S('nodes')}${sp}${nb.sink}${S('sinks')}${r.eds.size}${S('conns')}</div>`;
}
function rows(list, empty, attr) {
  attr = attr || 'go';
  return '<ul class="nb">' + (list.length ? list.map(r =>
      `<li data-${attr}="${r.id}"><span class="bar" style="width:${Math.max(0, Math.min(1, r.w)) * 100}%"></span>`
      + `<span class="nm">${esc(r.name)}</span><span class="v">${r.v}</span></li>`).join('')
    : `<li class="empty">${empty}</li>`) + '</ul>';
}
function fiche(id) {
  const M = META(), n = M[id], V = views[vk()];
  let h = '<div class="hd"><button class="x" title="×">×</button>';
  if (!n) {                                  /* repère de boucle (Sankey seulement) */
    const g = V.G.nodes[id] || DATA['sankey_' + lang].nodes[id] || { name: id };
    h += `<div class="chips"><span>${S('k_marker')}</span></div><h2>${esc(g.name)}</h2></div>`
      + `<section class="card"><div class="note">${S(g.loop === 'out' ? 'mk_out' : 'mk_in')}</div></section>`;
    panel.innerHTML = h; bindPanel(id); return;
  }
  const chips = `<span class="k-${n.kind}">${esc(S('k_' + n.kind))}</span><span class="s-${n.st}">${esc(S('st_' + n.st))}</span>`
    + (n.fil.length ? n.fil.map(f => `<span>${esc(S('fil_' + f))}</span>`).join('') : `<span>${esc(S('fil_all'))}</span>`);
  h += `<div class="chips">${chips}</div><h2>${esc(n.name)}</h2>${hlSummary(id)}</div>`;
  if (prevPath) {
    h += `<section class="card back"><button data-a="back">↩ ${S('pBack')}</button>`
      + `<div class="sub">${esc(M[prevPath.a] ? M[prevPath.a].name : '')} → ${esc(M[prevPath.b] ? M[prevPath.b].name : '')}</div></section>`;
  }
  /* carbone */
  const G = DATA['schema_' + lang];
  const loop = [...views['schema_' + lang].walk(id, 'down').eds].some(i => G.edges[i].t === id);
  h += `<section class="card"><h3>${S('h_flux')}</h3>`
    + (n.flux > 0 ? `<div class="big"><b>${f3(n.flux)}</b></div><div class="sub">${S('per100')}</div>`
                  : `<div class="sub">${S('flux0')}</div>`)
    + (loop ? `<div class="note">${S('loopnote')}</div>` : '') + '</section>';
  /* origine du carbone : parts réelles, à ne pas confondre avec les puces de filière */
  {
    const P = n.pt || {}, tp = ORIGS.reduce((a, c) => a + (P[c] || 0), 0);
    h += `<section class="card"><h3>${S('h_orig')}</h3>`;
    if (tp > 0) {
      const vus = ORIGS.filter(c => (P[c] || 0) / tp >= 0.01),
            reste = ORIGS.filter(c => (P[c] || 0) > 0 && (P[c] || 0) / tp < 0.01);
      h += '<div class="fate">'
        + ORIGS.filter(c => P[c] > 0).map(c =>
            `<span style="width:${(P[c] / tp) * 100}%;background:${OCOL[c]}" title="${esc(S('o_' + c))}"></span>`).join('')
        + '</div><div class="leg">'
        + vus.map(c => `<i style="background:${OCOL[c]}"></i><span>${esc(S('o_' + c))}</span>`
                     + `<span class="v">${pct(P[c] / tp)} %</span>`).join('')
        + (reste.length ? `<i style="background:#ccd2d8"></i><span>${esc(S('o_petit'))}</span>`
                        + `<span class="v">${reste.map(c => esc(S('o_' + c))).join(', ')}</span>` : '')
        + `</div><div class="sub" style="margin-top:6px">${S('orig_sub')}</div>`;
    } else {
      h += `<div class="sub">${S('orig0')}</div>`;
    }
    h += '</section>';
  }
  /* destination finale */
  if (n.kind !== 'sink') {
    const f = n.fate;
    h += `<section class="card"><h3>${S('h_dest')}</h3><div class="fate">`
      + ['co2', 'ch4', 'ash', 'stock'].map(c => `<span style="width:${(f[c] || 0) * 100}%;background:${DCOL[c]}" title="${esc(S('c_' + c))}"></span>`).join('')
      + '</div><div class="leg">'
      + DESTS.filter(c => (f[c] || 0) > 0).map(c => `<i style="background:${DCOL[c]}"></i><span>${esc(S('c_' + c))}</span><span class="v">${pct(f[c])} %</span>`).join('')
      + `</div><div class="sub" style="margin-top:6px">${S('dest_sub')}</div></section>`;
  }
  /* entrées et sorties */
  const ins = G.edges.filter(e => e.t === id), outs = G.edges.filter(e => e.f === id);
  const tot = ins.reduce((a, e) => a + (M[e.f].flux || 0) * e.v, 0);
  const rin = ins.map(e => { const q = (M[e.f].flux || 0) * e.v;
    return { id: e.f, name: M[e.f].name, w: tot > 0 ? q / tot : 0, v: f3(q) + (tot > 0 ? ' · ' + pct(q / tot) + ' %' : '') }; })
    .sort((a, b) => b.w - a.w);
  const rout = outs.map(e => ({ id: e.t, name: M[e.t].name, w: e.v,
    v: pct(e.v) + ' %' + (n.flux > 0 ? ' · ' + f3(n.flux * e.v) : '') })).sort((a, b) => b.w - a.w);
  h += `<section class="card"><h3>${S('h_in')} <span class="n">${ins.length}</span></h3>${rows(rin, S('noin'))}</section>`;
  h += `<section class="card"><h3>${S('h_out')} <span class="n">${outs.length}</span></h3>${rows(rout, S('noout'))}</section>`;
  /* actions */
  h += `<div class="foot"><button data-a="center">${S('center')}</button>`
    + `<button data-a="A">${S('pathFrom')}</button></div>`;
  panel.innerHTML = h; bindPanel(id);
}
function bindPanel(id) {
  panel.querySelector('.x').onclick = () => clearSel();
  panel.querySelectorAll('[data-go]').forEach(li => li.onclick = () => goTo(li.dataset.go));
  const b = a => panel.querySelector(`[data-a="${a}"]`);
  if (b('center')) b('center').onclick = () => { ensureVisible(id); views[vk()].centerOn(id); };
  if (b('A')) b('A').onclick = () => startPath(id);
  if (b('back')) b('back').onclick = () => { const p = prevPath; prevPath = null; setPath(p.a, p.b); fitPath(); };
}
function openPanel() { panel.classList.add('open'); document.body.classList.add('paneled'); }

/* --- sélection, partagée par toutes les vues --- */
function select(id, keepPath) {
  current = id;
  if (!keepPath) { if (pathA && pathB) prevPath = { a: pathA, b: pathB }; clearPath(); }
  if (pathA) showPath();
  else Object.values(views).forEach(V => V.show(id));
  renderPanel(); openPanel();
}
function clearSel() { Object.values(views).forEach(V => V.clear());
  panel.classList.remove('open'); document.body.classList.remove('paneled');
  current = null; prevPath = null; clearPath(); }
function ensureVisible(id) {                 /* bascule vers le schéma si l'élément n'est pas dans le Sankey */
  if (!(id in views[vk()].G.nodes) && tab === 'sankey') document.querySelector('#tabs button[data-v="schema"]').click();
}
function goTo(id) {
  ensureVisible(id);
  if (pickB) { if (!setArrival(id)) return; fitPath(); return; }
  select(id);
  views[vk()].centerOn(id);
}

/* les clics dans les panneaux ne doivent jamais atteindre le dessin, même quand le
   panneau se redessine pendant le clic (l'élément cliqué n'est alors plus dans la page) */
[panel, filt, mini, document.getElementById('bar'), pickbar].forEach(el => el.addEventListener('click', e => e.stopPropagation()));
document.addEventListener('click', ev => {
  const t = ev.target;
  if (!t.closest) return;
  const g = t.closest('.nd,.snd'), lk = t.closest('.sl');
  const id = g ? g.dataset.n : lk ? lk.dataset.from : null;
  if (pickB) { if (id) setArrival(id); return; }      /* choix de l'arrivée du chemin */
  if (id) { if (id === current && !pathA) clearSel(); else select(id); return; }
  clearSel();
});
document.addEventListener('keydown', e => { if (e.key !== 'Escape') return;
  if (qres.classList.contains('open')) { qres.classList.remove('open'); q.blur(); return; }
  if (pickB) { const a = pathA; clearPath(); select(a, true); return; }
  if (pathA && pathB && routeSel !== null) { resetRouteSel(); return; }
  clearSel(); });
document.getElementById('reset').onclick = () => { clearSel();
  FSEL.fil = new Set(FILS); FSEL.st = new Set(STS); FSEL.dest = new Set(DESTS); buildFilters(); };
document.getElementById('fit').onclick = () => views[vk()].fit();
document.querySelectorAll('#segDir button').forEach(bt => bt.onclick = () => {
  document.querySelectorAll('#segDir button').forEach(o => o.classList.toggle('on', o === bt));
  mode = bt.dataset.m; if (current) select(current, true); });

/* --- recherche --- */
const q = document.getElementById('q'), qres = document.getElementById('qres');
const norm = s => s.normalize('NFD').replace(/[̀-ͯ]/g, '').toLowerCase();
let qList = [], qCur = 0;
function runSearch() {
  const raw = q.value.trim(); if (!raw) { qres.classList.remove('open'); return; }
  const words = norm(raw).split(/\s+/).filter(Boolean);
  const M = META(), other = DATA['schema_' + (lang === 'fr' ? 'en' : 'fr')].nodes;
  qList = Object.keys(M).map(id => {
    const a = norm(M[id].name), b = norm(other[id] ? other[id].name : '');
    if (!words.every(w => a.includes(w) || b.includes(w))) return null;
    const score = (a.startsWith(words[0]) ? 0 : b.startsWith(words[0]) ? 1 : 2) * 10
      + (M[id].kind === 'split' ? 5 : 0) + a.length / 200;
    return { id, score };
  }).filter(Boolean).sort((x, y) => x.score - y.score).slice(0, 14);
  qCur = 0;
  qres.innerHTML = qList.length ? qList.map((r, i) => { const n = M[r.id];
      return `<div class="it${i === 0 ? ' cur' : ''}" data-id="${r.id}"><span class="nm">${esc(n.name)}</span>`
        + `<span class="tag">${esc(S('k_' + n.kind))}${n.flux > 0 ? ' · ' + f3(n.flux) : ''}</span></div>`; }).join('')
    : `<div class="none">${S('noresult')}</div>`;
  qres.classList.add('open');
  qres.querySelectorAll('.it').forEach(it => it.onmousedown = ev => { ev.preventDefault(); pick(it.dataset.id); });
}
function pick(id) { qres.classList.remove('open'); q.value = ''; q.blur(); goTo(id); }
q.addEventListener('input', runSearch);
q.addEventListener('focus', () => { if (q.value.trim()) runSearch(); });
q.addEventListener('blur', () => setTimeout(() => qres.classList.remove('open'), 120));
q.addEventListener('keydown', e => {
  if (!qres.classList.contains('open') || !qList.length) return;
  if (e.key === 'ArrowDown' || e.key === 'ArrowUp') { e.preventDefault();
    qCur = (qCur + (e.key === 'ArrowDown' ? 1 : qList.length - 1)) % qList.length;
    qres.querySelectorAll('.it').forEach((it, i) => it.classList.toggle('cur', i === qCur));
    qres.querySelectorAll('.it')[qCur].scrollIntoView({ block: 'nearest' }); }
  if (e.key === 'Enter') { e.preventDefault(); pick(qList[qCur].id); }
});

/* --- affichage de la vue courante (onglet × langue) --- */
function showView() {
  Object.keys(views).forEach(k => views[k].stage.classList.toggle('hidden', k !== vk()));
  swZero.classList.toggle('off', tab !== 'schema');
  const V = views[vk()];
  if (!V.ready) {
    const twin = views[tab + '_' + (lang === 'fr' ? 'en' : 'fr')];
    if (twin.ready) { V.z = twin.z; V.tx = twin.tx; V.ty = twin.ty; V.apply(); } else V.fit();
    V.ready = true;
  }
  drawMini();
  if (current) select(current, true); else if (pathA) showPath();
  if (pickB) pickbar.innerHTML = S('pick');
}
document.querySelectorAll('#tabs button').forEach(bt => bt.onclick = () => {
  document.querySelectorAll('#tabs button').forEach(o => o.classList.toggle('on', o === bt));
  tab = bt.dataset.v; showView();
});
function applyLang() {
  document.documentElement.lang = lang;
  const gn = document.getElementById('gname').textContent.trim();
  document.title = (gn ? gn + ' · ' : '') + S('title');
  document.querySelectorAll('[data-i]').forEach(el => { el.innerHTML = S(el.dataset.i); });
  q.placeholder = S('search');
  document.querySelectorAll('#segLang button').forEach(o => o.classList.toggle('on', o.dataset.l === lang));
  buildFilters();
  syncTop();
}
document.querySelectorAll('#segLang button').forEach(bt => bt.onclick = () => {
  if (bt.dataset.l === lang) return;
  const old = lang;
  lang = bt.dataset.l;
  try { localStorage.setItem('sepm_lang', lang); } catch (e) {}
  ['schema', 'sankey'].forEach(t => {     /* même cadrage dans l'autre langue */
    const a = views[t + '_' + old], b = views[t + '_' + lang];
    if (a.ready) { b.z = a.z; b.tx = a.tx; b.ty = a.ty; b.apply(); b.ready = true; }
  });
  applyLang(); showView();
  if (!current && !pathA) { panel.classList.remove('open'); document.body.classList.remove('paneled'); }
});

/* --- infobulles du Sankey --- */
['sankey_fr', 'sankey_en'].forEach(k => {
  const Gs = views[k].G;
  views[k].svg.querySelectorAll('.snd').forEach(el => {
    el.addEventListener('mousemove', ev => {
      const n = Gs.nodes[el.dataset.n];
      const tot = Gs.edges.filter(e => e.t === el.dataset.n).reduce((a, e) => a + e.v, 0)
               || Gs.edges.filter(e => e.f === el.dataset.n).reduce((a, e) => a + e.v, 0);
      tip.textContent = n.name + S('colon') + f3(tot) + S('unit')
        + (n.decay ? S('decay') : '') + (n.loop === 'out' ? S('lout') : '') + (n.loop === 'in' ? S('lin') : '');
      tip.style.display = 'block'; tip.style.left = (ev.clientX + 14) + 'px';
      tip.style.top = (ev.clientY + 16) + 'px'; });
    el.addEventListener('mouseleave', () => { tip.style.display = 'none'; });
  });
  views[k].svg.querySelectorAll('.sl').forEach(el => {
    el.addEventListener('mousemove', ev => {
      const e = Gs.edges[Number(el.dataset.s)];
      tip.textContent = Gs.nodes[e.f].name + ' → ' + Gs.nodes[e.t].name + S('colon') + f3(e.v) + S('unit');
      tip.style.display = 'block'; tip.style.left = (ev.clientX + 14) + 'px';
      tip.style.top = (ev.clientY + 16) + 'px'; });
    el.addEventListener('mouseleave', () => { tip.style.display = 'none'; });
  });
});
applyLang(); showView();
</script>
</html>
"""


def write_html(path, views):
    """Page autonome bilingue. views[lang] = dict(schema=(svg, W, H, graph), sankey=(svg, W, H, graph))."""
    strip = lambda t: re.sub(r'\swidth="[\d.]+"\sheight="[\d.]+"', " ", t, count=1)
    data, size = {}, {}
    html = HTML_TEMPLATE
    for lang, v in views.items():
        for kind in ("schema", "sankey"):
            svg, W, H, graph = v[kind]
            data[f"{kind}_{lang}"] = graph
            size[f"{kind}_{lang}"] = [round(W), round(H)]
            html = html.replace(f"__SVG_{kind.upper()}_{lang.upper()}__", strip(svg))
    # mini-cartes : petite image de chaque vue
    import base64
    import cairosvg
    mini = {}
    for lang, v in views.items():
        for kind in ("schema", "sankey"):
            png = cairosvg.svg2png(bytestring=v[kind][0].encode("utf-8"), output_width=460)
            mini[f"{kind}_{lang}"] = "data:image/png;base64," + base64.b64encode(png).decode()
    html = (html.replace("__DATA__", json.dumps(data, ensure_ascii=False))
                .replace("__SIZE__", json.dumps(size))
                .replace("__MINI__", json.dumps(mini))
                .replace("__GRAPH_BRUT__", escape(GRAPH["brut"] or GRAPH["name"], {'"': "&quot;"}))
                .replace("__GRAPH__", escape(GRAPH["name"], {'"': "&quot;"})))
    with open(path, "w", encoding="utf-8") as f:
        f.write(html)


# ----------------------------------------------------------------------------
# Diagramme de Sankey (vue détaillée)
# ----------------------------------------------------------------------------
SANKEY_IN = 100.0        # quantité injectée à la racine
SK_PX = 28.0             # pixels par unité de flux
SK_GAP = 16              # écart vertical minimal entre deux nœuds
SK_COLW = 420            # largeur d'une colonne (large = pentes douces, rubans lisibles)
SK_NODEW = 22            # largeur d'une barre
SK_MINBAR = 4.0          # hauteur plancher d'une barre de nœud (uniforme)
SK_HAIR = 1.2            # épaisseur de tracé d'un ruban trop fin pour être vu
                         # (purement visuelle : elle n'occupe pas de place dans l'empilement,
                         #  les barres restent donc proportionnelles à leur valeur)


def _composantes(ids, nxt):
    """Composantes fortement connexes (Tarjan). Deux nœuds d'une même composante sont
    sur un cycle commun, un lien qui reste dans une composante fait donc partie d'une
    boucle. Itératif, pour ne pas dépendre de la profondeur de pile."""
    index, low, comp = {}, {}, {}
    pile, sur_pile, compteur, nc = [], set(), [0], [0]
    for depart in ids:
        if depart in index:
            continue
        travail = [(depart, iter(nxt[depart]))]
        index[depart] = low[depart] = compteur[0]
        compteur[0] += 1
        pile.append(depart)
        sur_pile.add(depart)
        while travail:
            u, it = travail[-1]
            v = next(it, None)
            if v is None:
                travail.pop()
                if low[u] == index[u]:
                    while True:
                        w = pile.pop()
                        sur_pile.discard(w)
                        comp[w] = nc[0]
                        if w == u:
                            break
                    nc[0] += 1
                if travail:
                    p = travail[-1][0]
                    low[p] = min(low[p], low[u])
            elif v not in index:
                index[v] = low[v] = compteur[0]
                compteur[0] += 1
                pile.append(v)
                sur_pile.add(v)
                travail.append((v, iter(nxt[v])))
            elif v in sur_pile:
                low[u] = min(low[u], index[v])
    return comp


def sankey_flows(nodes, edges, sink_ids):
    """Propage SANKEY_IN depuis la racine. Les boucles de recyclage sont résolues
    par itérations successives jusqu'à convergence."""
    out = defaultdict(list)
    indeg = Counter()
    for e in edges:
        out[e["From"]].append((e["To"], edge_value(e)))
        indeg[e["To"]] += 1
    roots = [i for i in nodes if indeg[i] == 0]
    if not roots:
        raise SystemExit(
            "Aucun nœud d'entrée : tous les nœuds reçoivent au moins un lien, même de"
            " valeur nulle. Le carbone ne peut pas être injecté. Vérifiez qu'aucun lien"
            " ne revient vers le bois rond.")
    flow = {r: SANKEY_IN for r in roots}
    ok, prev, stall = False, float("inf"), 0
    for _ in range(ITER_MAX):
        new = defaultdict(float)
        for r in roots:
            new[r] = SANKEY_IN
        for s, l in out.items():
            if flow.get(s, 0) <= 0:
                continue
            for t, v in l:
                new[t] += flow[s] * v
        gap = max(abs(new[k] - flow.get(k, 0)) for k in set(new) | set(flow))
        flow = dict(new)
        if stable(gap, flow.values()):
            ok = True
            break
        stall = stall + 1 if gap >= prev * 0.999999 else 0
        prev = gap
        if stall > 200:       # l'écart ne diminue plus : boucle sans issue
            break
    if not ok:
        _say("Attention : flux du Sankey non stabilisés après %d passes (écart restant %.3g)."
             " Une boucle de recyclage renvoie tout ou presque tout ce qui y entre, les"
             " valeurs affichées sont sous-estimées." % (ITER_MAX, gap))
    links = [(s, t, flow.get(s, 0) * v) for s, l in out.items() for t, v in l]
    return [(s, t, f) for (s, t, f) in links if f > 1e-7]


def sankey_layout(nodes, links, sink_ids, hubs):
    """Place les nœuds en colonnes, puis ordonne chaque colonne pour limiter les
    croisements. Les liens qui sautent des colonnes reçoivent des points de passage,
    ce qui évite les grands rubans qui traversent le dessin."""
    # 1. supprimer les Splits : nœud -> Split -> nœud devient nœud -> nœud
    via = defaultdict(list)
    inflow = defaultdict(float)
    for (s, t, f) in links:
        via[s].append((t, f))
        inflow[t] += f
    direct = []
    for (s, t, f) in links:
        if s in hubs:
            continue
        if t in hubs:
            # part de la source dans ce qui ENTRE dans le Split (et non dans ce qui en
            # sort : les sorties dépassent 100 % quand le Split émet du N2O « Overflow »)
            tot = inflow[t] or 1.0
            for (t2, f2) in via[t]:
                if t2 not in hubs:
                    direct.append((s, t2, f * f2 / tot))
        else:
            direct.append((s, t, f))
    agg = defaultdict(float)
    for (s, t, f) in direct:
        # un nœud qui se renvoie une part de son flux est une boucle comme une autre :
        # elle est coupée plus bas en une paire de repères ↩ ↪. L'écarter ici ferait
        # une barre plus courte que le flux annoncé par la fiche du même nœud.
        agg[(s, t)] += f
    links = [(s, t, f) for (s, t), f in agg.items() if f > 1e-7]

    ids = sorted({s for s, _, _ in links} | {t for _, t, _ in links})
    nxt = defaultdict(list)
    for (s, t, f) in links:
        nxt[s].append(t)

    # 2. colonnes : plus long chemin, les arêtes de retour mises de côté.
    #    Une boucle est coupée à la SORTIE d'un nœud de recyclage, parce que c'est là
    #    que passe la frontière entre une année et la suivante : ce qui entre dans un
    #    nœud de recyclage appartient à l'année X, ce qui en sort à l'année X+1.
    #    Couper ailleurs donnerait des repères ↩ ↪ posés sur un lien quelconque, y
    #    compris sur un lien qui va vers l'aval, ce qui tromperait le lecteur.
    comp = _composantes(ids, nxt)
    back = {(s, t) for (s, t, f) in links
            if comp[s] == comp[t] and nodes[s].get("Recycling")}

    # ordre topologique du graphe privé de ces coupures
    def _ordre(coupe):
        ordre, vus, pile = [], set(), set()

        def visit(u):
            if u in vus:
                return
            pile.add(u)
            for v in nxt[u]:
                if v not in pile and (u, v) not in coupe:
                    visit(v)
            pile.discard(u)
            vus.add(u)
            ordre.append(u)
        for i in ids:
            visit(i)
        ordre.reverse()
        return ordre

    order = _ordre(back)
    pos_in_order = {u: k for k, u in enumerate(order)}
    restantes = {(s, t) for (s, t, f) in links
                 if (s, t) not in back and pos_in_order[t] <= pos_in_order[s]}
    if restantes:
        # un cycle qui ne passe par aucun nœud de recyclage : il boucle dans la même
        # année. On coupe quand même, pour pouvoir dessiner, mais on le signale.
        _say("Attention : %d boucle(s) ne passent par aucun nœud de recyclage, coupées"
             " à un endroit arbitraire du Sankey : %s"
             % (len(restantes), sorted({nodes[s]["Name"].strip() + " vers " + nodes[t]["Name"].strip()
                                        for (s, t) in restantes})))
        back |= restantes
        order = _ordre(back)
        pos_in_order = {u: k for k, u in enumerate(order)}
    # Colonnes. On classe d'abord les boucles entre elles, puis les nœuds à l'intérieur
    # de chaque boucle. Sans cela, un nœud dont le seul fournisseur est le nœud de
    # recyclage perdrait tout prédécesseur une fois la coupure faite et se retrouverait
    # en colonne 0, collé à la racine, alors qu'il appartient au milieu de la chaîne.
    intra = [(s, t) for (s, t, f) in links if comp[s] == comp[t] and (s, t) not in back]
    r_in = {i: 0 for i in ids}
    for u in order:
        for (s, t) in intra:
            if s == u:
                r_in[t] = max(r_in[t], r_in[s] + 1)
    prof = defaultdict(int)                 # profondeur interne de chaque boucle
    for i in ids:
        prof[comp[i]] = max(prof[comp[i]], r_in[i])
    comp_nxt = defaultdict(set)
    for (s, t, f) in links:
        if comp[s] != comp[t]:
            comp_nxt[comp[s]].add(comp[t])
    base = {c: 0 for c in set(comp.values())}
    # ordre topologique des boucles, calculé sur le graphe des boucles lui-même.
    # Le déduire de l'ordre des nœuds ne marche pas : la première apparition d'une
    # boucle dans cet ordre ne respecte pas forcément les liens entre boucles.
    entrants = Counter()
    for c in base:
        for d in comp_nxt[c]:
            entrants[d] += 1
    file_attente = [c for c in base if not entrants[c]]
    ordre_comp = []
    while file_attente:
        c = file_attente.pop()
        ordre_comp.append(c)
        for d in comp_nxt[c]:
            entrants[d] -= 1
            if not entrants[d]:
                file_attente.append(d)
    for c in ordre_comp:
        for d in comp_nxt[c]:
            base[d] = max(base[d], base[c] + prof[c] + 1)
    rank = {i: base[comp[i]] + r_in[i] for i in ids}
    # garde-fou : après classement, tout lien non coupé doit aller vers la droite,
    # sinon un ruban traverserait le dessin à contresens
    envers = [(s, t) for (s, t, f) in links if (s, t) not in back and rank[t] <= rank[s]]
    if envers:
        _say("Attention : %d lien(s) du Sankey vont vers la gauche après classement des"
             " colonnes, le dessin sera confus : %s"
             % (len(envers), sorted({nodes[s]["Name"].strip() + " vers " + nodes[t]["Name"].strip()
                                     for (s, t) in envers})[:4]))
    last = max(rank.values())
    for i in ids:
        if i in sink_ids:
            rank[i] = last

    # 2b. Rupture des boucles. Un Sankey ne sait pas représenter un retour en arrière :
    #     chaque boucle devient une paire de repères appariés, « repart vers X » juste
    #     après la source, et « revient de Y » juste avant la cible. Plus rien ne
    #     traverse le dessin à contresens.
    vnodes, pairs = {}, []
    if back:
        newlinks = []
        for (s, t, f) in links:
            if (s, t) not in back:
                newlinks.append((s, t, f))
                continue
            o = -100000 - len(pairs) * 2
            i2 = o - 1
            vnodes[o] = dict(Name=T("↩ repart vers ", "↩ returns to ") + tr(nodes[t]["Name"]), loop="out")
            vnodes[i2] = dict(Name=T("↪ revient de ", "↪ comes back from ") + tr(nodes[s]["Name"]), loop="in")
            rank[o] = rank[s] + 1
            rank[i2] = max(0, rank[t] - 1)
            ids.extend([o, i2])
            pairs.append((o, i2, f))
            newlinks.append((s, o, f))
            newlinks.append((i2, t, f))
        links = newlinks
    # à partir d'ici plus aucun lien ne revient en arrière : toutes les boucles ont été
    # remplacées par des paires de repères, « back » n'a donc plus lieu d'être transmis

    # 3. points de passage : un lien traverse les colonnes une par une
    # valeur d'un nœud = ce qui y entre (la racine : ce qui en sort). Les sorties
    # « Overflow » vers N2O s'ajoutent à l'entrée et ne doivent pas la gonfler.
    _in = {i: sum(f for (s, t, f) in links if t == i) for i in ids}
    _out = {i: sum(f for (s, t, f) in links if s == i) for i in ids}
    size = {i: (_in[i] if _in[i] > 0 else _out[i]) for i in ids}
    # hauteur en pixels : somme des épaisseurs réellement dessinées (épaisseur minimale
    # comprise), sinon les barres sont plus courtes que les rubans qui s'y empilent
    def thick(f):
        return f * SK_PX
    hpx = {i: max(size[i] * SK_PX, SK_MINBAR) for i in ids}
    chain = {}                      # lien -> liste d'éléments traversés
    col_items = defaultdict(list)   # colonne -> éléments (nœuds réels et points de passage)
    for i in ids:
        col_items[rank[i]].append(i)
    for k, (s, t, f) in enumerate(links):
        steps = [s]
        for c in range(rank[s] + 1, rank[t]):
            v = ("v", k, c)
            col_items[c].append(v)
            steps.append(v)
        steps.append(t)
        chain[k] = steps
    hgt = dict(hpx)
    for k, (s, t, f) in enumerate(links):
        for it in chain[k][1:-1]:
            hgt[it] = thick(f)
    nb = defaultdict(list)          # voisins dans la chaîne, avec le flux en poids
    for k, (s, t, f) in enumerate(links):
        st = chain[k]
        for a, b in zip(st[:-1], st[1:]):
            nb[a].append((b, f))
            nb[b].append((a, f))

    # 4. ordre dans chaque colonne : barycentre pondéré par le flux
    for c in col_items:
        col_items[c].sort(key=lambda i: -hgt.get(i, 0))
    idx = {i: k for c in col_items for k, i in enumerate(col_items[c])}
    colof = {i: c for c in col_items for i in col_items[c]}
    for it in range(60):
        keys = sorted(col_items) if it % 2 == 0 else sorted(col_items, reverse=True)
        want = -1 if it % 2 == 0 else 1
        for c in keys:
            def bary(i):
                vs = [(idx[v], f) for (v, f) in nb[i]
                      if v in idx and (colof[v] - c) * want > 0]
                if not vs:
                    vs = [(idx[v], f) for (v, f) in nb[i] if v in idx and colof[v] != c]
                if not vs:
                    return idx[i]
                return sum(p * f for p, f in vs) / sum(f for _, f in vs)
            col_items[c].sort(key=bary)
            for k2, i in enumerate(col_items[c]):
                idx[i] = k2

    # 5. géométrie verticale
    def gap_of(i):
        return SK_GAP if not isinstance(i, tuple) else 2.0
    H = 0
    for c, col in col_items.items():
        H = max(H, sum(max(hgt.get(i, 0), 2.0) + gap_of(i) for i in col))
    place = {}
    for c, col in col_items.items():
        tot = sum(max(hgt.get(i, 0), 2.0) + gap_of(i) for i in col)
        y = (H - tot) / 2
        for i in col:
            h = max(hgt.get(i, 0), 2.0)
            place[i] = dict(x=c * SK_COLW, y=y, h=h, col=c)
            y += h + gap_of(i)
    return links, place, H, size, chain, vnodes, pairs


def sig3(v):
    """3 chiffres significatifs en gardant les zéros utiles : 0.570, 5.00, 100."""
    t = f"{v:#.3g}"
    if "e" in t:
        return f"{v:.3g}"
    return t[:-1] if t.endswith(".") else t


def ribbon(stations, w):
    """Contour fermé d'un ruban d'épaisseur verticale constante w, passant par
    stations = [(x, y_centre), ...]. Dessiné comme une surface : les extrémités
    restent verticales, quelle que soit la courbure."""
    def side(seq, dy):
        pts = [(x, y + dy) for (x, y) in seq]
        d = ""
        for i in range(len(pts) - 1):
            (xa, ya), (xb, yb) = pts[i], pts[i + 1]
            if abs(ya - yb) < 0.05 or abs(xa - xb) < 0.05:
                d += f" L{xb:.1f},{yb:.1f}"
            else:
                mx = (xa + xb) / 2
                d += f" C{mx:.1f},{ya:.1f} {mx:.1f},{yb:.1f} {xb:.1f},{yb:.1f}"
        return d
    top = stations
    bot = list(reversed(stations))
    d = f'M{top[0][0]:.1f},{top[0][1] - w / 2:.1f}' + side(top, -w / 2)
    d += f' L{bot[0][0]:.1f},{bot[0][1] + w / 2:.1f}' + side(bot, w / 2) + " Z"
    return d


def sankey_svg(nodes, links, place, H, size, chain, sink_ids, pairs=()):
    """Dessine le Sankey. Chaque lien suit ses points de passage, ce qui évite les
    rubans qui traversent le dessin. Chaque lien porte son identifiant."""
    # ports : ordre des liens au départ et à l'arrivée de chaque nœud, d'après la
    # position verticale du point suivant (ou précédent) de leur chaîne
    out_order, in_order = defaultdict(list), defaultdict(list)
    for k, (s, t, f) in enumerate(links):
        out_order[s].append(k)
        in_order[t].append(k)

    def ykey(it):
        p = place[it]
        return p["y"] + p["h"] / 2
    for s, ks in out_order.items():
        ks.sort(key=lambda k: (place[chain[k][1]]["col"] < place[s]["col"], ykey(chain[k][1])))
    for t, ks in in_order.items():
        ks.sort(key=lambda k: (place[chain[k][-2]]["col"] > place[t]["col"], ykey(chain[k][-2])))
    def stack(i, ks, dst):
        """Répartit les ports sur la barre. L'empilement est proportionnel, donc la
        somme des rubans ne dépasse jamais la barre. S'il reste de la place (barre
        au plancher, ou côté moins chargé que l'autre), le paquet est centré, et
        quand les rubans sont trop fins pour être distingués ils sont étalés sur
        toute la barre pour rester cliquables un par un."""
        p = place[i]
        tot = sum(links[k][2] * SK_PX for k in ks)
        if ks and tot < p["h"] - SK_HAIR * len(ks):
            pitch = p["h"] / len(ks)
            for n_, k in enumerate(ks):
                dst[k] = p["y"] + (n_ + 0.5) * pitch
            return
        y = p["y"] + (p["h"] - tot) / 2
        for k in ks:
            w = links[k][2] * SK_PX
            dst[k] = y + w / 2
            y += w

    ya, yb = {}, {}
    for s_, ks in out_order.items():
        stack(s_, ks, ya)
    for t_, ks in in_order.items():
        stack(t_, ks, yb)

    parts = []
    top_extra = 40.0            # marge haute, plus aucun ruban ne passe au-dessus
    for k, (s, t, f) in enumerate(links):
        w = max(f * SK_PX, SK_HAIR)
        st = chain[k]
        col = ("#e08a1e" if (nodes[t].get("loop") or nodes[s].get("loop"))
               else SINKS[nodes[t]["Name"]]["line"] if t in sink_ids else "#8ab4e8")
        # stations : sortie du nœud, chaque point de passage, entrée du nœud
        pts = [(place[s]["x"] + SK_NODEW, ya[k])]
        for it in st[1:-1]:
            p = place[it]
            pts.append((p["x"], p["y"] + p["h"] / 2))
            pts.append((p["x"] + SK_NODEW, p["y"] + p["h"] / 2))
        pts.append((place[t]["x"], yb[k]))
        hair = f * SK_PX < SK_HAIR          # filet : trop fin pour être vu en transparence
        parts.append(f'<path class="sl{" hair" if hair else ""}" data-s="{k}" data-from="{s}" '
                     f'd="{ribbon(pts, w)}" fill="{col}" fill-opacity="{".95" if hair else ".42"}" stroke="none"/>')

    # étiquettes : côté préféré, sinon l'autre côté, sinon décalage vertical, sinon
    # texte raccourci. Elles ne se recouvrent jamais entre elles ni avec une barre.
    LFS, LH = 12.0, 15.0
    n_label_clash = [0]     # étiquettes posées faute de place libre
    taken = [(p["x"] - 2, p["y"] - 2, p["x"] + SK_NODEW + 2, p["y"] + p["h"] + 2)
             for i, p in place.items() if not isinstance(i, tuple)]

    def libre(r):
        return not any(r[0] < q[2] and r[2] > q[0] and r[1] < q[3] and r[3] > q[1] for q in taken)

    last_col = max(q["col"] for q in place.values())
    reals = sorted([i for i in place if not isinstance(i, tuple)],
                   key=lambda i: (place[i]["col"], place[i]["y"]))
    for i in reals:
        p = place[i]
        n = nodes[i]
        if i in sink_ids:
            fill = SINKS[n["Name"]]["fill"]
        elif n.get("loop"):
            fill = "#e08a1e"
        elif n.get("Recycling"):
            fill = C_RECYCLE
        elif NON_DEG.search(n["Name"]):
            fill = C_RED
        elif n.get("Decay"):
            fill = C_DECAY_STROKE
        else:
            fill = C_NODE_STROKE
        hatch = ('' if not n.get("Decay") else
                 f'<rect x="{p["x"]:.1f}" y="{p["y"]:.1f}" width="{SK_NODEW}" '
                 f'height="{p["h"]:.1f}" rx="2" fill="url(#hp)" pointer-events="none"/>')
        pad = 26
        parts.append(
            f'<g class="snd" data-n="{i}">'
            f'<rect class="hit" x="{p["x"] - pad:.1f}" y="{p["y"] - 5:.1f}" '
            f'width="{SK_NODEW + 2 * pad}" height="{p["h"] + 10:.1f}" fill="transparent"/>'
            f'<rect x="{p["x"]:.1f}" y="{p["y"]:.1f}" width="{SK_NODEW}" height="{p["h"]:.1f}" '
            f'rx="2" fill="{fill}" stroke="#44506080"/>' + hatch)

        val = f' · {sig3(size[i])}'
        cy0 = p["y"] + p["h"] / 2 + 4
        pose = None
        nm_ = disp(n)
        for txt in (nm_, nm_[:26] + "…", nm_[:16] + "…", nm_[:9] + "…"):
            wtxt = text_w(txt + val, LFS) * 1.06 + 10   # marge : le navigateur peut rendre un peu plus large
            sides = ["right", "left"] if p["col"] in (0, last_col) else ["left", "right"]
            for side in sides:
                for dy in (0, -LH, LH, -2 * LH, 2 * LH, -3 * LH, 3 * LH, -4.5 * LH, 4.5 * LH):
                    cy = cy0 + dy
                    if side == "left":
                        x2, x1 = p["x"] - 9, p["x"] - 9 - wtxt
                    else:
                        x1, x2 = p["x"] + SK_NODEW + 9, p["x"] + SK_NODEW + 9 + wtxt
                    r = (x1, cy - LH * 0.78, x2, cy + LH * 0.42)
                    if libre(r):
                        pose = (txt, side, cy, r)
                        break
                if pose:
                    break
            if pose:
                break
        if pose is None:
            # aucune place libre : on pose quand même le nom à droite de la barre,
            # plutôt que de laisser un nœud anonyme, et on le signale
            n_label_clash[0] += 1
            cy = cy0
            pose = (nm_[:16] + "…" if len(nm_) > 17 else nm_, "right", cy,
                    (p["x"] + SK_NODEW + 9, cy - LH * 0.78,
                     p["x"] + SK_NODEW + 9 + text_w(nm_[:17] + val, LFS), cy + LH * 0.42))
        if pose:
            txt, side, cy, r = pose
            taken.append(r)
            anchor = "end" if side == "left" else "start"
            lx = p["x"] - 9 if side == "left" else p["x"] + SK_NODEW + 9
            parts.append(
                f'<text class="slab" x="{lx:.1f}" y="{cy:.1f}" font-size="{LFS:.0f}" '
                f'text-anchor="{anchor}" fill="#1d2733">{escape(txt)}'
                f'<tspan fill="#6b7682">{escape(val)}</tspan></text>')
        parts.append("</g>")
    W = max(p["x"] for p in place.values()) + SK_COLW
    H = H
    graph = dict(nodes={str(i): dict(name=disp(nodes[i]),
                                     kind="sink" if i in sink_ids else "node")
                        for i in place if not isinstance(i, tuple)},
                 edges=[dict(f=str(s), t=str(t), v=f) for (s, t, f) in links]
                       + [dict(f=str(o), t=str(i2), v=f, loop=True) for (o, i2, f) in pairs],
                 top=top_extra, right=max(q[2] for q in taken))
    for i in place:
        if not isinstance(i, tuple):
            graph["nodes"][str(i)]["decay"] = bool(nodes[i].get("Decay"))
            if nodes[i].get("loop"):
                graph["nodes"][str(i)]["loop"] = nodes[i]["loop"]
    if n_label_clash[0]:
        _say("Attention : %d étiquettes du Sankey posées sans place libre, elles peuvent"
             " en recouvrir une autre. Aucun nœud n'est laissé sans nom." % n_label_clash[0])
    return parts, W, H, graph

def sankey_summary(nodes, L, x0, y0):
    """Encadré « Bilan » à droite du Sankey : où finit le carbone, total, et N2O à part."""
    inn, out = defaultdict(float), defaultdict(float)
    for (s_, t_, f) in L:
        out[s_] += f
        inn[t_] += f
    leaves = [i for i in inn if out[i] == 0 and not nodes[i].get("loop")]
    val = {nodes[i]["Name"]: inn[i] for i in leaves}
    emis = [(n, SINKS[n]["fill"]) for n in ("CO2 emissions", "CH4 emissions") if n in val]
    ash = [("Ash", SINKS["Ash"]["fill"])] if "Ash" in val else []
    stock = sorted([n for n in val if n not in SINKS], key=lambda n: -val[n])
    groups = [(T("Émis dans l'atmosphère", "Emitted to the atmosphere"), emis),
              (T("Cendres", "Ash"), ash),
              (T("Stocké pour de bon (enfouissement non dégradable)", "Stored for good (non degradable landfill)"),
               [(n, C_RED) for n in stock])]
    fmt2 = lambda v: f"{v:.2f}"
    BW, FS, LH = 660, 17, 28
    rows, y = [], y0 + 74
    for title, items in groups:
        if not items:
            continue
        sub = sum(val[n] for n, _ in items)
        rows.append(f'<text x="{x0 + 22}" y="{y}" font-size="{FS + 1}" font-weight="bold" fill="#1d2733">'
                    f'{escape(title)}</text><text x="{x0 + BW - 22}" y="{y}" font-size="{FS + 1}" '
                    f'font-weight="bold" text-anchor="end" fill="#1d2733">{fmt2(sub)}</text>')
        y += LH
        for n, col in items:
            nm = tr(n)
            nm = nm if text_w(nm, FS - 1) < BW - 150 else nm[:52] + "…"
            rows.append(f'<rect x="{x0 + 30}" y="{y - 12}" width="14" height="14" rx="2" fill="{col}"/>'
                        f'<text x="{x0 + 54}" y="{y}" font-size="{FS - 1}" fill="#4a5563">{escape(nm)}</text>'
                        f'<text x="{x0 + BW - 22}" y="{y}" font-size="{FS - 1}" text-anchor="end" '
                        f'fill="#4a5563">{fmt2(val[n])}</text>')
            y += LH - 3
        y += 12
    tot = sum(v for n, v in val.items() if n != "N2O emissions")
    rows.append(f'<line x1="{x0 + 22}" y1="{y - 14}" x2="{x0 + BW - 22}" y2="{y - 14}" stroke="#1d2733" stroke-width="1.5"/>'
                f'<text x="{x0 + 22}" y="{y + 10}" font-size="{FS + 3}" font-weight="bold" fill="#1d2733">{T("Total carbone", "Total carbon")}</text>'
                f'<text x="{x0 + BW - 22}" y="{y + 10}" font-size="{FS + 3}" font-weight="bold" text-anchor="end" '
                f'fill="#1d2733">{fmt2(tot)}</text>')
    y += 44
    if "N2O emissions" in val:
        rows.append(f'<rect x="{x0 + 30}" y="{y - 12}" width="14" height="14" rx="2" fill="{SINKS["N2O emissions"]["fill"]}"/>'
                    f'<text x="{x0 + 54}" y="{y}" font-size="{FS - 1}" fill="#6b7682">{T("Émissions de N2O, sans carbone, en plus", "N2O emissions, no carbon, on top")}</text>'
                    f'<text x="{x0 + BW - 22}" y="{y}" font-size="{FS - 1}" text-anchor="end" fill="#6b7682">'
                    f'{sig3(val["N2O emissions"])}</text>')
        y += LH
    h = y - y0 + 4
    svg = (f'<g class="bilan"><rect x="{x0}" y="{y0}" width="{BW}" height="{h}" rx="10" fill="#f7f9fb" '
           f'stroke="#c9d1db" stroke-width="1.5"/>'
           f'<text x="{x0 + 22}" y="{y0 + 32}" font-size="{FS + 6}" font-weight="bold" fill="#1d2733">'
           f'{T("Bilan : où finit le carbone", "Balance: where the carbon ends up")}</text>' + "".join(rows) + "</g>")
    return svg, x0 + BW


def sankey_render(data):
    """Construit le diagramme de Sankey complet (SVG + graphe pour l'interaction)."""
    info, _, _, _, _ = build(data, interactive=True)
    nodes, edges, sinks = info["nodes"], info["edges"], info["sink_ids"]
    hubs = {i for i, n in nodes.items() if n.get("hub")}
    links = sankey_flows(nodes, edges, sinks)
    L, place, H, size, chain, vnodes, pairs = sankey_layout(nodes, links, sinks, hubs)
    nodes = dict(nodes)
    nodes.update(vnodes)
    parts, W, H, graph = sankey_svg(nodes, L, place, H, size, chain, sinks, pairs)
    pad_l, pad_t, pad_r, pad_b = 300, 230 + graph.pop("top", 0), 340, 90
    n2o_in = sum(f for (s_, t_, f) in L if nodes.get(t_, {}).get("Name") == "N2O emissions")
    # à droite des étiquettes des exutoires, à hauteur du premier exutoire
    sink_top = min([place[i]["y"] for i in sinks if i in place] or [0])
    last_x = max(p_["x"] for p_ in place.values())
    box, box_right = sankey_summary(nodes, L, x0=max(last_x + SK_NODEW, graph.pop("right", 0)) + 70,
                                    y0=sink_top)
    pad_r = max(pad_r, box_right - W + 80)
    vb = (-pad_l, -pad_t, W + pad_l + pad_r, H + pad_t + pad_b)
    n_dec = sum(1 for n in graph["nodes"].values() if n.get("decay"))
    _SK_TITRE = T(f"Devenir du carbone : où vont {SANKEY_IN:.0f} unités de carbone du bois rond",
                  f"Fate of carbon: where {SANKEY_IN:.0f} units of roundwood carbon end up")
    head = (
        '<defs><pattern id="hp" width="8" height="8" patternUnits="userSpaceOnUse" '
        'patternTransform="rotate(40)"><rect x="0" y="0" width="3.4" height="8" '
        'fill="#ffffff" fill-opacity="0.85"/></pattern></defs>'
        f'<text x="{-pad_l + 40}" y="{-pad_t + 46}" font-size="34" font-weight="bold" '
        f'fill="#1d2733">{escape(_SK_TITRE)}</text>'
        # le nom de l'architecture, à droite du titre, même raison que sur le schéma
        + (f'<text x="{-pad_l + 40 + text_w(_SK_TITRE, 34) * 1.06 + 28:.0f}" y="{-pad_t + 46}" '
           f'font-size="26" fill="#657080">{escape(GRAPH["name"])}</text>' if GRAPH["name"] else "")
        + "".join(
            f'<text x="{-pad_l + 40}" y="{-pad_t + 84 + 27 * k}" font-size="19" fill="{col}">'
            f'<tspan font-weight="bold"{bcol}>{escape(b)}</tspan>{escape(txt)}</text>'
            for k, (col, bcol, b, txt) in enumerate([
                ("#3d4652", "", T("Lecture", "How to read"),
                 T(" : de gauche à droite. L'épaisseur d'un ruban et la hauteur d'une barre sont proportionnelles "
                   "à la quantité de carbone.",
                   ": from left to right. The thickness of a ribbon and the height of a bar are proportional "
                   "to the amount of carbon.")),
                ("#6b7682", "", T("Flux minuscules", "Tiny flows"),
                 T(f" : tracés en trait fin, et une barre mesure au moins {SK_MINBAR:.0f} px pour rester visible.",
                   f": drawn as hairlines, and a bar is at least {SK_MINBAR:.0f} px high to stay visible.")),
                ("#6b7682", ' fill="#c26f0e"', T("Recyclage", "Recycling"),
                 T(" : le carbone recyclé revient en amont. Pour ne pas traverser tout le dessin, chaque retour est "
                   "coupé en deux repères orange : « ↩ repart vers … » au départ, « ↪ revient de … » à l'arrivée.",
                   ": recycled carbon goes back upstream. To avoid crossing the whole drawing, each return is cut "
                   "into two orange markers: \"↩ returns to …\" where it leaves, \"↪ comes back from …\" where it arrives.")),
                ("#9a3f2a", "", T("Barres hachurées", "Hatched bars"),
                 T(f" : les {n_dec} stocks qui se dégradent. Le diagramme montre l'état final, une fois ces stocks "
                   f"entièrement dégradés : il dit où le carbone finit, pas quand il y arrive.",
                   f": the {n_dec} stocks that decay. The diagram shows the final state, once these stocks have fully "
                   f"decayed: it tells where the carbon ends up, not when it gets there.")),
                ("#6b7682", "", "N2O",
                 T(f" ne contient pas de carbone : il est calculé en plus des {SANKEY_IN:.0f} unités "
                   f"({sig3(n2o_in)}), sans en prélever. Le carbone, lui, se conserve exactement.",
                   f" contains no carbon: it is computed on top of the {SANKEY_IN:.0f} units "
                   f"({sig3(n2o_in)}), without taking any of them. Carbon itself is exactly conserved.")),
            ])))
    svg = (f'<svg xmlns="http://www.w3.org/2000/svg" viewBox="{vb[0]} {vb[1]} {vb[2]:.0f} {vb[3]:.0f}" '
           f'width="{vb[2]:.0f}" height="{vb[3]:.0f}" font-family="{FONT_FAMILY}">'
           f'<rect x="{vb[0]}" y="{vb[1]}" width="{vb[2]:.0f}" height="{vb[3]:.0f}" fill="#FFFFFF"/>'
           + head + "".join(parts) + box + "</svg>")
    # flèches ↩ ↪ : la police principale ne les a pas, on les confie à une police qui les a
    # (sinon carrés vides dans le PNG et le PDF)
    for ch in "↩↪":
        svg = svg.replace(ch, f'<tspan font-family="DejaVu Sans, Segoe UI Symbol, sans-serif">{ch}</tspan>')
    return svg, vb[2], vb[3], graph


def main():
    global LANG
    ap = argparse.ArgumentParser()
    ap.add_argument("json_path")
    ap.add_argument("out_prefix", help="préfixe de sortie, sans extension")
    ap.add_argument("--png-width", type=int, default=8000)
    ap.add_argument("--lang", choices=["fr", "en", "both"], default="both",
                    help="langue des figures PNG, PDF et SVG (la page HTML contient toujours les deux)")
    ap.add_argument("--no-html", action="store_true", help="ne pas produire la version HTML")
    ap.add_argument("--png-svg", action="store_true",
                    help="produire aussi les PNG et SVG (par défaut : PDF seulement)")
    ap.add_argument("--nom", default=None,
                    help="nom de l'architecture affiché sur le dessin et dans la page"
                         " (par défaut : la clé racine du JSON, sinon le nom du fichier)")
    a = ap.parse_args()
    with open(a.json_path, encoding="utf-8") as f:
        data = json.load(f)
    GRAPH["brut"] = graph_name(data, a.json_path)
    GRAPH["name"] = a.nom or graph_label(GRAPH["brut"])
    if not a.nom and "Nodes" in data:
        _say("Attention : le JSON n'a pas de clé racine nommée, le dessin porte donc le nom"
             " du fichier,", GRAPH["name"] + ". Utilisez --nom pour en imposer un autre.")
    os.makedirs(os.path.dirname(os.path.abspath(a.out_prefix)), exist_ok=True)
    import cairosvg

    def export(svg, name):
        cairosvg.svg2pdf(bytestring=svg.encode("utf-8"), write_to=name + ".pdf")
        if a.png_svg:
            with open(name + ".svg", "w", encoding="utf-8") as f:
                f.write(svg)
            cairosvg.svg2png(bytestring=svg.encode("utf-8"), write_to=name + ".png",
                             output_width=min(a.png_width, 8000))

    langs = ["fr", "en"] if a.lang == "both" else [a.lang]
    views, info = {}, None
    for lang in ["fr", "en"]:
        LANG = lang
        static = lang in langs
        if static:
            # fichiers : <préfixe>_schema_fr.pdf, <préfixe>_sankey_en.png, etc.
            svg, W, H, info = render(data)
            export(svg, f"{a.out_prefix}_schema_{lang}")
        if static or not a.no_html:
            sk = sankey_render(data)
            if static:
                export(sk[0], f"{a.out_prefix}_sankey_{lang}")
        if not a.no_html:
            si = render(data, interactive=True)
            views[lang] = dict(schema=(si[0], si[1], si[2], si[3]["graph"]), sankey=sk)
    LANG = "fr"
    if not a.no_html:
        write_html(a.out_prefix + ".html", views)
    if _MISSING_FR:
        print("Noms sans traduction française (affichés en anglais) :", sorted(_MISSING_FR))
    if _ANNEE[0]:
        print("Les liens portent plusieurs valeurs, le dessin montre", _ANNEE[0] + ".")
    if info:
        print("OK", a.out_prefix, f"{info['rows']} étages,", info["n_hubs"], "Répartitions dont",
              info["n_shared"], "communes,", info["crossings"], "croisements signalés,",
              info["labels_on_crossing"], "labels non idéaux")


if __name__ == "__main__":
    main()
