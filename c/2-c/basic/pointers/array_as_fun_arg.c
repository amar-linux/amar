#include<stdio.h>

int sum_of_elements(int* arr, int len){
    int sum=0;

    for (int i=0; i < len; i++){
        sum += arr[i];
    }
    return sum;
}


int main(){

    int arr[]= {2,5,3,7,9,1};
    int len = sizeof(arr)/sizeof(arr[0]);
    int res;

    res = sum_of_elements(arr, len);

    printf ("sum = %d\n", res);


}
