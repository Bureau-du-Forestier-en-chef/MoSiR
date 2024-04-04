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

### <b>Étape 1</b>: Installer MoSiR
<details><summary><b>As a python package</b></summary> <br>
  
MoSiR peut être installé sous forme de package python, à l'intérieur d'un environnement python 3. Pour ce faire, [pip] est nécessaire avant de procéder à l'installation. 
1. Dans un terminal, activer l'environnement désiré, puis entrer cette ligne de commande:
   ```python
   pip install git+https://github.com/Bureau-du-Forestier-en-chef/MoSiR
   ```
   Pour installer une version spécifique de MoSiR, listé sous les différents [tag], simplement ajouter à fin @tag. Par exemple :
   ```python
   pip install git+https://github.com/Bureau-du-Forestier-en-chef/MoSiR@v1.0.0-lightweight
   ```

</details>

<details><summary><b>As a standalone application</b></summary> <br>
  
Dans le repos MoSiR, un dossier standalone est accessible. Celui-ci contient un dossier compressé, dans lequel se retrouve un executable `.exe`. Il est possible de télécharger manuellement ce dossier pour utiliser MoSiR comme un programme qui fonctionne indépendamment, sans nécessiter de prérequis. L'installation nécessite toutefois [git] pour cloner les fichiers sur GitHub. Il est également possible de télécharger le dossier comprimé manuellement sur la plateforme GitHub. <br>
1. Ouvrir une invite de commande (command prompt)
2. Localiser le dossier où vous souhaitez copier les fichiers sur votre ordinateur, par exemple `D:\Documents\Application` et changer le working directory de votre invite de commande pour celui-ci.
   ```cmd
   cd /d D:\Documents\Application
   ```
   Il est également possible d'ouvrir une invite de commande directement à partir du dossier souhaité. Simplement naviguer avec votre explorateur de fichier jusqu'au dossier voulu et écrire `cmd` dans l'onglet contenant le lien vers ce dossier.
   
   ![open_cmd](https://github.com/Landry-G/MoSiR_images/blob/main/open_cmd.gif)
   
4. Copier ces lignes dans votre invite de commande. Un clone du dossier standalone sera alors copié sur votre ordinateur.
   ```cmd
   git clone -n --depth=1 --filter=tree:0 https://github.com/Bureau-du-Forestier-en-chef/MoSiR
   cd MoSiR
   git sparse-checkout set --no-cone standalone
   git checkout
   ```
</details>

:loudspeaker: Les étapes subséquentes sont nécessaires pour importer des graphiques depuis Miro. Si votre installation est une version "lightweight" ou si vous souhaitez importer vos graphiques directement à partir d'un fichier JSON, les étapes suivantes d'installation ne sont pas obligatoires pour faire fonctionner le reste du package ou de l'application MoSiR.

### <b>Étape 2</b>: Création d'un compte Miro et d'une clé d'application <br>

<details><summary><b>Procédure sur Miro</b></summary><br>
  
1. Avec l'adresse courriel désirée, créer d'abord un compte Miro gratuit à partir de `https://miro.com/`
2. Naviguer vers les paramètres de l'utilisateurs, puis, sélectionner `Vos applications` dans le menu.
   Cliquer sur `Créer une nouvelle application` et entrer le nom désiré.

   ![miro_creation_1](https://github.com/Landry-G/MoSiR_images/blob/main/miro_creation_1.gif)

   :exclamation: Attention :exclamation: Les identifiants confidentiels de votre application sont maintenant disponbiles. Ceux-ci servent à faire le pont avec Miro et vos différents tableaux. Ces clés NE DOIVENT PAS être partagé publiquement. Pour en savoir plus, consultez [la documentation de Miro].
3. Naviguer vers "URL de l'application" et entrer http://localhost:3000
4. Dans la section "Rediriger l'URI pour OAuth2.0, entrer ces trois addresses:
   <pre>http://localhost:3000/redirect<br>
   https://miro.com/app-install-completed<br>
   http://localhost:3000/mirowrapper/redirect </pre>
   Pour la dernière adresse, sélectionner comme option `Utiliser cet URI pour l'autorisation SDK`
5. Cocher l'option `boards:read` dans les Autorisations
6. Finalement, cliquer sur `Installer l'application et obtenir le jeton OAuth`. L'installation est nécessaire, mais le jeton ne sera pas utilisé ultérieurement.

![miro_URL](https://github.com/Landry-G/MoSiR_images/blob/main/miro_URL.gif) 

Voilà ! Vos identifiants secrets sont maintenant prêt à être utilisés pour faire fonctionner l'application avec Miro.
</details>

### <b>Étape 3</b>: Appliquer les identifiants Miro dans l'installation MoSiR

Les clés d'identification Miro peuvent être modifiées de deux façons: manuellement dans les fichiers de l'installation ou grâce à l'interface web. Si vous avez téléchargé MoSiR comme package python et que vous ne souhaitez pas utiliser l'interface, ces étapes ne sont pas nécessaires pour vous.

<details><summary><b>Manuellement</b></summary> <br>

Si votre installation est en version standalone, les clés d'identification se retrouvent ici:
   ```python
   ..\MoSiR.dist\MoSiR\mirowrapper\mirowrapper.env
   ```
  `MoSiR.dist` est le dossier que vous avez téléchargé ou copié depuis GitHub. Le fichier `.env` peut être ouvert avec un logiciel de traitement de fichier texte comme Bloc-notes.

Si votre installation est un package python, la clé se retrouve ici dans votre environnement conda. Par exemple, dans mon environnement nommé `MoSiR`, mes clés d'environnements se retrouve ici:
   ```python
   ..\envs\MoSiR\Lib\site-packages\MoSiR\mirowrapper\mirowrapper.env
   ```

</details>

<details><summary><b>Avec l'interface</b></summary> <br>
  
Dans  <br>
1. Ouvrir l'application MoSiR <br>
   Pour l'application standalone, un fichier exécutable `MoSiR.exe` se retrouve dans le dossier d'installation. Pour une installation en package python, le script `MoSiR.py` doit être lancé depuis son environnement. Celui-ci se retrouve sous `..\envs\MoSiR\Scripts\MoSiR.py`.
2. Sélectionner l'option `Récupérer dans Miro`
3. Cliquer sur `Changer les clés d'identification Miro` <br>
   Inscire le `Client ID` et le `Client secret` qui ont été générés à l'étape 2.
   
   ![recuperer_dans_miro](https://github.com/Landry-G/MoSiR_images/blob/main/recuperer_dans_miro.gif)
   
</details>

[pip]: https://pypi.org/project/pip/
[tag]: https://github.com/Bureau-du-Forestier-en-chef/MoSiR/tags
[git]: https://git-scm.com/
[la documentation de Miro]: https://developers.miro.com/reference/overview?utm_source=your_apps

## How to use

Text

## Credits

Text

## License

MoSiR is a [LiLiQ-R 1.1](https://github.com/gcyr/FMT/blob/master/LICENSES/EN/LILIQ-R11EN.pdf) licensed library.

[![License](http://img.shields.io/:license-liliqR11-blue.svg?style=flat-square)](https://forge.gouv.qc.ca/licence/liliq-v1-1/#r%C3%A9ciprocit%C3%A9-liliq-r)
