#include<stdio.h>


void use(int* a, int* b, int* restrict c){

    *a += *c;
    // in case c is a restrict variable 
    // compiler will not reload value at c 
    // in its assemply code 
    // therefore generated assembly code is 
    // optimized.
    *b += *c;
}


int main(){

    int a=50; 
    int b=60;
    int c=70;

    use (&a, &b, &c);
    printf ("the value is %d, %d, %d\n",a,b,c);
}
