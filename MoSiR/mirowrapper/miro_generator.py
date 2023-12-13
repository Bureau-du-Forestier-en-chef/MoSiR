"""
Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""

from ..generators import Generator
from .. import utilities
from .. import mosir_exceptions
import copy,warnings,re,os


class ItemBuilder:
    def __init__(self,JsonLocation:str):
        self.__DATA = utilities.Jsonparser.read(JsonLocation)
    def __GetFromRegex(self,BaseName: str,Descriptor : str)->re.Match:
        CompiledRegex = re.compile("(?:(.+)|)("+Descriptor+")([\s\t]*)(\[)([\s\t]*)(\d+\.?\d*)([\s\t]*)(\])(?:(.+)|)")
        return CompiledRegex.match(BaseName)
    def __GetValue(self,BaseName: str,Descriptor : str) -> float:
        RESULT = self.__GetFromRegex(BaseName,Descriptor)
        if RESULT:
            return float(RESULT.group(6))
        else:
            return 1.0
    def __GetName(self,BaseName: str,Descriptors : []) -> str:
        Name = copy.deepcopy(BaseName)
        for Descriptor in Descriptors:
            RESULT = self.__GetFromRegex(Name,Descriptor)
            if RESULT:
                Name = ""
                if RESULT.group(1) is not None:
                    Name += RESULT.group(1)
                if RESULT.group(9) is not None:
                    Name += RESULT.group(9)
        return Name
    def IsItem(self,Item:{},Choice:str ="Choose")->bool:
        if Choice in self.__DATA and self.__DATA[Choice]:
            for keys,ChooseItem in self.__DATA[Choice].items():
                TempItem = copy.deepcopy(Item)
                for key in keys.split('/'):
                    if key in TempItem:
                        TempItem = TempItem[key]
                    else:
                        return False
                if not TempItem in ChooseItem:
                    return False
        return True
    def GetDescription(self,Item:{})->{}:
        DataHolder = {}
        if "Describe" in self.__DATA and self.__DATA["Describe"]:
            for Type,DescribeItem in self.__DATA["Describe"].items():
                DataHolder[Type] = 1.0                                           
                for keys, AllValues in DescribeItem.items():
                    TempItem = copy.deepcopy(Item)
                    for key in keys.split('/'):
                        if key in TempItem:
                            TempItem = TempItem[key]
                        else:
                            DataHolder[Type] = 0.0
                    if not TempItem in AllValues:
                        DataHolder[Type] = 0.0
            if "data"in Item and "content" in Item["data"]:
                Name = utilities.Htmlparser.get_string_from_html(Item["data"]["content"]).\
                replace(',', '')
                Selectedkeys = []
                for KeyData, Data in  DataHolder.items():
                    if Data and KeyData in Name:
                        DataHolder[KeyData] = self.__GetValue(Name,KeyData)
                        Selectedkeys.append(KeyData)
                DataHolder["Name"] = Name
                if Selectedkeys:
                    DataHolder["Name"] = self.__GetName(Name,Selectedkeys)
        return DataHolder


class Mirogenerator(Generator):
    def __init__(self,GraphName:str,ItemsData:[],ConnectorsData:[]):
        super().__init__(GraphName)
        self.__ItemsData = ItemsData
        self.__ConnectorsData = ConnectorsData
        base_path = os.path.join(os.path.dirname(os.path.abspath(__file__)),"inputs")
        self.__NODEBUILDER = ItemBuilder(os.path.join(base_path,"Node.json"))
        self.__EDGEBUILDER = ItemBuilder(os.path.join(base_path,"Edge.json"))
    def __LogStatus(self,message:str)->None:
        print(message + " for Graph "+self.get_graph_name())
    def GetNodeNames(self)->[str]:
        Names = []
        for NodeItems in self._edges.values():
            Names.apennd(NodeItems["Name"])
        Names.sort()
        return Names
    def __ItemToNode(self,Item)->dict():
        return self.__NODEBUILDER.GetDescription(Item)
    def __ConnectorToEdge(self,EdgeID:int,Connector)->dict():
        FromNodeId = int(Connector["startItem"]["id"])
        ToNodeId = int(Connector["endItem"]["id"])
        if FromNodeId == ToNodeId:
            raise(mosir_exceptions.Miroerror("Edge id "+str(EdgeID)+" has the same source and target node "+str(FromNodeId),EdgeID))
        Holder = {"From":FromNodeId,"To":ToNodeId,"Values":[1.0]}
        OtherData = self.__EDGEBUILDER.GetDescription(Connector)
        Holder.update(OtherData)
        return Holder
    def __IsEdgeConnected(self,Connector: {})->bool:
        return all(Item in Connector for Item in ("startItem","endItem"))
    def __IsNode(self,Item: {})->bool:
        return self.__NODEBUILDER.IsItem(Item)
    def __IsEdge(self,Connector: {})->bool:
        return (self.__IsEdgeConnected(Connector) and self.__EDGEBUILDER.IsItem(Connector))
    def __DoContainsValue(self,Item: {},Value:str) ->bool:
        return "content" in Item["data"] and Value in Item["data"]["content"] 
    def __IsEdgeFork(self,Item: {})->bool:
        return  self.__DoContainsValue(Item,"%") and self.__EDGEBUILDER.IsItem(Item,"ChooseValues")
    def __IsNodeFork(self,Item: {})->bool:
        return self.__EDGEBUILDER.IsItem(Item,"ChooseFork")
    def __BuildNodes(self)->None:
        self.__LogStatus("Building Nodes")
        #S'arranger pour que les box jaunes disparaise se lit directement 
        self._nodes = {}
        for Item in self.__ItemsData:
            if (self.__IsNode(Item)):
                NodeId = int(Item["id"])
                self._nodes[NodeId] = self.__ItemToNode(Item)
                if "position" in Item:
                    self._nodes[NodeId]["X"] = (Item["position"]["x"]/10)
                    self._nodes[NodeId]["Y"] = (Item["position"]["y"] / 10)
        ENDMESSAGE = "Found "+str(len(self._nodes))+" Potential Nodes"
        self.__LogStatus(ENDMESSAGE)
    def __BuildEdges(self)->None:
        self.__LogStatus("Building Edges")
        self._edges = {}
        for Connector in self.__ConnectorsData:
            if self.__IsEdge(Connector):
                EdgeId = int(Connector["id"])
                self._edges[EdgeId] = self.__ConnectorToEdge(EdgeId,Connector)
        ENDMESSAGE = "Found "+str(len(self._edges))+" Potential Edges"
        self.__LogStatus(ENDMESSAGE)
    def __GetEdgeConnectorValues(self,Item:{})->float:
        Values = []
        try:
            WorkableString = utilities.Htmlparser.get_string_from_html(Item["data"]["content"].replace("%",""))
            Values = [float(value)/100 for value in WorkableString.split(",")]
        except:
            MESSAGE = "Cannot get edge value for edge id " + Item["id"] + " on Item "+str(Item)
            raise(mosir_exceptions.Miroerror(MESSAGE,Item["id"]))
        return Values
    def __GetEdgeValues(self)->dict():
        TagLocation = {}
        for Item in self.__ItemsData:
            if self.__IsEdgeFork(Item):
                TagId = int(Item["id"])
                TagLocation[TagId] = self.__GetEdgeConnectorValues(Item)
        TAGMESSAGE = "Found "+str(len(TagLocation))+" Potential Edges Values"
        self.__LogStatus(TAGMESSAGE)
        return TagLocation
    def __SimplifyEdges(self)->None:
        self.__LogStatus("Doing Edges Simplification")
        TAGLOCATION = self.__GetEdgeValues()
        FORKS = self.__GetNodesFork()
        NewEdges = {}
        TagUsed = set()
        ValidLocations = FORKS.union(set(self._nodes.keys()))
        for EdgeId,EdgeItems in self._edges.items():
            if EdgeItems["To"] in TAGLOCATION:
                if EdgeItems["From"] in TAGLOCATION:
                    raise(mosir_exceptions.Miroerror("Edge id "+str(EdgeId)+" from a tag "+str(EdgeItems),EdgeId))
                TagUsed.add(EdgeItems["To"])
                NewValues = TAGLOCATION[EdgeItems["To"]]
                EdgeItems["Values"] = NewValues
                GotAtarget = False
                for SubEdgeId,SubEdgeItems in self._edges.items():
                    if SubEdgeItems["From"] == EdgeItems["To"]:
                        EdgeItems["To"] = SubEdgeItems["To"]
                        GotAtarget = True
                        break
                if not GotAtarget:
                    raise(mosir_exceptions.Miroerror("Tag ID "+str(EdgeItems["To"])+" has no out edge",EdgeItems["To"]))
                NewEdges[EdgeId] = EdgeItems
            elif(all(Item in ValidLocations for Item in (EdgeItems["To"],EdgeItems["From"]))):
                NewEdges[EdgeId] = EdgeItems
        if len(TagUsed) < len(TAGLOCATION):
            for tagid in TAGLOCATION.keys():
                if tagid not in TagUsed:
                    Message = "Tag id "+str(tagid)+" not used"
                    raise(mosir_exceptions.Miroerror(Message,tagid))
        Removed = len(self._edges) - len(NewEdges)
        self._edges = NewEdges
        for EdgeId,EdgeItems in self._edges.items():
            if EdgeItems["From"] in TAGLOCATION or EdgeItems["To"] in TAGLOCATION:
                 raise(mosir_exceptions.Miroerror("Edge id "+str(EdgeId)+" still with Tag "+str(EdgeItems),EdgeId))
        ENDMESSAGE = "Removed "+str(Removed)+" Edges after simplification"
        self.__LogStatus(ENDMESSAGE)
    def __GetNodesFork(self)->set:
        Forks = set()
        for Item in self.__ItemsData:
            if self.__IsNodeFork(Item):
                 ForkId = int(Item["id"])
                 Forks.add(ForkId)
        ENDMESSAGE = "Found "+str(len(Forks))+" Node Forks"
        self.__LogStatus(ENDMESSAGE)
        return Forks
    def __multiplyValues(self,FirstList : [float],SecondList : [float])->[float]:
        NEWSIZE = max(len(FirstList),len(SecondList))
        NewList = []
        for Valid in range(0,NEWSIZE):
            FirstValue = FirstList[-1]
            SecondValue = SecondList[-1]
            if len(FirstList) > Valid:
                FirstValue = FirstList[Valid]
            if len(SecondList) > Valid:
                SecondValue = SecondList[Valid]
            NewList.append(FirstValue*SecondValue)
        return NewList
    def __GetMaxId(self)->int:
        MaxedgeId = 0
        for Item in self.__ItemsData:
            MaxedgeId=max(int(Item["id"]),MaxedgeId)
        for Connector in self.__ConnectorsData:
            MaxedgeId=max(int(Connector["id"]),MaxedgeId)
        return MaxedgeId
    def __GetEdgeFromForkData(self,EdgeItems:{},SubEdgeItems:{})->{}:
        NEWVALUES = self.__multiplyValues(EdgeItems["Values"],SubEdgeItems["Values"])
        NEWEdgeItems = copy.deepcopy(EdgeItems)
        NEWEdgeItems["Values"] = NEWVALUES
        NEWEdgeItems["To"] = SubEdgeItems["To"]
        for key,data in SubEdgeItems.items():
            if key not in ["Values","From","To"]:
                if data:
                    NEWEdgeItems[key] = data
        return NEWEdgeItems
    def __SimplifyEdgesForks(self)->None:
        self.__LogStatus("Doing Edges Forks Simplification")
        FORKS = self.__GetNodesFork()
        MaxedgeId = self.__GetMaxId() + 1
        EdgesToRemove = set()
        NewEdges = {}
        for EdgeId,EdgeItems in self._edges.items():
            if EdgeItems["To"] in FORKS:
                #Now get the edges getting out of this fork
                for SubEdgeId,SubEdgeItems in self._edges.items():
                    if SubEdgeItems["From"] == EdgeItems["To"]:
                        NewEdges[MaxedgeId] = self.__GetEdgeFromForkData(EdgeItems,SubEdgeItems)
                        EdgesToRemove.add(SubEdgeId)
                        MaxedgeId+=1
                        #Create new edge each time
                EdgesToRemove.add(EdgeId)
        for EdgeId,EdgeItems in self._edges.items():
            if EdgeId not in EdgesToRemove:
                NewEdges[EdgeId] = EdgeItems
        self._edges = NewEdges
        for EdgeId,EdgeItems in self._edges.items():
            self.__ValidateEdge(EdgeId,EdgeItems)
        ENDMESSAGE = "After Edges fork simplification got "+str(len(self._edges))+" Edges"
        self.__LogStatus(ENDMESSAGE)
    def __ValidateEdge(self,EdgeId:int,EdgeItems:{})->None:
        if EdgeItems["From"] not in self._nodes or EdgeItems["To"] not in self._nodes:
            TOID = EdgeItems["To"]
            FROMID = EdgeItems["From"]
            ToITEM = None
            FromITEM = None
            for Item in self.__ItemsData:
                TagId = int(Item["id"])
                if TagId == TOID:
                    ToITEM = Item["data"]["content"]
                elif(TagId == FROMID):
                    FromITEM = Item["data"]["content"]
            Connectordata = None
            for Connector in self.__ConnectorsData:
                ConnectorId = int(Connector["id"])
                if ConnectorId == EdgeId:
                    Connectordata = Connector
            Message = "Edge "+str(EdgeId)+" Does not have a valid source node " + str(EdgeItems)
            if EdgeItems["To"] in self._nodes:
                BUTTARGET = self._nodes[EdgeItems["To"]]["Name"]
                Message += " targeting " + BUTTARGET
            if EdgeItems["To"] not in self._nodes:
                Message = "Edge "+str(EdgeId)+" Does not have a valid target node " + str(EdgeItems)
                if EdgeItems["From"] in self._nodes:
                    BUTSOURCE = self._nodes[EdgeItems["From"]]["Name"]
                    Message += " Sourced on " + BUTSOURCE
            #Take a look with this https://miro.com/app/board/uXjVMvp8bjE=/?moveToWidget=3458764561316365196&cot=14
            Message += " FROM " + str(FromITEM) +" ID("+str(FROMID)+")" + " TO " + str( ToITEM ) +" ID("+str(TOID)+") FOR Connector "+str(Connectordata)
            raise(mosir_exceptions.Miroerror(Message,EdgeId))
    def __CleanNodes(self):
        ConnectedNodes = set()
        Tonodes = set()
        for EdgeItems in self._edges.values():
            ConnectedNodes.add(EdgeItems["From"])
            ConnectedNodes.add(EdgeItems["To"])
            Tonodes.add(EdgeItems["To"])
        NodestoKeep = {}
        for NodeId,NodeItems in self._nodes.items():
            if NodeId in  ConnectedNodes:
                NodestoKeep[NodeId] = NodeItems
                if NodeId not in Tonodes:
                    MESSAGE = "Node named "+NodeItems["Name"]+" has no source node"
                    warnings.warn(MESSAGE)
            else:
                MESSAGE = "Node named "+NodeItems["Name"]+" is not linked to graph and will be ignored"
                warnings.warn(MESSAGE)
        self._nodes = NodestoKeep
    def Build(self):
        self.__BuildNodes()
        self.__BuildEdges()
        self.__SimplifyEdges()
        self.__SimplifyEdgesForks()
        self.__CleanNodes()
   
            