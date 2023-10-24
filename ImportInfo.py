import pandas as pd
import json

# Json -----------------------------------------------------------------------

class ImportData():
    def __init__(self, directory):
        with open(directory, "r") as f: 
            self._DATA = json.load(f)
            
    def GetUnit(self):
        return self._DATA['Unit']
    
    def GetData(self):
        return self._DATA['Inputs']
    
    def GetNodesName(self):
        return [i for i in self.GetData()]
    
    def GetNodeInput(self, NodeName):
        Input = self.GetData()[NodeName]
        Time = []
        Quantities = []
        for time, value in Input.items():
            if value == 0:
                continue
            Time.append(int(time)) 
            Quantities.append(value)
        return Time, Quantities

def AddImport(Graph, Import):
    for Name in Graph.GetGraphName:
        G = Graph.GetGraph(Name)
        for Node in G.Nodes():
            if Node.NAME in Import.GetNodesName():
                Time = Import.GetNodeInput(Node.NAME)[0]
                Quantities = Import.GetNodeInput(Node.NAME)[1]
                Node.Time = Time
                Node.Quantities = Quantities

# Txt ------------------------------------------------------------------------
""" 
class EditTxtImport():
    def __init__(self, directory):
        self._DIR = directory
        self._INPUT = []
        self._UNIT = []
        with open(directory, 'r') as txt:
            Saved = False
            Bracket = 0
            # Carbon input
            for line in txt.readlines():
                if line.startswith('#'):
                    continue
                if line.startswith('Unit:'):
                    Unit = line.strip().split(':', 1)
                    self._UNIT.append(Unit[1])
                if line.startswith('CarbonInputs'):
                    Saved = True
                    Parts = line.split('{', 1)
                    if len(Parts) > 1:
                        self._INPUT.append('{' + Parts[1].strip())
                elif Saved:
                    self._INPUT.append(line.strip())
                if Saved and '{' in line:
                    Bracket += 1
                elif Saved and '}' in line:
                    Bracket -= 1
                if Bracket == 0:
                    Saved = False
    def GetInput(self):
        return eval(''.join(self._INPUT))
    def GetUnit(self):
        Unit = self._UNIT[0].strip().lower()
        assert Unit in ['kgc', 'tc']
        return Unit
    
Test01 = EditTxtImport('Import.txt')               
Test01.GetUnit()
Test01.GetInput()
"""