#include<stdio.h>


int main(){

    unsigned int num = 11223344;
    int divisor = num;
    int result =0;
    int remainder;


    while (divisor){
        remainder = divisor % 100;
        divisor = divisor/100;
        result =  (result* 100)+ remainder;


    }
    printf ("%d\n", result);
}
