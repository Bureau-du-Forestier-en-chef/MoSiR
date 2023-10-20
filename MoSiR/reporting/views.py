"""
Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""

from ..blueprint_component import Component
from flask import render_template,Response,redirect,request


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
            stash.append('<div class="w3-row-padding w3-margin-bottom">')
            stash.append('<form action="action_to_perform_after_submission" method = "POST">')
            for period in range(1,self.__NUMBER_OF_PERIODS+1):
                field_name = "f"+str(period)
                entry_name = str(period)
                stash.append('<div class="w3-col" style="width:'+width+'">'+entry_name+'<input type = "number" name = '+field_name+' value="0"/></div>')
            stash.append('<class="w3-button w3-dark-grey" input type = "submit" value = "submit" /></div>')
            stash.append('</div>')
            #stash.append(target)
        stash.append('<a class="w3-button w3-dark-grey" href='+self._get_url_for("/report")+'>Exécutez<i class="fa fa-arrow-right"></i></a>')
        return render_template("main.html",variables=stash,entries=self._entries)
    def __report(self)->Response:
        for field_name, value in request.form:
            period = int(field_name[field_name.find('('):field_name.find(')')][1:])
            value = float(value[value.find('('):value.find(')')])
        #for graphname,inputs in self.__request:
        #    print("Calculating_graph")
            #calculate 
            #save results some where
        #return render_template("main.html",variables=None,entries=self._entries)
    def add_all_endpoints(self)->None:
        self._add_endpoint(endpoint='/', endpoint_name='/', handler=self.__get_inputs,methods=['GET'])
        self._add_endpoint(endpoint='/report', endpoint_name='/report', handler=self.__report,methods=['GET','POST'])
    def get_description(self)->str:
        return "Calculez les émissions générées"
    def get_name(self)->str:
        return "Calculez"
    def get_symbol(self)->str:
        return "fa fa-bullseye fa-fw"
    def needs_graphs(self)->bool:
        return True

reporting = Reporting()