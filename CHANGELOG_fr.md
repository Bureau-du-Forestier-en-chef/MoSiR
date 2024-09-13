# Journal des modifications
Tous les changements notables appliqués au projet seront notés ici.

## À venir dans la prochaine version
* Davantage de tests de validation pour intercepter de possibles erreurs.

## v1.1.0 (2024-09-13)
### Nouveautés
* Il est maintenant possible de faire une énumération de proportions changeantes dans un pense-bête. Dans un cas où la ventilation de votre graphe change avec le temps, il est possible de préciser le changement de proportion dans un pense-bête plutôt que de refaire une deuxième analyse. Les précisions sont le wiki du GitHub (sous "Comment utiliser MoSiR avec Miro et l'interface web"). 
* Message d'erreur si aucun flux en intrant n'est inscrit dans le JSON ou dans le tableau de l'interface lors de la simulation.
* Message d'erreur si un nœud ayant du débordement a un edge sortant sans débordement.
* Les pourcentages inscrits dans Miro sur un pense-bête sont maintenant limités à une précision de 8 chiffres après la virgule. Dû à une particularité propre à Python, il est nécessaire d'arrondir les pourcentages pour obtenir un cumulatif de 100% dans les liens sortants. Si un pense-bête a plus de 8 chiffres après la virgule, celui-ci sera arrondi par MoSiR. 
* Les JSON qui sont créés par MoSiR ont maintenant une indentation dans les données pour clarifier la structure du fichier.
* Nouveau test pour vérifier les espaces vides de trop dans les noms de nœud.
* Nouveau test pour vérifier si le nom des nœuds dans les intrants correspond à un nœud dans le graphe.
* Nouveau test pour vérifier si le nom des nœuds dans le report correspond à un nœud dans le graphe.
* Une cache pour le niveau de dégradation a été ajoutée, ce qui accélère le calculateur.
* Nouveaux tests pour vérifier le fichier JSON des imports.
* Nouveaux tests pour vérifier le fichier JSON de report.

### Changements
* Le calculateur n'est plus appelé par un parser dans l'API, mais par une fonction importée. Le parser reste disponible pour appeler le calculateur dans une console et la fonction `run_calculator` est également possible pour être inclus directement dans un script python.
* Les espaces vides de trop dans les noms de nœud sont automatiquement supprimés (espace double entre les mots ou avant et après le nom).
* Les noms de nœuds dans Miro qui sont écrits en gras, italique, surlignés, soulignés ou barrés sont transformés pour être sans style. Du code HTML pouvait parfois être gardé dans les JSON involontairement. 
* Dans le fichier JSON du graphe, les nœuds de dégradation (decay) et de recyclage (Recycling) sont identifiés grâce à "true" ou "false" au lieu de "1" ou "0".
* La documentation de MoSiR se retrouve maintenant dans l'onglet Wiki du GitHub.

### Corrections
* La tolérance de 0.0001 sur le test de la somme des liens sortants a été a enlevée.
* Les fonctions pour transformer en radiatif prennent maintenant en compte seulement les facteurs dans le CSV. Il n'est plus possible de passer directement les facteurs de conversion dans les fonctions. Évite une redondance dans le code.

## v1.0 (2024-06-12)
* Première version publique de MoSiR