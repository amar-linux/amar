#include<stdio.h>


int main(){
    unsigned int a= 0x11223344;

    int res = ((a & 0xff000000)>> 24)    |
              ((a & 0xff0000) >> 8)  |
              ((a & 0xff00) << 8)|
              ((a & 0xff) << 24);
    printf ("%x\n",res);






}
