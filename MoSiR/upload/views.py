"""
Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""

import os
import sys
import json
from flask import request
from flask import redirect
from MoSiR import graph_generator as gg
from MoSiR import graph_verificator as gv
from ..blueprint_component import Component
    
class Upload(Component):
    def __init__(self):
        Component.__init__(self, __class__.__name__, __name__)
    def __get_graphs(self):
        target = ['<br><form action = '
                  + self._get_url_for('/graphs_upload/')
                  + ' method = "POST" '
                  + 'enctype = "multipart/form-data"> '
                  + '<input type = "file" name = "file" accept=".json" title ="upload file"/> '
                  + '<input type = "submit"/> '
                  + '</form> ']
        return Component.main_renderer.render(False, target)
    
    def __isallowed_file(self, filename: str) -> bool:
        return filename.endswith(".json")
    
    def __graphs_upload(self):
        if request.method == 'POST':
            content = request.files['file']
            decode_copy = content.read().decode(sys.stdout.encoding).strip()
            acceptable_string = decode_copy.replace("'", "\"")
            content_dict = json.loads(acceptable_string)
            # Wipe cache if it's a new graph uploaded
            for graph_name, values in content_dict.items():  
                if type(values) is dict and set(values.keys()) == {'Nodes', 'Edges'}:               
                    Component.clear_users_data(os.path.join(os.path.dirname(
                        os.path.abspath(__file__)), "..", "uploads"))
                    # On passe le graph verificator s'il y a une erreur
                    message = None
                    try:
                        graph = gg.GraphFactory(Dict= content_dict)
                        gv.main(graph)
                    except Exception as e:
                        message = f"<h4><i class='fa fa-exclamation-triangle' \
                            style='color: red;'></i> There is an error with the\
                            imported graph:</h4><br><h5><span style='color: \
                            red;'>{e}</span></h5>"
                    stash = []
                    if message is not None:
                        stash.append(message)
                        return Component.main_renderer.render(False, stash)

            # Save json
            with open(os.path.join(self._get_uploads_folder(), content.filename), "w") as f:
                json.dump(content_dict, f)

            return redirect(self.get_exit_html())
        
    def add_all_endpoints(self):
        self._add_endpoint(endpoint= '/', 
                           endpoint_name= '/', 
                           handler= self.__get_graphs, 
                           methods= ['GET','POST'])
        self._add_endpoint(endpoint= '/graphs_upload/', 
                           endpoint_name= '/graphs_upload/',
                           handler= self.__graphs_upload, 
                           methods= ['GET','POST'])
    
    def get_description(self):
        return "Téléverser des fichiers graphs"
    
    def get_name(self):
        return "Téléverser"
    
    def get_symbol(self):
        return "fa fa-upload fa-fw"
    
upload = Upload()