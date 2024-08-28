#include<stdio.h>


int main(){

    int arr[]= {4,5,2,3,8,4,8,9,1,5};

    int size=0;
// this will give the number of elements period.
   size = ((char*)(&arr +1) - (char*)&arr)/((char*)(&arr[0] +1) - (char*)&arr[0]);
    //size = ((&arr +1) - &arr)/((&arr[0]+1)- (&arr[0]));
    printf ("The sizeof array is %d\n", size);

}
