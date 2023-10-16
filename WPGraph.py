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
        self._Graph = ig.Graph()
        self._NAME = KEY
    
    def AddNode(self, node):
        return self._Graph.add_vertex(node)
    
    def AddEdge(self, From, To, Proportions):
        return self._Graph.add_edge(From, To, Proportion = Proportions)
    
    def GetEdgeProportions(self, From, To) -> list[float]:
        return self._Graph.get_edge_dataframe(From, To)["Proportion"]
    
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
    