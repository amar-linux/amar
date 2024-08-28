#include<stdio.h>

int main(){
    int arr[]={1,2,3,4,5};

    printf ("arr is %x\n",arr);
    printf ("*arr is %x\n",arr);
    printf ("*(*arr) is %x\n",*(arr));
}
