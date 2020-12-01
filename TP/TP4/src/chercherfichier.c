/*
#### Exercice 4.6 [★★★]

 
En réutilisant le code de *chercher.c* (TP3) et *fichier.c*, écrivez un
fichier *chercherfichier.c* qui cherche une phrase dans un fichier, les
deux sont à saisir par l'utilisateur. *chercherfichier.c* doit afficher
toutes les lignes de fichier où les mots sont présents et également le
nombre de fois qu'ils sont présents. Par exemple,

```
$ ./chercherfichier int fichier.c             
```

Vous devez afficher

```              
Ligne 10, 2 fois
Ligne 30, 1 fois             
```
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int find_fichier(char *nom_de_fichier, char *motR);

int main(int argc, char **argv){
    char *mot = argv[1];
    find_fichier("test.txt", mot);
}
    
int find_fichier(char *nom_de_fichier, char *motR){    
    int compteur,ligne;
    ligne = 0;
    FILE *Fichier; 
  
    char motFr[255];
    char *line;

    Fichier = fopen(nom_de_fichier, "r");
    if (!Fichier)
         printf("\aERREUR: Impossible d'ouvrir le fichier: %s.\n", nom_de_fichier);
  
    while (fgets(motFr,255,Fichier) != NULL)
    {
        ++ligne;
        compteur = 0;
        line = strstr(motFr, motR);
        if (line != NULL){
            ++compteur;
            strncpy (line, "remplacement", sizeof(motR));
            line = strstr(line, motR);
            while (line != NULL) {
                ++compteur;
                line = strstr(line, motR);
                strncpy (line, "remplacement", sizeof(motR));
            }
        }
        if(compteur > 0){
            printf("Ligne %d, %d fois \n", ligne, compteur);
        }   
    }
    fclose(Fichier);
    return 0;
}