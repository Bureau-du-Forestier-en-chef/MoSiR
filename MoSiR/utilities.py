"""
Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""
import json, pkgutil, html

class Jsonparser:
    @staticmethod
    def read(JsonLocation: str):
            return json.loads(pkgutil.get_data("MoSiR", JsonLocation))
    @staticmethod
    def write(JsonLocation: str, Values: dict) -> None:
         with open(JsonLocation, 'w') as JsonFile:
            json.dump(Values, JsonFile)

class Htmlparser:
    @staticmethod
    def get_string_from_html(Value) -> str:
        out_value = Value.replace("<p>", "").replace("</p>","")
        return html.unescape(out_value)
