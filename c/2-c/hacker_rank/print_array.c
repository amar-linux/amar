#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
    int row = 2*n-1;
    int column = 2*n-1;
    int up =0;
    int down=row-1;
    int left= 0;
    int right= column-1;
    int arr[row][column];
    
    int dir =0;
  	// Complete the code to print the pattern.
    
    // from left to right
    //
    while ((up <= down) & (left <= right)){
        if (dir ==0){
            for (int i = left; i < right; i++){
                arr[up][i] = n;
            }
                up++;
//                dir =1;
        }else if ( dir == 1 ){
            for (int i = up; i < down; i++){
                arr[i][right] =n;
            }
                right--;
  //              dir =2;
        }else if (dir ==2){
            for (int i = right ; i < left; i--){
                arr[down][i]=n;
            }
                down--;
    //            dir =3;
        }else if (dir ==3){
            for (int i = down; i>up; i--){
                arr[i][left]=n;
            }
                left++;
      //          dir = 0;
        }
        dir = (dir+1)%4;
        n--;
    }
                    
    for (int i=0; i < row; i++){
        for (int j =0; j < column; j++){
            printf ("%d, ", arr[i][j]);
        }
        printf ("\n");
    }
                
            
        

    
    
    return 0;
}
