import pandas as pd
import json

# Json -----------------------------------------------------------------------

class ReportData():
    def __init__(self, directory):
        with open(directory, "r") as f: 
            self._DATA = json.load(f)
            
    def GetData(self):
        return self._DATA
            
    def GetOutputName(self):
        return [i for i in self.GetData()]
    
    def GetOutputData(self, OutputName: str):
        return self._DATA[OutputName]
    
R = ReportData('D:\MoSiR\Reporting.json')

for output in R.GetOutputName():
    R.GetOutputData(output)