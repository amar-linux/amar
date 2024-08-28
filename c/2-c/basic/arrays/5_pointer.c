#include<stdio.h>


int main(){
    int arr[2]= {10,20};
    int *ptr = arr;
    int *ptr2 = arr+1;

    char* cptr = (char*)ptr;
    char* cptr2 = (char*)ptr2;

    int size = cptr2 - cptr;

    printf ("size is %d\n", size);
    size = (char*)(arr) -(char*)(arr +1);
    printf ("size is %d\n", size);
}
