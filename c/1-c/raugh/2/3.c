#include<stdio.h>

int main(){

    int arr[]= {1,3,4,5,6,7,9};
    int *ptr1 = &arr[2];
    int *ptr2 = &arr[1];
    int size = (char*)ptr1 - (char*)ptr2;
    printf ("size is =%d\n", size);
}
