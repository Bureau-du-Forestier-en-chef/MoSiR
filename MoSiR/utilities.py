"""
Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""
import json, pkgutil, html, re
from MoSiR import mosir_exceptions as me

class JsonData:
    """ JsonData Documentation

    Classe de base des trois entrées du calculateur: le graphe
    (GraphFactory), les intrants (ImportData) et le reporting
    (ReportData). Elle ne fait qu'une seule chose: remplir self._DATA à
    partir d'un fichier JSON ou d'un dictionnaire déjà en mémoire.
    L'option dictionnaire existe pour l'interface web, qui reçoit les
    données sans passer par un fichier.

    Les classes filles définissent SOURCE_NAME, qui n'apparait que dans
    le message d'erreur, et se chargent de valider le contenu de
    self._DATA une fois celui-ci chargé.

    Args:
        directory (str): Le chemin du fichier JSON à lire
        Dict (dict): Les données JSON déjà chargées en mémoire. Prioritaire
            sur directory si les deux sont fournis.

    Raises:
        me.InvalidOption: Ni chemin ni dictionnaire n'a été fourni
        me.InvalidOption: Le chemin ne mène pas à un JSON lisible

    Returns:
        JsonData: Un objet de la classe JsonData
    """
    SOURCE_NAME = "les données"

    def __init__(self, directory: str = None, Dict: dict = None):
        self._DIRECTORY = directory
        if directory is None and Dict is None:
            raise me.InvalidOption("Un directory ou dictionnaire doit être \
                spécifié")
        if Dict is not None:
            self._DATA = Dict
            return
        try:
            with open(directory, "r") as files:
                self._DATA = json.load(files)
        except:
            raise me.InvalidOption(f"Le chemin {directory}, n'est pas \
                valide. Impossible d'ouvrir {self.SOURCE_NAME}")

    @property
    def get_data(self):
        return self._DATA

    @get_data.setter
    def get_data(self, input):
        raise me.ConstError("Data can't be changed outside Miro")

class Jsonparser:
    @staticmethod
    def read(JsonLocation: str):
            return json.loads(pkgutil.get_data("MoSiR", JsonLocation))
    @staticmethod
    def write(JsonLocation: str, Values: dict) -> None:
         with open(JsonLocation, 'w') as JsonFile:
            json.dump(Values, JsonFile, indent=4)

class Htmlparser:
    @staticmethod
    def get_string_from_html(Value) -> str:
        out_value = Value.replace("<p>", "").replace("</p>", "")
        for item in ["<em>", "</em>", "<strong>", "</strong>", "<u>", "</u>", "<s>", "</s>"]:
            if item in out_value:
                out_value = out_value.replace(item, "")
        if "<span style" in out_value:
             out_value = re.sub(r"<span style[^>]*>", "", out_value)
             out_value = out_value.replace("</span>", "")
        return html.unescape(out_value)
