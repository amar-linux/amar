#include<stdio.h>


int main(){
    int arr1[3] ={1,5,9};  //i
    int arr2[5] = {2,3,4,8,10};  //j
    int i=2;
    int j=4;
    int k=7;

    int result[8] ={0,0,0,0,0,0,0,0};

    while (j >= 0)
    {
        if ( i >=0 && (arr1[i] > arr2[j]))
        {
            result[k] = arr1[i];
            i--;
            k--;
        }else
        {
            result[k] = arr2[j];
            j--;
            k--;
        }
    }

    for (int l =0; l <8 ; l++)
    {
        printf ("%d, ", result[l]);
    }



}
