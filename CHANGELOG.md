# Journal des modifications
Tous les changements notables appliqués au projet seront notés ici.

## v1.0.1 (2024-07-10)
### Nouveautés
* Message d'erreur si aucun flux en intrant n'est inscrit dans le JSON ou dans le tableau de l'interface lors de la simulation.
* Message d'erreur si un nœud ayant du débordement a un edge sortant sans débordement.
* Les pourcentages inscrits dans Miro sur un pense-bête sont maintenant limités à une précision de 8 chiffres après la virgule. Dû à une particularité propre à Python, il est nécessaire d'arrondir les pourcentages pour obtenir un cumulatif de 100% dans les liens sortants. Si un pense-bête a plus de 8 chiffres après la virgule, celui-ci sera arrondi par MoSiR. 
* Les JSON qui sont créés par MoSiR ont maintenant une indentation dans les données pour clarifier la structure du fichier.
* Nouveau test pour vérifier les espaces vides de trop dans les noms de nœud.

### Changements
* Une cache pour le niveau de dégradation a été ajoutée, ce qui accélère le calculateur.
* Le calculateur n'est plus appelé par un parser dans l'API, mais par une fonction importée. Le parser reste disponible pour appeler le calculateur dans une console et la fonction `run_calculator` est également possible pour être inclus directement dans un script python.
* Les espaces vides de trop dans les noms de nœud sont automatiquement supprimés.

### Corrections
* La tolérance de 0.0001 sur le test de la somme des liens sortants a été a enlevée.
* Les fonctions pour transformer en radiatif prennent maintenant en compte seulement les facteurs dans le CSV. Il n'est plus possible de passer directement les facteurs de conversion dans les fonctions. Évite une redondance dans le code.

## v1.0 (2024-06-12)
* Première version publique de MoSiR