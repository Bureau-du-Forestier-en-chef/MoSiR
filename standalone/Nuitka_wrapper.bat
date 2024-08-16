@ECHO OFF
chcp 65001
ECHO.
ECHO ---- AVERTISSEMENT ----
ECHO Bienvenue dans le wrapper de l'application MoSiR, générée par le package python Nuitka. D'abord, informez-vous de la documentation sur https://nuitka.net/
ECHO MoSiR sera installé comme package python avant de continuer. Voir la documentation MoSiR sur le github du BFEC pour plus d'informations sur MoSiR
ECHO Un environnement python nommé MoSiR devrait être présent dans vos environnements conda. Si vous ne savez pas de quoi il s'agit, il serait préférable de quitter ce fichier et d'utiliser l'application fournie sur le github du BFEC (https://github.com/Bureau-du-Forestier-en-chef/MoSiR)
ECHO.
ECHO Dépendances : conda, python, dossier MoSiR, nuitka dans l'environnement MoSiR, un compilateur C (voir Nuitka) ainsi que numpy et imageio
ECHO.
ECHO 1 = Installe le package MoSiR et wrap l'application sous %CD%
ECHO 2 = Quitte le command prompt
ECHO.

CHOICE /c 12 /m "Entrer le choix souhaité:"
if %ErrorLevel% == 1 (
    conda activate MoSiR
    pip install ..\. 
    <nul set /p "=Le wrapping de l'application va commencer. L'installation se fera dans %CD%. Peser sur une touche pour continuer"
    pause >nul
    python -m nuitka ^
    --standalone ^
    --include-package-data=MoSiR ^
    --include-package-data=pyvis ^
    --windows-console-mode=disable ^
    --windows-icon-from-ico=..\MoSiR\static\image\MoSiR-logo_2.png ^
    --company-name="Bureau du Forestier en chef" ^
    --product-name=MoSiR ^
    --product-version=1.0.1 ^
    --file-version=1.0.1 ^
    --file-description="Standalone application of MoSiR, a Python package for the carbon fate of wood products" ^
    --copyright="LiLiQ-R-1.1" ^
    --output-dir=. ^
    ..MoSiR.py

    <nul set /p "=L'installation est complétée, peser sur une touche pour fermer"
    pause >nul
)

if %ErrorLevel% == 2 exit 
