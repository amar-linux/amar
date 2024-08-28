#include<stdio.h>



int main(){
    unsigned int a= 0x12345678;
    unsigned int result = 0x0;
    int x;

    x = ((0xf & a));
    printf ("%x\n",x);

    result |= ((a & 0xff000000)>>24 );
    printf ("result = %x",result);
    result |= ((a & 0xff0000) >> 8);
    result |= ((a & 0xff00) << 8);
    result |= ((a & 0xff) << 24);


    printf("result = %x\n", result);

    
}
