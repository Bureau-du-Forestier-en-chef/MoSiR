# Change log
All notable changes applied to the project will be noted here.

## Coming in next versions
* More validation tests to catch possible errors.
* Interface in english
* The feature of performing multiple calculations for the same architecture when the user has more than one input file.

## v2.0 (in development)
This version is being developed on the `dev` branch; more changes will be added below.

### New features
* New tests locking in the corrections below, as well as the cache behaviour and the JSON file loading.

### Changes
* Loading of the JSON files (graph, inputs and reporting) is grouped into a shared base class. The three file types are read the same way and expose their data uniformly.
* Internal reorganization of the calculator to reduce code duplication: the cumulative-calculation logic and the reading of incoming fluxes are shared between node types. The calculator's results are unchanged.
* The graph verificator has been simplified: the checks performed before a calculation now share a common traversal of graphs and nodes.
* Each node type now only allocates the caches it actually uses.
* Removal of unused code: an empty internal class, a method and a field that were never used, and superfluous imports.

### Corrections
* Fixed the cumulative outgoing flux ("Flux out") of a transition node: in some cases carbon was counted twice and then corrupted the same node's non-cumulative results.
* Disabling the internal cache no longer raises an error; the calculator then recomputes values without storing them, with identical results.

## v1.1.0 (2024-09-13)
### New features
* It is now possible to enumerate changing proportions in a post-it. In a case where the breakdown of your graph changes over time, it is possible to specify the proportion change in a post-it rather than redoing a second analysis. The details are on the GitHub wiki (under "How to use MoSiR with Miro and the web interface). 
* Error message if no input flux is written to the JSON or interface table during simulation.
* Error message if a node with overflow has an outgoing edge with no overflow.
* Percentages entered in Miro on a post-it are now limited to a precision of 8 decimal places. Due to a peculiarity to Python, it is necessary to round off percentages to obtain a cumulative of 100% in outgoing links. If a post-it has more than 8 digits after the decimal point, it will be rounded by MoSiR. 
* JSONs created by MoSiR now have indentation in the data to clarify the file structure.
* New test to check for too many blank spaces in node names.
* New test to check whether node names in inputs correspond to a node in the graph.
* New test to check whether the node name in the report corresponds to a node in the graph.
* A cache for the degradation level has been added, speeding up the calculator.
* New tests to check the JSON file for imports.
* New tests to check the report JSON file.

### Changes
* The calculator is no longer called by a parser in the API, but by an imported function. The parser is still available to call the calculator in a console, and the `run_calculator` function can also be included directly in a python script.
* Too many blank spaces in node names are automatically removed (double spaces between words or before and after the name).
* Node names in Miro that are written in bold, italic, highlighted, underlined or crossed out are transformed to be unstyled. HTML code could sometimes be kept in JSON files unintentionally. 
* In the graph JSON file, decay and recycling nodes are identified by “true” or “false” instead of “1” or “0”.
* MoSiR documentation can now be found in the GitHub Wiki tab.

### Corrections
* The tolerance of 0.0001 on the sum of outgoing edges test has been removed.
* The functions for transforming into radiative now only take into account the factors in the CSV. It is no longer possible to pass conversion factors directly into functions. Avoids code redundancy.

## v1.0 (2024-06-12)
* First public release of MoSiR