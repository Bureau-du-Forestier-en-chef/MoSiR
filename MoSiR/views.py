"""
Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""
import os,webbrowser
from flask import Flask,render_template
from .blueprint_component import Component
from .blueprint_component import Endpointaction


class Flaskwrapper:
    def __init__(self,base_url:str,host:str,port:int):
        self.__app = Flask(__class__.__name__,root_path=os.path.dirname(os.path.abspath(__file__)))
        self.__AuthorizationBrowsed = False
        self.__host = host
        self.__port = port
        self.__MAINURL = base_url +":"+str(port)
        self.__components = []
        Component.clear_data(".json",Component._get_uploads_folder())
        self.__add_all_endpoints()
    def __set_main_entries(self,entries:list())->None:
        for component in self.__components:
            component.set_main_entries(entries)
    def register(self,element:Component)-> None:
        element.add_all_endpoints()
        self.__components.append(element)
        self.__app.register_blueprint(element)
    def __main(self):
        got_graphs = bool(Component.read_graphs_json())
        data = []
        for element in self.__components:
            if got_graphs or not element.needs_graphs():
                data.append((element.get_name(),self.__MAINURL+element.get_entry_extension(),element.get_description(),element.get_symbol()))
        self.__set_main_entries(data)
        return render_template("main.html",entries=data)
    def __add_endpoint(self, endpoint=None, endpoint_name=None, handler=None,methods=['GET']):
        self.__app.add_url_rule(endpoint, endpoint_name, Endpointaction(handler),methods=methods)
    def __add_all_endpoints(self)->None:
        self.__add_endpoint(endpoint='/', endpoint_name='/', handler=self.__main,methods=['GET'])
    def sign_in(self)->None:
        if not self.__AuthorizationBrowsed:
            webbrowser.open(self.__MAINURL)
            self.__AuthorizationBrowsed = True
    def run(self,debug:bool=False):
        self.__app.run(host=self.__host, port=self.__port,debug=debug)
        