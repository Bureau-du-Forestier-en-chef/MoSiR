"""
Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""

from ..blueprint_component import Component
from flask import render_template,Response,redirect,request
import os,json


class Reporting(Component):
    def __init__(self):
        Component.__init__(self,__class__.__name__,__name__)
        self.__request = []
        self.__NUMBER_OF_PERIODS = 10
    def __get_inputs(self)->Response:
        self.__request = []
        stash = ["<h1>Graphs disponible</h1>"]
        width = str((100 / self.__NUMBER_OF_PERIODS))+"%"
        for generator in Component.read_graphs_json():
            #For each graph allow an inputs of a list of numbers
            stash.append('<h5>'+generator.get_graph_name()+'</h5>')
            stash.append('<div class="w3-half w3-margin-bottom">')
            stash.append('<form action="'+self._get_url_for("/report")+'" id="cinputsform" method = "POST">')
            #Unit selection...
            stash.append('<div>')
            stash.append('<label for="units">Unitées</label>')
            stash.append('<select name="units" id="units">')
            for unit in self.__get_units():
                stash.append('<option value="'+unit+'">'+unit+'</option>')
            stash.append('</select>')
            stash.append('</div>')
            stash.append('<table class="w3-table-all" style="width: 15em" id=cinputs><tr><th>Noeud</th><th>Période</th><th>Quantitée</th></tr>')
            stash.append('</table>')
            stash.append('<td>')
            stash.append('<select name="Noeud" title="Noeud" id="Node" style="width: 5em">')
            for node in generator.get_node_names():
                stash.append('<option value="'+node+'">'+node+'</option>')
            stash.append('</td>')
            stash.append('<td> <input type = "number" name="Période~'+generator.get_graph_name()+'" title="Période" style="width: 5em" min ="1" id="Period"/></td>')
            stash.append('<td> <input type = "number" name="Quantitée" title="Quantitée" style="width: 5em" min ="0" id="Quantity"/></td>')
            stash.append('<button class="w3-button w3-dark-grey" type = "button" onclick="addcinputs()">Ajouter une période <j class="fa fa-plus-circle"></j></button>')
        stash.append('<div>')
        stash.append('<button class="w3-button w3-dark-grey" input type = "submit" value = "submit">Exécutez <i class="fa fa-arrow-right"></i></button>')
        stash.append('</div>')
        stash.append('</form>')
        stash.append('</div>')
        return Component.main_renderer.render(False,stash)
    def __get_units(self):
        return ['kgc','tC']
    def __get_graphs_inputs(self)->str:
        data = {"Inputs":{}}
        for field_name, value in request.form.items():
            if field_name == 'units':
                data["Unit"] = value
            elif('Quantity' in field_name):
                splitted = field_name.split('~')
                the_value = float(value)
                graph = splitted[3]
                node = splitted[2]
                period = splitted[1]
                if graph not in data["Inputs"]:
                    data["Inputs"][graph] = {}
                if node not in data["Inputs"][graph]:
                    data["Inputs"][graph][node] = {}
                data["Inputs"][graph][node][period] = the_value
        location = os.path.join(Component._get_uploads_folder(),"inputs.json")
        with open(location, "w") as outfile:
            json.dump(data,outfile)
        return location
    def __report(self)->Response:
        inputs_json = self.__get_graphs_inputs()
        stash = []
        return Component.main_renderer.render(False,stash)
    def add_all_endpoints(self)->None:
        self._add_endpoint(endpoint='/', endpoint_name='/', handler=self.__get_inputs,methods=['GET','POST'])
        self._add_endpoint(endpoint='/report', endpoint_name='/report', handler=self.__report,methods=['GET','POST'])
    def get_description(self)->str:
        return "Calculez les émissions générées"
    def get_name(self)->str:
        return "Calculez"
    def get_symbol(self)->str:
        return "fa fa-bullseye fa-fw"
    def can_view(self)->bool:
        return (len(Component._get_graphs_files()) > 0 ) #and  (len(Component._get_inputs_files()) > 0) and (len(Component._get_reporting_files()) > 0)

reporting = Reporting()