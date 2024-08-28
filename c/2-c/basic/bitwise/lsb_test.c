#include<stdio.h>
#include<stdint.h>

int main(){

    uint32_t a = 0x11223344;
    uint32_t res = a & 0xff;
    printf ("%x",res);
}
