/*
#### Exercice 4.3 [★★]

 
En réutilisant le code de l'*etudiant2.c* (TP2) et *fichier.c*, écrivez
un fichier *etudiant_bd.c* qui sauvegarde les noms, prénoms, adresses,
et les notes dans un fichier etudiant.txt pour 5 étudiant(e)s (une ligne
pour chaque étudiant(e)). Testez votre code. Cette fois, vous demanderez
à l'utilisateur en utilisant scanf pour les détails de chaque étudiant.
Par exemple, etudiant.txt

```               
Dupont, Pierre, Boulevard du 11 novembre 1918, Villeurbanne, 20, 30               ...             
```
*/
#include <stdio.h>
#include <stdlib.h>

int lire_fichier(char *nom_de_fichier);
int ecrire_dans_fichier(char *nom_de_fichier, char *message);


int main(){
    struct etudiant {
    char prenom[20];
    char nom[20];
    char adresse[50];
    int notes[2];
    };
    int i;

    struct etudiant vidal;
    strcpy(vidal.prenom, "Thomas");
    strcpy(vidal.nom, "Vidal");
    strcpy(vidal.adresse, "Lyon en coloc");
    vidal.notes[0] = 19;
    vidal.notes[1] = 20;

    struct etudiant gounon;
    strcpy(gounon.prenom, "Loann");
    strcpy(gounon.nom, "Gounon");
    strcpy(gounon.adresse, "Lyon en coloc");
    gounon.notes[0] = 16;
    gounon.notes[1] = 17;


    struct etudiant decorme;
    strcpy(decorme.prenom, "Clément");
    strcpy(decorme.nom, "Decorme");
    strcpy(decorme.adresse, "Lyon en coloc");
    decorme.notes[0] = 12;
    decorme.notes[1] = 13;

    struct etudiant blache;
    strcpy(blache.prenom, "anael");
    strcpy(blache.nom, "Blache");
    strcpy(blache.adresse, "Lyon en coloc");
    blache.notes[0] = 9;
    blache.notes[1] = 10;

    struct etudiant rosier;
    strcpy(rosier.prenom, "Théo");
    strcpy(rosier.nom, "Rosier");
    strcpy(rosier.adresse, "Lyon vers l'ITII");
    rosier.notes[0] = 2;
    rosier.notes[1] = 3;

    struct etudiant liste[5];
    liste[0]=vidal;
    liste[1]=gounon;
    liste[2]=blache;
    liste[3]=rosier;
    liste[4]=decorme;

    for(i = 0; i<4; i++){
        printf("Nom : %s, prénom : %s,adresse : %s, note de proggramation en C: %d, note de système d'explotation %d \n",liste[i].prenom,liste[i].nom,liste[i].adresse,liste[i].notes[0],liste[i].notes[1]);
    }
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