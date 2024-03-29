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
  <a href="#Installation">Installation</a> •
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

## Installation
L'installation peut se faire sous deux formats: en tant que package python ou comme un logiciel indépendant. Dans les deux cas, si l'utilisateur souhaite passer par Miro pour importer ses graphiques, il est nécessaire de se créer un compte Miro et de générer une clé d'application.

<b>Étape 1</b>: Installer MoSiR
<details><summary><b>As a python package</b></summary>
  
MoSiR peut être installé sous forme de package python, à l'intérieur d'un environnement python3. Pour ce faire, [pip] est nécessaire avant de procéder à l'installation. 
1. Dans un terminal, activer l'environnement désiré, puis entrer cette ligne de commande:
   ```python
   pip install git+https://github.com/Bureau-du-Forestier-en-chef/MoSiR
   ```
   Pour installer une version spécifique de MoSiR, listé sous les différents [tag], simplement ajouter à fin @tag. Par exemple :
   ```python
   pip install git+https://github.com/Bureau-du-Forestier-en-chef/MoSiR@v1.0.0-lightweight
   ```

</details>

<details><summary><b>As a standalone application</b></summary>
  
Dans le repos MoSiR, un dossier standalone est accessible. Celui-ci contient un dossier compressé, dans lequel se retrouve un executable (.exe). Il est possible de télécharger manuellement ce dossier pour utiliser MoSiR comme un programme qui fonctionne indépendamment, sans nécessiter de prérequis. L'installation nécessite toutefois [git] pour cloner les fichiers sur GitHub. Il est également possible de télécharger le dossier comprimé manuellement sur la plateforme GitHub. <br>
1. Ouvrir une invite de commande (command prompt)
2. Localiser le dossier où vous souhaitez copier les fichiers sur votre ordinateur, par exemple D:\Documents\Application et changer le working directory de votre invite de commande pour celui-ci.
   ```cmd
   cd /d D:\Documents\Application
   ```
   Il est également possible d'ouvrir une invite de commande directement à partir du dossier souhaité. Simplement naviguer avec votre explorateur de fichier jusqu'au dossier voulu et écrire `cmd` dans l'onglet contenant le lien vers ce dossier. <br>
   ![open_cmd](https://github.com/Landry-G/MoSiR_images/blob/main/open_cmd.gif)
3. Copier ces lignes dans votre invite de commande. Un clone du dossier standalone sera alors copié sur votre ordinateur.
   ```cmd
   git clone -n --depth=1 --filter=tree:0 https://github.com/Bureau-du-Forestier-en-chef/MoSiR
   cd MoSiR
   git sparse-checkout set --no-cone standalone
   git checkout
   ```
</details>

<b>Étape 2</b>: Création d'un compte Miro et d'une clé d'application
Cette étape est nécessaire pour importer des graphiques depuis Miro. Si votre installation est une version "lightweight" ou si vous souhaitez importer vos graphiques directement à partir d'un fichier JSON, cette étape n'est pas obligatoire pour faire fonctionner le reste du package ou de l'application MoSiR.

1. Créer un compte Miro <br>
   Avec l'adresse courriel désirée, créer d'abord un compte Miro gratuit à partir de: https://miro.com/
2. Créer une application Miro <br>
   A. Naviguer vers les paramètres de l'utilisateurs, puis, sélectionner "vos applications" dans le menu. <br>
   B. Cliquer sur "Créer une nouvelle application" et entrer le nom désiré. <br>
   ![miro_creation_1](https://github.com/Landry-G/MoSiR_images/blob/main/miro_creation_1.gif)
   <i class='fa fa-exclamation-triangle' style='color: red;'></i> test
   C. Naviguer vers "URL de l'application" et entrer http://localhost:3000
   D. Dans la s
   

[pip]: https://pypi.org/project/pip/
[tag]: https://github.com/Bureau-du-Forestier-en-chef/MoSiR/tags
[git]: https://git-scm.com/

## How to use

Text

## Credits

Text

## License

MoSiR is a [LiLiQ-R 1.1](https://github.com/gcyr/FMT/blob/master/LICENSES/EN/LILIQ-R11EN.pdf) licensed library.

[![License](http://img.shields.io/:license-liliqR11-blue.svg?style=flat-square)](https://forge.gouv.qc.ca/licence/liliq-v1-1/#r%C3%A9ciprocit%C3%A9-liliq-r)
