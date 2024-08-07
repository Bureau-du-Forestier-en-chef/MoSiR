<a href = "https://github.com/Bureau-du-Forestier-en-chef/MoSiR/blob/master/README_fr.md"><img src = "https://img.shields.io/badge/FR-Cliquer_ici_pour_la version_française-blue?style=flat-square" height="25" /></a>
<!-- HEADER -->
<h1 align="center">
  <br>
  <a href="https://github.com/Bureau-du-Forestier-en-chef/MoSiR"><img src="./MoSiR/static/image/MoSiR-logo-github.png" alt="Modèle de Simulation en Réseau" width="800"></a>
  <br>
  Modèle de Simulation en Réseau
  <br>
</h1>

<h4 align="center"> 
  <a href="https://forestierenchef.gouv.qc.ca"><img src="./MoSiR/static/image/BFEC.jpg" width="200"></a>
  <br>
<h4>

### For full MoSiR documentation, please visit the Github [Wiki](https://github.com/Bureau-du-Forestier-en-chef/MoSiR/wiki).

<!-- TEXTE -->
# Description
<p align="justify"> 
MoSiR (Modèle de Simulation en Réseau), is a powerful tool designed by the Bureau du forestier en chef (BFEC) to facilitate the modeling and simulation of carbon fate in wood products from forestry operations. MoSiR calculates the actual climate impact of emissions associated with wood products throughout their life cycle and end-of-life, by enabling the user to use complex network architectures and associated input data in an automated way. MoSiR's web interface serves as a bridge between the creation and simulation of conceptual models for carbon trajectories in wood products and the calculation of their actual impact on climate. This interface is easily accessible from any web browser. MoSiR's web interface is distinguished by its ability to load user-created Miro maps and convert them into a JSON file that can be read by MoSiR's calculator. The MoSiR Web interface facilitates a seamless transition to the ECU, while preserving the integrity of previously constructed data and architectural properties.
</p>

## In brief :mag:
<p align = "justify">
MoSiR has two components: a calculator and a web interface. MoSiR is basically a calculator in the form of a Python package. An application using a web interface has been created to facilitate its use without having to use Python. The MoSiR interface also uses the Miro platform to facilitate the creation of wood product networks. Miro is an online application that allows users to work on whiteboards, facilitating collaborative processes such as project management and mapping. MoSiR has the ability to read a Miro table and extract the information needed to build a graph (a network of nodes attached by links).  
</p>
<p align = "justify">
The user can build a graph in Miro that can contain any number of nodes, some of which can manage recycling or degradation according to exponential, gamma or chi-square distributions. In this application, users can import the desired graph from Miro or from their own computer, and then issue a command to the MoSiR calculator. It can calculate 3 items of information: the flow of material into a node, the flow of material out of a node, and the material remaining in the node (stock).  You can enter inputs for starting nodes, half-life times for degradation nodes and the information you wish to extract. Essentially, it's a matter of querying the nodes you're interested in, choosing whether you want flux in, flux out or stocks, the cumulative over the requested period and the summation of results if several nodes have been selected. Finally, you can choose the unit of output. MoSiR first asks you for the units of your inputs, so that it can make the necessary transformation. If your node names contain the name of a gas such as CO2, CO, CH4 or N2O, MoSiR can also transform these carbon quantities into equivalent tons of CO2 or even radiative forcing. Further details are available in the Github Wiki.
</p>

 ![mosir_example](https://github.com/Landry-G/MoSiR_images/blob/main/mosir_example.gif)
 
# Report a bug

If you encounter an error, the preferred way is via [Issues] on GitHub. Sur la page des `Issues` de MoSiR, cliquer sur `New issue`. On the MoSiR `Issues` page, click on `New issue`. You need to provide as much information as possible to reproduce the error you are encountering. To make suggestions for improvement, please refer to the [future developments](https://github.com/Bureau-du-Forestier-en-chef/MoSiR/wiki/D%C3%A9veloppements-futurs) section.

[Issues]: https://github.com/Bureau-du-Forestier-en-chef/MoSiR/issues

# License

MoSiR uses the [LiLiQ-R 1.1](https://github.com/Bureau-du-Forestier-en-chef/MoSiR/blob/master/LICENSES/EN/LiLiQ-R11EN.pdf) license.

[![License](http://img.shields.io/:license-liliqR11-blue.svg?style=flat-square)](https://forge.gouv.qc.ca/licence/liliq-v1-1/#r%C3%A9ciprocit%C3%A9-liliq-r)

