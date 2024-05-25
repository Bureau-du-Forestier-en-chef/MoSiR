"""
Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""
from abc import ABC
from abc import abstractmethod
from flask import Blueprint, Response, url_for, request, render_template
import os
from . import utilities
from .generators import Dictgenerator, Generator
import shutil

class Endpointaction:
    def __init__(self, action):
        self.action = action
    def __call__(self, **kwargs):
        return self.action(**kwargs)
    
class Main_renderer:
    def __init__(self):
        self.__entries = []
        self.__descriptions = ""

    def set_description(self, local_descriptions: list[str]) -> None:
        self.__descriptions = local_descriptions

    def set_entries(self, local_variables: list[str]) -> None:
        self.__entries = local_variables

    def render(self, description: bool = False, allvariables: list[str] = []) -> str:
        if not description:
            return render_template("main.html",
                    variables = allvariables, entries= self.__entries)
        else:
            return render_template("main.html",
                    descriptions = self.__descriptions,
                    variables = allvariables, entries= self.__entries)
    
    
class Component(ABC, Blueprint):
    main_renderer = Main_renderer()

    def __init__(self, name: str, import_name: str):
         Blueprint.__init__(self, name.lower(), import_name, 
            url_prefix = "/" + name.lower(), template_folder = "templates",
            static_folder ='static')
         self._entries = []
         self._descriptions = ""

    def _add_endpoint(self, endpoint = None, endpoint_name = None, 
                      handler = None, methods = ['GET']):
        self.add_url_rule(endpoint, endpoint_name, Endpointaction(handler), methods= methods)

    def _get_json(self, response: Response) -> dict:
        if response.status_code < 400:
             return response.json()
        else:
            raise ConnectionError(response.status_code, response.text)
        
    def _get_url_for(self, url: str, **kwargs) -> str:
        return request.host_url[:-1] + url_for(self.name + "." + url, **kwargs)
    
    def get_user_ip(self) -> str:
        if request.headers.getlist("X-Forwarded-For"):
            ip = request.headers.getlist("X-Forwarded-For")[0]
        else:
            ip = request.remote_addr
        return ip
    
    def _get_uploads_folder(self) -> str:
        target = os.path.join(os.path.dirname(os.path.abspath(__file__)), "uploads", str(self.get_user_ip()))
        if not os.path.isdir(target):
            os.mkdir(target)
        return target
    
    def _write_graphs_json(self, GraphsDict: dict, GRAPHSNAMES: list[str]) -> None:
        utilities.Jsonparser.write(os.path.join(self._get_uploads_folder(), GRAPHSNAMES), GraphsDict)

    def clear_data(extension: str, folder: str) -> None:
        for element in os.listdir(folder):
            if element.endswith(extension):
                 os.remove(os.path.join(folder,element))

    def clear_users_data(folder) -> None:
        for element in os.listdir(folder):
            if os.path.isdir(os.path.join(folder, element)):
                shutil.rmtree(os.path.join(folder, element), ignore_errors=True)

    def _get_graphs_files(self) -> list[str]:
        graphs_folder = self._get_uploads_folder()
        locations = []
        for element in os.listdir(graphs_folder):
            if os.path.isfile(os.path.join(graphs_folder,element)) and element.endswith(".json"):
                json_file = utilities.Jsonparser.read(os.path.join(graphs_folder, element))
                graphnames = list(json_file.keys())
                graphfile = False
                for graph_name in graphnames:
                    if isinstance(json_file[graph_name], dict) and "Nodes" in json_file[graph_name] and "Edges" in json_file[graph_name]:
                        graphfile  = True
                        break
                if graphfile:
                    locations.append(os.path.join(graphs_folder, element))
        return locations
    
    def _get_inputs_files(self) -> list[str]:
        graphs_folder = self._get_uploads_folder()
        locations = []
        for element in os.listdir(graphs_folder):
            if os.path.isfile(os.path.join(graphs_folder, element)) and element.endswith(".json"):
                json_file = utilities.Jsonparser.read(os.path.join(graphs_folder, element))
                inputkeys = list(json_file.keys())
                if "Unit" in inputkeys and "Inputs" in inputkeys:
                    locations.append(os.path.join(graphs_folder, element))
        return locations
    
    def _get_reporting_files(self) -> list[str]:
        graphs_folder = self._get_uploads_folder()
        locations = []
        for element in os.listdir(graphs_folder):
            if os.path.isfile(os.path.join(graphs_folder, element)) and element.endswith(".json"):
                json_file = utilities.Jsonparser.read(os.path.join(graphs_folder, element))
                inputkeys = list(json_file.keys())
                if "Output file extension" in inputkeys and "Output" in inputkeys \
                    and "Time" in inputkeys and "PRG" in inputkeys:
                    locations.append(os.path.join(graphs_folder, element))
        return locations
    
    def _get_results_files(self) -> list[str]:
        graphs_folder = self._get_uploads_folder()
        all_extensions = []
        all_files = []
        for reporting_file in self._get_reporting_files():
            json_file = utilities.Jsonparser.read(os.path.join(graphs_folder, reporting_file))
            file_ext = json_file["Output file extension"]
            if file_ext not in all_extensions:
                all_extensions.append(file_ext)
        for element in os.listdir(graphs_folder):
            for extention in all_extensions:
                if os.path.isfile(os.path.join(graphs_folder, element)) and element.endswith(extention):
                    all_files.append(os.path.join(graphs_folder, element))
        return all_files
    
    def read_graphs_json(self) -> list[Generator]:
        all_graphs = []
        for element in self._get_graphs_files():
            json_file = utilities.Jsonparser.read(element)
            graphnames = list(json_file.keys())
            graphnames.sort()
            for graph_name in graphnames:
                all_graphs.append(Dictgenerator(graph_name,json_file[graph_name]["Nodes"],
                                                json_file[graph_name]["Edges"]))
        return all_graphs
    
    def get_entry_extension(self) -> str:
        return "/" + self.name + "/"
    
    def get_exit_html(self) -> str:
        return request.host_url
    
    def get_upload_html(self) -> str:
        return request.host_url + "/upload/"
    
    def set_main_entries(self, entries: list):
        self._entries = entries

    @abstractmethod
    def get_name(self) -> str:
        pass

    @abstractmethod
    def get_description(self) -> str:
        pass

    @abstractmethod
    def add_all_endpoints(self):
        pass

    @abstractmethod
    def get_symbol(self):
        pass
    
    def can_view(self):
        return True
        