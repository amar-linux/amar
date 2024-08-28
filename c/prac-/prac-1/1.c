#include<stdio.h>
#include<stdint.h>

int main(){

    unsigned int  value = 0x11223344;
    unsigned int  converted = 0;

    unsigned int res1 = (value & 0xFF000000) >> 24;
    unsigned int res2 = (value & 0x00FF0000) >>  8;
    unsigned int res3 = (value & 0x0000FF00) << 8;
    unsigned int res4 = (value & 0x000000FF) << 24;



    converted = (res1 | res2 | res3 | res4);
    
    printf ("%x\n", converted);

}



