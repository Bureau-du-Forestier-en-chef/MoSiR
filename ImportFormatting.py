import pandas as pd

# Diviser le import

class EditImport():
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
    
Test01 = EditImport('Import.txt')               
Test01.GetUnit()
Test01._UNIT

for i in Test01._UNIT:
    print(i)