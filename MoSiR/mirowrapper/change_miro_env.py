import os
from flask import Flask, request, jsonify

def change_miro_env(CLIENT_ID, CLIENT_SECRET):
    # Ouvrir le fichier en mode lecture
    with open(os.path.join(os.path.dirname(os.path.abspath(__file__)), "mirowrapper.env"), "r") as f:
        lignes = f.readlines()

    # Modifier les lignes nécessaires
    for i, ligne in enumerate(lignes):
        if "MIRO_CLIENT_ID" in ligne:
            left, right = ligne.split("=", 1)
            right = '"' + 'ID1' + '"'
            lignes[i] = left + "=" + right + "\n"
        if "MIRO_CLIENT_SECRET" in ligne:
            left, right = ligne.split("=", 1)
            right = '"' + 'Secret1' + '"'
            lignes[i] = left + "=" + right

    # Écrire les modifications dans le fichier
    with open(os.path.join(os.path.dirname(os.path.abspath(__file__)), "mirowrapper.env"), "w") as f:
        f.writelines(lignes)

app = Flask(__name__)

@app.route('/changer_cles_identification', methods=['POST'])
def changer_cles_identification():
    data = request.json  # Récupérer les données JSON envoyées dans la requête POST
    key1 = data.get('key1')
    key2 = data.get('key2')

    change_miro_env(key1, key2)

    # Répondre à la requête avec un message de confirmation
    return jsonify({'message': 'Clés d\'identification mises à jour avec succès'})

if __name__ == '__main__':
    app.run(debug= True)  # Démarrer le serveur Flask en mode debug pour faciliter le développement

