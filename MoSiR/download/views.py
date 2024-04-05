"""
Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""

import os
from flask import send_file
from ..blueprint_component import Component
    
class Download(Component):
    def __init__(self):
        Component.__init__(self, __class__.__name__, __name__)

    def __get_graphs(self):
        HTMLsandnames = []
        for graphfile in self._get_graphs_files() + self._get_inputs_files() \
            + self._get_reporting_files() + self._get_results_files():
            htmltarget = self._get_url_for("/graphs_download/<filename>", 
                                           filename= graphfile)
            target = '<p><a class="w3-button w3-dark-grey" href=' + htmltarget \
                + '>' + "Télécharger " + os.path.basename(graphfile) \
                + ' <i class="fa fa-arrow-right"></i></a></p>'
            HTMLsandnames.append(target)
        return Component.main_renderer.render(False, HTMLsandnames)
    
    def __graphs_download(self, filename: str):
        return send_file(os.path.join(self._get_uploads_folder(), 
                                      filename), as_attachment= True)
    
    def add_all_endpoints(self):
        self._add_endpoint(endpoint= '/', 
                           endpoint_name= '/', 
                           handler= self.__get_graphs, 
                           methods= ['GET'])
        self._add_endpoint(endpoint= '/graphs_download/<filename>', 
                           endpoint_name= '/graphs_download/<filename>', 
                           handler= self.__graphs_download, 
                           methods= ['GET','POST'])

    def get_description(self):
        return "Télécharger des fichiers graphs"
    
    def get_name(self):
        return "Télécharger"
    
    def get_symbol(self):
        return "fa fa-download fa-fw"
    
    def can_view(self):
        return (len(self._get_graphs_files()) > 0) \
            or (len(self._get_inputs_files()) > 0) \
            or (len(self._get_reporting_files()) > 0)
    
download = Download()