"""
Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""

from ..blueprint_component import Component
from flask import render_template,url_for
from .animator import Htmlanimation
import os
    
class Visualization(Component):
    def __init__(self):
        Component.__init__(self,__class__.__name__,__name__)
        Component.clear_data(".html",os.path.join(os.path.dirname(os.path.abspath(__file__)),"templates"))
    def __generate_graphshtml(self)->[str]:
        HTMLsandnames = []
        for Generator in Component.read_graphs_json():
            NEWHTML = Htmlanimation(Generator.to_dict(),"Temp_"+Generator.get_graph_name())
            target_html = NEWHTML.GetNetWork(0)
            htmltarget = self._get_url_for("/graphrendering/<graphname>",graphname=Generator.get_graph_name())
            HTMLsandnames.append(("Visualiser "+Generator.get_graph_name(),htmltarget))
        return HTMLsandnames
    def __graphs_selection(self):
        Allhtmls = self.__generate_graphshtml()
        allvariables = ["<h1>Graphs disponible</h1>"]
        for name,html in Allhtmls:
            target = '<a class="w3-button w3-dark-grey" href='+html+'>'+name+'<i class="fa fa-arrow-right"></i></a>'
            allvariables.append(target)
        return Component.main_renderer.render(False,allvariables)
    def __graphrendering(self,graphname:str):
        TARGET = "Temp_" + graphname.replace('<','').replace('>','') + "_0.html"
        return render_template(TARGET)
    def add_all_endpoints(self):
        self._add_endpoint(endpoint='/', endpoint_name='/',handler=self.__graphs_selection,methods=['GET'])
        self._add_endpoint(endpoint='/graphrendering/<graphname>', endpoint_name='/graphrendering/<graphname>',handler=self.__graphrendering,methods=['GET'])
    def get_description(self):
        return "Visualisez les graphs existant"
    def get_name(self):
        return "Visualisez"
    def get_symbol(self):
        return "fa fa-eye fa-fw"
    def can_view(self):
        return len(Component._get_graphs_files()) > 0
    
visualization = Visualization()

