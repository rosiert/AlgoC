/*
#### Exercice 2.3 [★]


La suite de Fibonacci est une suite d'entiers définie comme suit :

-   U0=1
-   U1=1
-   Un= Un-1 + Un-2

Écrivez le code *fibonacci.c* qui affiche les n termes de la suite de
Fibonacci U0, U1, U2,...Un.
*/
#include <stdio.h>
 
int main()
{
  int n, nbr1 = 0, nbr2 = 1, terme, i;
 
  printf("Entrez le nombre de termes\n");
  scanf("%d", &n);
 
  printf("Les %d premiers termes de la série de Fibonacci sont:\n", n);
 
  for (i = 0; i < n; i++)
  {
    if (i <= 1)
      terme = i;
    else
    {
      terme = nbr1 + nbr2;
      nbr1 = nbr2;
      nbr2 = terme;
    }
    printf("%d\n", terme);
  }
 
  return 0;
}