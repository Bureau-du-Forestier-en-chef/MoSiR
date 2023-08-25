"""
Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""

from flask import Flask,render_template, Response,request,redirect,send_file
from . import Utilities
from datetime import datetime, timedelta
import webbrowser,requests,os
from .Generators import MiroGenerator
from .Animator import HTMLAnimation
import os




class EndpointAction:
    def __init__(self, action):
        self.action = action

    def __call__(self, **kwargs):
        return self.action(**kwargs)

class FlaskMiroWrapper:
    app = None
    def __init__(self, Name:str,Host:str,Port:int,VerifySSL=False):
        self.__app = Flask(Name,root_path=os.path.dirname(os.path.abspath(__file__)))
        self.__PORT = Port
        self.__MAINURL = Host + ":"+str(self.__PORT)
        self.__BASEAPIMIRO = "https://api.miro.com/"
        self.__BASEMIRO = "https://miro.com/"
        self.__BOARDSELECTIONURL = self.__MAINURL+"/redirect/BoardSelection"
        self.__PARSERREDIRECTURL = self.__MAINURL+"/redirect"
        self.__CLIENTID ,self.__CLIENTSECRET = self.__ReadSecrets()
        self.__AuthorizationBrowsed = False
        self.__BoardGraphs={}
        self.__GrapGenerators=[]
        self.__Session = requests.Session()
        self.__Session.verify = VerifySSL
        self.__app.config["UPLOAD_FOLDER"] = os.path.join(os.path.dirname(os.path.abspath(__file__)),"uploads")
        self.__GRAPHSNAME= 'Graphs.json'
    def __ReadSecrets(self):
        try:
            AllSecrets = Utilities.JsonParser.Read("inputs/MiroParserServerSecrets.json")
            return (AllSecrets["ClientId"],AllSecrets["ClientSecret"])
        except:
            raise(OSError("Missing file MiroParserServerSecrets.json"))
    def SignIn(self)->None:
        if not self.__AuthorizationBrowsed:
            webbrowser.open(self.__MAINURL)
            self.__AuthorizationBrowsed = True
    def __GetJson(self,response: Response) -> dict:
        if response.status_code < 400:
             return response.json()
        else:
            raise ConnectionError(response.status_code, response.text)
    def Run(self,debug:bool):
        self.__app.run(host='0.0.0.0', port=self.__PORT,debug=debug)
    def __AddEndpoint(self, endpoint=None, endpoint_name=None, handler=None,methods=['GET']):
        self.__app.add_url_rule(endpoint, endpoint_name, EndpointAction(handler),methods=methods)
    def __GetHome(self):
        return render_template("Home.html")
    def __AuthorizationRedirect(self):
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
    def __Authorize(self):
        url = self.__BASEMIRO+"oauth/authorize?" + "response_type=code" + "&client_id="+self.__CLIENTID +"&redirect_uri="+self.__PARSERREDIRECTURL
        return redirect(url)
    def __GetBoardsInfo(self) -> dict():
        url = self.__BASEAPIMIRO +"v2/boards"
        headers = {"accept": "application/json",'Authorization': f'Bearer {self.__AccessToken__ }'}
        BoardInfo = self.__GetJson(self.__Session.get(url, headers=headers))["data"]
        return BoardInfo
    def __GetBoardIDS(self) ->dict():
        Boards = {}
        for Info in self.__GetBoardsInfo():
            Boards[Info["name"]] = Info["id"]
        return Boards
    def __GetSortedBoardNames(self)->[str]:
        BOARDNAMES = [name for name in self.__BoardGraphs.keys()]
        BOARDNAMES.sort()
        return BOARDNAMES
    def __BoardSelection(self):
        self.__BoardGraphs = self.__GetBoardIDS()
        BOARDNAMES = self.__GetSortedBoardNames()
        return render_template("BoardSelection.html",Boards=BOARDNAMES)
    def __WPSelected(self):
        NewBoards = {}
        for Dictionary in request.form:
            NewBoards[Dictionary] = self.__BoardGraphs[Dictionary]
        self.__BoardGraphs = NewBoards
        return redirect(self.__MAINURL+"/GraphsGeneration")
    def __GetBoardElementsById(self,UrlCall)->[]:
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
    def __GetBoardItems(self,BoardId:str):
        return self.__GetBoardElementsById(self.__BASEAPIMIRO+ "v2/boards/" + BoardId + "/items")
    def __GetBoardConnectors(self,BoardId:str):
        return self.__GetBoardElementsById(self.__BASEAPIMIRO+ "v2/boards/" + BoardId + "/connectors")
    def __WriteGraphsJson(self,GraphsDict,GRAPHSNAMES)->None:
        Utilities.JsonParser.Write(os.path.join(self.__app.config["UPLOAD_FOLDER"],GRAPHSNAMES),GraphsDict)
    def __WriteGraphs(self,GRAPHNAMES)->None:
        GraphsDict = {}
        for Generator in self.__GrapGenerators:
            GraphsDict[Generator.GetGraphName()] = Generator.GraphToDict()
        self.__WriteGraphsJson(GraphsDict,GRAPHNAMES)
    def __GenerateGraphsHTML(self)->None:
        HTMLs = []
        for Generator in self.__GrapGenerators:
            NEWHTML = HTMLAnimation(Generator.GraphToDict(),"Temp_"+Generator.GetGraphName())
            HTMLs.append(NEWHTML.GetNetWork(0))
    def __GraphsDownload(self):
        return send_file(os.path.join(self.__app.config["UPLOAD_FOLDER"],self.__GRAPHSNAME), as_attachment=True)
    def __GraphsMenu(self):
        GraphInfo = []
        for Generator in self.__GrapGenerators:
            STATS = Generator.GetGraphStats()
            GRAPHNAME = Generator.GetGraphName()
            if STATS["Nodes"]["Size"] > 0:
                GraphInfo.append((GRAPHNAME,STATS))
        return render_template("GraphsMenu.html",GraphStats=GraphInfo)
    def __GraphGeneration(self):
        BOARDNAMES = self.__GetSortedBoardNames()
        self.__GrapGenerators.clear()
        for GraphName in BOARDNAMES:
            GraphID = self.__BoardGraphs[GraphName]
            BoardItems = self.__GetBoardItems(GraphID)
            BoardConnectors = self.__GetBoardConnectors(GraphID)
            Generator = MiroGenerator(GraphName,BoardItems,BoardConnectors)
            Generator.Build()
            self.__GrapGenerators.append(Generator)
        self.__WriteGraphs(self.__GRAPHSNAME)
        self.__GenerateGraphsHTML()
        return self.__GraphsMenu()
    def __GraphRendering(self,HTMLname:str):
        TARGET = "Temp_" + HTMLname.replace('<','').replace('>','') + "_0.html"
        return render_template(TARGET)
    def AddAllEndpoints(self):
        self.__AddEndpoint(endpoint='/', endpoint_name='/', handler=self.__GetHome,methods=['GET'])
        self.__AddEndpoint(endpoint='/redirect', endpoint_name='/redirect', handler=self.__AuthorizationRedirect,methods=['GET','POST'])
        self.__AddEndpoint(endpoint='/redirect/authorize', endpoint_name='/redirect/authorize', handler=self.__Authorize,methods=['GET','POST'])
        self.__AddEndpoint(endpoint='/redirect/BoardSelection', endpoint_name='/redirect/BoardSelection', handler=self.__BoardSelection)
        self.__AddEndpoint(endpoint='/WPSelected', endpoint_name='/WPSelected', handler=self.__WPSelected,methods=['GET','POST'])
        self.__AddEndpoint(endpoint='/GraphsGeneration', endpoint_name='/GraphsGeneration', handler=self.__GraphGeneration,methods=['GET','POST'])
        self.__AddEndpoint(endpoint='/GraphsMenu', endpoint_name='/GraphsMenu', handler=self.__GraphGeneration,methods=['GET','POST'])
        self.__AddEndpoint(endpoint='/GraphsDownload', endpoint_name='/GraphsDownload', handler=self.__GraphsDownload,methods=['GET','POST'])
        self.__AddEndpoint(endpoint='/GraphRendering/<HTMLname>', endpoint_name='/GraphRendering/<HTMLname>',handler=self.__GraphRendering,methods=['GET'])
        