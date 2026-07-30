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
    def __init__(self, base_url: str, host: str, port: int, log: bool = False,
                 uploads_root: str = None, shutdown_timer: bool = True,
                 on_shutdown=None):
        """
        Args:
            uploads_root: racine des dossiers utilisateur. Par défaut
                MoSiR/uploads; un test peut la rediriger vers un tmp_path
                pour ne jamais effacer ni écrire de vraies données.
            shutdown_timer: si False, le minuteur d'inactivité d'une heure
                n'est jamais armé. À désactiver en test, sinon chaque requête
                laisse fuir un threading.Timer d'une heure.
            on_shutdown: fonction appelée par shutdown(). Par défaut
                os._exit(0); injectable pour qu'un test puisse exercer la
                fermeture sans tuer le processus pytest.
        """
        self.__app = Flask(__class__.__name__, root_path= os.path.dirname(os.path.abspath(__file__)))
        CORS(self.__app)
        self.__shutdown_timer_enabled = shutdown_timer
        self.__on_shutdown = on_shutdown if on_shutdown is not None else (lambda: os._exit(0))
        self.__app.before_request(self.start_counter)
        if not log:
            self.__log = logging.getLogger('werkzeug')
            self.__log.setLevel(logging.ERROR)
        self.__AuthorizationBrowsed = False
        self.__host = host
        self.__port = port
        self.__MAINURL = base_url + ":" + str(port)
        self.__components = []
        if uploads_root is not None:
            Component.set_uploads_root(uploads_root)
        uploads_folder = Component.get_uploads_root()
        os.makedirs(uploads_folder, exist_ok=True)
        Component.clear_users_data(uploads_folder)
        self.__add_all_endpoints()
        self.__start_shutdown_timer = None
        Component.main_renderer.set_description(self.__get_description())

    def get_app(self) -> Flask:
        """Expose l'app Flask pour obtenir un client de test.

        Sans cet accesseur, un test devrait passer par le name-mangling de
        __app (Flaskwrapper._Flaskwrapper__app), qui casserait au moindre
        renommage de l'attribut privé.
        """
        return self.__app

    def start_counter(self):
        """Timer de 1 heure pour forcer la fermeture du terminal"""
        if not self.__shutdown_timer_enabled:
            return
        if self.__start_shutdown_timer is not None:
            self.__start_shutdown_timer.cancel()
        self.__start_shutdown_timer = threading.Timer(3600, self.shutdown)
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
            traduction = {'Author': 'Auteur',
                          'Author-email': 'Courriel',
                          'Version': 'Version'}
            for data in package_data:
                if data in ['Author', 'Author-email', 'Version']:
                    key = traduction[data]
                    info = all_data[data]
                    output = f'{key}: {info}'
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
        return self.__on_shutdown()

    def run(self, debug: bool = False):
        self.__app.run(host= self.__host, port= self.__port, debug= debug)
        