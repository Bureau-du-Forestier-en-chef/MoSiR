"""
Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""

from ..blueprint_component import Component
from flask import render_template,request,redirect,send_file,make_response
from .. import utilities
from datetime import datetime, timedelta
import requests,os
from .miro_generator import Mirogenerator
from .. import mosir_exceptions
import os,werkzeug,traceback
from dotenv import load_dotenv

class Miroerror(werkzeug.exceptions.HTTPException):
    code = 507
    def __init__(self,MiroException: mosir_exceptions.Miroerror,Board:str):
        self.__TraceBack = traceback.format_tb(MiroException.__traceback__)
        self.__ID = MiroException.GetItemID()
        self.__BOARD = Board
        self.__LOCATION = "https://miro.com/app/board/" + Board+"/?moveToWidget=" + str(self.__ID) + "&cot=14"
        self.description = str(MiroException)
    def get_body(self, environ):
        return self.description
    def get_headers(self, environ):
        return [('Content-Type', 'text/plain; charset=UTF-8')]
    def get_response(self,environ):
        return make_response(render_template("miro_error.html",Traces=self.__TraceBack,Description=self.description,MiroUrl =self.__LOCATION),200)
    def get_description(self,environ):
        return  self.description
    
class Mirowrapper(Component):
    def __init__(self):
        Component.__init__(self,__class__.__name__,__name__)
        self.__BASEAPIMIRO = "https://api.miro.com/"
        self.__BASEMIRO = "https://miro.com/"
        envfile = 'mirowrapper.env'
        dotenv_path = os.path.join(os.path.dirname(os.path.abspath(__file__)), envfile)
        load_dotenv(dotenv_path)
        self.__CLIENTID = os.getenv("MIRO_CLIENT_ID")
        self.__CLIENTSECRET = os.getenv("MIRO_CLIENT_SECRET")
        self.__REDIRECT_URI = os.getenv("redirect_uri") 
        if self.__CLIENTID is None or self.__CLIENTSECRET is None or self.__REDIRECT_URI is None:
            raise(OSError("Missing "+envfile+" here "+str(dotenv_path)))
        self.__BoardGraphs={}
        self.__GrapGenerators=[]
        self.__Session = requests.Session()
        self.__GRAPHSNAME= 'Graphs.json'
    def __get_home(self):
        return render_template("home.html",redirect_url = self._get_url_for(self.__REDIRECT_URI+"/authorize"))
    def __authorization_redirect(self):
        AuthorizationCode = request.args.get("code", default="")
        URL = self.__BASEAPIMIRO+ "v1/oauth/token?" + \
            "grant_type=authorization_code" + \
            "&client_id="+self.__CLIENTID + \
            "&client_secret="+self.__CLIENTSECRET + \
            "&code="+AuthorizationCode  + \
            "&redirect_uri="+self._get_url_for(self.__REDIRECT_URI)
        headers = {
            "Accept": "application/json"
        }
        response = self.__Session.post(URL, headers=headers)
        token = response.json()
        self.__AccessToken__ = token.get("access_token")
        self.__RefreshToken__ = token.get("refresh_token")
        self.__ExpireIn__= token.get("expires_in")
        if self.__ExpireIn__ is None:
            self.__ExpireIn__ = 0        
        self.__ExpireDate__ = datetime.now() + timedelta(seconds=self.__ExpireIn__)
        self.__TeamId__ = token.get("team_id")
        return redirect(self._get_url_for(self.__REDIRECT_URI+"/board_selection"))
    def __authorize(self):
        url = self.__BASEMIRO+"oauth/authorize?" + "response_type=code" + "&client_id="+self.__CLIENTID +"&redirect_uri="+self._get_url_for(self.__REDIRECT_URI)
        return redirect(url)
    def __get_boards_info(self) -> dict():
        url = self.__BASEAPIMIRO +"v2/boards"
        headers = {"accept": "application/json",'Authorization': f'Bearer {self.__AccessToken__ }'}
        BoardInfo = self._get_json(self.__Session.get(url, headers=headers))["data"]
        return BoardInfo
    def __get_boardids(self) ->dict():
        Boards = {}
        for Info in self.__get_boards_info():
            Boards[Info["name"]] = Info["id"]
        return Boards
    def __get_sorted_board_names(self)->[str]:
        BOARDNAMES = [name for name in self.__BoardGraphs.keys()]
        BOARDNAMES.sort()
        return BOARDNAMES
    def __board_selection(self):
        self.__BoardGraphs = self.__get_boardids()
        BOARDNAMES = self.__get_sorted_board_names()
        return render_template("board_selection.html",Boards=BOARDNAMES,select_url = self._get_url_for("/wp_selected"))
    def __wp_selected(self):
        NewBoards = {}
        for Dictionary in request.form:
            NewBoards[Dictionary] = self.__BoardGraphs[Dictionary]
        self.__BoardGraphs = NewBoards
        return redirect(self._get_url_for("/graph_generation"))
    def __get_board_elementsbyid(self,UrlCall)->[]:
        headers = {'Accept': 'application/json','Authorization': f'Bearer {self.__AccessToken__ }'}
        UrlCall+="?limit=50"
        Nodedata = []
        BaseRequest = self._get_json(self.__Session.get(UrlCall,headers=headers))
        Nodedata+=BaseRequest["data"]
        if "cursor" in BaseRequest:
            CursorReturned = BaseRequest["cursor"]
            while CursorReturned is not None:
                NewURL = UrlCall + "&cursor=" + CursorReturned
                Request = self._get_json(self.__Session.get(NewURL,headers=headers))
                CursorReturned = None
                if "cursor" in Request:
                    CursorReturned = Request["cursor"]
                Nodedata+=Request["data"]
        return Nodedata
    def __get_board_items(self,BoardId:str):
        return self.__get_board_elementsbyid(self.__BASEAPIMIRO+ "v2/boards/" + BoardId + "/items")
    def __get_board_connectors(self,BoardId:str):
        return self.__get_board_elementsbyid(self.__BASEAPIMIRO+ "v2/boards/" + BoardId + "/connectors")
    def __write_graphs(self,GRAPHNAMES)->None:
        GraphsDict = {}
        for Generator in self.__GrapGenerators:
            GraphsDict[Generator.get_graph_name()] = Generator.to_dict()
        self._write_graphs_json(GraphsDict,GRAPHNAMES)
    def __graphs_download(self):
        return send_file(os.path.join(self._get_uploads_folder(),self.__GRAPHSNAME), as_attachment=True)
    def __graphs_menu(self):
        GraphInfo = []
        for Generator in self.__GrapGenerators:
            STATS = Generator.get_graph_stats()
            GRAPHNAME = Generator.get_graph_name()
            if STATS["Nodes"]["Size"] > 0:
                GraphInfo.append((GRAPHNAME,STATS))
        return render_template("graphs_menu.html",GraphStats=GraphInfo)
    def __build_generator(self,GraphName:str)->Mirogenerator:
        try:
            GraphID = self.__BoardGraphs[GraphName]
            BoardItems = self.__get_board_items(GraphID)
            BoardConnectors = self.__get_board_connectors(GraphID)
            Generator = Mirogenerator(GraphName,BoardItems,BoardConnectors)
            Generator.Build()
            return Generator
        except Exception as RegularOne:
            raise(RegularOne)
    def __graph_generation(self):
        try:
            BOARDNAMES = self.__get_sorted_board_names()
            self.__GrapGenerators.clear()
            for GraphName in BOARDNAMES:
                self.__GrapGenerators.append(self.__build_generator(GraphName))
            self.__write_graphs(self.__GRAPHSNAME)
        except mosir_exceptions.Miroerror as Mirotrouble:
            raise Miroerror(Mirotrouble,self.__BoardGraphs[GraphName])
        except Exception as RegularOne:
            raise(RegularOne)
        return redirect(self.get_exit_html())
    def add_all_endpoints(self):
        self._add_endpoint(endpoint='/', endpoint_name='/', handler=self.__get_home,methods=['GET'])
        self._add_endpoint(endpoint=self.__REDIRECT_URI, endpoint_name=self.__REDIRECT_URI, handler=self.__authorization_redirect,methods=['GET','POST'])
        self._add_endpoint(endpoint=self.__REDIRECT_URI+'/authorize', endpoint_name=self.__REDIRECT_URI+'/authorize', handler=self.__authorize,methods=['GET','POST'])
        self._add_endpoint(endpoint=self.__REDIRECT_URI+'/board_selection', endpoint_name=self.__REDIRECT_URI+'/board_selection', handler=self.__board_selection)
        self._add_endpoint(endpoint='/wp_selected', endpoint_name='/wp_selected', handler=self.__wp_selected,methods=['GET','POST'])
        self._add_endpoint(endpoint='/graph_generation', endpoint_name='/graph_generation', handler=self.__graph_generation,methods=['GET','POST'])
    def get_description(self):
        return "Générez des graphs de produits du bois à partir de Miro"
    def get_name(self):
        return "Récupérez dans Miro"
    def get_symbol(self):
        return "fa fa-users fa-fw"
mirowrapper = Mirowrapper()