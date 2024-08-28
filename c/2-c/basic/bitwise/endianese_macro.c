#include<stdio.h>
#include<stdint.h>

#define SWAP_ENDIANESE(data) ((data & 0xff) << 24)\
    | ((data & 0x0000ff00) << 8)\
    | ((data & 0x00ff0000) >> 8)\
    | ((data & 0xff000000) >> 24)

int main(){

    uint32_t data = 0x11223344;
    uint32_t result =0;

    result = SWAP_ENDIANESE(data);

    printf ("Reult is %x\n",result);



}


// 0xff will be stored as 
// 00 00 00 ff  // ff being lsb is stored in the bit 
// int 0x11223344   44 is lsb 
// 44 & ff  both being lsb the o/p is 44.
