#include<stdio.h>


#define CHAR_BITS 8 // size of character 
#define INT_BITS (sizeof(int)* CHAR_BITS)

unsigned int reverse_the_bits(unsigned int num){
    unsigned int iloop;
    unsigned int tmp =0;
    int  nloop = INT_BITS;


    for (; iloop < nloop ; ++iloop){
        if ( num & (1 << iloop) ){ // check set bit of number
            tmp |= 1 << ((INT_BITS - 1)- iloop);

        } 
    }
    return tmp;
}


int main (){

    unsigned int a = 34;
    unsigned b = reverse_the_bits(a);
    printf ("the reversed value is %d\n",b);
}
