/*
#### Exercice 2.5 [★★]


Imaginez que vous gérez les notes de cinq étudiant.e.es. En utilisant
seulement des tableaux, écrivez un programme *etudiant.c* qui déclare,
initialise et affiche les détails de ces cinq étudiant.e.es. Pour chaque
étudiant.e, on est intéressé par son nom, son prénom, son adresse, et
ses notes dans 2 modules (Programmation en C, Système d'exploitation).
*/
#include <stdio.h>

int main(){
    int i,j;

    // Initialisation du tableau
    char nom[10][40]= {"rosier","blache","vidal","gounon","decorme"};
    char prenom[10][40]= {"theo","anael","thomas","loann","clément"};
    char addr[10][100]= {"26260 St Donat","69100 Villeurbanne","69000 Lyon","69000 Lyon","69000 Lyon"};
    float note[10][10]= {{12.5,17.3},
                        {13.5,18.3},
                        {10,15},
                        {8,12.2},
                        {11.1,14}};

    // Affichage de ses valeurs pour vérifier
    for (i = 0 ; i < 4 ; i++)
    {
        printf("Nom : %s, prénom : %s, adresse : %s",nom[i],prenom[i],addr[i]);
        //for (j = 0 ; j < 2 ; j++){}
        printf(", note de programmation en C: %f, note de système d'exploitation : %f \n",note[i][0],note[i][1]);
        /*
        printf("%s\n", nom[i]);
        printf("%s\n", prenom[i]);
        printf("%s\n", addr[i]);
        */
    }
}