<a href = "./README_fr.md"><img src = "https://img.shields.io/badge/%F0%9F%87%AB%F0%9F%87%B7-Click%20here%20for%20a%20french%20version-blue?style=flat-square" height="25" /></a>

<!-- HEADER -->
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
  <a href="#Directives">Directives</a> •
  <a href="#FAQ">FAQ</a> •
  <a href="#Développements futurs">Développements futurs</a> •
  <a href="#Report a bug">Report a bug</a> •
  <a href="#License">License</a>
</p>

<!-- TEXTE -->
## $\color{orange}Description$  :book:
<p align="justify"> 
  MoSiR, acronym for Network Simulation Model (Modèle de Simulation en Réseau), is a powerful tool originally designed at the Office of the Chief Forester (BFEC) to facilitate the modeling and simulation of the carbon fate of wood products from forest harvesting. This versatile tool now consists of two essential components that work together to provide a comprehensive solution to the user. MoSiR enables the calculation of the actual climate impact of emissions associated with wood products throughout their service life and end of life by allowing the user to use complex network architectures and associated input data in an automated manner. MoSiR's web interface serves as the gateway between the creation and simulation of conceptual models for carbon pathways in wood products and the calculation of their real climate impact. This user-friendly interface is based on HTML, making it easily accessible from any web browser.
A distinct feature of MoSiR's Web Interface is its ability to load Miro boards created by the user, and convert them into a JSON file that can be read by MoSiR's calculator. Adhering to standards derived from the network design documentation in Miro (Link to documentation), the MoSiR Web Interface facilitates a seamless transition to the calculator while preserving the integrity of previously built data and architectural properties.
The second element of MoSiR is a powerful interpreter and calculator dedicated to tracking the fate of carbon in the previously loaded network architecture. MoSiR allows for simulating and predicting the carbon fate in the network, thus providing a clear perspective on carbon flows and stocks in the system under study. The MoSiR calculator is also capable of assessing the radiative effect of carbon emissions into the atmosphere and, if desired by the user, can provide the complete radiative effect of emissions from wood products.
</p>

<p align="justify"> 
  L'outil Modèle de Simulation en Réseau (MoSiR) à été développé par le Bureau du forestier en chef du Québec (BFEC) à partir de mi-2023 afin de répondre à ses besoins internes de comptabilisation carbone du secteur forestier provincial (Forêt + Produits + Substitution). Le développement d’une interface utilisateur fut partie intégrante du projet dès ses débuts afin de pouvoir partager au plus grand nombre un outil performant, ergonomique et utilisé au sein du ministère des Ressources Naturelles et des Forêts (MRNF).
MoSiR est un outil qui permet à l’utilisateur de pouvoir suivre le devenir du carbone dans les produits du bois provenant de la récolte forestière. Il permet de quantifier les stocks de carbone à la fois dans les produits en bois en service et dans les lieux d'enfouissement (fin de vie), ainsi que de comptabiliser les émissions de gaz à effet de serre (GES) résultant des processus d'extraction, de transport, de transformation, de valorisation et de dégradation de la biomasse. 
MoSiR est donc un outil pertinent dans une approche d’inventaire des émissions de GES du secteur forestier, mais peut aussi être un outil particulièrement efficace pour explorer des stratégies alternatives d'utilisation du bois et en comprendre les conséquences à long terme en termes de stockage et d'émissions. 
La particularité de MoSiR est qu’il est un lecteur de modèles d’architectures de flux de matière, il ne possède presque aucun paramétrage par défaut, ce qui fait de lui un outil hautement adaptable aux situations particulières des différents utilisateurs. Ces derniers devant fournir à MoSiR à la fois une architecture de flux de matière et des intrants de récolte en kilogramme de carbone (kgC) ou tonne de carbone (tC).
Cette documentation présentera aux utilisateurs les instructions nécessaires à la compréhension et à l’utilisation de MoSiR par le biais de son interface ou directement via sa librairie Python.
</p>


#### :grey_question: Pourquoi un tel outil :grey_question:

<p align="justify"> 
  Comprendre le rôle du secteur forestier dans la lutte contre les changements climatiques est d’autant plus important que la demande en bois risque d’être toujours plus soutenue dans le futur. 
