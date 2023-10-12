"""
Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""

class Miroerror(Exception):
    def __init__(self, message:str,itemid:int):            
        super().__init__(message)
        self.__ID = itemid
    def GetItemID(self):
        return self.__ID
    
