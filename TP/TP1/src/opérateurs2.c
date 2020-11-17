/*
Ecrivez un programme *opérateurs2.c* qui utilise trois variables

1.  **num1** (entier)
2.  **num2** (entier)
3.  **op** (un caractère)

La variable **op** contient un de ces différents opérateurs. (+, -, \*,
/, %, &, |, ~). Utilisez **switch** et réutilisez le code de votre
premier exercice. Si c est égal à '+', le programme fait l'addition de
deux variables **num1** et **num2**, si **op** est égal à '&', le
programme fait l'opération ET etc. Rappelez-vous bien que l'on ne peut
pas utiliser chaine de caractères comme condition en **switch**. Testez
votre programme avec différents valeurs de **num1**, num2, **op**
*/
#include <stdio.h>

int ope(int num1,int num2,char op){
    int a;

    switch(op)
    {
        case '+':
        a = num1 + num2 ;
        return a;
        break;

        case '-':
        a = num1 - num2 ;
        return a;
        break;

        case '/':
        a = num1 / num2 ;
        return a;
        break;

        case '*':
        a = num1 * num2 ;
        return a;
        break;

        case '%':
        a = num1 % num2;
        return a;
        break;

        case '&':
        a = num1 & num2 ;
        return a;
        break;

        case '|':
        a = num1 | num2 ;
        return a;
        break;

        case '~':
        a = -num1;
        return a;
        break;

    }
}


int main(){
    printf("+ %d \n",ope(3,5,'+'));
    printf("- %d \n",ope(3,5,'-'));
    printf("/ %d \n",ope(3,5,'/'));
    printf("* %d \n",ope(3,5,'*'));
    printf("& %d \n",ope(3,5,'&'));
    printf("%d \n",ope(3,5,'%'));
    printf("| %d \n",ope(3,5,'|'));
    printf("~ %d \n",ope(3,3,'~'));

}