L'élaboration d'une stratégie sectorielle pour maximiser le potentiel d'atténuation (maximiser la séquestration et minimiser les émissions de GES) est confrontée à de grandes incertitudes, notamment à cause de l’impact des changements climatiques sur la capacité des écosystèmes à stocker du carbone et à répondre aux besoins en bois des marchés.
Les actions d’atténuation du secteur forestier ne se limitent pas aux écosystèmes forestiers. Il est également nécessaire de considérer à la fois les émissions de GES issues de la décomposition et de la valorisation énergétique des produits du bois, ainsi que l’utilisation de ces produits en remplacement de matériaux et sources d’énergie à plus forte empreinte carbone. 
Une approche incomplète risque de conduire à des conclusions partielles qui pourraient s’avérer contreproductives dans la lutte contre les changements climatiques. 
</p>
<p align="justify"> 
  MoSiR est donc un outil qui doit permettre aux utilisateurs, les gestionnaires forestiers comme décideurs politiques, de bâtir une comptabilisation carbone robuste (capacité de stockage, gestions des flux d’émissions, etc.) des produits du bois dans leurs analyses d’utilisation du secteur forestier comme un outil de lutte efficace. La comptabilisation carbone liée aux produits du bois est en constante évolution depuis le début des années 2000, MoSiR a été développé pour pouvoir répondre aux standards les plus stricts (tier 3 du GIEC) en pouvant à la fois prendre en compte des architectures de flux de matière complexe et des données spécifiques à chaque utilisateur potentiel. 
MoSiR est hautement adaptable et permet ainsi de réaliser des analyses, quelle que soit la grande famille d’approche de comptabilisation voulue, soit l’approche basée sur les réservoirs (« Stock-change » et « Production ») et celle basée sur les flux (« Atmosphéric flow » et « Simple decay »). 
</p>


## $\color{orange}Installation$ :floppy_disk:
<p align="justify"> 
  L'installation peut se faire sous deux formats: en tant que package python ou comme un logiciel indépendant. Dans les deux cas, si l'utilisateur souhaite passer par Miro pour importer ses graphiques, il est nécessaire de se créer un compte Miro et de générer une clé d'application.
</p>

### <b>Étape 1</b>: Installer MoSiR
<details><summary><b>En tant que package python</b></summary> <br>

MoSiR peut être installé sous forme de package python, à l'intérieur d'un environnement python 3. Pour ce faire, [pip] et [git] sont nécessaire avant de procéder à l'installation. 

1. Dans un terminal, activer l'environnement désiré, puis entrer cette ligne de commande:
   ```python
   pip install git+https://github.com/Bureau-du-Forestier-en-chef/MoSiR
   ```
   Pour installer une version spécifique de MoSiR, listé sous les différents [tag], simplement ajouter à fin @tag. Par exemple :
   ```python
   pip install git+https://github.com/Bureau-du-Forestier-en-chef/MoSiR@v1.0.0-lightweight
   ```
</details>

<details><summary><b>Comme application portable</b></summary> <br>

Dans le repos MoSiR, un dossier standalone est accessible. Celui-ci contient un dossier compressé, dans lequel se retrouve un executable `.exe`. Il est possible de télécharger manuellement ce dossier pour utiliser MoSiR comme un programme qui fonctionne indépendamment, sans nécessiter de prérequis. L'installation nécessite toutefois git pour cloner les fichiers sur GitHub. Il est également possible de télécharger le dossier comprimé manuellement sur la plateforme GitHub si vous n'avez pas git d'installé. 

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

> [!NOTE]
> Les étapes subséquentes sont nécessaires pour importer des graphiques depuis Miro. Si votre installation est une version "lightweight" ou si vous souhaitez importer vos graphiques directement à partir d'un fichier JSON, les étapes suivantes d'installation ne sont pas obligatoires pour faire fonctionner le reste du package ou de l'application MoSiR. 

### <b>Étape 2</b>: Création d'un compte Miro et d'une clé d'application <br>


<details><summary><b>Procédure sur Miro</b></summary><br>

