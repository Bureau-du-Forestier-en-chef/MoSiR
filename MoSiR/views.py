"""
Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""
import os
import logging
import importlib
import threading
import webbrowser
from flask import Flask
from flask_cors import CORS
from .blueprint_component import Component
from .blueprint_component import Endpointaction

class Flaskwrapper:
    def __init__(self, base_url: str, host: str, port: int, log: bool = False):
        self.__app = Flask(__class__.__name__, root_path= os.path.dirname(os.path.abspath(__file__)))
        CORS(self.__app)
        self.__app.before_request(self.start_counter)
        if not log:
            self.__log = logging.getLogger('werkzeug')
            self.__log.setLevel(logging.ERROR)
        self.__AuthorizationBrowsed = False
        self.__host = host
        self.__port = port
        self.__MAINURL = base_url + ":" + str(port)
        self.__components = []
        Component.clear_users_data(os.path.join(os.path.dirname(os.path.abspath(__file__)), "uploads"))
        self.__add_all_endpoints()
        self.__start_shutdown_timer = None
        Component.main_renderer.set_description(self.__get_description())
        
    def start_counter(self):
        """Timer de deux heures pour forcer la fermeture du terminal"""
        if self.__start_shutdown_timer is not None:
            self.__start_shutdown_timer.cancel()
        self.__start_shutdown_timer = threading.Timer(7200, self.shutdown)
        self.__start_shutdown_timer.start()
        
    def __get_description(self) -> list[str]:
        """Produit le texte sur la page principale de l'API

        Returns:
            list[str]: texte à diffuser sur l'API
        """
        all_text = []
        package_name = "MoSiR"
        mosir_package = importlib.util.find_spec(package_name)
        if mosir_package:
            all_data = importlib.metadata.metadata(package_name)
            package_data = list(all_data.keys())
            package_data.sort()
            # Fix qui a été fait pour seulement garder 3 infos
            for data in package_data:
                if data in ['Author', 'Author-email', 'Version']:
                    info = all_data[data]
                    output = f'{data}: {info}'
                    if output not in all_text:
                        all_text.append(output)
        return all_text
    
    def register(self, element: Component) -> None:
        element.add_all_endpoints()
        self.__components.append(element)
        self.__app.register_blueprint(element)

    def __main(self):
        data = []
        for element in self.__components:
            if element.can_view():
                data.append((element.get_name(), 
                             self.__MAINURL + element.get_entry_extension(), 
                             element.get_description(),
                             element.get_symbol()))
        Component.main_renderer.set_entries(data)
        return Component.main_renderer.render(True)
    
    def __add_endpoint(self, endpoint= None, endpoint_name= None, handler= None, methods= ['GET']):
        self.__app.add_url_rule(endpoint, endpoint_name, Endpointaction(handler), methods= methods)

    def __add_all_endpoints(self) -> None:
        self.__add_endpoint(endpoint= '/', endpoint_name= '/', handler= self.__main, methods= ['GET'])
        self.__add_endpoint(endpoint= '/shutdown', endpoint_name= '/shutdown', handler= self.shutdown, methods= ['GET'])

    def sign_in(self) -> None:
        """Connection au navigateur web"""
        if not self.__AuthorizationBrowsed:
            webbrowser.open(self.__MAINURL)
            self.__AuthorizationBrowsed = True

    def shutdown(self):
        """Pour forcer la fermeture du terminal"""
        print("Server shutting down...")
        os._exit(0)

    def run(self, debug: bool = False):
        self.__app.run(host= self.__host, port= self.__port, debug= debug)
        