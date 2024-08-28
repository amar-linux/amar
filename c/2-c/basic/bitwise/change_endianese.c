#include<stdio.h>
#include<stdint.h>


unsigned int change_endianese(uint32_t value){
    uint32_t num =0;

    num |= ((value & 0xff000000) >> 24);
    num |= ((value & 0x00ff0000) >> 8);
    num |= ((value & 0x0000ff00) << 8);
    num |= ((value & 0x000000ff) << 24);

    return num;
}

int main(){

    uint32_t a = 0x11223344;
    uint32_t c = change_endianese(a);
    printf ("%x\n",c);
}
