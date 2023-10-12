"""
Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""
from abc import ABC
from abc import abstractmethod
from flask import Blueprint,Flask,Response,url_for,request,render_template
import os,webbrowser
from . import utilities
from .generators import Dictgenerator,Generator

class Endpointaction:
    def __init__(self, action):
        self.action = action
    def __call__(self, **kwargs):
        return self.action(**kwargs)
    
class Component(ABC,Blueprint):
    def __init__(self,name:str,import_name:str):
         Blueprint.__init__(self,name.lower(),import_name,url_prefix="/"+name.lower(),template_folder="templates",
                            static_folder='static')
         self._entries = []
    def _add_endpoint(self, endpoint=None, endpoint_name=None, handler=None,methods=['GET']):
        self.add_url_rule(endpoint, endpoint_name, Endpointaction(handler),methods=methods)
    def _get_json(self,response: Response) -> dict:
        if response.status_code < 400:
             return response.json()
        else:
            raise ConnectionError(response.status_code, response.text)
    def _get_url_for(self,url:str,**kwargs):
        return request.host_url[:-1] + url_for(self.name+"."+url,**kwargs)
    def _get_uploads_folder():
        return os.path.join(os.path.dirname(os.path.abspath(__file__)),"uploads")
    def _write_graphs_json(self,GraphsDict:dict(),GRAPHSNAMES:[str])->None:
        utilities.Jsonparser.write(os.path.join(Component._get_uploads_folder(),GRAPHSNAMES),GraphsDict)
    def clear_data(extension:str,folder:str):
        for element in os.listdir(folder):
            if element.endswith(extension):
                 os.remove(os.path.join(folder,element))
    def _get_graphs_files()->[str]:
        graphs_folder = Component._get_uploads_folder()
        locations = []
        for element in os.listdir(graphs_folder):
            if os.path.isfile(os.path.join(graphs_folder,element)) and element.endswith(".json"):
                locations.append(os.path.join(graphs_folder,element))
        return locations
    def read_graphs_json()->[Generator]:
        graphs_folder = Component._get_uploads_folder()
        all_graphs = []
        for element in Component._get_graphs_files():
            json_file = utilities.Jsonparser.read(element)
            graphnames = list(json_file.keys())
            graphnames.sort()
            for graph_name in graphnames:
                all_graphs.append(Dictgenerator(graph_name,json_file[graph_name]["Nodes"],json_file[graph_name]["Edges"]))
        return all_graphs
    def get_entry_extension(self)->str:
        return "/"+self.name+"/"
    def get_exit_html(self)->str:
        return request.host_url
    def set_main_entries(self,entries:list()):
        self._entries = entries
    @abstractmethod
    def get_name(self)->str:
        pass
    @abstractmethod
    def get_description(self)->str:
        pass
    @abstractmethod
    def add_all_endpoints(self):
        pass
    @abstractmethod
    def get_symbol(self):
        pass
    def needs_graphs(self):
        return False
        