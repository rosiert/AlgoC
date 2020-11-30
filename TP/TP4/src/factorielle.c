/*
#### Exercice 4.5 [★★]

 
Une fonction récursive est une fonction qui s'appelle elle-même. Par
exemple, la fonction suivante calcule la factorielle d'un entier
naturel.
```                
int factorielle (int num) {
  if (num == 0) {
    return 1;
  }
  else {
    return (num * factorielle (num-1));
  }
}
```
Écrivez le code *factorielle.c* et testez la fonction factorielle avec
différents entiers naturels.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int factorielle(int valeur)
{
   if (valeur == 0){
       return 1;
   }
   else{
       return valeur * factorielle(valeur - 1);
   }      
}

int main(){
    printf("La factorielle de %d est : %d \n",5,factorielle(5));
    printf("La factorielle de %d est : %d \n",10,factorielle(10));
}