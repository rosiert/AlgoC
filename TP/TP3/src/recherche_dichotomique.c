/*
#### Exercice 3.5 [★★]


Regardez l'article sur la recherche dichotomique:
<https://fr.wikipedia.org/wiki/Recherche_dichotomique>. Écrivez un
programme *recherche_dichotomique.c* en créant un tableau de 100
entiers et puis en cherchant un entier dans le tableau déjà tri en ordre
croissant. Si l'entier est présent dans le tableau, affichez le message
'entier présent'.

//déclarations
 début, fin, val, mil, N : Entiers
 t : Tableau [0..N] d'entiers classé
 trouvé : Booléen
 
//initialisation
 début ← 0 
 fin ← N
 trouvé ← faux
 Saisir val

//Boucle de recherche
 // La condition début inférieur ou égal à fin permet d'éviter de faire
 // une boucle infinie si 'val' n'existe pas dans le tableau.
  Tant que trouvé != vrai et début <= fin:
      mil ← partie_entière((début + fin)/2)
      si t[mil] == val:
         trouvé ← vrai
      sinon:
         si val > t[mil]:
            début ← mil+1
         sinon:
            fin ← mil-1
 //Affichage du résultat
  Si trouvé == vrai:
      Afficher "La valeur ", val , " est au rang ", mil
  Sinon:
      Afficher "La valeur ", val , " n'est pas dans le tableau"
*/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int my_rand (void);

int main(){
    int tableau[100],i,k,j,c, nb,mil;
    int deb = 0;
    int fin = 99;
    int trouve = 0;
    int compteur = 0;

    srand (time (NULL));
    for (i=0; i<100; i++){
        tableau[i] = my_rand();
    }
    printf("Création d'un tableau d'entiers aléatoires compris entre 1 et 1000 \n");

    for(j=1;j<=100;j++) // pour faire l'operation N fois
        for(k=0;k<100-1;k++)
            if ( tableau[k] > tableau[k+1] ) {
                    c = tableau[k];
                    tableau[k] = tableau[k+1];
                    tableau[k+1] = c;
            }        
    printf("Tri du tableau dans l'ordre Croisant...\n");

    printf("merci de saisir un entier entre 1 et 1000 à chercher : ");
    scanf("%d",&nb);

    
    while(trouve != 1 && compteur < 100){
        mil = (deb +fin)/2;
        if (tableau[mil] == nb){
            trouve = 1;
            printf("Le nombre est présent !\n");
        }
        else if(nb > tableau[mil]){
            deb = mil+1;
        }
        else{
            fin = mil -1;
        }
        compteur +=1;
    }
    if(trouve == 0){
        printf("Le nombre n'est pas présent !\n");
    }
}

int my_rand (void){
    int n;
    n = rand() % 1000 + 1;
    return n;
}