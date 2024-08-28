#include<stdio.h>
#include<stdlib.h>

void put_the_value(int (*arr)[4], int row, int column){
    for (int i=0; i< row; i++){
        for (int j=0;j<column; j++){
            arr[i][j] = 44;
        }
    }
}


int main(){
    int row = 4;  //m
    int column =5;  // n
/*
    // dynamically creating array of pointers of size m.
    int** arr = (int**) malloc(row* sizeof(int*));

// dynamically allocating memory for strinf n no. of element in each row
    for (int i =0; i< row; i++){
        arr[i] = (int*)malloc(column* sizeof(int));
    }

   put_the_value(arr, row, column);
  */  
        int brr[4][4]={{0,1,2,3},
                   {4,5,6,7},
                   {8,9,10,11},
                   {12,13,14,15}};

    put_the_value(brr, 4, 4);
    for (int i=0; i < row; i++){
        for (int j=0; j< column; j++){
            printf ("%d, ",brr[i][j]);
        }
    }

}
