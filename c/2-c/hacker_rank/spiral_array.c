#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n=5;
   // scanf("%d", &n);
    int value = 2*n-1;// no.of rows and column
    int top_row = 0;
    int bottom_row = value-1;
    int left_column= 0;
    int right_column =value-1;
    int dir = 0;
    int i;
    int arr[value][value];
    // dir = 0 left ----> righti, column will change
    // dir =1 top ----> botmom, row will change
    // dir = 2 right---->left, column will change
    // dir =3 bottom ---> top, row will change


    while ( (left_column <= right_column) && (top_row <= bottom_row) ){
        if (dir == 0){
            for (i =left_column; i<= right_column; i++){
                arr[top_row][i] =n;
            }
            top_row++;
        }else if (dir ==1){
            for (i = top_row; i <= bottom_row; i++){
                arr[i][right_column]= n;
            }
            right_column--;
        }else if (dir ==2){
            for (i =right_column; i >= left_column; i--){
                arr[bottom_row][i]=n;
            }
            bottom_row--;
        }else if (dir ==3){
            for (i = bottom_row; i >= top_row; i--){
                arr[i][left_column]= n;
            }
            left_column++;
        }
        dir = (dir +1)%4;
        if (dir ==0){
            n = n-1;
        }
    }

    for (int i =0; i < value; i++){
        for (int j =0; j < value; j++){
            printf ("%d ",arr[i][j]);
        }
        printf ("\n");
    }
  	// Complete the code to print the pattern.
    return 0;
}
