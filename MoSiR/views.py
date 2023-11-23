"""
Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""
import os,webbrowser,logging
from flask import Flask
from flask_cors import CORS
from .blueprint_component import Component
from .blueprint_component import Endpointaction
import pkg_resources


class Flaskwrapper:
    def __init__(self,base_url:str,host:str,port:int,log:bool = False):
        self.__app = Flask(__class__.__name__,root_path=os.path.dirname(os.path.abspath(__file__)))
        CORS(self.__app)
        if not log:
            self.__log = logging.getLogger('werkzeug')
            self.__log.setLevel(logging.ERROR)
        self.__AuthorizationBrowsed = False
        self.__host = host
        self.__port = port
        self.__MAINURL = base_url +":"+str(port)
        self.__components = []
        Component.clear_users_data(os.path.join(os.path.dirname(os.path.abspath(__file__)),"uploads"))
        self.__add_all_endpoints()
        Component.main_renderer.set_description(self.__get_description())
    def __get_description(self)->[str]:
        #read_me_location = os.path.join(os.path.dirname(os.path.abspath(__file__)),"README.md")
        all_text = []
        installed_packages = pkg_resources.working_set
        packages = sorted([i.key for i in installed_packages])
        package_name = "MoSiR"
        if package_name in packages:
            pkgInfo = pkg_resources.get_distribution(package_name).get_metadata('METADATA')
            for line in pkgInfo.split('\n'):
                if "## Install" in line:
                    break
                if "## Description" not in line:
                    all_text.append(line)
        return all_text
    def register(self,element:Component)-> None:
        element.add_all_endpoints()
        self.__components.append(element)
        self.__app.register_blueprint(element)
    def __main(self):
        data = []
        for element in self.__components:
            if element.can_view():
                data.append((element.get_name(),self.__MAINURL+element.get_entry_extension(),element.get_description(),element.get_symbol()))
        Component.main_renderer.set_entries(data)
        return Component.main_renderer.render(True)
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
        