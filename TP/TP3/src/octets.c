/*
#### Exercice 3.6 [★★]


Écrivez un programme en créant le fichier *octets.c* et utilisant char
* et les opérateurs de pointeurs pour voir les octets d'une variable
short, int, long int, float, double et long double.
*/
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
    int i =13;
    void *iptr = &i;
    printf("valeur de i : %d \n",i);
    printf("adresse de i : %p \n",iptr);

    short s=1;
    void *sptr = &s;
    printf("valeur de s : %hd \n",s);
    printf("adresse de s : %p \n",sptr);

    long int li=1547875;
    void *liptr = &li;
    printf("valeur de li : %ld \n",li);
    printf("adresse de li : %p \n",liptr);

    float f=145.2;
    void *fptr = &f;
    printf("valeur de f : %f \n",f);
    printf("adresse de f : %p \n",fptr);

    double d=145.274588;
    void *dptr = &d;
    printf("valeur de d : %g \n",d);
    printf("adresse de d : %p \n",dptr);

    long double ld=145.21485148;
    void *ldptr = &ld;
    printf("valeur de ld : %Lg \n",ld);
    printf("adresse de ld : %p \n",ldptr);

    printf("on peut se rendre compte que toutes les adresses sont codées sur 8octets car nous sommes sur une machine 64bits\n");
    printf("cela dépend donc de la machine");
}
