#include<stdio.h>


int compare (int a, int b){
    if (a > b) return 1;
    else return 0;
}

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int* arr, int len){


    for (int j=0; j< len; j++)
    for (int i =0; i< len-1; i++){
        if (compare(arr[i], arr[i+1])){
            swap(&arr[i], &arr[i+1]);
        }
    }
}


int main(){

    int arr[]={1,4,6,2,9,3,6,8};
    int len = sizeof(arr)/sizeof(arr[0]);

    sort(arr, len);

    for (int i=0; i < len; i++){
        printf ("%d, ",arr[i]);
    }
    printf ("\n");
}