1. Avec l'adresse courriel désirée, créer d'abord un compte Miro gratuit à partir de `https://miro.com/`
2. Naviguer vers les paramètres de l'utilisateurs, puis, sélectionner `Vos applications` dans le menu.
   Cliquer sur `Créer une nouvelle application` et entrer le nom désiré.

   ![miro_creation_1](https://github.com/Landry-G/MoSiR_images/blob/main/miro_creation_1.gif)  

4. Naviguer vers "URL de l'application" et entrer http://localhost:3000
5. Dans la section "Rediriger l'URI pour OAuth2.0, entrer ces trois addresses:
   <pre>http://localhost:3000/redirect<br>
   https://miro.com/app-install-completed<br>
   http://localhost:3000/mirowrapper/redirect </pre>
   Pour la dernière adresse, sélectionner comme option `Utiliser cet URI pour l'autorisation SDK`
6. Cocher l'option `boards:read` dans les Autorisations
7. Finalement, cliquer sur `Installer l'application et obtenir le jeton OAuth`. L'installation est nécessaire, mais le jeton ne sera pas utilisé ultérieurement.

![miro_URL](https://github.com/Landry-G/MoSiR_images/blob/main/miro_URL.gif) 

Voilà ! Vos identifiants secrets sont maintenant prêt à être utilisés pour faire fonctionner l'application avec Miro.

</details>

### <b>Étape 3</b>: Appliquer les identifiants Miro dans l'installation MoSiR
Les clés d'identification Miro peuvent être modifiées de deux façons: manuellement dans les fichiers de l'installation ou grâce à l'interface web.

> [!CAUTION]
> Les identifiants confidentiels de votre application  NE DOIVENT PAS être partagé publiquement. Pour en savoir plus, consultez [la documentation de Miro](https://developers.miro.com/reference/overview?utm_source=your_apps).

<details><summary><b>Manuellement</b></summary> <br>

Si votre installation est en version standalone, les clés d'identification se retrouvent ici:
   ```python
   ..\MoSiR.dist\MoSiR\mirowrapper\mirowrapper.env
   ```
  `MoSiR.dist` est le dossier que vous avez téléchargé ou copié depuis GitHub. Le fichier `.env` peut être ouvert avec un logiciel de traitement de fichier texte comme Bloc-notes.
<p align="justify"> 
  Si votre installation est un package python, la clé se retrouve ici dans votre environnement conda. Par exemple, dans mon environnement nommé `MoSiR`, mes clés d'environnements se retrouve ici:
</p>

   ```python
   ..\envs\MoSiR\Lib\site-packages\MoSiR\mirowrapper\mirowrapper.env
   ```
</details>

<details><summary><b>Avec l'interface</b></summary> <br>
  
1. Ouvrir l'application MoSiR <br>
   <p align="justify">
     Pour l'application standalone, un fichier exécutable `MoSiR.exe` se retrouve dans le dossier d'installation. Pour une installation en package python, le script `MoSiR.py` doit être lancé depuis son environnement où il est installé. Le script se retrouve sous `..\envs\MoSiR\Scripts\MoSiR.py`.
   </p>
2. Sélectionner l'option `Récupérer dans Miro`
3. Cliquer sur `Changer les clés d'identification Miro` <br>
   Inscire le `Client ID` et le `Client secret` qui ont été générés à l'étape 2.
   
   ![recuperer_dans_miro](https://github.com/Landry-G/MoSiR_images/blob/main/recuperer_dans_miro.gif)
   
</details>

L'installation est complétée, vous pouvez désormais utiliser MoSiR! :tada:

[pip]: https://pypi.org/project/pip/
[tag]: https://github.com/Bureau-du-Forestier-en-chef/MoSiR/tags
[git]: https://git-scm.com/
[la documentation de Miro]: https://developers.miro.com/reference/overview?utm_source=your_apps

## $\color{orange}How \space to \space use$ :mag:

<details><summary><b>As a python package</b></summary> <br>
Le calculateur de MoSiR peut être directement appelé depuis un script python sans passer par l'interface web. Par exemple:
  
```python
  from MoSiR import mosir_calculator
  mosir_calculator.main(['-G', graph_json, '-D', input_json, '-R', report_json, '-E', export_folder])
```

Pour fonctionner, le calculateur a besoin d'un fichier `json` pour le graphe, un pour les intrants, un pour le report et le chemin vers l'endroit où seront les extrants. La structure et les directives concernant les différents fichiers `json` sont expliquées dans la section <a href="#Directives">Directives</a>

</details>

<details><summary><b>Avec l'interface</b></summary> <br>

#### Miro
 <p align="justify">
[Miro]:(https://miro.com/) est une application en ligne qui permet à l'utilisateur de travailler sur des tableaux blancs facilitant notamment la mise en place de processus collaboratifs, tels que la gestion et la cartographie de projet. 
Il est tout à fait possible d'utiliser directement une architecture de flux de matière existante au format .JSON dans MoSiR. 
Cependant, la conception d'une nouvelle architecture est facilitée par l'utilisation de l'application Miro. Cependant, la création d'une architecture de flux de matière se doit de respecter une nomenclature stricte afin que l'outil puisse prendre en compte les hypothèses techniques développées dans la section précédente.
MoSiR sera alors capable de venir charger l'architecture Miro de l'utilisateur et la traduire en un format .JSON que le calculateur interne à l'outil est capable de traiter.
Miro => https://miro.com/
C'est la capacité de cartographie de projets de Miro qui est exploitée avec la version actuelle de MoSiR pour concevoir des flux de matière complexes, tout en étant hautement ergonomique pour l'utilisateur.

	-- Nomenclature Miro:

* Noeud : Forme = "cercle", tous les nœuds de l'architecture doivent porter un nom unique, les virgules vont être effacées dans la création du fichier d'intrant .JSON par MoSiR.
* Le sens des flèches entre les noeuds est important.
* Flèches de débordement : Couleur = #17df23
* Pense bête pour proportions : Couleur = "light_green"
* Nœud de recyclage : Forme = "cercle" + Couleur de remplissage = "#8fd14f"
* Nœud de stockage temporaire (selon une demi-vie donnée par l'utilisateur): Forme = "cercle" + Bordure = "dashed"
Concernant la gestion de la demi-vie, dans la version 1.0 de MoSiR, il s'agit uniquement d'une dégradation exponentielle. Il est ainsi nécessaire d'écrire le nom du nœud avec les termes "Half-life" suivi de votre temps de demi-vie entre crochets. Exemple : Half-life[70]Sciage_Construction
* Nœud d'émissions de GES : Le nom du nœud doit faire apparaitre clairement la molécule voulue. 
Exemples : CH4 emissions / CO2 emissions / N2O emissions
* Toutes les autres formes et couleurs de ligne et de nœuds sont laissées à la discrétion de l'utilisateur.
-Mettre image exemple-

À des fins purement ergonomiques, il est possible d'introduire dans l'architecture du flux de matière des nœuds particuliers imageant la notion de ventilation, ou split : Forme = "rectangle". 
Lors de la transformation de l'architecture Miro en format .JSON, MoSiR va faire disparaitre ces nœuds, on ne retrouvera donc pas ces noeuds dans la visualisation disponible dans MoSiR.
-Mettre image exemple-

	-- Nomenclature .JSON:
A DEVELOPPER (Traduction de la nomenclature MIRO en nomenclature JSON MoSiR)
   
</details>

## $\color{orange} Directives$ :memo:
 <p align="justify">
   Le suivi de la matière et la lecture des émissions de GES vers l'Atmosphère dans l'architecture préalablement chargé par l'utilisateur respecte certaines contraintes techniques inhérentes à MoSiR. 
Il convient donc à chaque utilisateur de faire la lecture des résultats de MoSiR au regard de ces contraintes.
 </p>

#### Écoulement de la matière dans l'architecture :

*  <p align="justify"> MoSiR permet de suivre le devenir annuel d'une quantité de matière introduite dans une architecture de flux définie par l'utilisateur. L'outil peut aussi, à partir de ce suivi, établir la comptabilité des émissions de GES en kilogramme de carbone (kgC), en tonne de carbone (tC), en tonne de dioxyde de carbone équivalent (tCO2eq) ou bien encore en forçage radiatif des émissions (w/m2). L'architecture du flux de matière est donc un élément principal pour le bon fonctionnement de l'outil, c'est un travail qui est à la discrétion de l'utilisateur, mais qui repose sur une méthodologie particulière à l'outil. </p>
*  <p align="justify"> Une architecture de flux de matière lisible par MoSiR est un ensemble de nœuds par lesquels va transiter annuellement la matière au gré d'une ventilation définie par l'utilisateur. L'introduction de matière dans l'architecture peut se faire via n'importe quel nœud.
Trois sortes de nœuds existent :
 - les nœuds transitoires: la matière ne fait que passer la même année, sans être stockée à aucun moment.
 - les nœuds de stockage: la matière passe au travers du nœud, mais la quantité sortante annuellement est définie par l'utilisateur (nœuds de dégradation, nœuds de stockage perpétuels, nœuds de recyclage etc.)
 - Les noeuds d'entrées: il s'agit des premiers noeuds dans un graphe qui conservent l'information des intrants de l'utilisateur.
Par défaut, si un nœud n'a aucune sortie (lien d'écoulement avec un autre nœud), il va être considéré par défaut comme un nœud de stockage (infini dans ce cas particulier). </p>

	
#### Flux de débordement :
L'intérêt premier de MoSiR est de pouvoir suivre le devenir du carbone biogénique dans les produits du bois, en ce sens de nombreux tests internes existent pour assurer la robustesse des calculs et éviter toute perte de matière. 
La somme de la matière sortante de l'architecture sous forme d'émissions et la matière stockée dans l'architecture est en tout temps égal à la somme de la matière qui est rentrée dans l'architecture.
Cependant, il est tout à fait possible d'intégrer des émissions associées à l'extraction, au transport ou encore à la transformation de la ressource dans l'architecture. Ce carbone n'étant pas du carbone biogénique, il est comptabilisé comme un flux supplémentaire, c'est-à-dire un flux de débordement (voir secteur X pour nomenclature des flux de débordement).
Les flux de débordement peuvent aussi être utilisés pour comptabiliser des émissions de gaz à effet de serre non carbonés, notamment le N2O, qui sont produites dans le cycle de vie des produits du bois (incinération, compostage, épandage, etc.).
	
#### Recyclage
Dans MoSiR, afin d'éviter toute boucle infinie durant une même période de temps, un nœud de recyclage stocke la matière entrante pendant une période de temps égale à 1 (voir section X pour nomenclature des nœuds de recyclage). 
Si 100 tonnes de carbone rentrent dans un nœud de recyclage à l'année x, ces 100 tonnes seront stockées dans ce nœud durant l'année X et s'écouleront de nouveau dans l'architecture du flux de matière à partir de l'année X+1.	
	
#### Mathématique de dégradation :
Dans la version 1.0 de Mosir la dégradation des produits du bois dans un noeud de demi-vie suit une dégradation de premier ordre (exponentielle) basée sur une demi-vie fournie par l'utilisateur selon la méthodologie classique du GIEC (voir section X pour nomenclature des nœuds de demi-vie).
	
#### GES inclus :
Par défaut, MoSiR ne peut effectuer la comptabilisation des émissions des gaz à effet de serre suivant : Méthane (CH4), Dioxyde de carbone (CO2) et l'Oxyde nitreux (N2O).
Il peut cependant suivre le devenir de la matière dans l'ensemble de l'architecture produite par l'utilisateur.
	
#### Potentiel de réchauffement global :
Par défaut, MoSiR utilise un potentiel de réchauffement global de 28 pour le CH4 et de 265 pour le N2O. Ces valeurs peuvent être modifiées par l'utilisateur.
	
#### Forçage radiatif :
Pour le calcul de l'effet radiatif des émissions de GES, MoSiR utilise les données issues de Levasseur et al. (2010) et rendues disponibles via l'outil dynCO2 (https://ciraig.org/index.php/fr/project/dynco2-calculateur-dempreinte-carbone-dynamique/).
C'est notamment l'approche retenue dans le cadre du Règlement relatif aux projets de boisement et de reboisement sur des terres du domaine privé admissibles à la délivrance de crédits compensatoires du Québec (https://www.environnement.gouv.qc.ca/changements/carbone/credits-compensatoires/sequestration-carbone-boisement-reboisement-terres-prive.htm)	

## $\color{orange} FAQ$ :pushpin:

À venir

## $\color{orange} Développements futurs$ :thought_balloon:

<p align="justify">
Mosir est opérationnel dans sa version 1.0, il n'en reste pas moins que des développements sont en cours pour améliorer les capacités et l'ergonomie de l'outil et donc maximiser son potentiel d'utilisation par le plus grand nombre. Si au cours de l'utilisation de MoSiR vous percevez en tant qu'utilisateur un potentiel d'amélioration, n'hésitez surtout pas à partager votre idée dans la section  discussion du GitHub.
</p>

Partagez vos idées et suggestions ! :point_right: [Discussions](https://github.com/Bureau-du-Forestier-en-chef/MoSiR/discussions)

- [x] [Mathématique de dégradation](https://github.com/Bureau-du-Forestier-en-chef/MoSiR/issues/2)
- [ ] #39

Dans sa version 1.0, MoSiR ne peut gérer la dégradation des produits du bois que d'une seule manière, via une dégradation de premier ordre (exponentielle) basée sur une demi-vie fournie par l'utilisateur (méthodologie du GIEC).
La littérature est claire sur la pertinence d'utiliser une telle mécanique de dégradation pour les grandes familles de produits regroupant un ensemble complexe de produits finaux (sciage, pates et papiers, panneaux, etc.).
La prémisse de la désintégration de premier ordre est que le taux de retrait d’un réservoir est proportionnel à la quantité d’éléments dans ce dernier.
Donc, cette hypothèse a pour conséquence qu’une proportion importante des produits du bois est mise hors service dès les premières années après leur mise en marché, le taux de mise hors service étant alors à son maximum.
Si l'architecture du flux de matière de l'utilisateur est plus détaillée que simplement les grandes familles de produits, il pourrait être pertinent d'utiliser une mécanique de dégradation différente. 
En effet, s’il est vrai qu’un produit particulier se dégrade avec une certaine probabilité à différents moments, cette probabilité devrait être plus élevée à l’approche de la durée de vie prévue initialement.

Il est donc prévu d'intégrer dans MoSiR une dégradation des produits du bois suivant une Loi Gamma (alpha, bêta). Il est à noter qu'une dégradation de premier ordre (exponentielle) peut être modélisée via une Loi Gamma en fixant le paramètre alpha à 1  et en faisant varier le paramètre bêta pour faire correspondre la courbe avec la demi-vie souhaitée. 
Ce développement va donc laisser la liberté à l'utilisateur de définir le type de dégradation qu'il souhaite dans son architecture de flux de matière, en définissant pour chaque nœud de demi-vie un facteur alpha et bêta.
Mosir ne nécessitant plus une valeur de demie-vie pour fonctionner, il sera de la responsabilité de l'utilisateur de fixer les paramètres alpha et bêta de manière adéquate. Un chiffrier Excel sera fourni pour aider les utilisateurs dans la détermination de ces valeurs.
-Mettre image exemple-
	
	- Ergonomie de l'interface :
Une amélioration continue de l'ergonomie de l'interface sera faite au fur et à mesure des versions de l'outil, nous recommandons à tous les utilisateurs de donner leur avis et leurs idées d'amélioration potentielles dans la section du Github prévue à cet effet.	
	
	- Tableau blanc Teams/autre
Dans la version 1.0 de Mosir la lecture et la traduction d'une architecture de flux de matière ne sont possibles que par l'utilisation de l'application Miro. Afin de ne pas se retrouver sans solution dans le cas où la politique d'accessibilité de Miro venait à changer, il devrait être possible dans une version ultérieure de MoSiR d'utiliser d'autres applications semblables, en particulier les tableaux blancs de Teams (application utilisée au BFEC).
	
	- Gestion d'autres GES
Par défaut dans sa version 1.0, MoSiR est capable de réaliser la comptabilisation en tCO2eq et en W/m2 des gaz à effet de serre suivant : CO2 / CH4 / N2O.
Si ces trois GES devraient suffirent à la grande majorité des utilisateurs, des rajouts pourraient être faits selon des besoins particuliers.

	- Optimisation de l'utilisation des produits du bois
Mosir n'est dans sa version 1.0 qu'un outil permettant de suivre le devenir de la matière dans une architecture de flux et de réaliser en parallèle une lecture carbone et/ou climatiques des émissions de GES.
MoSiR a besoin d'informations requises et demandées à l'utilisateur pour fonctionner correctement. Cependant, à partir d'une architecture de base et d'imposition de contraintes, il peut être pertinent de permettre à l'outil d'établir les flux de matière les plus à même de rencontrer une cible d'émissions fixée par l'utilisateur, MoSiR serait donc ainsi capable d'optimisation par programmation linéaire.
	
	- Analyse sensibilité/Incertitudes (Monte-Carlo)
La version 1.0 de MoSiR requiert des valeurs spécifiées par l'utilisateur, offrant ainsi peu de flexibilité pour prendre en compte les incertitudes associées à ces données. 
Un projet de développement est donc envisagé pour intégrer des simulations de Monte-Carlo, permettant d'estimer les résultats potentiels en tenant compte des incertitudes liées aux valeurs, certainement sous la forme d'intervalles de confiance définis par l'utilisateur. 
Ce projet vise également à faciliter l'analyse de sensibilité pour l'utilisateur, en rendant le processus plus rapide.



## $\color{orange} Report \space a \space bug$ :speech_balloon:

Si vous rencontrez une erreur, la manière à prévilégier est par l'entremise des [Issues] sur GitHub.

[Issues]: https://github.com/Bureau-du-Forestier-en-chef/MoSiR/issues

## $\color{orange} License$ :clipboard:

MoSiR is a [LiLiQ-R 1.1](https://github.com/gcyr/FMT/blob/master/LICENSES/EN/LILIQ-R11EN.pdf) licensed library.

[![License](http://img.shields.io/:license-liliqR11-blue.svg?style=flat-square)](https://forge.gouv.qc.ca/licence/liliq-v1-1/#r%C3%A9ciprocit%C3%A9-liliq-r)
