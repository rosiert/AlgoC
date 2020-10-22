#include <stdio.h>
#include <limits.h>
#include <float.h>


int main(){
    char a = 1;
    short sh = 2;
    int entier = 3;
    long int lg_ent = 356;
    long long int lg_lg_ent = 15624862;
    float fl = 3.14;
    double dbl = 3654876269;
    long double lg_dbl = 3.4e148;

    printf("========= Signed =========\n");
    printf("char %d \n", a);
    printf("char %c \n", a);
    printf("short %hd \n", sh);
    printf("int %i \n", entier);
    printf("long int %li \n", lg_ent);
    printf("long long int  %lli \n", lg_lg_ent);
    printf("float %f \n", fl);
    printf("double %g \n", dbl);
    printf("long double %Lg \n", lg_dbl);

    printf("========= Unsigned =========\n");
    printf("char %u \n", a);
    printf("char %hhu \n", a);
    printf("short %hu \n", sh);
    printf("int %u \n", entier);
    printf("long int %lu \n", lg_ent);
    printf("long long int  %llu \n", lg_lg_ent);
}