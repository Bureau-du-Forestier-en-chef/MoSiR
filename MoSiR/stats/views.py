"""
Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""

from ..blueprint_component import Component

class Stats(Component):
    def __init__(self):
        Component.__init__(self, __class__.__name__, __name__)

    def __get_stats(self):
        stash = ["<hr>"]
        for generator in self.read_graphs_json():
            stash.append('<h5>' + generator.get_graph_name() + '</h5>')
            stash.append('<div class="w3-container">')
            stats = generator.get_graph_stats()
            noms_fr = ["Noeuds", "Arêtes"]
            colors = {0.05: "orange", 0.1: "red"}
            for typeof, nom in zip(["Nodes", "Edges"], noms_fr):
                total_elements = stats[typeof]["Size"]
                stash.append('<h6>' + nom + '(' + str(total_elements) + ')</h6>')
                for name,element in stats[typeof].items():
                    if name not in ["Size", "Max", "Min"]:
                        totalstr = str((element / total_elements) * 100)[:4] + "%"
                        color = "green"
                        for maxvalue,selected in colors.items():
                            if (element / total_elements) >= maxvalue:
                                color = selected
                        stash.append('<p>' + name + '</p>')
                        stash.append('<div class="w3-grey">')
                        stash.append('<div class="w3-container w3-center w3-padding w3-'
                                     + color
                                     + '" style="width:'
                                     + totalstr
                                     + '">'
                                     + totalstr
                                     + '</div>')
                        stash.append('</div>')
            stash.append('</div>')
        stash.append("<hr>")
        return Component.main_renderer.render(False, stash)
    
    def add_all_endpoints(self):
        self._add_endpoint(endpoint= '/', endpoint_name= '/', 
                           handler= self.__get_stats, methods= ['GET'])

    def get_description(self):
        return "Obtenez le nombre de feuilles et branches du graph"
    
    def get_name(self):
        return "Statistiques"
    
    def get_symbol(self):
        return "fa fa-pie-chart fa-fw"
    
    def can_view(self):
        return len(self._get_graphs_files()) > 0

stats = Stats()