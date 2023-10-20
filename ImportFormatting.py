import pandas as pd

# Diviser le import

class EditImport():
    def __init__(self, directory):
        self._DIR = directory
        with open(directory, 'r') as txt:
            Saved = False
            Input = []
            Bracket = 0
            Unit = []
            # Carbon input
            for line in txt.readlines():
                if line.startswith('#'):
                    continue
                if line.startswith('Unit:') and 'kgC' or line.startswith('Unit:') and 'tC':
                    Unit.append(line.split(':', 1))
                if line.startswith('CarbonInputs'):
                    Saved = True
                    Parts = line.split('{', 1)
                if len(Parts) > 1:
                    Input.append('{' + Parts[1].strip())
                elif Saved:
                    Input.append(line.strip())
                if Saved and '{' in line:
                    Bracket += 1
                elif Saved and '}' in line:
                    Bracket -= 1
                if Bracket == 0:
                    Saved = False
    # Unit
    
    
Unit 
Input = eval(''.join(Input))
Input