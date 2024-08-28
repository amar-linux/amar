#include<stdio.h>


int main(){

    int a = 0x45678;
    int b = ((0x45678 & 0xf0000));
    int c = ((a & 0xf0000));


    printf ("b = %x and c= %x \n", b,c);
}
