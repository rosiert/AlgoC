/*
#### Exercice 3.2 [★]


Codez en C un programme *grand_petit.c* qui créer un tableau de 100
entiers et calculer

-   a) Le numéro plus grand
-   b) Le numéro plus petit

N'utilisez pas scanf.
*/
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int my_rand (void);


int main (){
    int i, min, max;
    srand (time (NULL));
    int tableau[100];
    for (i=0; i<100; i++){
        tableau[i] = my_rand();
    }
    printf("Création d'un tableau d'entiers aléatoires compris entre 1 et 100 \n");

   min = tableau[0];
   max = tableau[0];
   for (i=0; i<100; i++){
       if (tableau[i] < min)min = tableau[i];
       if (tableau[i] > max)max = tableau[i];
    }
printf("Le minimum est de : %d et le maximum est de : %d", min, max);
}

int my_rand (void){
    int n;
    n = rand() % 1000 + 1;
    return n;
}


