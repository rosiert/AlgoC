#include <stdio.h>

//Divisible par 2 et 15
int main(){
    int i;
    printf("Divisible par 2 et 15\n");
    for(i=0;i<=1000;++i){
        if(i%15 == 0 && i%2 == 0){
            printf("%d \n",i);
        }
    }

//Divisble par 103 ou 107
    printf("Divisble par 103 ou 107\n");
    for(i=0;i<=1000;++i){
        if(i%103 == 0 || i%107 == 0){
            printf("%d \n",i);
        }
    }

//Divisible par 7 ou 5 mais pas par 3
    printf("Divisible par 7 ou 5 mais pas par 3\n");
        for(i=0;i<=1000;++i){
            if(i%7 == 0 || i%5 == 0){
                if(i%3 !=0){
                    printf("%d \n",i);
                }
            }
        }
}