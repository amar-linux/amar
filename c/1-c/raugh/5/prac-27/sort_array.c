#include<stdio.h>


int main(){
    int arr[]={4,3,5,7,9,6,1};
    int len = sizeof(arr)/sizeof(arr[0]);

    for (int i=0; i< len; i++ ){
        for (int j = 0; j< len; j++){
            if (arr[j] < arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for (int i=0; i< len; i++){
        printf ("%d, ", arr[i]);
    }
    printf ("\n");
}
