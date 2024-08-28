#include<stdio.h>
#include<stdlib.h>

int main(){
    int r=3;  // number of rows
    int c=4; // number of columns
    int count =0;
    

    int *arr[r];
    for (int i=0; i< r; i++){
        arr[i] = (int*) malloc(sizeof(int) * c);

    }
    for (int i=0; i< r; i++){
        for (int j=0; j< c; j++){
            arr[i][j] = ++count;
        }
    }
    for (int i=0; i< r; i++){
        for (int j=0; j< c; j++){
            printf ("%d  ", arr[i][j]);
        }
    }
    printf("\n");

}
