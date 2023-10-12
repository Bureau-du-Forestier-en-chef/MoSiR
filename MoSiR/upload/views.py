"""
Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""

from ..blueprint_component import Component
from flask import send_file,render_template,request,redirect
import os
    
class Upload(Component):
    def __init__(self):
        Component.__init__(self,__class__.__name__,__name__)
    def __get_graphs(self):
        target = ['<form action = '+self._get_url_for('/graphs_upload/')
        + ' method = "POST" '+'enctype = "multipart/form-data"> '
        +'<input type = "file" name = "file" accept=".json"/> '
        +'<input type = "submit"/> '
        +'</form> ']
        return render_template("main.html",variables=target,entries=self._entries)
    def __isallowed_file(self,filename:str)->bool:
        return filename.endswith(".json")
    def __graphs_upload(self):
        if request.method == 'POST':
            file = request.files['file']
            file.save(os.path.join(Component._get_uploads_folder(),file.filename))
            return redirect(self.get_exit_html())
    def add_all_endpoints(self):
        self._add_endpoint(endpoint='/', endpoint_name='/', handler=self.__get_graphs,methods=['GET','POST'])
        self._add_endpoint(endpoint='/graphs_upload/', endpoint_name='/graphs_upload/',handler=self.__graphs_upload,methods=['GET','POST'])
    def get_description(self):
        return "Téléversez des fichiers graphs"
    def get_name(self):
        return "Téléversez"
    def get_symbol(self):
        return "fa fa-history fa-fw"
    
upload = Upload()