/*
### Exercice 2.6 [★★]

Écrivez un programme *etudiant2.c* pour la gestion de données
étudiant.e.es (5 étudiant.e.es) en utilisant struct. Les détails pour
chaque étudiant.e restent les mêmes comme pour l'exercice précédente
(nom, prénom etc.). Vous pouvez utiliser strcpy pour initialiser les
noms, prénoms etc.
*/
#include <stdio.h>
#include <string.h>

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
