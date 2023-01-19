# trollvirus
Fonctionnel sous Windows (utilise son API, je le réécrirai peut être pour Linux ou MacOS si je trouve des gens à troller qui sont sous ça)

## Compiler

### Jusqu'à la 1.2 incluse

### Sous Windows

Installer [MinGW](https://sourceforge.net/projects/mingw/) et ajouter son dossier bin à la variable système path
aller dans le dossier qui contient `main.cpp` avec une invite de commande et exécuter `g++ main.cpp -O3 -mwindows`
Votre virus de troll devrait se trouver dans a.exe !
chez moi l'antivirus ne dit rien

### Sous Linux (pour windows) (testé avec ubuntu)

Installer mingw-w64 avec `sudo apt install mingw-w64`

aller dans le dossier du fichier main.cpp avec un terminal et exécuter `x86_64-w64-mingw32-g++ main.cpp -O3 -mwindows`

### À partir de la 1.3

### Sous Windows

Installer Visual Studio (testé 2022) avec les outils dev bureau en c++

Je vais poster des fichiers `.txt` qui contiennent des liens mediafire car mon dossier entier est trop lourd pour github

addons dispos pour la 1.4

## Utiliser 
### Configurer (1.4+)
À partir de la version 1.4, j'ai ajouté un interpréteur dans un événement, qui lit le fichier (il faut qu'il soit dans le meme dossier et don absence genere un message de debug dans la console si ouvert à partir d'une console) `commandes.txt`. L'implémentation est la suivante :

`commande`

`argument`

(pas tout le temps nécessaire, dépend des fonctions) `argument 2`

`commande`

`argument`...

pour l'instant mes commandes sont les suivantes :

1 `attendre` `tempsEnMillisecondes`
2 `openlink` `lienÀOuvrir`
3 `playsound` `lienVersUnFichierWAV`
4 `msgbox` `contenu` `titre`

l'absence d'arguments à cause de la fin du fichier (si vous specifiez une nouvelle commande sans avoir donné assez d'arguments elle sera interprétée  comme un argument) et declenchera un comportement par defaut ou l'arret de la lecture du fichier après un message d'informations dans la console.
les comportements par défaut sont:

1 pour `attendre` 30 000 millisecondes soit 30 secondes
2 pour `openlink` ouvrir `https://cornhub.website` (si vous voulez ouvrir en navigateur n'oubliez pas https:// et testez le fonctionnement
3 pour `playsound` appelle l'événement rickroll
4 pour `msgbox` appelle l'événement des boîtes de dialogues
