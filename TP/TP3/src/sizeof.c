/*Vous êtes sur une machine de 64 bits et vous utilisez également un système d’exploitation 64 bits. Testez le code suivant. 
Quelle est la valeur renvoyée par chacunedes lignes suivantes ?
1. sizeof (int)
2. sizeof (int *)
3. sizeof (int **)
4. sizeof (char *)
5. sizeof (char **)
6. sizeof (char ***)
7. sizeof (float *)
8. sizeof (float **)
9. sizeof (float ***) */

#include <stdio.h>

int main(){
    printf("%ld \n",sizeof (int));
    printf("%ld \n",sizeof (int *));
    printf("%ld \n",sizeof (int **));
    printf("%ld \n",sizeof (char *));
    printf("%ld \n",sizeof (char **));
    printf("%ld \n",sizeof (char ***));
    printf("%ld \n",sizeof (float *));
    printf("%ld \n",sizeof (float **));
    printf("%ld \n",sizeof (float ***));
}