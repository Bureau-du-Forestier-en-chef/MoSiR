<h1 align="center">
  <br>
  <a href="https://github.com/Bureau-du-Forestier-en-chef"><img src="./image/MoSiR-logo-github.png" alt="Modèle de Simulation en Réseau" width="800"></a>
  <br>
  Modèle de Simulation en Réseau
  <br>
</h1>


## Description

Fr:

MoSiR, acronyme de Modèle de Simulation en Réseau, est un outil puissant initialement conçu au Bureau du forestier en chef (BFEC) pour faciliter la modélisation et la simulation du devenir du carbone des produits du bois issus de la récolte forestière. Cet outil polyvalent se compose aujourd'hui de deux composants essentiels qui travaillent de concert afin d'offrir une solution complète à l'utilisateur. MoSir permet ainsi le calcul de l'effet climatique réel des émissions associées aux produits du bois au cours de leur temps de service et de leur fin de vie en permettant à l'utilisateur d'utiliser des architectures en réseaux complexes et les données d'intrants associées de manière automatisée.

Composant 1 - Interface Web :

L'interface web de MoSiR est la passerelle entre la création et la simulation de modèles conceptuels du devenir du carbone dans les produits du bois et le calcul de l'effet climatique réel des émissions issues de ces derniers. Cette interface intuitive est basée sur le langage HTML, ce qui la rend facilement accessible à partir de n'importe quel navigateur internet. 
Une caractéristique distincte de l'interface Web de MoSiR est sa capacité à charger des tableaux Miro créés par l'utilisateur et à les convertir en fichiers JSON pouvant être lue par le calculateur de MoSiR. Le respect des normes issues de la documentation de conception de structures en réseau dans Miro (Lien vers la documentation) permet à l'interface Web de MoSiR une transition fluide vers le calculateur tout en conservant l'intégrité des  données et des propriétés de l'architecture bâtie préalablement.

Composant 2 - Interpréteur et Calculateur :

Le deuxième élément de MoSiR est un puissant interpréteur et calculateur dédié au suivi du devenir du carbone dans l'architecture en réseau préalablement chargée.
MoSiR permet donc de simuler et de prédire le devenir du carbone dans le réseau, offrant ainsi une perspective claire sur les flux et les stocks du carbone dans le système étudié.
Le calculateur de MoSiR est aussi capable de mesurer l'effet radiatif des émissions de carbone à l'atmosphère et permet ainsi, si l'utilisateur le désire, de dresser l'effet radiatif complet des émissions issues des produits du bois. 

En:

MoSiR, acronym for Network Simulation Model (Modèle de Simulation en Réseau), is a powerful tool originally designed at the Office of the Chief Forester (BFEC) to facilitate the modeling and simulation of the carbon fate of wood products from forest harvesting. This versatile tool now consists of two essential components that work together to provide a comprehensive solution to the user. MoSiR enables the calculation of the actual climate impact of emissions associated with wood products throughout their service life and end of life by allowing the user to use complex network architectures and associated input data in an automated manner.

Component 1 - Web Interface:

MoSiR's web interface serves as the gateway between the creation and simulation of conceptual models for carbon pathways in wood products and the calculation of their real climate impact. This user-friendly interface is based on HTML, making it easily accessible from any web browser.
A distinct feature of MoSiR's Web Interface is its ability to load Miro boards created by the user, and convert them into a JSON file that can be read by MoSiR's calculator. Adhering to standards derived from the network design documentation in Miro (Link to documentation), the MoSiR Web Interface facilitates a seamless transition to the calculator while preserving the integrity of previously built data and architectural properties.

Component 2 - Interpreter and Calculator:

The second element of MoSiR is a powerful interpreter and calculator dedicated to tracking the fate of carbon in the previously loaded network architecture. MoSiR allows for simulating and predicting the carbon fate in the network, thus providing a clear perspective on carbon flows and stocks in the system under study. The MoSiR calculator is also capable of assessing the radiative effect of carbon emissions into the atmosphere and, if desired by the user, can provide the complete radiative effect of emissions from wood products.

## Install
pip install .
## Tests
python tests/test_MoSiR.py
