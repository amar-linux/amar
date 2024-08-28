#include<stdio.h>
#include<string.h>



int main(){

    int a = 0x123456;
    char c[9] = {0};
    int result = a;
    int i=0;
    int x =0;
    int len=0;

    while (result){
        len++;
        result = result >> 4;
    }
    result = a;


    while (result){
        printf ("in while\n");
    //    printf ("%x", (0xf << 20));
        x = ((0xf  & result));
        printf ("x = %x\n",x);
        c[i] = x + '0';
        result = result >> 4;
        printf ("Result = %x\n", result);
        printf ("\n");
        i++;

    }
    printf ("%s\n",c);

    
}
