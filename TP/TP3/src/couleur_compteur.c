/*
Exercice 3.7 ★★★
En réutilisant le code de couleurs.c, écrivez un programme couleur_compteur.c avec un tableau de 100 couleurs. 
Par exemple, si le tableau contient les couleurs suivantes:

0xff 0x23 0x23 0x45
0xff 0x00 0x23 0x12
0xff 0x23 0x23 0x45

Vous devez afficher

0xff 0x23 0x23 0x45 2
0xff 0x00 0x23 0x12 1
*/

#include<stdio.h>
int main (){
struct RGBA {
    unsigned char R;
    unsigned char V;
    unsigned char B; // Un octet ?
    unsigned char A;
};

int j,i,k;
k=1;

struct RGBA silver;
silver.R = 0xc0;
silver.V = 0xc0;
silver.B = 0xc0;
silver.A = 0xff;

struct RGBA red;
red.R = 0xff;
red.V = 0x00;
red.B = 0x00;
red.A = 0x22;

struct RGBA blue;
blue.R = 0x00;
blue.V = 0x00;
blue.B = 0xff;
blue.A = 0xff;

struct RGBA green;
green.R = 0x00;
green.V = 0xff;
green.B = 0x00;
green.A = 0xff;

struct RGBA tableau[10]; //tableau de structure

for(i=0; i<100; i++){
    if( i <= 10 )tableau[i] = silver;
    if( i >10 && i<=40)tableau[i] = red;
    if( i >40 && i<=60)tableau[i] = green;
    if( i >60 && i<=99)tableau[i] = blue;
}
for(j=0; j<100; j++){
printf("0x%02x 0x%02x 0x%02x 0x%02x %i\n", tableau[j].R, tableau[j].V ,tableau[j].B ,tableau[j].A, k);
k++;
}
}
