"""
Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""

# Exceptions -------------------------------------------------------------------

class Miroerror(Exception):
    def __init__(self, message:str,itemid:int):            
        super().__init__(message)
        self.__ID = itemid
    def GetItemID(self):
        return self.__ID
    
class QuantityError(Exception):
    def __init__(self, message: str):            
        super().__init__(message) 
        
class EdgeError(Exception):
    def __init__(self, message: str):            
        super().__init__(message)

class NodeError(Exception):
    def __init__(self, message: str):            
        super().__init__(message)
        
class ConstError(Exception):
    def __init__(self, message: str):    
        super().__init__(message)

class RecursionNode(RecursionError):
    def __init__(self, message: str):
        super().__init__(message)

class InvalidOption(Exception):
    def __init__(self, message: str):    
        super().__init__(message)

class TimeStepError(Exception):
    def __init__(self, message: str):    
        super().__init__(message)
        