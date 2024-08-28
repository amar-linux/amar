#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>


int main(){

    char *ptr1 = sbrk(0);
    char *ptr2 = sbrk(4096);
    char *ptr3 = sbrk(0);
    int *ptr = (int*) ptr3+1;  // this will cause segfault.
    *ptr =4;


    printf ("First: %p\n", ptr1);
    printf ("Second: %p\n", ptr2);
    printf ("Third: %p\n", ptr3);
}


