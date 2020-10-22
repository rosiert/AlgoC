#include <stdio.h>
#include <limits.h>
#include <float.h>


int main(){
    //Signed
    printf("========= Signed =========\n");
    printf("char %d %d \n", CHAR_MIN, CHAR_MAX);
    printf("short %hd %hd \n", SHRT_MIN, SHRT_MAX);
    printf("int %i %i \n",INT_MIN,INT_MAX);
    printf("long int %li %li \n",LONG_MIN, LONG_MAX);
    printf("long long int %lli  %lli \n", LLONG_MIN, LLONG_MAX);
    printf("float %f %f \n",FLT_MIN,FLT_MAX);
    printf("double %g %g \n",DBL_MIN, DBL_MAX);
    printf("long double %Lg %Lg \n",LDBL_MIN, LDBL_MAX);
    //Unsigned
    printf("========= Unsigned =========\n");
    printf("unsigned char %d %d \n", 0, UCHAR_MAX);
    printf("unsigned short %u %hu \n", 0, USHRT_MAX);
    printf("unsigned int %u %u \n",0,UINT_MAX);
    printf("unsigned long int %u %lu \n",0, ULONG_MAX);
    printf("unsigned long long int %u  %llu \n", 0, ULLONG_MAX);
}