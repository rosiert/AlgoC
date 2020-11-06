/*
#### Exercice 2.1 [★]


Écrivez le code *puissance.c* qui prend deux entiers **a** et **b** et
qui affiche la valeur du nombre **a** élevé à une puissance **b**. Par
exemple, puissance(2,3) affiche la valeur 8. N'utilisez pas la fonction
*pow()* (math.h).
*/

#include <stdio.h>

int puissance(int num1,int num2){
    int resultat = 1;
    int compteur = 0;

    while(compteur < num2){
        resultat=resultat*num1;
        compteur++;
    }
    printf("%d à la puissance %d = %d \n",num1,num2,resultat);
    return resultat;
}

int main(){
    puissance(2,4);
}
