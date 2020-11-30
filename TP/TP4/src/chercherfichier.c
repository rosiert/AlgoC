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
#include "fichier.h"

int find_fichier(char *nom_de_fichier, char *word);


int main(int argc, char **argv){
    char *mot = argv[1];
    find_fichier("test.txt", mot);
}
    


int find_fichier(char *nom_de_fichier, char *word){
    FILE *fp;
    int i, compteur, stop, ligne;
    char c;
    compteur = 0;
    ligne = 0;
  
   fp = fopen(nom_de_fichier,"r");

   if (fp != NULL){
      printf("Voici le contenu de votre fichier : \n");
      while(!feof(fp)) {
         c = fgetc(fp);
         if (c == '\n'){
             ligne += 1;
         }
         if (c == word[0]) {
             stop = 0;
             
             i == 1;
             while (stop !=1) { 
                 if (c == word[i]){
                     c = fgetc(fp);
                     
                     ++i;
                     if (i == sizeof(word)-1 && c == word[i]){
                        compteur +=1;
                        printf("Ligne : %d, %d fois \n", ligne, compteur);
                        stop =1 ;
                     }
                 }
                 else{
                     if(c == word[0]) {
                        i=1;
                     }
                     else {
                        stop = 1;}
                 }
             }
         }
      }
   fclose(fp);
   
   }
   else{
      printf("Le fichier ne peut pas être ouvert ! \n");
   }
   return(0);
}
