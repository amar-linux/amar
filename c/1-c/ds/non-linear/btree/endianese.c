#include<stdio.h>
#include<stdlib.h>


int main(){

    int a = 0x11111111;
    char c = a;
    printf ("%c\n", c);
    a = 0x00000011;
    c = a;
    printf ("%c\n", c);
}
