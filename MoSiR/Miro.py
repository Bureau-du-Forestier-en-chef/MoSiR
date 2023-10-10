"""
Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""

from blueprint_component import Component
from flask import render_template, Response,request,redirect,send_file,make_response
from . import Utilities
from datetime import datetime, timedelta
import requests,os
from .Generators import MiroGenerator
from .Animator import HTMLAnimation
from . import Exceptions
import os,werkzeug,traceback

class Miroerror(werkzeug.exceptions.HTTPException):
    code = 507
    def __init__(self,MiroException: Exceptions.MiroError,Board:str):
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
        return make_response(render_template("MiroError.html",Traces=self.__TraceBack,Description=self.description,MiroUrl =self.__LOCATION),200)
    def get_description(self,environ):
        return  self.description
    
class MiroWrapper(Component):
    def __init__(self,Host:str,Port:int):
        Component.__init__(self,__class__.__name__,__name__,"miro",Host,Port)
        self.__BASEAPIMIRO = "https://api.miro.com/"
        self.__BASEMIRO = "https://miro.com/"
        self.__BOARDSELECTIONURL = self.__MAINURL+"/redirect/BoardSelection"
        self.__PARSERREDIRECTURL = self.__MAINURL+"/redirect"
        self.__CLIENTID ,self.__CLIENTSECRET = self.__ReadSecrets()
        self.__BoardGraphs={}
        self.__GrapGenerators=[]
        self.__Session = requests.Session()
        self.__app.config["UPLOAD_FOLDER"] = os.path.join(os.path.dirname(os.path.abspath(__file__)),"uploads")
        self.__GRAPHSNAME= 'Graphs.json'
    def __read_secrets(self):
        try:
            AllSecrets = Utilities.JsonParser.Read("inputs/MiroParserServerSecrets.json")
            return (AllSecrets["ClientId"],AllSecrets["ClientSecret"])
        except:
            raise(OSError("Missing file MiroParserServerSecrets.json"))
    def __get_json(self,response: Response) -> dict:
        if response.status_code < 400:
             return response.json()
        else:
            raise ConnectionError(response.status_code, response.text)
    def __get_home(self):
        return render_template("Home.html")
    def __authorization_redirect(self):
        AuthorizationCode = request.args.get("code", default="")
        URL = self.__BASEAPIMIRO+ "v1/oauth/token?" + \
            "grant_type=authorization_code" + \
            "&client_id="+self.__CLIENTID + \
            "&client_secret="+self.__CLIENTSECRET + \
            "&code="+AuthorizationCode  + \
            "&redirect_uri="+self.__PARSERREDIRECTURL
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
        return redirect(self.__BOARDSELECTIONURL)
    def __authorize(self):
        url = self.__BASEMIRO+"oauth/authorize?" + "response_type=code" + "&client_id="+self.__CLIENTID +"&redirect_uri="+self.__PARSERREDIRECTURL
        return redirect(url)
    def __get_boards_info(self) -> dict():
        url = self.__BASEAPIMIRO +"v2/boards"
        headers = {"accept": "application/json",'Authorization': f'Bearer {self.__AccessToken__ }'}
        BoardInfo = self.__GetJson(self.__Session.get(url, headers=headers))["data"]
        return BoardInfo
    def __get_boardids(self) ->dict():
        Boards = {}
        for Info in self.__GetBoardsInfo():
            Boards[Info["name"]] = Info["id"]
        return Boards
    def __get_sorted_boardn_ames(self)->[str]:
        BOARDNAMES = [name for name in self.__BoardGraphs.keys()]
        BOARDNAMES.sort()
        return BOARDNAMES
    def __board_selection(self):
        self.__BoardGraphs = self.__GetBoardIDS()
        BOARDNAMES = self.__GetSortedBoardNames()
        return render_template("BoardSelection.html",Boards=BOARDNAMES)
    def __wp_selected(self):
        NewBoards = {}
        for Dictionary in request.form:
            NewBoards[Dictionary] = self.__BoardGraphs[Dictionary]
        self.__BoardGraphs = NewBoards
        return redirect(self.__MAINURL+"/GraphsGeneration")
    def __get_board_elementsbyid(self,UrlCall)->[]:
        headers = {'Accept': 'application/json','Authorization': f'Bearer {self.__AccessToken__ }'}
        UrlCall+="?limit=50"
        Nodedata = []
        BaseRequest = self.__GetJson(self.__Session.get(UrlCall,headers=headers))
        Nodedata+=BaseRequest["data"]
        if "cursor" in BaseRequest:
            CursorReturned = BaseRequest["cursor"]
            while CursorReturned is not None:
                NewURL = UrlCall + "&cursor=" + CursorReturned
                Request = self.__GetJson(self.__Session.get(NewURL,headers=headers))
                CursorReturned = None
                if "cursor" in Request:
                    CursorReturned = Request["cursor"]
                Nodedata+=Request["data"]
        return Nodedata
    def __get_board_items(self,BoardId:str):
        return self.__GetBoardElementsById(self.__BASEAPIMIRO+ "v2/boards/" + BoardId + "/items")
    def __get_board_connectors(self,BoardId:str):
        return self.__GetBoardElementsById(self.__BASEAPIMIRO+ "v2/boards/" + BoardId + "/connectors")
    def __write_graphs_json(self,GraphsDict,GRAPHSNAMES)->None:
        Utilities.JsonParser.Write(os.path.join(self.__app.config["UPLOAD_FOLDER"],GRAPHSNAMES),GraphsDict)
    def __write_graphs(self,GRAPHNAMES)->None:
        GraphsDict = {}
        for Generator in self.__GrapGenerators:
            GraphsDict[Generator.GetGraphName()] = Generator.GraphToDict()
        self.__WriteGraphsJson(GraphsDict,GRAPHNAMES)
    def __generate_graphshtml(self)->None:
        HTMLs = []
        for Generator in self.__GrapGenerators:
            NEWHTML = HTMLAnimation(Generator.GraphToDict(),"Temp_"+Generator.GetGraphName())
            HTMLs.append(NEWHTML.GetNetWork(0))
    def __graphs_download(self):
        return send_file(os.path.join(self.__app.config["UPLOAD_FOLDER"],self.__GRAPHSNAME), as_attachment=True)
    def __graphs_menu(self):
        GraphInfo = []
        for Generator in self.__GrapGenerators:
            STATS = Generator.GetGraphStats()
            GRAPHNAME = Generator.GetGraphName()
            if STATS["Nodes"]["Size"] > 0:
                GraphInfo.append((GRAPHNAME,STATS))
        return render_template("GraphsMenu.html",GraphStats=GraphInfo)
    def __build_generator(self,GraphName:str)->MiroGenerator:
        try:
            GraphID = self.__BoardGraphs[GraphName]
            BoardItems = self.__GetBoardItems(GraphID)
            BoardConnectors = self.__GetBoardConnectors(GraphID)
            Generator = MiroGenerator(GraphName,BoardItems,BoardConnectors)
            Generator.Build()
            return Generator
        except Exception as RegularOne:
            raise(RegularOne)
    def __graph_generation(self):
        try:
            BOARDNAMES = self.__GetSortedBoardNames()
            self.__GrapGenerators.clear()
            for GraphName in BOARDNAMES:
                self.__GrapGenerators.append(self.__BuildGenerator(GraphName))
            self.__WriteGraphs(self.__GRAPHSNAME)
            self.__GenerateGraphsHTML()
        except Exceptions.MiroError as Mirotrouble:
            raise Miroerror(Mirotrouble,self.__BoardGraphs[GraphName])
        except Exception as RegularOne:
            raise(RegularOne)
        return self.__GraphsMenu()
    def __graphrendering(self,HTMLname:str):
        TARGET = "Temp_" + HTMLname.replace('<','').replace('>','') + "_0.html"
        return render_template(TARGET)
    def _AddAllEndpoints(self):
        self.__AddEndpoint(endpoint='/', endpoint_name='/', handler=self.__GetHome,methods=['GET'])
        self.__AddEndpoint(endpoint='/redirect', endpoint_name='/redirect', handler=self.__AuthorizationRedirect,methods=['GET','POST'])
        self.__AddEndpoint(endpoint='/redirect/authorize', endpoint_name='/redirect/authorize', handler=self.__Authorize,methods=['GET','POST'])
        self.__AddEndpoint(endpoint='/redirect/BoardSelection', endpoint_name='/redirect/BoardSelection', handler=self.__BoardSelection)
        self.__AddEndpoint(endpoint='/WPSelected', endpoint_name='/WPSelected', handler=self.__WPSelected,methods=['GET','POST'])
        self.__AddEndpoint(endpoint='/GraphsGeneration', endpoint_name='/GraphsGeneration', handler=self.__GraphGeneration,methods=['GET','POST'])
        self.__AddEndpoint(endpoint='/GraphsMenu', endpoint_name='/GraphsMenu', handler=self.__GraphGeneration,methods=['GET','POST'])
        self.__AddEndpoint(endpoint='/GraphsDownload', endpoint_name='/GraphsDownload', handler=self.__GraphsDownload,methods=['GET','POST'])
        self.__AddEndpoint(endpoint='/GraphRendering/<HTMLname>', endpoint_name='/GraphRendering/<HTMLname>',handler=self.__GraphRendering,methods=['GET'])
