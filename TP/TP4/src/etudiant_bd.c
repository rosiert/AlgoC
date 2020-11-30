/*
#### Exercice 4.3 [★★]

 
En réutilisant le code de l'*etudiant2.c* (TP2) et *fichier.c*, écrivez
un fichier *etudiant_bd.c* qui sauvegarde les noms, prénoms, adresses,
et les notes dans un fichier etudiant.txt pour 5 étudiant(e)s (une ligne
pour chaque étudiant(e)). Testez votre code. Cette fois, vous demanderez
à l'utilisateur en utilisant scanf pour les détails de chaque étudiant.
Par exemple, etudiant.txt

```               
Dupont, Pierre, Boulevard du 11 novembre 1918, Villeurbanne, 20,30                ...             
```
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    struct etudiant {
    char prenom[20];
    char nom[20];
    char adresse[50];
    int notes[2];
    };
    
    //variable
    int i,c,notec,notesys;
    FILE * fp;
    char *message;
    char nom1[20], prenom1[20], adresse1[20];

    struct etudiant etudiant1;
    struct etudiant etudiant2;
    struct etudiant etudiant3;
    struct etudiant etudiant4;
    struct etudiant etudiant5;

    struct etudiant liste[5];
    liste[0]=etudiant1;
    liste[1]=etudiant2;
    liste[2]=etudiant3;
    liste[3]=etudiant4;
    liste[4]=etudiant5;

    for (i=0 ; i<5; i++){
       printf("Veuillez saisir le nom de l'étudiant %d, le prénom de l'étudiant, l'adresse et ses notes en C et en AdmSys : ", i);
       scanf("%s %s %s %d %d",nom1,prenom1,adresse1,&liste[i].notes[0],&liste[i].notes[1]);
       strcpy(liste[i].nom, nom1);
       strcpy(liste[i].prenom, prenom1);
       strcpy(liste[i].adresse, adresse1);       
    }

    //Fichier
    fp = fopen ("etudiant.txt", "w+");
    if (fp != NULL){
        for(i = 0; i<5; i++){ 
        fprintf(fp, "%s, %s, adr : %s, %d, %d \n",liste[i].prenom,liste[i].nom,liste[i].adresse,liste[i].notes[0],liste[i].notes[1]);
        }    
    }
    else{
        printf("Le fichier ne peut pas être ouvert ! \n");
    } 
    fclose(fp);
    
    //Affichage
    fp = fopen ("etudiant.txt", "r");
    if (fp != NULL){
        while(!feof(fp)) {
            c = fgetc(fp);
            printf("%c", c);
        }
        printf("\n");
    }
    else{
        printf("Le fichier ne peut pas être ouvert ! \n");
    }
    fclose(fp);
}




