#include<stdio.h>


int main(){

    int n1=3;
    int n2=5;
    int n3 =8;
    int i=0;
    int j=0;
    int k=0;

    int arr1[]= {3,7,9};
    int arr2[5]={1,2,4,6,10};
    int arr3[n3];

    while ( i < n1 && j < n2 )
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
            k++;
        }else
        {
            arr3[k] = arr2[j];
            j++;
            k++;
        }
    }
    while (i < n1 )
    {
        arr3[k] = arr1[i];
        i++;
        k++;

    }
    while(j < n2)
    {
        arr3[k] = arr2[j];
        j++;
        k++;

    }

    for ( i=0; i < n3; i++)
    {
        printf("%d, ",arr3[i]);
    }
}
