@ECHO OFF
chcp 65001
ECHO.
ECHO ---- AVERTISSEMENT ----
ECHO Bienvenue dans le wrapper de l'application MoSiR, celui-ci a besoin d'installer MoSiR comme package python avant de continuer. Voir la documentation MoSiR sur le github du BFEC pour plus d'informations sur MoSiR
ECHO Un environnement python nommé MoSiR devrait être présent dans vos environnements conda. Si vous ne savez pas de quoi il s'agit, il serait préférable de quitter ce fichier et d'utiliser l'application fournie sur le github du BFEC (https://github.com/Bureau-du-Forestier-en-chef/MoSiR)
ECHO.
ECHO Dépendances : conda, python, dossier MoSiR, nuitka dans l'environnement MoSiR
ECHO.
ECHO 1 = Installe le package MoSiR et wrap l'application sous %CD%\app (is this really a good idea?)
ECHO 2 = Quitte le command prompt (you should)
ECHO.
CHOICE /c 12 /m "Entrer le choix souhaité (#2 obviously) :"
if %ErrorLevel% == 1 (
    echo %CD%
    conda activate MoSiR
    pip install ..\.   
    <nul set /p "=Le wrapping de l'application va commencer, cela peut prendre environ 45 minutes avec un bon processeur. Il n'est pas encore trop tard pour fermer le command prompt."
    pause >nul
    python -m nuitka ^
    --standalone ^
    --onefile ^
    --onefile-windows-splash-screen-image=..\MoSiR\static\image\MoSiR-logos_white.png ^
    --include-package-data=MoSiR ^
    --include-package-data=pyvis ^
    --windows-icon-from-ico=..\MoSiR\static\image\MoSiR-logos.png ^
    --company-name="Bureau du Forestier en chef" ^
    --product-name=MoSiR ^
    --product-version=0.9.1 ^
    --copyright="Gouvernement du Québec" ^
    ..\examples\Run_MoSiR.py
)

if %ErrorLevel% == 2 exit 

<nul set /p "=L'installation est complétée, peser sur une touche pour fermer"
pause >nul