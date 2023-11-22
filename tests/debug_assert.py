import sys
import warnings
sys.path.append("../MoSiR")
import MoSiR.GraphGen as gf
import MoSiR.ReportingInfo as rp
import MoSiR.mosir_exceptions as me

# Test de l'import -----------------------------------------------------------
def test_04_first_last_node(graph: gf.GraphFactory):
    """Premier test pour évaluer si au moins une première et une dernière node
    est présente. Donc s'assurer que le graph n'est pas une loop.

    Args:
        graph (gf.GraphFactory): _description_
        report (rp.ReportData): _description_
    """
    MOSIR_TOLERENCE = 0.0001
    for graph_name in graph.get_data:
        G1 = graph.get_data.get(graph_name)
        NODES = G1.get('Nodes', {})
        EDGES = G1.get('Edges', {})
        TOPNODES = set([int(ID) for ID in NODES]) - \
                    set([data['To'] for keys, data in EDGES.items()])
        if len(TOPNODES) > 1:
            warnings.warn(f"Attention, plus d'une TopNode présente.\
                Les inputs vont être acheminés à ces deux nodes: \
                {TOPNODES}", stacklevel = 2)  
        LASTNODES = set([int(ID) for ID in NODES]) - \
                    set([data['From'] for keys, data in EDGES.items()])
        if len(LASTNODES) == 0:
            warnings.warn(f"Attention, aucune PoolNode présente. La quantité \
                de carbone présente dans le système sera calculé seulement sur \
                des nodes de demi-vie ou de recyclage", stacklevel = 2)   

def test_05_edges_sum(graph: gf.GraphFactory):
    """_summary_

    Args:
        graph (gf.GraphFactory): _description_

    Raises:
        me.EdgeError: _description_
    """
    MOSIR_TOLERENCE = 0.0001
    # total des Edges 
    for name in graph.get_graph_name:
        G2 = graph.get_graph(name)
        for node in G2.nodes():
            total = 0
            for successors in G2.get_successors(node):
                if successors.NAME == 'N2O emissions':
                    continue
                total += node._get_value_time(G2.get_edge_proportions(node, successors), 0)
            if total - 1 > MOSIR_TOLERENCE or 1 - total > MOSIR_TOLERENCE and total != 0:
                raise me.EdgeError(f"La somme des edges sortant de {node.NAME} n'est pas égale à 100%") 
            elif total < MOSIR_TOLERENCE:
                warnings.warn(f'La somme des edges sortant de la node {node.NAME} est de 0',
                              stacklevel = 2)

def test_06_overflow(graph: gf.GraphFactory):
    # Test de overflow
    for graph_name in graph.get_data:
        G3 = graph.get_data.get(graph_name)
        NODES = G3.get('Nodes', {})
        EDGES = G3.get('Edges', {})
        for nodeID in NODES:
            overflow = []
            for key, values in EDGES.items():
                if values.get('To') == int(nodeID):
                    overflow.append(values.get('Overflow'))
            if all(i == overflow[0] for i in overflow) == False:
                raise me.EdgeError(f"La node {NODES[str(nodeID)].get('Name')} reçoit \
                    des edges avec et sans overflow")

def test_07_insystem(graph: gf.GraphFactory,
                 report: rp.ReportData):
    MOSIR_TOLERENCE = 0.0001
    time = report.get_output_data('Time')
    # total input versus in system 
    for name in graph.get_graph_name:
        G4 = graph.get_graph(name)
        carbon_input = 0
        for timestep in range(time + 1):
            in_system = 0
            for node in G4.nodes():
                if type(node) == gf.TopNode:
                    carbon_input += node.get_flux_out(G4, timestep)
                elif node.NAME == 'N2O emissions': # Updater pour général
                    continue
                elif type(node) == gf.PoolNode or type(node) == gf.DecayNode or \
                    type(node) == gf.RecyclingNode:
                    with warnings.catch_warnings():
                        warnings.simplefilter('ignore')
                        in_system += node.get_stock(G4, timestep)
            if carbon_input > in_system - MOSIR_TOLERENCE and carbon_input < in_system + MOSIR_TOLERENCE :
                continue
            else:
                raise me.QuantityError(f"Graph : {G4.get_name} La quantité total \
                    en input ({carbon_input}) au temps {timestep} n'est pas égale au total \
                    présent dans le système ({in_system})")