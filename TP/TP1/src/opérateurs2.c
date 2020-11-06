#include <stdio.h>


float ope(float num1,float num2,char op){
    float a;

    switch(op)
    {
        case "+":
        a = num1 + num2 ;
        return a;
        break;
    }
}

int main(){
    ope(3,5,"+");
}