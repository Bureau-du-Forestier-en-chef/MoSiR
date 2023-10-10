"""
Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""
from abc import ABC
from abc import abstractmethod
from flask import Blueprint,Flask
import os

class Endpointaction:
    def __init__(self, action):
        self.action = action
    def __call__(self, **kwargs):
        return self.action(**kwargs)
    
class Component(ABC,Blueprint):
    def __init__(self,name:str,import_name:str,url_prefix):
         Blueprint.__init__(self,name,import_name,url_prefix=url_prefix)
    def __add_endpoint(self, endpoint=None, endpoint_name=None, handler=None,methods=['GET']):
        self.add_url_rule(endpoint, endpoint_name, Endpointaction(handler),methods=methods)
    @abstractmethod
    def add_all_endpoints(self):
        pass

class Flaskwrapper:
    def __init__(self,Host:str,Port:int):
        self.__app = Flask(__class__.__name__,root_path=os.path.dirname(os.path.abspath(__file__)))
        self.__components = []
    def register(self,element:Component)-> None:
        self.__components.append(element)
        self.__components[-1].add_all_endpoints()
        self.__app.register_blueprint(self.__components[-1])
        