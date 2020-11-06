/*
#### Exercice 2.2 [★]


Considérez un entier d (**int d ;**). Écrivez le code *bits.c* qui
vérifie si les 4eme et 20eme bits de **gauche** sont 1 (en binaire). Si
les deux bits sont 1, il affiche 1 sinon 0.
*/

#include <stdio.h>

int main(){
    int d =13;
    void *dptr = &d;
    printf("valeur de d : %d \n",d);
    printf("adresse de d : %p \n",dptr);

}