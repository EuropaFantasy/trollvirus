# trollvirus
Fonctionnel sous Windows (utilise son API, je le réécrirai peut être pour Linux ou MacOS si je trouve des gens à troller qui sont sous ça)
## Compiler
### Sous Windows

Installer [MinGW](https://sourceforge.net/projects/mingw/) et ajouter son dossier bin à la variable système path
aller dans le dossier qui contient `main.cpp` avec une invite de commande et exécuter `g++ main.cpp -O3 -mwindows`
Votre virus de troll devrait se trouver dans a.exe !
chez moi l'antivirus ne dit rien

### Sous linux (pour windows)
Installer mingw-w64 avec `sudo apt install mingw-w64`

aller dans le dossier du fichier main.cpp avec un terminal et exécuter `x86_64-w64-mingw32-g++ main.cpp -O3 -mwindows`
