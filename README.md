<a href = "./README_fr.md"><img src = "https://img.shields.io/badge/%F0%9F%87%AB%F0%9F%87%B7-Click%20here%20for%20a%20french%20version-blue?style=flat-square" height="25" /></a>

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
  
<p align="center">
  <a href="#description">Description :book:</a> •
  <a href="#installation">Installation :floppy_disk:</a> •
  <a href="#directives">Directives :memo:</a> •
  <a href="#faq">FAQ :pushpin:</a> • 
  <a href="#développements-futurs">Développements futurs :thought_balloon:</a> • 
  <a href="#signaler-une-erreur">Signaler une erreur :speech_balloon:</a> • 
  <a href="#license">License :clipboard:</a>
</p>

<!-- TEXTE -->
# Description
<p align="justify"> 
  MoSiR, acronyme de Modèle de Simulation en Réseau, est un outil puissant conçu par le Bureau du Chef Forestier (BFEC) pour faciliter la modélisation et la simulation du devenir du carbone dans les produits du bois issus de l'exploitation forestière. MoSiR permet de calculer l'impact climatique réel des émissions associées aux produits du bois tout au long de leur durée de vie et de leur fin de vie en permettant à l'utilisateur d'utiliser des architectures de réseau complexes et des données d'entrée associées de manière automatisée. L'interface web de MoSiR sert de passerelle entre la création et la simulation de modèles conceptuels pour les trajectoires du carbone dans les produits du bois et le calcul de leur impact réel sur le climat. Cette interface est facilement accessible à partir de n'importe quel navigateur web. L'interface Web de MoSiR se distingue par sa capacité à charger les cartes Miro créées par l'utilisateur et à les convertir en un fichier JSON qui peut être lu par le calculateur de MoSiR. L'interface Web MoSiR facilite une transition transparente vers le calculateur tout en préservant l'intégrité des données et des propriétés architecturales précédemment construites.

MoSiR est également un calculateur sous forme de package python, dédié au suivi du devenir du carbone dans l'architecture du réseau précédemment chargée. MoSiR permet de simuler et de prédire le devenir du carbone dans le réseau, offrant ainsi une perspective claire sur les flux et les stocks de carbone dans le système étudié. Le calculateur MoSiR est également capable d'évaluer l'effet radiatif des émissions de carbone dans l'atmosphère et, si l'utilisateur le souhaite, il peut fournir l'effet radiatif complet des émissions provenant des produits du bois.
</p>

<p align="justify"> 
  L'outil Modèle de Simulation en Réseau (MoSiR) à été développé par le Bureau du forestier en chef du Québec (BFEC) à partir de mi-2023 afin de répondre à ses besoins internes de comptabilisation carbone du secteur forestier provincial (Forêt + Produits + Substitution). Le développement d’une interface utilisateur fut partie intégrante du projet dès ses débuts afin de pouvoir partager au plus grand nombre un outil performant, ergonomique et utilisé au sein du ministère des Ressources naturelles et des Forêts (MRNF).
MoSiR est un outil qui permet à l’utilisateur de suivre le devenir du carbone dans les produits du bois provenant de la récolte forestière. Il permet de quantifier les stocks de carbone à la fois dans les produits en bois en service et dans les lieux d'enfouissement (fin de vie), ainsi que de comptabiliser les émissions de gaz à effet de serre (GES) résultant des processus d'extraction, de transport, de transformation, de valorisation et de dégradation de la biomasse. 
MoSiR est donc un outil pertinent dans une approche d’inventaire des émissions de GES du secteur forestier, mais peut aussi être un outil particulièrement efficace pour explorer des stratégies alternatives d'utilisation du bois et en comprendre les conséquences à long terme en termes de stockage et d'émissions. 
La particularité de MoSiR est qu’il est un lecteur de modèles d’architectures de flux de matière, il ne possède presque aucun paramétrage par défaut, ce qui fait de lui un outil hautement adaptable aux situations particulières des différents utilisateurs. Ces derniers devant fournir à MoSiR à la fois une architecture de flux de matière et des intrants de récolte en kilogramme de carbone (kgC) ou tonne de carbone (tC).
Cette documentation présentera aux utilisateurs les instructions nécessaires à la compréhension et à l’utilisation de MoSiR par le biais de son interface ou directement via sa librairie Python.
</p>

