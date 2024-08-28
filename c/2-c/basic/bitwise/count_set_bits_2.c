#include<stdio.h>


int main(){

    unsigned int n =0;
    unsigned int countbits =0;

    printf ("Enter the number: ");
    sscnaf("%d",&n);

    while (n){
        n = n&(n-1);
        countbits++;
    }
}
