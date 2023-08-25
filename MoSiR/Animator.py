"""
Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""

from pyvis.network import Network
from . import Utilities
import os

class HTMLAnimation:
    def __init__(self,Graphdict : dict(),Name:str):
        self.__NAME = Name
        self.__BASEGRAPH = Graphdict
        self.__COLORS = self.__GetRenderingItems("inputs/Rendering.json")
    def __GetRenderingItems(self,File:str)->{}:
        return Utilities.JsonParser.Read(File)
    def __GetEdgeWeigth(self,EdgeData: dict(), Time : int) -> float:
        Value = int(EdgeData["Values"][-1]* 100)
        if Time < len(EdgeData["Values"]):
            Value = int(EdgeData["Values"][Time] * 100)
        return Value
    def __GetColor(self,TypeofItem:str,NodeItem : dict()) ->str:
        Color = self.__COLORS[TypeofItem]["Base"]
        KeysofColor = [key for key in self.__COLORS[TypeofItem].keys() if key not in ["Base"]]
        KeysofColor.sort()
        for ColorType in KeysofColor:
            if ColorType != "Base":
                if NodeItem[ColorType]:
                    Color = self.__COLORS[TypeofItem][ColorType]
        return Color
    def __GenerateNetworkGraph(self,Time:int)->None:
        self.__GraphNetwork__ = Network(select_menu=True,filter_menu=True,directed=True,cdn_resources='in_line')
        NodeIds = list(self.__BASEGRAPH ["Nodes"].keys())
        NodeIds.sort()
        NodeNames = []
        NodeIndex = 0
        IndexMatch = {}
        for Nodeid in NodeIds:
            NodeItems = self.__BASEGRAPH ["Nodes"][Nodeid]
            NAME = NodeItems["Name"]
            NodeNames.append(NAME)
            Values = ""
            for datakey, data in NodeItems.items():
                if datakey  not in ["Name"]:
                    Values += datakey +":"+str(data) +"\n"
            TITLE = Values
            COLOR = self.__GetColor("Node",NodeItems)
            self.__GraphNetwork__.add_node(NodeIndex,title=TITLE,label=NAME,color=COLOR)
            IndexMatch[Nodeid] = NodeIndex
            NodeIndex+=1
        for EdgeItems in self.__BASEGRAPH ["Edges"].values():
            FROMID = IndexMatch[EdgeItems["From"]]
            TOID = IndexMatch[EdgeItems["To"]]
            Values = ""
            for datakey, data in EdgeItems.items():
                if datakey not in ["From","To"]:
                    Values += datakey +":"+str(data)+"\n"
            NUMVALUE = self.__GetEdgeWeigth(EdgeItems,Time)
            Color = self.__GetColor("Edge",EdgeItems)
            self.__GraphNetwork__.add_edge(FROMID,TOID,title =Values,value=NUMVALUE,color=Color)
        self.__GraphNetwork__.show_buttons(filter_=['physics'])
    def GetNetWork(self,Time:int)->str:
        self.__GenerateNetworkGraph(Time)
        FILENAME = self.__NAME+"_"+str(Time)+".html"
        HTMLfile = self.__GraphNetwork__.generate_html(FILENAME)
        HTMLlocation = (os.path.join(os.path.dirname(os.path.abspath(__file__)),"templates",FILENAME))
        with open(HTMLlocation, "w+",encoding="utf-8") as out:
            out.write(HTMLfile)
        return FILENAME

