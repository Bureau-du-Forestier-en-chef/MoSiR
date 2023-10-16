import networkx as nx
import igraph as ig

class ConstError(Exception):
    def __init__(self, message: str):    
        super().__init__(message)

class WPGraph():
    def __init__(self, KEY):
        super().__init__()
        self._Graph = nx.DiGraph()
        self._NAME = KEY
    
    def AddNode(self, node):
        return self._Graph.add_node(node)
    
    def AddEdge(self, From, To, Proportions):
        return self._Graph.add_edge(From, To, Proportion = Proportions)
    
    def GetEdgeProportions(self, From, To) -> list[float]:
        return self._Graph.get_edge_data(From, To)["Proportion"]
    
    def GetPredecessors(self, Node):
        return self._Graph.predecessors(Node)
    
    def GetSuccessors(self, Node):
        return self._Graph.successors(Node)
    
    def Nodes(self):
        return self._Graph.nodes()
    
    @property
    def GetName(self):
        return self._NAME
    
    @GetName.setter
    def GetName(self):
        return ConstError("Graph name can't be changed outside Miro")

class WPGraph_IG():
    def __init__(self, KEY):
        super().__init__()
        self._Graph = ig.Graph(directed = True)
        self._NAME = KEY
   
    def __ToIGNode(self, node):
        return self._Graph.vs.find(data = node)
   
    def AddNode(self, node):
        return self._Graph.add_vertex(data = node)
    
    def AddEdge(self, From, To, Proportions):
        From_VS = self.__ToIGNode(From)
        To_VS = self.__ToIGNode(To)
        return self._Graph.add_edge(From_VS, To_VS, Proportion = Proportions)
    
    def GetEdgeProportions(self, From, To) -> list[float]:
        From_VS = self.__ToIGNode(From)
        To_VS = self.__ToIGNode(To)
        return self._Graph.es[self._Graph.get_eid(From_VS, To_VS)]['Proportion']
    
    def GetPredecessors(self, Node):
        From_VS = self.__ToIGNode(Node)
        return [self._Graph.vs[i]['data'] for i in self._Graph.predecessors(From_VS)]
    
    def GetSuccessors(self, Node):
        To_VS = self.__ToIGNode(Node)
        return [self._Graph.vs[i]['data'] for i in self._Graph.successors(To_VS)]
    
    def Nodes(self):
        return [i['data'] for i in self._Graph.vs]
    
    @property
    def GetName(self):
        return self._NAME
    
    @GetName.setter
    def GetName(self):
        return ConstError("Graph name can't be changed outside Miro")