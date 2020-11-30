/*
#### Exercice 4.4 [★★]

 
En réutilisant le code de l'*operator.c* (voir ci-dessus), créer une
commande calcule (fichier: *calcule.c*) qui utilise l'interface en
ligne de commande. Il y a trois options pour cette commande: opérateur
(+, -, *, /, %, &, |, ~), numéro un et numéro deux. Par exemple, si
l'utilisateur écrit

```              $ calcule ‘*’ 23 40             ```

Vous devez afficher le produit de ces deux numéros. Testez votre code.
*/
#include <stdio.h>
#include <stdlib.h>

//prototypes
int ope(int num1,int num2,char op);
int somme(int num1,int num2);
int difference(int num1,int num2);
int quotient(int num1,int num2);
int produit(int num1,int num2);
int modulo(int num1,int num2);
int ou(int num1,int num2);
int et(int num1,int num2);
int negation(int num1);

int main(int argc, char **argv){
    char op=*argv[1];
    int num1 = (int)*argv[2]-48;//in ASCII code, the numbers (digits) start from 48
    int num2 = (int)*argv[3]-48;//the character '0' has the ASCII code of 48
    int res=ope(num1,num2,op);
    printf("%d \n",res);
}

int ope(int num1,int num2,char op){
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
        return negation(num1);
        break;

    }
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