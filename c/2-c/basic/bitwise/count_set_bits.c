#include<stdio.h>

int main(){


    int num;
    int countbits =0;
    printf ("Entre the number: ");
    scanf("%d", &num);

    while(num){

        countbits += (num & 1);
        num = (num >> 1);
    }
    printf ("Countbits = %d\n", countbits);
}
