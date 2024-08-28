#include<stdio.h>
#include<stdint.h>


uint32_t change_indianese(int value){

    uint32_t result =0;
/*
    result |= (value & 0xff000000) >> 24;
    result |= (value & 0x00ff0000) >> 8;
    result |= (value & 0x0000ff00) << 8;
    result |= (value & 0x000000ff) << 24;
*/
    result = ((value & 0xff))
    return result;

}


int main (){
    uint32_t a= 0x11223344;
    uint32_t result;

    result = change_indianese(a);
    printf ("%.2x\n", result);
}
