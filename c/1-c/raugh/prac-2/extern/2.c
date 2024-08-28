#include<stdio.h>
#include"1.h"


int main(){
    
int multiplier;
    int a=5;
    int b= 6;
    int result  = sum(a,b);
    result = result * multiplier; //22
    printf ("Sum called:");
    printf ("result(22) = %d and exvar=%d\n", result, result);
}