<details><summary><b>Pourquoi un tel outil?</b></summary> <br>
	
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
</details>

<details><summary><b>En bref, comment ça fonctionne? :mag:</b></summary> <br>
<p align = "justify">
MoSiR utilise la plateforme Miro pour faciliter la création de réseau de produit du bois. Miro est une application en ligne qui permet à l'utilisateur de travailler sur des tableaux blancs facilitant notamment la mise en place de processus collaboratifs, tels que la gestion et la cartographie de projet. MoSiR a la capacité de venir lire un tableau de Miro pour en extraire les informations nécessaires pour bâtir un graphe (un réseau de noeud attaché par des liens).  Cependant, la création d'une architecture de flux de matière sous forme de graphe se doit de respecter une nomenclature stricte afin que l'outil puisse convenablement traduire le tableau blanc pour le calculateur de MoSiR. Celui-ci calcule 3 informations, le flux de matière qui entre dans un noeud, qui sort d'un noeud et la matière qui reste dans celui-ci (stock). De plus amples détails sont disponibles dans la section <a href="#Directives">Directives</a>. 
</p>
<p align = "justify">
L'utilisateur a la possibilité de bâtir dans Miro un graphe pouvant contenir autant de noeud que souhaité, dont certains peuvent gérer du recyclage ou de la dégradation selon une loi exponentielle, gamma ou chi-square. Lorsque l'utilisateur a un graphe fonctionnel, celui-ci peut être utilisé dans l'application portable de MoSiR. Dans cette application, l'utilisateur peut importer depuis Miro ou depuis son ordinateur le graphe souhaité et lancer une commande au calculateur de MoSiR. Il est possible d'y inscrire les intrants pour les noeuds de départ, les temps de demi-vie pour les noeuds de dégradation et l'information que vous souhaitez extraire. Essentiellement, il s'agit de questionner les noeuds qui vous intéresse, choisir si vous voulez les flux entrant, sortant ou les stocks, le cumulatif sur la période demandé et la sommation, si plusieurs noeuds ont été sélectionné, des résultats. Finalement, vous pouvez choisir l'unité des extrants. MoSiR vous demande dabord les unités de vos intrants, pour que celui-ci soit capable de faire la transformation nécessaire. Si le nom de vos noeuds contiennent le nom d'un gaz comme CO2, CO, CH4 ou N2O, MoSiR peut également faire la transformation de ces quantité de carbone en tonne équivalente de CO2 ou même en forcage radiatif. 
</p>
</details>

# Installation
<p align="justify"> 
  L'installation peut se faire sous deux formats: en tant que package python ou comme une application indépendante. Dans les deux cas, si l'utilisateur souhaite passer par Miro pour transformer ses graphes en fichier JSON, il est nécessaire de se créer un compte Miro et de générer une clé d'application.
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

