#include<stdio.h>

extern int* ptr;

void change (){
    printf ("in change ...\n");
    static int a;
    a =5;
    ptr = &a;

}
