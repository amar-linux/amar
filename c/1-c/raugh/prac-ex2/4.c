#include<stdio.h>


int main(){

    int (*ptr)[5];
    int b[5]={1,2,3,4,5};
    ptr = &b;
    for (int i=0; i<5; i++){
        printf ("%d, ", *(*ptr+i));
    }
}
