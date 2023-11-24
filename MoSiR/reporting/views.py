"""
Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""

from ..blueprint_component import Component
from flask import Response,request,jsonify
import os,csv,pathlib,seaborn
from .. import utilities
from .. import CalculatorRun



class Reporting(Component):
    def __init__(self):
        Component.__init__(self,__class__.__name__,__name__)
    def __get_inputs(self)->Response:
        stash = ["<h1>Graphs disponible</h1>"]
        stash += self.__build_inputs_table()
        stash += self.__build_report_header()
        stash += self.__build_report_outputs()
        stash.append('<button class="w3-button w3-dark-grey" input type = "submit" value = "submit">Exécutez <i class="fa fa-arrow-right"></i></button>')
        stash.append('</div>')
        stash.append('</form>')
        stash.append('</div>')
        return Component.main_renderer.render(False,stash)
    def __build_report_outputs(self)->[str]:
        stash = []
        for generator in self.read_graphs_json():
            stash.append('<div>')
            stash.append('<h5>'+generator.get_graph_name()+'</h5>')
            stash.append('<div>')
            stash.append('<table class="w3-table-all" id=coutputs_'+generator.get_graph_name()+'><tr><th>Sortie</th><th>Noeuds</th><th>Type</th><th>Cumulatif</th><th>Sommation</th><th>Unité</th></tr>')
            #stash.append('</table>')
            #stash.append('<table class="w3-table-all" >')
            stash.append('<tr>')
            stash.append('<th> <input type = "text" name="Sortie~'+generator.get_graph_name()+'" title="Nom de la sortie" min ="1" id="Output_'+generator.get_graph_name()+'"/></th>')
            stash.append('<th>')
            stash.append('<div id="drop_list_'+generator.get_graph_name()+'" class="dropdown-check-list" tabindex="100">')
            stash.append('<span class="anchor" onclick=dropdown("'+generator.get_graph_name()+'")>Noeuds</span>')
            stash.append('<ul id="drop_list_ul_'+generator.get_graph_name()+'" class="items">')
            for node in generator.get_node_names():
                stash.append('<li><input type="checkbox"/>'+node+'</li>')
            stash.append('</ul>')
            stash.append('</div>')
            stash.append('</th>')
            stash.append('<th>')
            stash.append('<select name="Type de sortie" title="Type de sortie" id="out_type_'+generator.get_graph_name()+'">')
            for unit in self.__get_outputs_types():
                stash.append('<option value="'+unit+'">'+unit+'</option>')
            stash.append('</select>')
            stash.append('</th>')
            stash.append('<th>')
            stash.append('<select name="Cumulatif" title="Cumulatif" id="cumulative_'+generator.get_graph_name()+'">')
            for unit in self.__get_cumulative():
                stash.append('<option value="'+unit+'">'+unit+'</option>')
            stash.append('</select>')
            stash.append('</th>')
            stash.append('<th>')
            stash.append('<select name="Sommation" title="Sommation" id="sum_'+generator.get_graph_name()+'">')
            for unit in self.__get_sum():
                stash.append('<option value="'+unit+'">'+unit+'</option>')
            stash.append('</select>')
            stash.append('</th>')
            stash.append('<th>')
            stash.append('<select name="Unité de sortie" title="Unité de sortie" id="out_unit_'+generator.get_graph_name()+'">')
            for unit in self.__get_outputs_units():
                stash.append('<option value="'+unit+'">'+unit+'</option>')
            stash.append('</select>')
            stash.append('</th>')
            stash.append('<th>')
            stash.append('<button class="w3-button w3-dark-grey" type = "button" onclick=addcoutputs("'+generator.get_graph_name()+'")>Ajouter une sortie <j class="fa fa-plus-circle"></j></button>')
            stash.append('</th>')
            #stash.append('</div>')
            stash.append('</div>')
            stash.append('</tr>')
            stash.append('</table>')
            stash.append('</div>')
        stash.append('<div>')
        #stash.append('</table>')
        return stash 
    def __build_report_header(self)->[str]:
        stash = []
        #stash.append('<div class="w3-threequarter w3-margin-bottom">')
        stash.append('<h4>Rapport</h4>')
        stash.append('<div>')
        stash.append('<label for="Time">Horizon de simulation</label>')
        stash.append('<input type = "number" name="Time" title="Horizon de simulation" min ="1" value="1" id="Time"/>')
        stash.append('</div>')
        stash.append('<div>')
        stash.append('<label for="Output file extension">Type de fichier de sortie</label>')
        stash.append('<select name="Output file extension" id="Output file extension" title="Extension">')
        for extension in self.__get_file_types():
            stash.append('<option value="'+extension+'">'+extension+'</option>')
        stash.append('</select>')
        stash.append('</div>')
        stash.append('<div>')
        stash.append('<h7>Potentiel de réchauffement global</h7>')
        stash.append('<label for="CH4">CH<sub>4</sub></label>')
        stash.append('<input type = "number" name="CH4" title="Potentiel de réchauffement global (CH4)" style="width: 5em" min="0" value ="28" id="CH4"/>')
        stash.append('<label for="N2O">N<sub>2</sub>O</label>')
        stash.append('<input type = "number" name="N2O" title="Potentiel de réchauffement global (N20)" style="width: 5em" min="0" value ="265" id="N2O"/>')
        stash.append('</div>')
        return stash
    def __build_inputs_table(self)->[str]:
        stash = []
        stash.append('<h4>Intrants</h4>')
        stash.append('<div class="w3-threequarter w3-margin-bottom">')
        #Unit selection...
        stash.append('<form action="'+self._get_url_for("/report")+'" id="cinputsform" method = "POST">')
        stash.append('<div>')
        stash.append('<label for="units">Unitées</label>')
        stash.append('<select name="units" id="units">')
        for unit in self.__get_units():
            stash.append('<option value="'+unit+'">'+unit+'</option>')
        stash.append('</select>')
        stash.append('</div>')
        for generator in self.read_graphs_json():
            #For each graph allow an inputs of a list of numbers
            stash.append('<h5>'+generator.get_graph_name()+'</h5>')
            #stash.append('<div class="w3-threequarter w3-margin-bottom">')
            
            
            stash.append('<table class="w3-table-all" id=cinputs_'+generator.get_graph_name()+'><tr><th>Noeud</th><th>Période</th><th>Quantitée</th></tr>')
            
            stash.append('<tr>')
            stash.append('<th>')
            stash.append('<select name="Noeud" title="Noeud" id="Node_'+generator.get_graph_name()+'">')
            for node in generator.get_node_names():
                stash.append('<option value="'+node+'">'+node+'</option>')
            stash.append('</th>')
            stash.append('<th> <input type = "number" name="Période~'+generator.get_graph_name()+'" title="Période" min ="1" id="Period_'+generator.get_graph_name()+'"/></th>')
            stash.append('<th> <input type = "number" name="Quantitée" title="Quantitée" min ="0" id="Quantity_'+generator.get_graph_name()+'"/></th>')
            stash.append('<th>')
            stash.append('<button class="w3-button w3-dark-grey" type = "button" onclick=addcinputs("'+generator.get_graph_name()+'")>Ajouter une période <j class="fa fa-plus-circle"></j></button>')
            stash.append('</th>')
            stash.append('</tr>')
            stash.append('</table>')
        #stash.append('</div>')
        return stash
    def __get_sum(self)->[str]:
        return ["Per_node", "Combined"]
    def __get_cumulative(self)->[str]:
        return ["Vrai","Faux"]
    def __get_file_types(self)->[str]:
        return [".csv"]
    def __get_units(self)->[str]:
        return ['kgc','tC']
    def __get_outputs_units(self)->[str]:
        return ['kgc','tC','w/m2']
    def __get_outputs_types(self)->[str]:
        return ['Flux in','Flux out','Stock']
    def __get_graphs_inputs(self)->str:
        data = {"Inputs":{}}
        for field_name, value in request.form.items():
            splitted_key = field_name.split('~')
            target_key = splitted_key[0]
            if target_key in ['units',"Quantity"]:
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
        location = os.path.join(self._get_uploads_folder(),"inputs.json")
        utilities.Jsonparser.write(location,data)
        return location
    def __get_reporting(self)->str:
        data = {"Output":{},"PRG":{}}
        for field_name, value in request.form.items():
            splitted_key = field_name.split('~')
            target_key = splitted_key[0]
            if target_key in ['Time','CH4','N2O','Output file extension']:
                if target_key == 'Time':
                    data["Time"] = int(value)
                elif(target_key == 'Output file extension'):
                    data["Output file extension"] = value
                elif(target_key == 'CH4'):
                    data["PRG"]["CH4"] = int(value)
                elif(target_key == 'N2O'):
                    data["PRG"]["N2O"] = int(value)
            if target_key in ["Output","Nodes_name","Type","Cumulative","Summarize","Unit"]:
                output_name = splitted_key[2]
                graph_name = splitted_key[1]
                if graph_name not in data["Output"]:
                    data["Output"][graph_name] = {}
                if output_name not in data["Output"][graph_name]:
                    data["Output"][graph_name][output_name] = { "Nodes_name":None,"Type":None,
                                                            "Cumulative":None,"Summarize":None,"Unit":None}
                elif(target_key == 'Nodes_name'):
                    data["Output"][graph_name][output_name]["Nodes_name"] = value.split(",")
                elif(target_key == 'Type'):
                    data["Output"][graph_name][output_name]["Type"] = value
                elif(target_key == 'Cumulative'):
                    cumulate = False
                    if value.lower() == "vrai":
                        cumulate = True
                    data["Output"][graph_name][output_name]["Cumulative"] = cumulate
                elif(target_key == 'Summarize'):
                    data["Output"][graph_name][output_name]["Summarize"] = value
                elif(target_key == 'Unit'):
                    data["Output"][graph_name][output_name]["Unit"] = value
        location = os.path.join(self._get_uploads_folder(),"report.json")
        utilities.Jsonparser.write(location,data)
        return location
    def __report(self)->Response:
        graphs_json = self._get_graphs_files()
        inputs_json = self.__get_graphs_inputs()
        report_json = self.__get_reporting()
        for graph_json in graphs_json:
            self.__run_mosir(graph_json,inputs_json,report_json)
        histogram_json = self.__get_histogram_json(report_json)
        jsonname = pathlib.Path(histogram_json).stem
        htmltarget = self._get_url_for("/json_provider/<filename>",filename=jsonname+'.json')
        stash = []
        stash.append('<script>')
        stash.append('const histo_data = fetch("'+htmltarget +'").then(response => response.json()).then((data)=>{')
        stash.append('console.log(data);')
        stash.append('for (var histo_id = 0; histo_id < data.divids.length;histo_id++)')
        stash.append('{')
        stash.append('Plotly.newPlot(data.divids[histo_id], data.data[histo_id], data.layouts[histo_id]);')
        stash.append('}')
        stash.append('});')

        #stash.append('for (var histo_id = 0; histo_id < histo_data["divids"];histo_id++)')
        #stash.append('{')
        #stash.append('Plotly.newPlot(histo_data["divids"][histo_id], histo_data["data"][histo_id], histo_data["layouts"][histo_id]);')
        #stash.append('}')
        stash.append('</script>')
        histograms = utilities.Jsonparser.read(histogram_json)
        for divid in histograms["divids"]:
            stash.append('<div id='+divid+'></div>')
        return Component.main_renderer.render(False,stash)
    def __get_result(self,location:str)->(str,[],{}):#Return the divid,data,layout of the histogram
        #Based on https://codepen.io/pen
        #https://plotly.com/javascript/bar-charts/
        #https://stackoverflow.com/questions/42499535/passing-a-json-object-from-flask-to-javascript
        filename = pathlib.Path(location).stem
        
        all_data = []
        divid = filename
        layout = {'title': filename,
                    'xaxis': {'tickfont': {
                                'size': 14,
                                'color': 'rgb(107, 107, 107)'
                                        }},
                    'yaxis': {'title': 'USD (millions)',
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
                    'legend': {'x': 0,
                            'y': 1.0,
                            'bgcolor': 'rgba(255, 255, 255, 0)',
                            'bordercolor': 'rgba(255, 255, 255, 0)'
                            },
                    'barmode': 'group',
                    'bargap': 0.15,
                    'bargroupgap': 0.1}
        with open(location, newline='') as csvfile:
            reader = csv.DictReader(csvfile)
            pallet = seaborn.color_palette("pastel",n_colors=len(reader.fieldnames[1:-1]))
            fid = 0 
            for name in reader.fieldnames[1:-1]:
                all_data.append({'x':[],'y':[],"name":name,'marker' : {'color':'rgb('+str(pallet[fid][0])+','+str(pallet[fid][1])+','+str(pallet[fid][2])+')'},'type':'bar'})
                fid += 1
            for row in reader:
                fid = 0
                for name in reader.fieldnames[1:-1]:
                    all_data[fid]['y'].append(float(row[name]))
                    all_data[fid]['x'].append(int(row['Time']))
                    fid+=1
                
                layout['yaxis']['title'] = row['Unit']
        return (divid,all_data,layout)
    def __run_mosir(self,graphsjson:str,inputsjson:str,reportjson:str):
        #fake it
        ##shutil.copyfile("C:/Users/CYRGU3/Downloads/MicroTest_1_Annualrad (1).csv",os.path.join(self._get_uploads_folder(),"MicroTest_1_Annualrad.csv"))
        #Run Mosir here...
        CalculatorRun.main(['-G', graphsjson, '-D', inputsjson,'-R',reportjson,'-E',self._get_uploads_folder()])
    def __get_histogram_json(self,report_json:str)->str:
        fileending = utilities.Jsonparser.read(report_json)['Output file extension']
        upload_folder = self._get_uploads_folder()
        all_histograms = {'data':[],'layouts':[],'divids':[]}
        for element in os.listdir(upload_folder):
            if os.path.isfile(os.path.join(upload_folder,element)) and element.endswith(fileending):
                divid,data,layout = self.__get_result(os.path.join(upload_folder,element))
                all_histograms['divids'].append(divid)
                all_histograms['data'].append(data)
                all_histograms['layouts'].append(layout)
        histogram_json = os.path.join(upload_folder,"histograms.json")
        utilities.Jsonparser.write(histogram_json,all_histograms)
        return histogram_json
    def __json_provider(self,filename:str):
        target_json = os.path.join(self._get_uploads_folder(),filename)
        #response =jsonify(category="success",data=utilities.Jsonparser.read(target_json),status=200)
        #response.headers.add('Access-Control-Allow-Origin', '*')
        return jsonify(utilities.Jsonparser.read(target_json))
    def add_all_endpoints(self)->None:
        self._add_endpoint(endpoint='/', endpoint_name='/', handler=self.__get_inputs,methods=['GET','POST'])
        self._add_endpoint(endpoint='/report', endpoint_name='/report', handler=self.__report,methods=['GET','POST'])
        self._add_endpoint(endpoint='/json_provider/<filename>', endpoint_name='/json_provider/<filename>',handler=self.__json_provider,methods=['GET','POST'])
    def get_description(self)->str:
        return "Calculez les émissions générées"
    def get_name(self)->str:
        return "Calculez"
    def get_symbol(self)->str:
        return "fa fa-bullseye fa-fw"
    def can_view(self)->bool:
        return (len(self._get_graphs_files()) > 0 ) #and  (len(Component._get_inputs_files()) > 0) and (len(Component._get_reporting_files()) > 0)

reporting = Reporting()