/*
#### Exercice 3.4 [★★]


Écrivez un programme *chercher.c* en créant un tableau de 100 entiers et
puis en cherchant un entier dans ce tableau. Si l'entier est présent
dans le tableau, affichez le message 'entier présent'.
*/
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int my_rand (void);

int main(){
    int tableau[100],i,j,n,trouve;

    srand (time (NULL));
    for (i=0; i<100; i++){
        tableau[i] = my_rand();
    }
    trouve = 1;
    j=0;
    printf("Merci de saisir un entier compris entre 1 et 1000 : ");
    scanf("%d", &n);
    printf("%d est en train d'être cherché...\n", n);
    
    while(trouve){
        if (tableau[j]==n){
            printf("Le nombre est la ! \n");
            trouve = 0;
        }
        else if (j == 100){
            trouve = 0;
            printf("Le nombre n'est pas la !\n");
        }
        j += 1;
    }
}

int my_rand (void){
    int entier;
    entier = rand() % 1000 + 1;
    return entier;
}