Dans le repos MoSiR, un dossier standalone est accessible. Celui-ci contient un dossier compressé, dans lequel se retrouve un exécutable `.exe`. Il est possible de télécharger manuellement ce dossier pour utiliser MoSiR comme un programme qui fonctionne indépendamment, sans nécessiter de prérequis. L'installation nécessite toutefois git pour cloner les fichiers sur GitHub. Il est également possible de télécharger le dossier comprimé manuellement sur la plateforme GitHub si vous n'avez pas git d'installé. 

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
2. Naviguez vers les paramètres de l'utilisateur, puis, sélectionner `Vos applications` dans le menu.
   Cliquer sur `Créer une nouvelle application` et entrer le nom désiré.

   ![miro_creation_1](https://github.com/Landry-G/MoSiR_images/blob/main/miro_creation_1.gif)  

4. Naviguer vers "URL de l'application" et entrer http://localhost:3000
5. Dans la section, "Rediriger l'URI pour OAuth2.0, entrer ces trois adresses:
   <pre>http://localhost:3000/redirect<br>
   https://miro.com/app-install-completed<br>
   http://localhost:3000/mirowrapper/redirect </pre>
   Pour la dernière adresse, sélectionner comme option `Utiliser cet URI pour l'autorisation SDK`
6. Cocher l'option `boards:read` dans les Autorisations
7. Finalement, cliquer sur `Installer l'application et obtenir le jeton OAuth`. L'installation est nécessaire, mais le jeton ne sera pas utilisé ultérieurement.

![miro_URL](https://github.com/Landry-G/MoSiR_images/blob/main/miro_URL.gif) 

Voilà ! Vos identifiants secrets sont maintenant prêts à être utilisés pour faire fonctionner l'application avec Miro.

</details>

### <b>Étape 3</b>: Appliquer les identifiants Miro dans l'installation MoSiR
Les clés d'identification Miro peuvent être modifiées de deux façons: manuellement dans les fichiers de l'installation ou grâce à l'interface web.

> [!CAUTION]
> Les identifiants confidentiels de votre application NE DOIVENT PAS être partagés publiquement. Pour en savoir plus, consultez [la documentation de Miro](https://developers.miro.com/reference/overview?utm_source=your_apps).

<details><summary><b>Manuellement</b></summary> <br>

Si votre installation est en version standalone, les clés d'identification se retrouvent ici:
   ```python
   ..\MoSiR.dist\MoSiR\mirowrapper\mirowrapper.env
   ```
  `MoSiR.dist` est le dossier que vous avez téléchargé ou copié depuis GitHub. Le fichier `.env` peut être ouvert avec un logiciel de traitement de fichier texte comme Bloc-notes.
<p align="justify"> 
  Si votre installation est un package python, la clé se retrouve ici dans votre environnement conda. Par exemple, dans mon environnement nommé `MoSiR`, mes clés d'environnements se retrouvent ici:
</p>

   ```python
   ..\envs\MoSiR\Lib\site-packages\MoSiR\mirowrapper\mirowrapper.env
   ```
</details>

<details><summary><b>Avec l'interface</b></summary> <br>
  
1. Ouvrir l'application MoSiR <br>
   Pour l'application standalone, un fichier exécutable `MoSiR.exe` se retrouve dans le dossier d'installation. Pour une installation en package python, le script `MoSiR.py` doit être lancé depuis son environnement où il est installé. Le script se retrouve sous `..\envs\MoSiR\Scripts\MoSiR.py`.
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

# Directives
	
<p align = "justify">
La nomenclature reconnu par MoSiR est assez simple: il détecte les formes comme les cercles, les pense-bêtes (sticky note) et les flèches entre ceux-ci (et leur sens). L'utilisateur doit prendre les cercles pour illustrer les noeuds qui composent son graphe et les pense-bêtes pour indiquer la proportion de matière qui sera acheminée au noeud suivant. Un nom unique doit être attribué au noeud. La proportion doit être un chiffre suivi d'un pourcentage (%). Les décimals sont illustré à l'aide d'un point et non d'une virgule. Un pense-bête doit être situé entre deux noeud, relié par deux flèches suivant le sens que parcours la matière. Un pense-bête ne peut pas être utilisé pour relié plusieurs noeuds. Plusieurs liens ne pourraient donc pas sortir du même pense-bête pour rejoindre des noeuds souhaitant avoir la même proportion. Les flèches peuvent être linéaires, ondulées ou en forme de coude. L'épaisseur ou la grosseur de la flèche n'a également pas d'importance. Par contre, la couleur, autant pour les flèches que pour les noeuds ou les pense-bêtes, est importante.
</p>

![creation_graph](https://github.com/Landry-G/MoSiR_images/blob/main/creation_graph.gif)

<p align = "justify">
Les noeuds sont utilisés comme fourche où la matière peut divergée selon différentes proportions. On utilise donc les noeuds pour identifier les endroits d'intérêts où on pourra extraire de l'information. MoSiR calcule 3 informations à un temps donné pour un noeud: la quantité de matière qui rentre dans le noeud (flux in), la quantité de matière qui résident dans le noeud (stock) et finalement la quantité de matière qui quitte le noeud (flux out). Il comptabilise l'ensemble des flux qui quitte ses parents et les multiplient à la proportion (pense-bête) qui fait le lien entre les deux noeuds. Si le parent n'a pas la réponse à la quantité qui le quitte, il questionne lui aussi ses parents et ainsi de suite.
</p>

<p align = "justify">
Avec les noeuds par défaut, la matière s'écoule à l'intérieur du graphe la même année qu'un intrant entre dans un noeud du début, il n'y a donc pas de matière qui s'accumule dans les noeuds transitoires, seulement les derniers noeuds à la fin du graphe se retrouve à collecter indéfiniment la matière qui rentre dans ceux-ci. MoSiR offre l'opportunité d'identifier des noeuds comme étant du recyclage ou des noeuds avec un temps de demi-vie. Ces noeuds ont pour but de retenir la matière et de l'écouler d'une manière précise. Les noeuds de recyclage, identifiés par une couleur verte de remplissage, retiennent la matière pendant 1 an et la libère par la suite à son ou ses noeuds enfants. Pour les noeuds de dégradation, la matière libérée tiendra compte du temps de demi-vie et du type de dégradation choisi. Un noeud de dégradation est indentifé en ayant son contour en pointillé, peu importe l'épaisseur. Les détails des différents types de dégradation sont expliqués dans la section Directive. 
</p>

![creation_graph_2](https://github.com/Landry-G/MoSiR_images/blob/main/creation_graph_2.gif)

<p align = "justify">
Dans cet exemple, 3 noeuds ont été identifiés comme un noeud avec de la dégradation: Cardboard, Sawnwood et Panels. Le noeud Paper quant à lui un noeud de recyclage. Conséquemment, si 100 tonnes de carbone était acheminés à notre premier noeud Harvested Biomass au temps 1, seulement 10 tonnes seraient enregistré comme quantité entrant (flux in) dans notre dernier noeud CO2 emissions au temps 1. Par le fait même, le noeud CO2 emissions aurait une quantité de 10 tonnes qui résiderait (stock) au temps 1. La raison étant simple, le noeud Bioenergy est le seul qui agit comme noeud transitoire sans retenir le flux de matière, le flux de matière le traverse donc l'année même pour s'écouler dans le noeud suivant. Tout les autres noeuds ont une composant qui retient la matière pour un temps déterminé. Par exemple, notre noeud de recyclage Paper détient en lui (stock) 20 tonnes de carbone qui libérera (flux out) l'année suivante au noeud Pulp and paper. Pour nos trois autres noeuds, aucune dégradation s'effectue l'année même, donc ils conservent l'ensemble des flux rentrant. La quantité qu'ils libéreront l'année suivante et les années subséquentes dépendera du temps de demi-vie et du type de dégradation qui sera enregistré dans MoSiR.
</p>

<p align = "justify">
Par défaut, MoSiR va s'assurer que la quantité de matière dans le graphe est toujous égale à la somme des intrants à chaque pas de temps. Conséquemment, l'ensemble des liens sortant d'un noeud doit être égale à 100%. Si un utilisateur veut représenter une perte, il doit tout simplement créer un noeud dédié à cet effet et y acheminé un lien en s'assurant que l'ensemble des liens sortant du parent soit égale à 100%. Si l'utilisateur veut représenter un gain qui n'est pas pris en compte par les intrants de son graphe, l'utilsateur doit identifier différemment le lien grâce à un code de couleur (#17df23). On caratérise ces liens comme étant du débordement (overflow). Par exemple, l'utilisateur pourrait représenter la création de N2O lors de la combustion d'un produit ou bien représenter les émissions de transport ou de récolte, si ceux-ci peuvent se rattacher à un pourcentage de flux de matière. Ce carbone n'étant pas du carbone biogénique, il est comptabilisé comme un flux supplémentaire, c'est-à-dire un flux de débordement  Dans notre exemple, on pourrait déterminer que pour chaque tonne de carbone circulant dans notre graphe, 1% de N2O est créé avec le noeud Bioenergy et 5% est créé pour les émissions de transport avec le noeud d'entrée. À des fins de comptabilisation, un noeud ne peut recevoir un mélange de lien normal et de débordement.
</p>

![creation_graph_3](https://github.com/Landry-G/MoSiR_images/blob/main/creation_graph_3.gif)

Pour résumé, trois sortes de nœuds existent :
 - les nœuds transitoires: la matière ne fait que passer la même année, sans être stockée à aucun moment.
 - les nœuds de stockage: la matière passe au travers du nœud, mais la quantité sortante annuellement est définie par l'utilisateur (nœuds de dégradation, nœuds de recyclage, noeuds de fin de graphe, etc.)
 - Les nœuds d'entrées: il s'agit des premiers nœuds dans un graphe qui conservent l'information des intrants de l'utilisateur.

<p align="justify">  
Par défaut, tous les noeuds sont transitoires à moins qu'ils répondent à certaines caractéristiques. Ils deviennent des noeuds d'entrées si aucun lien dans le graphe entre dans ceux-ci (ils ont donc seulement des liens sortants). Ils deviennent des noeuds de stockage de fin de graphe si aucun lien ne sort de ceux-ci (ils ont donc seulement des liens entrants). Ils peuvent également être des noeuds de recyclage s'ils sont identifiés en vert ou de dégradation s'ils ont un contour en pointillé. Un noeud de dégradation ou de recyclage ne peut pas être en début (noeud d'entrée) ou à la fin d'un graphe (noeud de fin de graphe).
</p>

<p align = "justify">
Une fois votre graphe complété, celui-ci peut être importé dans l'interface MoSiR. En bref, MoSiR importe votre graphe depuis Miro et le transforme en fichier JSON interprétable par le calculateur. Vous pouvez par la suite visualiser votre graphe simplifié dans MoSiR, télécharger directement le fichier JSON pour pouvoir l'importer une prochaine fois sans passer par Miro et finalement, créer votre propre demande au calculateur MoSiR. Vous devez y inscrire les intrants de vos noeuds de départ, le temps de demi-vie des noeuds de dégradation, le type de dégradation de vos noeuds concernés et l'information en extrant que vous souhaitez recevoir. Essentiellement, il s'agit de questionner les noeuds qui vous intéresse, choisir si vous voulez les flux entrant, sortant ou les stocks, le cumulatif sur la période demandé et la sommation, si plusieurs noeuds ont été sélectionné, des résultats. Finalement, vous pouvez choisir l'unité des extrants. MoSiR vous demande dabord les unités de vos intrants, pour que celui-ci soit capable de faire la transformation nécessaire. Si le nom de vos noeuds contiennent le nom d'un gaz comme CO2, CO, CH4 ou N2O, MoSiR peut également faire la transformation de ces quantité de carbone en tonne équivalente de CO2 ou même en forcage radiatif. 	
</p>

![utilisation_mosir](https://github.com/Landry-G/MoSiR_images/blob/main/utilisation_mosir.gif)

Pour que le forçage radiatif puisse être calculé, le nom du gaz doit être identifié clairement dans le nom du noeud, par exemple: "Émissions de CH4 dépotoire". Le nom du gas doit être en lettre majuscule, séparé du reste du nom. Voici une liste d'exemple de nom qui ne pourrait donc pas fonctionner :
* emission_CO2
* co2 emission
* CO2emission

MoSiR utilise les données issues de Levasseur et al. (2010) et rendues disponibles via l'outil [dynCO2](https://ciraig.org/index.php/fr/project/dynco2-calculateur-dempreinte-carbone-dynamique/). C'est notamment l'approche retenue dans le cadre du [Règlement](https://www.environnement.gouv.qc.ca/changements/carbone/credits-compensatoires/sequestration-carbone-boisement-reboisement-terres-prive.htm) relatif aux projets de boisement et de reboisement sur des terres du domaine privé admissibles à la délivrance de crédits compensatoires du Québec.
Par défaut, MoSiR utilise un potentiel de réchauffement global de 28 pour le CH4 et de 265 pour le N2O lors du calcul de tonne de CO2 equivalente. Ces valeurs peuvent être modifiées par l'utilisateur.

<p align = "justify">
À des fins purement ergonomiques, il est possible d'introduire dans l'architecture du flux de matière des nœuds particuliers pour mieux imager la notion de ventilation. Lors de l'importation dans MoSiR, ceux-ci sont effacés et le lien entre le noeud avant et après est refait. Pour ce faire, le noeud doit être de la forme de rectangle et être positionné avant et après deux noeuds qui sont sous forme de cercle (avec leur pense-bête respectif). Il ne peut donc pas y avoir deux rectangles qui se suivent. Cette possibilité est simplement pour aider à la notation dans Miro, car cette information n'est pas conserver dans MoSiR. Par exemple, un graphe dans Miro contenant des noeuds et des proportions entre ceux-ci serait réajusté une fois importé dans MoSiR:
</p>

![split_division_2](https://github.com/Landry-G/MoSiR_images/blob/main/split_division_2.png)

Nomenclature générale de Miro:

* Nœud : Forme = cercle, nom unique
* Pense-bête : Couleur = Vert clair / light green
* Le sens des flèches entre les nœuds est important.
* Flèches de débordement : Couleur = #17df23
* Nœud de recyclage : Forme = "cercle", Couleur de remplissage = Vert / green (#8fd14f)
* Nœud de dégradation: Forme = "cercle", Bordure = "dashed"
* Nœud d'émissions de GES : Le nom du nœud doit faire apparaitre clairement la molécule voulue. 
Exemples : CH4 emissions / CO2 emissions / N2O emissions
* Les rectangles servent à annoter le graphe entre deux noeuds normals
  
-- Nomenclature .JSON:
A DEVELOPPER (Traduction de la nomenclature MIRO en nomenclature JSON MoSiR)
   
<details><summary><b>Comme package python</b></summary> <br>
Le calculateur de MoSiR peut être directement appelé depuis un script python sans passer par l'interface web. Par exemple:
  
```python
  from MoSiR import mosir_calculator
  mosir_calculator.main(['-G', graph_json, '-D', input_json, '-R', report_json, '-E', export_folder])
```

Pour fonctionner, le calculateur a besoin d'un fichier `JSON` pour le graphe, un pour les intrants, un pour le report et le chemin vers l'endroit où seront les extrants.

Pour un nouvel utilisateur, il serait recommandé d'utiliser d'abord l'interface Miro, car celui-ci vous génère automatiquement des fichiers `JSON` pour le graphe, les intrants et le report. Ces fichiers générés par l'application sont disponibles dans l'onglet `Télécharger` une fois que vous avez importé votre graphe et rempli l'onglet `Calculer`. Ces `JSON` pourront agir par la suite comme modèle pour la structure du fichier. Il existe également des fichiers en exemple dans le Github de MoSiR sous `example\Inputs`.
</details>

# FAQ

À venir

# Développements futurs

<p align="justify">
Mosir est opérationnel dans sa version 1.0, il n'en reste pas moins que des développements sont en cours pour améliorer les capacités et l'ergonomie de l'outil et donc maximiser son potentiel d'utilisation par le plus grand nombre. Si au cours de l'utilisation de MoSiR vous percevez en tant qu'utilisateur un potentiel d'amélioration, n'hésitez surtout pas à partager votre idée dans la section discussion du GitHub. Voici une liste d'améliorations futures qui seront ajoutées à MoSiR:
</p>

- [ ] Mathématique de dégradation https://github.com/Bureau-du-Forestier-en-chef/MoSiR/issues/2
- [ ] Analyse de sensibilité (Monte-Carlo) https://github.com/Bureau-du-Forestier-en-chef/MoSiR/issues/39
- [ ] Ergonomie de MoSiR https://github.com/Bureau-du-Forestier-en-chef/MoSiR/issues/37 https://github.com/Bureau-du-Forestier-en-chef/MoSiR/issues/35 https://github.com/Bureau-du-Forestier-en-chef/MoSiR/issues/14 https://github.com/Bureau-du-Forestier-en-chef/MoSiR/issues/43

Partagez vos idées et suggestions ! :point_right: [Discussions](https://github.com/Bureau-du-Forestier-en-chef/MoSiR/discussions)

#### [Mathématique de dégradation](https://github.com/Bureau-du-Forestier-en-chef/MoSiR/issues/2) 
<p align="justify">
Dans sa version 1.0, MoSiR ne peut gérer la dégradation des produits du bois que d'une seule manière, via une dégradation de premier ordre (exponentielle) basée sur une demi-vie fournie par 		l'utilisateur (méthodologie du GIEC). La littérature est claire sur la pertinence d'utiliser une telle mécanique de dégradation pour les grandes familles de produits regroupant un ensemble 		complexe de produits finaux (sciage, pâtes et papiers, panneaux, etc.). La prémisse de la désintégration de premier ordre est que le taux de retrait d’un réservoir est proportionnel à la quantité 	d’éléments dans ce dernier. Donc, cette hypothèse a pour conséquence qu’une proportion importante des produits du bois est mise hors service dès les premières années après leur mise en marché, le 	taux de mise hors service étant alors à son maximum. Si l'architecture du flux de matière de l'utilisateur est plus détaillée que simplement les grandes familles de produits, il pourrait être 	pertinent d'utiliser une mécanique de dégradation différente. En effet, s’il est vrai qu’un produit particulier se dégrade avec une certaine probabilité à différents moments, cette probabilité 	devrait être plus élevée à l’approche de la durée de vie prévue initialement.
</p>
<p align="justify">
Il est donc prévu d'intégrer dans MoSiR une dégradation des produits du bois suivant une Loi Gamma (alpha, bêta). Il est à noter qu'une dégradation de premier ordre (exponentielle) peut être modélisée via une Loi Gamma en fixant le paramètre alpha à 1  et en faisant varier le paramètre bêta pour faire correspondre la courbe avec la demi-vie souhaitée. 
Ce développement va donc laisser la liberté à l'utilisateur de définir le type de dégradation qu'il souhaite dans son architecture de flux de matière, en définissant pour chaque nœud de demi-vie un facteur alpha et bêta. Mosir ne nécessitant plus une valeur de demi-vie pour fonctionner, il sera de la responsabilité de l'utilisateur de fixer les paramètres alpha et bêta de manière adéquate. Un chiffrier Excel sera fourni pour aider les utilisateurs dans la détermination de ces valeurs.
</p>
	
#### [Analyse sensibilité/Incertitudes (Monte-Carlo)](https://github.com/Bureau-du-Forestier-en-chef/MoSiR/issues/39)
La version 1.0 de MoSiR requiert des valeurs spécifiées par l'utilisateur, offrant ainsi peu de flexibilité pour prendre en compte les incertitudes associées à ces données. 
Un projet de développement est donc envisagé pour intégrer des simulations de Monte-Carlo, permettant d'estimer les résultats potentiels en tenant compte des incertitudes liées aux valeurs, certainement sous la forme d'intervalles de confiance définis par l'utilisateur. 
Ce projet vise également à faciliter l'analyse de sensibilité pour l'utilisateur, en rendant le processus plus rapide.

D'autres idées ont été soulevées, mais elles ne figurent pas en ce moment comme [Issues] à implémenter prochainement.

- __Tableau blanc Teams/autre__ <br>
	Dans la version 1.0 de Mosir la lecture et la traduction d'une architecture de flux de matière ne sont possibles que par l'utilisation de l'application Miro. Afin de ne pas se retrouver sans solution dans le cas où la politique d'accessibilité de Miro venait à changer, il devrait être possible dans une version ultérieure de MoSiR d'utiliser d'autres applications semblables, en particulier les tableaux blancs de Teams (application utilisée au BFEC).

- __Gestion d'autres GES__ <br>
  	Par défaut dans sa version 1.0, MoSiR est capable de réaliser la comptabilisation en tCO2eq et en W/m2 des gaz à effet de serre suivant : CO2 / CH4 / N2O.
Si ces trois GES devraient suffirent à la grande majorité des utilisateurs, des rajouts pourraient être faits selon des besoins particuliers.

- __Optimisation de l'utilisation des produits du bois__ <br>
  	Mosir n'est dans sa version 1.0 qu'un outil permettant de suivre le devenir de la matière dans une architecture de flux et de réaliser en parallèle une lecture carbone et/ou climatiques des émissions de GES.
MoSiR a besoin d'informations requises et demandées à l'utilisateur pour fonctionner correctement. Cependant, à partir d'une architecture de base et d'imposition de contraintes, il peut être pertinent de permettre à l'outil d'établir les flux de matière les plus à même de rencontrer une cible d'émissions fixée par l'utilisateur, MoSiR serait donc ainsi capable d'optimisation par programmation linéaire.
	
# Signaler une erreur

Si vous rencontrez une erreur, la manière à privilégier est par l'entremise des [Issues] sur GitHub. Sur la page des `Issues` de MoSiR, cliquer sur `New issue`. Il est nécessaire de donner le plus d'informations possibles pour reproduire l'erreur que vous rencontrez. Si vous souhaitez faire des suggestions d'amélioration, se référer à la section <a href="#Développements futurs">Développements futurs</a>.

[Issues]: https://github.com/Bureau-du-Forestier-en-chef/MoSiR/issues

# License

MoSiR is a [LiLiQ-R 1.1](https://github.com/gcyr/FMT/blob/master/LICENSES/EN/LILIQ-R11EN.pdf) licensed library.

[![License](http://img.shields.io/:license-liliqR11-blue.svg?style=flat-square)](https://forge.gouv.qc.ca/licence/liliq-v1-1/#r%C3%A9ciprocit%C3%A9-liliq-r)
