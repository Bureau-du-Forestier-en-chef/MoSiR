@ECHO OFF
chcp 65001 >nul
SETLOCAL

REM ---------------------------------------------------------------------
REM  MoSiR - Tests et mise à jour des chiffres de couverture des README
REM
REM  Usage :
REM      update_coverage.bat          lance les tests et met à jour les
REM                                   README, puis affiche le diff
REM      update_coverage.bat check    vérifie sans rien écrire (ce que
REM                                   fait la CI sur chaque push)
REM
REM  Les chiffres ne sont réécrits que si la suite complète passe.
REM ---------------------------------------------------------------------

REM Se placer à la racine du dépôt, quel que soit le répertoire d'appel
CD /D "%~dp0"

SET MODE=--update-readme
SET LIBELLE=Mise à jour
IF /I "%~1"=="check" (
    SET MODE=--check-readme
    SET LIBELLE=Vérification
)

ECHO.
ECHO ---- MoSiR : %LIBELLE% des chiffres de couverture ----
ECHO.

WHERE conda >nul 2>nul
IF ERRORLEVEL 1 (
    ECHO [ERREUR] conda est introuvable dans le PATH.
    ECHO Ouvrir un "Anaconda Prompt" ou lancer une fois : conda init cmd.exe
    GOTO :fin
)

CALL conda activate MoSiR
IF NOT "%CONDA_DEFAULT_ENV%"=="MoSiR" (
    ECHO [ERREUR] L'environnement conda "MoSiR" n'a pas pu être activé.
    ECHO Le créer avec : conda env create -f environment.yml
    GOTO :fin
)

ECHO Exécution de la suite complète avec mesure de couverture...
ECHO Cela prend environ une minute.
ECHO.

python -m pytest --cov=MoSiR --cov-report=json:coverage.json --cov-report=term %MODE%
SET RESULTAT=%ERRORLEVEL%

IF NOT "%RESULTAT%"=="0" (
    ECHO.
    IF /I "%~1"=="check" (
        ECHO [ECHEC] Chiffres périmés, ou tests en échec.
        ECHO Relancer sans argument pour mettre les README à jour.
    ) ELSE (
        ECHO [ECHEC] La suite a échoué : les README n'ont pas été modifiés.
    )
    GOTO :fin
)

IF /I "%~1"=="check" (
    ECHO.
    ECHO [OK] Les chiffres des README sont à jour.
    GOTO :fin
)

ECHO.
ECHO ---- Diff des README ----
ECHO.

git diff --quiet README.md README_fr.md
IF ERRORLEVEL 1 (
    git --no-pager diff --stat README.md README_fr.md
    ECHO.
    git --no-pager diff README.md README_fr.md
    ECHO.
    ECHO Relire le diff ci-dessus, puis commiter les deux README.
) ELSE (
    ECHO Aucun changement : les chiffres étaient déjà à jour.
)

:fin
ECHO.
PAUSE
ENDLOCAL
