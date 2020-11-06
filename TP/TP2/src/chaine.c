/*#### Exercice 2.4 [★★]


Sans utiliser les bibliothèques standards ou externes (par exemple
string.h), écrivez le code *chaine.c* qui

1.  calcule le nombre de caractères dans une chaine de caractères
2.  copie une chaine de caractères dans une autre chaine de caractère
3.  concatène deux chaines de caractères
*/

#include <stdio.h>
int main()
{
    char str[100],i,j,newstr[100],cstr[100];
    printf("Entrer une chaine : \n");
    scanf("%s",str);

    // '\0' represents end of String
    for(i=0; str[i]!='\0'; ++i){
        newstr[i]=str[i];
        cstr[i]=str[i];
    }
    printf("La longueur de la chaine entrée est : %d \n",i);
    printf("la nouvelle chaine est : %s \n",newstr);

    for(j=0; str[j]!='\0'; ++j, i++){
        cstr[i]=newstr[j];
    }
    printf("les deux chaines concatenées sont : %s \n",cstr);

    
    return 0;
}


