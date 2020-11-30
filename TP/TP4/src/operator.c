/*
#### Exercice 4.1 [★]

 
En réutilisant le code de l'*operators2.c* (TP1), écrivez un programme
en créant deux fichiers *operator.h* et *operator.c*. Dans *operator.h*,
déclarez les fonctions suivantes : somme, différence, produit, quotient,
modulo, 'et', ou et négation qui utilisent deux variables num1
(entier), num2 (entier). Implémentez ces fonctions dans *operator.c*.
Pour l'opérateur négation, utilisez seulement un numéro. Considérez une
variable op qui contient un de ces différents opérateurs. (+, -, *, /,
%, &, |, ~). Utilisez switch et réutilisez le code de votre TP2, mais
cette fois, si op est égal à '+', le programme doit appeler la fonction
'somme' etc. Testez votre programme avec différentes valeurs de num1,
num2, op.
*/
#include <stdio.h>
#include "operator.h"

int ope(int num1,int num2,char op){
    int a;
    switch(op)
    {
        case '+':
        return somme(num1,num2);
        break;

        case '-':
        return difference(num1,num2);
        break;

        case '/':
        return quotient(num1,num2);
        break;

        case '*':
        return produit(num1,num2);
        break;

        case '%':
        return modulo(num1,num2);
        break;

        case '&':
        return et(num1,num2);
        break;

        case '|':
        return ou(num1,num2);
        break;

        case '~':
        a = -num1;
        return negation(num1);
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

int somme(int num1,int num2){
    int a;
    a=num1+num2;
    return a;
}
int difference(int num1,int num2){
    int a;
    a = num1 - num2 ;
    return a;
}
int quotient(int num1,int num2){
    int a;
    a=num1/num2;
    return a;
}
int produit(int num1,int num2){
    int a;
    a = num1 * num2 ;
    return a;
}
int modulo(int num1,int num2){
    int a;
    a = num1 % num2;
    return a;
}
int ou(int num1,int num2){
    int a;
    a = num1 | num2 ;
    return a;
}
int et(int num1,int num2){
    int a;
    a = num1 & num2 ;
    return a;
}
int negation(int num1){
    int a;
    a = -num1;
    return a;
}