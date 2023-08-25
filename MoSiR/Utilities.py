"""
Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""
import json,pkgutil


class JsonParser:
    @staticmethod
    def Read(JsonLocation:str):
            return json.loads(pkgutil.get_data("MoSiR",JsonLocation))
    @staticmethod
    def Write(JsonLocation:str,Values : {})->None:
         with open(JsonLocation, 'w') as JsonFile:
            json.dump(Values,JsonFile)

class HTMLParser:
    @staticmethod
    def GetStringFromHTML(Value)->str:
        return Value.replace("<p>","").replace("</p>","")
