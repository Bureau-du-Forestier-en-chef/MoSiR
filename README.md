<a href = "./README_fr.md"><img src = "https://img.shields.io/badge/%F0%9F%87%AB%F0%9F%87%B7-Click%20here%20for%20a%20french%20version-blue?style=flat-square" height="25" /></a>

<h1 align="center">
  <br>
  <a href="https://github.com/Bureau-du-Forestier-en-chef/MoSiR"><img src="./image/MoSiR-logo-github.png" alt="Modèle de Simulation en Réseau" width="800"></a>
  <br>
  Modèle de Simulation en Réseau
  <br>
</h1>

<h4 align="center"> 
  <a href="https://forestierenchef.gouv.qc.ca"><img src="./image/BFEC.jpg" width="200"></a>
  <br>
<h4>
  
<p align="center">
  <a href="#Description">Description</a> •
  <a href="#Install">Install</a> •
  <a href="#How-to-use">How To Use</a> •
  <a href="#Credits">Credits</a> •
  <a href="#License">License</a>
</p>


## Description
MoSiR, acronym for Network Simulation Model (Modèle de Simulation en Réseau), is a powerful tool originally designed at the Office of the Chief Forester (BFEC) to facilitate the modeling and simulation of the carbon fate of wood products from forest harvesting. This versatile tool now consists of two essential components that work together to provide a comprehensive solution to the user. MoSiR enables the calculation of the actual climate impact of emissions associated with wood products throughout their service life and end of life by allowing the user to use complex network architectures and associated input data in an automated manner.

Component 1 - Web Interface:

MoSiR's web interface serves as the gateway between the creation and simulation of conceptual models for carbon pathways in wood products and the calculation of their real climate impact. This user-friendly interface is based on HTML, making it easily accessible from any web browser.
A distinct feature of MoSiR's Web Interface is its ability to load Miro boards created by the user, and convert them into a JSON file that can be read by MoSiR's calculator. Adhering to standards derived from the network design documentation in Miro (Link to documentation), the MoSiR Web Interface facilitates a seamless transition to the calculator while preserving the integrity of previously built data and architectural properties.

Component 2 - Interpreter and Calculator:

The second element of MoSiR is a powerful interpreter and calculator dedicated to tracking the fate of carbon in the previously loaded network architecture. MoSiR allows for simulating and predicting the carbon fate in the network, thus providing a clear perspective on carbon flows and stocks in the system under study. The MoSiR calculator is also capable of assessing the radiative effect of carbon emissions into the atmosphere and, if desired by the user, can provide the complete radiative effect of emissions from wood products.

## Install
### As a python package
MoSiR peut être installé sous forme de package python, à l'intérieur d'un environnement python3. Pour ce faire, [pip] est nécessaire avant de procéder à l'installation. Dans une invite de commande, activer l'environnement désiré, puis entrer cette ligne de commande:
```python
pip install git+https://github.com/Bureau-du-Forestier-en-chef/MoSiR
```
Pour installer une version spécifique de MoSiR, listé sous les différents [tag], simplement ajouter à fin @tag. Par exemple :
```python
pip install git+https://github.com/Bureau-du-Forestier-en-chef/MoSiR@v1.0.0-lightweight
```

### As a standalone program


[pip]: https://pypi.org/project/pip/
[tag]: https://github.com/Bureau-du-Forestier-en-chef/MoSiR/tags
## How to use

Text

## Credits

Text

## License

MoSiR is a [LiLiQ-R 1.1](https://github.com/gcyr/FMT/blob/master/LICENSES/EN/LILIQ-R11EN.pdf) licensed library.

[![License](http://img.shields.io/:license-liliqR11-blue.svg?style=flat-square)](https://forge.gouv.qc.ca/licence/liliq-v1-1/#r%C3%A9ciprocit%C3%A9-liliq-r)
