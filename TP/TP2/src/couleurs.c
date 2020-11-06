/*
#### Exercice 2.7 [★★]


Une couleur en format RGBA contient 4 valeurs : rouge (R), vert (G),
bleu (B) et alpha (A). Chaque valeur est un octet. Créez un programme
*couleurs.c* en utilisant struct. Ensuite, créer et initialiser un
tableau de 10 couleurs. Pensez à initialiser les coleurs en notation
hexadécimale (r : 0xef, g : 0x78 etc.).
*/
#include<stdio.h>
int main (){
struct RGBA {
    short R;
    short V;
    short B; // Un octet ?
    float A;
};

int j,i;
float alpha;


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

for(i=0; i<10; i++){
    if( i <= 2 )tableau[i] = silver;
    if( i >2 && i<=4)tableau[i] = red;
    if( i >4 && i<=6)tableau[i] = green;
    if( i >6 && i<=9)tableau[i] = blue;
}
for(j=0; j<10; j++){
alpha=tableau[j].A / 255;
printf("La couleur n°%d est composé de rouge : %hi, de vert : %hi, de bleu : %hi et son alpha est de : %f \n", j + 1 ,tableau[j].R,tableau[j].V,tableau[j].B,alpha);
}
}