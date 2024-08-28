#include<stdio.h>

int sum(int a, int b){
    extern int multiplier;
    multiplier = 2;
    printf ("......in sum\n");
    int sum = a+b;
    return sum;
}
