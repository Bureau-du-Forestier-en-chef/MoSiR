"""
Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""

from ..blueprint_component import Component
from flask import render_template,Response,redirect


class Reporting(Component):
    def __init__(self):
        Component.__init__(self,__class__.__name__,__name__)
        self.__request = []
    def __get_inputs(self)->Response:
        self.__request = []
        stash = ["<h1>Graphs disponible</h1>"]
        for generator in Component.read_graphs_json():
            #For each graph allow an inputs of a list of numbers
            graph_name = generator.get_graph_name()
            #stash.append(target)
        stash.append('<a class="w3-button w3-dark-grey" href='+self._get_url_for("/report")+'>Exécuté<i class="fa fa-arrow-right"></i></a>')
        return render_template("main.html",variables=stash,entries=self._entries)
    def __report(self)->Response:
        for graphname,inputs in self.__request:
            print("Calculating_graph")
            #calculate 
            #save results some where
        return render_template("main.html",variables=None,entries=self._entries)
    def add_all_endpoints(self)->None:
        self._add_endpoint(endpoint='/', endpoint_name='/', handler=self.__get_inputs,methods=['GET','POST'])
        self._add_endpoint(endpoint='/report', endpoint_name='/report', handler=self.__report,methods=['GET'])
    def get_description(self)->str:
        return "Calculez les émissions générées"
    def get_name(self)->str:
        return "Calculez"
    def get_symbol(self)->str:
        return "fa fa-bullseye fa-fw"
    def needs_graphs(self)->bool:
        return True

reporting = Reporting()