#include <stdio.h>

/*
Version with FOR

int main(){
    int line, i, j;
    printf("Entrez le nombre de ligne : ");
    scanf("%d", &line);
    for (i = 1; i<= line; ++i){
        if (i==line){
            for(j=1; j<= i; ++j){
               printf("* "); 
            }
        }
        else {
            for(j=1; j<= i; ++j){
                if(j==1 || j==i){
                printf("* "); 
                }
                else{
                    printf("# ");
                }
            }
        printf("\n");
        }
    }
printf("\n");
}
*/

//Version with WHILE

int main(){
    int line, i=1, j;
    printf("Entrez le nombre de ligne : ");
    scanf("%d", &line);
    while (i<=line){
        if (i==line){
            j=1;
            while (j<=i){
               printf("* ");
               ++j; 
            }
        }
        else {
            j=1;
            while (j<=i){
                if(j==1 || j==i){
                printf("* "); 
                }
                else{
                    printf("# ");
                }
             ++j;
            }
        printf("\n");
        }
        ++i;
    }
printf("\n");
}