/*
 0001 1010 1011
 0001 1010 1011

 0001 1010 1010

 0001 1010 1010
 0001 1010 1100

 0001 1010 1000
 0001 1011 0000
 0001 1011 0000
 */

#include<stdio.h>

int main(){
    int n =0b000110101011;

    int countbits =0;
    while (n){
        n &=(n-1);
        countbits++;
    }
    printf ("%d\n", countbits);
}
