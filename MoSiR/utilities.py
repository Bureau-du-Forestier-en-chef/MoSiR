"""
Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""
import json, pkgutil, html, re
from MoSiR import mosir_exceptions as me

class JsonData:
    """ JsonData Documentation

    Base class of the three calculator inputs: the graph (GraphFactory),
    the inputs (ImportData) and the reporting (ReportData). It does only
    one thing: fill self._DATA from a JSON file or from a dictionary
    already in memory. The dictionary option exists for the web interface,
    which receives the data without going through a file.

    The child classes define SOURCE_NAME, which only appears in the error
    message, and are responsible for validating the content of self._DATA
    once it has been loaded.

    Args:
        directory (str): The path of the JSON file to read
        Dict (dict): The JSON data already loaded in memory. Takes priority
            over directory if both are provided.

    Raises:
        me.InvalidOption: Neither a path nor a dictionary was provided
        me.InvalidOption: The path does not lead to a readable JSON

    Returns:
        JsonData: An object of the JsonData class
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
