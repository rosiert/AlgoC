/*
#### Exercice 3.3 [★★]


Écrivez un programme *tri.c* en créant d'abord un tableau de 100
entiers, puis en les triant par ordre croissant.
*/
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int my_rand (void);

int main(){
    int tableau[100],i;

    srand (time (NULL));
    for (i=0; i<100; i++){
        tableau[i] = my_rand();
    }
    printf("Création d'un tableau d'entiers aléatoires compris entre 1 et 1000 \n");
    int k,j,c;

    for(j=1;j<=100;j++) // pour faire l'operation N fois
        for(k=0;k<100-1;k++)
            if ( tableau[k] > tableau[k+1] ) {
                    c = tableau[k];
                    tableau[k] = tableau[k+1];
                    tableau[k+1] = c;
            }        
    printf("Tri du tableau dans l'ordre Croisant...\n");
    for(i=0; i<100; i++){
        printf("%d \n",tableau[i]);
    }
}

int my_rand (void){
    int n;
    n = rand() % 1000 + 1;
    return n;
}