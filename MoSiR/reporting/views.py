"""
Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""

import os
import csv
import pathlib
import seaborn
from flask import jsonify
from flask import request
from flask import Response
from .. import utilities
from .. import mosir_calculator
from ..blueprint_component import Component

class Reporting(Component):
    def __init__(self):
        Component.__init__(self, __class__.__name__, __name__)

    def __get_inputs(self) -> Response:
        stash = [] 
        stash += self.__build_inputs_table()
        stash += self.__build_report_header()
        stash += self.__build_report_outputs()
        stash.append('<br>')
        stash.append('<button class="w3-button w3-dark-grey" input type ='
            + '"submit" value = "submit">Exécuter <i class="fa fa-arrow-right"></i></button>')
        stash.append('</div>')
        stash.append('</form>')
        stash.append('</div>')
        return Component.main_renderer.render(False, stash)
    
    def __build_inputs_table(self) -> list[str]:
        stash = []
        stash.append('<h3><b>Intrants</b></h3>')
        stash.append('<div class="w3-threequarter w3-margin-bottom">')
        #Unit selection...
        stash.append('<form action="'
                     + self._get_url_for("/report")
                     +'" id="cinputsform" method = "POST">')
        stash += self.__build_cinputs_biomass_buttons()
        stash.append('<div>')
        stash.append('<label for="units">Unité</label>')
        stash.append('<select name="units" id="units">')

        for unit in self.__get_units():
            stash.append('<option value="'
                         + unit
                         + '">'
                         + unit
                         + '</option>')
        stash.append('</select>')
        stash.append('</div>')

        for generator in self.read_graphs_json():
            #For each graph allow an inputs of a list of numbers
            # Input time / quantities
            stash.append('<h6> Nom du graphe: '+ generator.get_graph_name() + '</h6>')
            stash.append('<h5> Flux de matière </h5>')
            stash.append('<div class="w3-responsive">')
            stash.append('<table class="w3-striped w3-border w3-hoverable" id=cinputs_'
                + generator.get_graph_name()
                + '><tr class="w3-sand">'
                + '<th>Noeud d\'entrée</th>'
                + '<th>Période</th>'
                + '<th>Quantité</th>'
                + '</tr>')
            stash.append('<tr>')
            stash.append('<th>')
            stash.append('<select name="Noeud d\'entrée" title="Noeud d\'entrée" id="Node_'
                         + generator.get_graph_name()
                         + '">')
            for node in generator.get_first_node_names():
                stash.append('<option value="'
                             + node 
                             + '">'
                             + node
                             + '</option>')
            stash.append('</th>')
            stash.append('<th> <input type = "number" name="Période~'
                         + generator.get_graph_name() 
                         + '" title="Période" min ="0" id="Period_'
                         + generator.get_graph_name()
                         + '"/></th>')
            stash.append('<th> <input type = "number" name="Quantitée" title="Quantitée"'
                         + 'min ="0" id="Quantity_'
                         + generator.get_graph_name()
                         + '"/></th>')
            stash.append('<th>')
            stash.append('<button class="w3-button w3-dark-grey" type = "button" onclick=addcinputs("'
                         + generator.get_graph_name()
                         + '")>Enregistrer la période <j class="fa fa-plus-circle"></j></button>')
            stash.append('</th>')
            stash.append('</tr>')
            stash.append('</table>')
            stash.append('</div>')
            stash.append('<br>')
            
            # Input Decay node
            if len(generator.get_decay_node_names()) > 0:
                stash.append('<h5> Valeurs de dégradation </h5>')
                stash += self.__build_cdecay_button()
                stash.append('<table class="w3-striped w3-border w3-hoverable w3-sand" id=cdecay_'
                    + generator.get_graph_name()
                    + '><tr>'
                    + '<th>Noeud</th>'
                    + '<th>Dégradation</th>'
                    + '<th>Demi-vie</th>'
                    + '<th><span id="alphaTitle">Alpha</span></th>'
                    + '<th><span id="betaTitle">Beta</span></th>'
                    + '</tr>')
                for node in generator.get_decay_node_names():
                    stash.append('<tr>')
                    stash.append('<td>{}</td>'.format(node))
                    stash.append('<th>')
                    stash.append('<select name="Dégradation" title="Dégradation" id="Decay_'
                                + generator.get_graph_name() + '~' + node
                                + '" onchange="checkTypes(); setdecay(this)">')
                    for decay in self.__get_decay_types():
                        stash.append('<option value="'
                                     + decay 
                                     + '">'
                                     + decay
                                     + '</option>')
                    stash.append('</th>')
                    stash.append('<td><input type="number" min="1" max="500" name="halflife_value~'
                                 + generator.get_graph_name() + '~' + node
                                 + '" id="halflife_value~'
                                 + generator.get_graph_name() + '~' + node
                                 + '" onchange="setdecay(this)" step="any" required'
                                 + '></td>')
                    stash.append('<td><input type="number" max="500" name="alpha_value~'
                                 + generator.get_graph_name() + '~' + node
                                 + '" id="alpha_value~'
                                 + generator.get_graph_name() + '~' + node
                                 + '" onchange="setdecay(this); validateInput(this)" step="any" required'
                                 + '></td>')
                    stash.append('<td><input type="number" max="500" name="beta_value~'
                                 + generator.get_graph_name() + '~' + node 
                                 + '" id="beta_value~'
                                 + generator.get_graph_name() + '~' + node
                                 + '" onchange="setdecay(this); validateInput(this)" step="any" required'
                                 + '"></td>')
                    stash.append('<td><input type="hidden" name="rowData~'
                        + generator.get_graph_name() + '~' + node
                        + '" id="rowData~'
                        + generator.get_graph_name() + '~' + node
                        + '"></td>')
                    stash.append('</tr>')
                stash.append('</table>')
                stash.append('<br>')
        return stash
    
    def __build_report_header(self) -> list[str]:
        stash = []
        stash.append('<h3><b>Rapport</b></h3>')
        stash += self.__build_coutputs_buttons()
        stash.append('<div>')
        stash.append('<label for="Time">Horizon de simulation</label>')
        stash.append('<input type = "number" name="Time" title=\
                     "Horizon de simulation" min ="1" value="1" id="Time"/>')
        stash.append('</div>')
        stash.append('<div>')
        stash.append('<label for="Output file extension">Type de fichier de sortie</label>')
        stash.append('<select name="Output file extension" \
                     id="Output file extension" title="Extension">')
        for extension in self.__get_file_types():
            stash.append('<option value="' + extension + '">' + extension + '</option>')
        stash.append('</select>')
        stash.append('</div>')
        stash.append('<div>')
        stash.append('<h7>Potentiel de réchauffement global:</h7>')
        stash.append('<label for="CH4">CH<sub>4</sub></label>')
        stash.append('<input type = "number" name="CH4" \
                     title="Potentiel de réchauffement global (CH4)" \
                     style="width: 5em" min="0" value ="28" id="CH4"/>')
        stash.append('<label for="N2O">N<sub>2</sub>O</label>')
        stash.append('<input type = "number" name="N2O" \
                     title="Potentiel de réchauffement global (N20)" \
                     style="width: 5em" min="0" value ="265" id="N2O"/>')
        stash.append('</div>')
        return stash
    
    def __build_report_outputs(self) -> list[str]:
        stash = []
        for generator in self.read_graphs_json():
            stash.append('<div>')
            stash.append('<h6> Nom du graphe: ' + generator.get_graph_name() + '</h6>')
            stash.append('<div class="w3-responsive">')
            stash.append('<table class="w3-border w3-striped" id=coutputs_'
                + generator.get_graph_name()
                + ' style="table-layout: fixed; width: 71%;">'
                + '<colgroup>'
                + '<col style="width: 7em;">'
                + '<col style="width: 8em;">'
                + '<col style="width: 6em;">'
                + '<col style="width: 5em;">'
                + '<col style="width: 9em;">'
                + '<col style="width: 5em;">'
                + '</colgroup>'
                + '<tr class="w3-sand">'
                + '<th>Nom</th>'
                + '<th>Noeuds</th>'
                + '<th>Type de flux</th>'
                + '<th>Cumulatif</th>'
                + '<th>Regroupement</th>'
                + '<th>Unité</th>'
                + '</tr>')
            stash.append('<tr>')
            stash.append('<td> <input type = "text" size="10" name="Nom~'
                         + generator.get_graph_name()
                         + '" title="Nom" min ="1" id="Output_'
                         + generator.get_graph_name()+'"/></td>')
            stash.append('<td>')
            stash.append('<div id="drop_list_' 
                         + generator.get_graph_name()
                         + '" class="dropdown-check-list" tabindex="100">')
            stash.append('<span class="anchor" onclick=dropdown("'
                         + generator.get_graph_name()
                         + '")>Noeuds</span>')
            stash.append('<ul id="drop_list_ul_'
                         + generator.get_graph_name()
                         + '" class="items">')
            for node in generator.get_node_names():
                stash.append('<li><input type="checkbox"/>'
                             + node + '</li>')
            stash.append('</ul>')
            stash.append('</div>')
            stash.append('</td>')
            stash.append('<td>')
            stash.append('<select name="Type de flux" title="Type de flux" id="out_type_'
                         + generator.get_graph_name() + '">')
            for unit in self.__get_outputs_types():
                stash.append('<option value="' + unit + '">' + unit + '</option>')
            stash.append('</select>')
            stash.append('</td>')
            stash.append('<td>')
            stash.append('<select name="Cumulatif" title="Cumulatif" id="cumulative_'
                         + generator.get_graph_name() + '">')
            for unit in self.__get_cumulative():
                stash.append('<option value="' + unit + '">' + unit + '</option>')
            stash.append('</select>')
            stash.append('</td>')
            stash.append('<td>')
            stash.append('<select name="Regroupement" title="Regroupement" id="sum_'
                         + generator.get_graph_name()+'">')
            for unit in self.__get_sum():
                stash.append('<option value="' + unit + '">' + unit + '</option>')
            stash.append('</select>')
            stash.append('</td>')
            stash.append('<td>')
            stash.append('<select name="Unité" title="Unité" id="out_unit_'
                         + generator.get_graph_name() + '">')
            for unit in self.__get_outputs_units():
                stash.append('<option value="' + unit + '">' + unit + '</option>')
            stash.append('</select>')
            stash.append('</td>')
            stash.append('<td>')
            stash.append('<button class="w3-button w3-dark-grey" type="button" onclick=addcoutputs("'
                         + generator.get_graph_name() 
                         + '")>Enregistrer la sortie <j class="fa fa-plus-circle"></j></button>')
            stash.append('</td>')
            stash.append('</tr>')
            stash.append('</table>')
            stash.append('</div>')
            stash.append('</div>')
        stash.append('<div>')
        return stash 

    def __build_coutputs_buttons(self) -> list[str]:
        #Avec les files names appeller jsonprovider avec le fetch
        stash = []
        for output in self._get_reporting_files():
            jsonname = pathlib.Path(output).stem
            htmltarget = self._get_url_for("/json_provider/<filename>",
                                           filename= jsonname + '.json')
            stash.append('<button class="w3-button w3-dark-grey" id='
                         + htmltarget
                         +'  type="button" onclick=fillcoutputs("'
                         + htmltarget
                         + '")> Ajouter '
                         + jsonname
                         +' <i class="fa fa-arrow-right"></i></button>')
        return stash
    
    def __build_cinputs_biomass_buttons(self) -> list[str]:
        #Avec les files names appeller jsonprovider avec le fetch
        stash = []
        for input in self._get_inputs_files():
            jsonname = pathlib.Path(input).stem
            htmltarget = self._get_url_for("/json_provider/<filename>", 
                                           filename=jsonname + '.json')
            stash.append('<button class="w3-button w3-dark-grey" id='
                         + htmltarget 
                         + '  type="button" onclick=fillcinputs("'
                         + htmltarget
                         + '")> Ajouter '
                         + jsonname
                         + ' <i class="fa fa-arrow-right"></i></button>')
        return stash
    
    def __build_cdecay_button(self) -> list[str]:
        #Avec les files names appeller jsonprovider avec le fetch
        stash = []
        for input in self._get_inputs_files():
            jsonname = pathlib.Path(input).stem
            htmltarget = self._get_url_for("/json_provider/<filename>", 
                                           filename=jsonname + '.json')
            stash.append('<button class="w3-button w3-dark-grey" id='
                         + htmltarget + '_decay' 
                         + '  type="button" onclick=fillcdecay("'
                         + htmltarget
                         + '")> Ajouter '
                         + jsonname
                         + ' <i class="fa fa-arrow-right"></i></button>')
        return stash
    
    def __get_decay_types(self) -> list[str]:
        return ["Exponentielle", "Gamma", "Chi-square", "Personnalisée"]
    
    def __get_sum(self) -> list[str]:
        return ["Par noeud", "Tout ensemble"]
    
    def __get_cumulative(self) -> list[str]:
        return ["Oui", "Non"]
    
    def __get_file_types(self) -> list[str]:
        return [".csv"]
    
    def __get_units(self) -> list[str]:
        return ['kgC', 'tC']
    
    def __get_outputs_units(self) -> list[str]:
        return ['kgC','tC','w/m2', 'tCO2eq']
    
    def __get_outputs_types(self) -> list[str]:
        # Anglais ['Flux in', 'Flux out', 'Stock']
        # Français ['Entrant', 'Sortant', 'Stock']
        return ['Entrant', 'Sortant', 'Stock']
    
    def __get_graphs_inputs(self) -> str:
        data = {"Inputs": {}, "Decay": {}}
        for field_name, value in request.form.items():
            splitted_key = field_name.split('~')
            target_key = splitted_key[0]
            if target_key in ['units', "Quantity"]:
                if target_key == 'units':
                    data["Unit"] = value
                elif(target_key =='Quantity'):
                    splitted = field_name.split('~')
                    the_value = float(value)
                    graph = splitted[1]
                    node = splitted[2]
                    period = splitted[3]
                    if graph not in data["Inputs"]:
                        data["Inputs"][graph] = {}
                    if node not in data["Inputs"][graph]:
                        data["Inputs"][graph][node] = {}
                    data["Inputs"][graph][node][period] = the_value
            elif target_key == "rowData":
                value_list = value.strip('[]').replace('"', '').split(',')
                graph = splitted_key[1]
                node = splitted_key[2]
                decay_type = value_list[-1]
                # Le script html s'assure que les cases sont remplies
                if decay_type == "Personnalisée":
                    decay_type = "Custom"
                    value = {'alpha': float(value_list[1]),
                             'beta': float(value_list[2])}
                elif decay_type == "Exponentielle":
                    decay_type = "Exponential"
                    value = int(value_list[1])
                else:
                    value = int(value_list[1])
                if graph not in data["Decay"]:
                    data["Decay"][graph] = {node: {decay_type: value}}
                else:
                    data["Decay"][graph][node] = {decay_type: value}

        location = os.path.join(self._get_uploads_folder(), "inputs.json")
        utilities.Jsonparser.write(location, data)
        return location
    
    def __get_reporting(self) -> str:
        data = {"Output": {}, "PRG": {}}
        for field_name, value in request.form.items():
            splitted_key = field_name.split('~')
            target_key = splitted_key[0]
            if target_key in ['Time', 'CH4', 'N2O', 'Output file extension']:
                if target_key == 'Time':
                    data["Time"] = int(value)
                elif(target_key == 'Output file extension'):
                    data["Output file extension"] = value
                elif(target_key == 'CH4'):
                    data["PRG"]["CH4"] = int(value)
                elif(target_key == 'N2O'):
                    data["PRG"]["N2O"] = int(value)
            if target_key in ["Output", "Nodes_name", "Type", "Cumulative", "Summarize", "Unit"]:
                output_name = splitted_key[2].replace('~', '_').replace(' ', '_') # Car on split avec ~ pour le graphique
                graph_name = splitted_key[1]
                if graph_name not in data["Output"]:
                    data["Output"][graph_name] = {}
                if output_name not in data["Output"][graph_name]:
                    data["Output"][graph_name][output_name] = {"Nodes_name": None,
                                                               "Type": None,
                                                               "Cumulative": None, 
                                                               "Summarize": None, 
                                                               "Unit": None}
                elif(target_key == 'Nodes_name'):
                    data["Output"][graph_name][output_name]["Nodes_name"] = value.split(",")
                elif(target_key == 'Type'):
                    traduction = {'Entrant': 'Flux in',
                                  'Sortant': 'Flux out'}
                    if value in traduction: 
                        value = traduction[value]
                    data["Output"][graph_name][output_name]["Type"] = value
                elif(target_key == 'Cumulative'):
                    cumulate = False
                    if value.lower() == "oui":
                        cumulate = True
                    data["Output"][graph_name][output_name]["Cumulative"] = cumulate
                elif(target_key == 'Summarize'):
                    if value.lower() == "tout ensemble":
                        value = "Combined"
                    elif value.lower() == "par noeud":
                        value = "Per node"
                    data["Output"][graph_name][output_name]["Summarize"] = value
                elif(target_key == 'Unit'):
                    data["Output"][graph_name][output_name]["Unit"] = value
        location = os.path.join(self._get_uploads_folder(), "report.json")
        utilities.Jsonparser.write(location, data)
        return location
    
    def __report(self) -> Response:
        graphs_json = self._get_graphs_files()
        inputs_json = self.__get_graphs_inputs()
        report_json = self.__get_reporting()
        for graph_json in graphs_json:
            message = self.__run_mosir(graph_json, inputs_json, report_json)
        histogram_json = self.__get_histogram_json(report_json)
        jsonname = pathlib.Path(histogram_json).stem
        htmltarget = self._get_url_for("/json_provider/<filename>", filename=jsonname + '.json')
        stash = []
        if message is not None:
            stash.append(message)
        stash.append('<script>')
        stash.append('const histo_data = fetch("'
                     + htmltarget 
                     + '").then(response => response.json()).then((data)=>{')
        stash.append('for (var histo_id = 0; histo_id < data.divids.length;histo_id++)')
        stash.append('{')
        stash.append('Plotly.newPlot(data.divids[histo_id], data.data[histo_id], data.layouts[histo_id]);')
        stash.append('}')
        stash.append('});')
        stash.append('</script>')
        histograms = utilities.Jsonparser.read(histogram_json)
        for divid in histograms["divids"]:
            stash.append('<div id=' + divid + '></div>')
        return Component.main_renderer.render(False, stash)
    
    def __get_result(self, location: str) -> tuple[str, list, dict]: 
        # Return the divid,data,layout of the histogram
        # Based on https://codepen.io/pen
        # https://plotly.com/javascript/bar-charts/
        # https://stackoverflow.com/questions/42499535/passing-a-json-object-from-flask-to-javascript
        filename = pathlib.Path(location).stem
        filename_list = filename.split("~")
        graph_name = filename_list[0]
        output_title = filename_list[1]
        
        all_data = []
        divid = filename
        layout = {'title': graph_name + ': ' + output_title,
                    'xaxis': {
                        'tickfont': {
                            'size': 14,
                            'color': 'rgb(107, 107, 107)'
                            }
                        },
                    'yaxis': {
                        'title': 'Error in graph',
                        'titlefont': {
                            'size': 16,
                            'color': 'rgb(107, 107, 107)'
                            },
                        'tickfont': {
                            'size': 14,
                            'color': 'rgb(107, 107, 107)'
                            },
                        'tickformat':'{:d}',
                        'exponentformat':'e'
                        },
                    'legend': {
                        'x': 0,
                        'y': 1.0,
                        'bgcolor': 'rgba(255, 255, 255, 0)',
                        'bordercolor': 'rgba(255, 255, 255, 0)'
                        },
                    'barmode': 'group',
                    'bargap': 0.15,
                    'bargroupgap': 0.1
                    }
        with open(location, newline='') as csvfile:
            reader = csv.DictReader(csvfile)
            pallet = seaborn.color_palette("pastel", n_colors=len(reader.fieldnames[1:-1]))
            fid = 0 
            for name in reader.fieldnames[1:-1]:
                all_data.append({'x':[],'y':[],"name":name,
                                 'marker' : {'color':'rgb('
                                             + str(pallet[fid][0])
                                             + ','
                                             + str(pallet[fid][1]) 
                                             + ','
                                             + str(pallet[fid][2])
                                             + ')'},
                                 'type':'bar'})
                fid += 1
            for row in reader:
                fid = 0
                for name in reader.fieldnames[1:-1]:
                    all_data[fid]['y'].append(float(row[name]))
                    all_data[fid]['x'].append(int(row['Time']))
                    fid += 1
                layout['yaxis']['title'] = row['Unit']
        return (divid, all_data, layout)
    
    def __run_mosir(self, graphsjson: str, inputsjson: str, reportjson: str):
        try:
            mosir_calculator.main(['-G', graphsjson, '-D', inputsjson, '-R', reportjson, '-E', self._get_uploads_folder()])
        except Exception as e:
            return f"<h4><i class='fa fa-exclamation-triangle' \
                style='color: red;'></i> Error in calculator:\
                </h4><br><h5><span style='color: red;'>{e}</span></h5>"

    def __get_histogram_json(self, report_json: str) -> str:
        fileending = utilities.Jsonparser.read(report_json)['Output file extension']
        upload_folder = self._get_uploads_folder()
        all_histograms = {'data':[],'layouts':[],'divids':[]}
        for element in os.listdir(upload_folder):
            if os.path.isfile(os.path.join(upload_folder, element)) and element.endswith(fileending):
                divid, data, layout = self.__get_result(os.path.join(upload_folder, element))
                all_histograms['divids'].append(divid)
                all_histograms['data'].append(data)
                all_histograms['layouts'].append(layout)
        histogram_json = os.path.join(upload_folder, "histograms.json")
        utilities.Jsonparser.write(histogram_json, all_histograms)
        return histogram_json
    
    def __json_provider(self, filename: str):
        target_json = os.path.join(self._get_uploads_folder(), filename)
        return jsonify(utilities.Jsonparser.read(target_json))

    def add_all_endpoints(self) -> None:
        self._add_endpoint(endpoint='/', 
                           endpoint_name='/', 
                           handler=self.__get_inputs, 
                           methods=['GET', 'POST'])
        self._add_endpoint(endpoint='/report', 
                           endpoint_name='/report', 
                           handler=self.__report,
                           methods=['GET', 'POST'])
        self._add_endpoint(endpoint='/json_provider/<filename>', 
                           endpoint_name='/json_provider/<filename>',
                           handler=self.__json_provider, 
                           methods=['GET', 'POST'])
    
    def get_description(self) -> str:
        return "Calculer les émissions générées"
    
    def get_name(self) -> str:
        return "Calculer"
    
    def get_symbol(self) -> str:
        return "fa fa-bar-chart fa-fw"
    
    def can_view(self) -> bool:
        return (len(self._get_graphs_files()) > 0 )

reporting = Reporting()