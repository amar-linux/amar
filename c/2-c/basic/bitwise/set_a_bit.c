#include<stdio.h>

int main(){

    int num = 67; // 0b 0100 0011
    int bit;

    printf ("Position 2 has ");
    if ((bit =(num &(1 << 1 )))){
        printf("bit set\n");

    }else{
        printf("bit not set\n");
    }
    printf ("Position 4 has ");
    if ((bit =(num &(1 << 4)))){
        printf("bit set\n");

    }else{
        printf("bit not set\n");
    }
}
