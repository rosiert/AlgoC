/*
#### Exercice 4.2 [★]

 
Écrivez un programme en créant deux fichiers *fichier.c* et fichier.h.
Dans fichier.h, déclarez les fonctions lire_fichier(char
*nom_de_fichier) et ecrire_dans_fichier(char *nom_de_fichier,
char *message). La fonction lire_fichier prend le nom du fichier et
affiche son contenu à l'écran. ecrire_dans_fichier prend le nom du
fichier et écrire le message saisi par l'utilisateur dans le fichier.
*/
#include <stdio.h>
#include <stdlib.h>
#include "fichier.h"
#define TAILLE_MAX 1000

int main(){
    lire_fichier("test.txt");
    ecrire_dans_fichier("test.txt","le bg\n");

}

int lire_fichier(char *nom_de_fichier){
   FILE *fp;
   int c;
  
   fp = fopen(nom_de_fichier,"r");


   if (fp != NULL){
      printf("Voici le contenu de votre fichier : \n");
      while(!feof(fp)) {
         c = fgetc(fp);
         printf("%c", c);
      }
      printf("\n");
   fclose(fp);
   
   }
   else{
      printf("Le fichier ne peut pas être ouvert ! \n");
   }
   return(0);
}

int ecrire_dans_fichier(char *nom_de_fichier, char *message){
   FILE * fp;
   int c;
   fp = fopen (nom_de_fichier, "a+");


   if (fp != NULL){
      //fprintf(fp, "%s", message);
      fputs(message, fp);
      printf("Changements : \n");
      fclose(fp);
      lire_fichier(nom_de_fichier);
   }
   else{
      printf("Le fichier ne peut pas être ouvert ! \n");
   }
   return(0);
}