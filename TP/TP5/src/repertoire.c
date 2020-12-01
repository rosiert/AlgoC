/*
#### Exercice 5.1 [★]


Écrivez un programme en créant deux fichiers repertoire.h et
repertoire.c qui utilisent l'interface en ligne de commande et prennent
le nom du répertoire.

Ajoutez la déclaration suivante en repertoire.h
```
              void lire_dossier(char *);             
```

Implémentez cette fonction en repertoire.c qui parcourt le répertoire
saisi par l'utilisateur et affiche les noms de tous les fichiers (et
répertoires, si aucun) dans ce répertoire. Vous pouvez utiliser opendir,
readdir pour parcourir un répertoire.

----------------------------------------------------------
#### Exercice 5.2 [★]


Ajoutez la déclaration suivante en repertoire.h

```
void lire_dossier_recursif(char *);             
```

Implémentez la fonction en repertoire.c qui parcourt le répertoire saisi
par l'utilisateur en récursif et affiche tous les noms de tous les
fichiers et répertoires, sous-répertoires et tous les fichiers dans les
sous-répertoires. Pour mieux comprendre cette question, testez

```
$ ls -R              
```

sur la ligne de commande. Testez votre code. Utilisez le principe de la
fonction récursive.

---------------------------------------------------------------
#### Exercice 5.3 [★★]


Ajoutez la déclaration suivante en repertoire.h

```
void lire_dossier_iteratif(char *);              
```

Implémentez cette fonction en repertoire.c qui parcourt le répertoire
saisi par l'utilisateur en mode itératif et affiche tous les noms de
tous les fichiers et répertoires, sous-répertoires et tous les fichiers
dans les sous-répertoires. Mais cette fois, utilisez for (ou while ou
do..while) pour implémenter cette fonction. Testez votre code.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "repertoire.h"
#include <dirent.h>
 
int main(int argc, char **argv)
{
    if(argc == 2){
        lire_repertoire(argv[1]);
        //lire_repertoire_recursif(argv[1]);
        rls_handler(argv[1]);
    }else{
        printf("Merci de saisir ./repertoire <nomRepertoire> \n");
    }
}

void lire_repertoire(char *nomRep){
    struct dirent *dir;
    // opendir() renvoie un pointeur de type DIR. 
    DIR *d = opendir(nomRep); 
    if (d)
    {
        while ((dir = readdir(d)) != NULL)
        {
            if ( (strcmp(dir->d_name, "..") != 0) && (dir->d_name[0] != '.') ) { //Pour ne pas afficher les fichiers cachés
                printf("%s \n", dir->d_name);
            }
        }
        closedir(d);
    }
}

void lire_repertoire_recursif(char *nomRep){
    struct dirent *dir;
    // opendir() renvoie un pointeur de type DIR. 
    DIR *d = opendir(nomRep); 
    char *buffer;
    char *buffer_2;
    if (d)
    {
        while ((dir = readdir(d)) != NULL)
        {
            if ( (strcmp(dir->d_name, "..") != 0) && (dir->d_name[0] != '.') ) { //Pour ne pas afficher les fichiers cachés
                
                if(dir->d_type == DT_DIR){
                    printf("\n rep : %s \n", dir->d_name);
                    buffer = strcat(nomRep, "/");
                    buffer = strcat(buffer, dir->d_name);
                    printf("%s \n",buffer);
                    buffer_2 = buffer;
                    lire_repertoire_recursif(buffer);
                }
                else {
                    printf("%s \n", dir->d_name);
                    lire_repertoire_recursif(buffer_2);
                }
            }
        }
        printf("\n");
        closedir(d);
    }
}


void rls_handler(const char *name){
    DIR *dir;
    struct dirent *sd;
    dir = opendir(name);
    while((sd = readdir(dir)) != NULL){
        if(sd->d_type == DT_DIR){ //if item is a directory, print its contents
            char *path;
            if((strcmp(sd->d_name, ".")) !=0 &&  (strcmp(sd->d_name, "..")) != 0){ //skip '.' and '..'
                path = ; //Renseigner la valeur de path, local pour le rep actuel
                printf("%s \n",sd->d_name);
                rls_handler(path);
                continue;
            }    
        }else{
            printf("%s \n", sd->d_name);
        }
    }//end while
    closedir(dir);
}//end rls_handler
