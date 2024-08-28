#include<stdio.h>

void print_spiral_array(int arr[4][4], int row, int column){
    int top =0;
    int bottom = row -1;
    int left = 0;
    int right = column-1;
    int dir =0;

    /* dir =0 --->
     * dir ==1 |
     *         | down
     *
     *dir = 2 <-----
      dir ==3 up */
    while (left <= right && top<=bottom){
        if (dir ==0){
            for (int i=left; i<= right; i++){
                printf("%d, ", arr[top][i]);
            }
            top++;
        //    dir =1;
        }else if (dir ==1){
            for (int i= top; i<=bottom; i++){
                printf ("%d, ",arr[i][right]);
            }
            right--;
          //  dir =2;
        }else if(dir ==2){
            for (int i = right; i >= left; i--){
                printf("%d, ",arr[bottom][i]);
            }
            bottom--;
           // dir = 3;
        }else if (dir ==3){
            for (int i = bottom; i >= top;i--){
                printf("%d, ",arr[i][left]);
            }
            left++;
           // dir=1;
        }
        dir = (dir+1)%4;
               

}
}


int main(){
    int arr[4][4]={{0,1,2,3},
                   {4,5,6,7},
                   {8,9,10,11},
                   {12,13,14,15}};
    int row =4;
    int column =4;

    print_spiral_array(arr, row, column);
}
