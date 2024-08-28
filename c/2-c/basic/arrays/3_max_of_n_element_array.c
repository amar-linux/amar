#include<stdio.h>



int add(int* arr, int window){
    int sum =0;
    for (int i=0; i < window; i++){
        sum = sum + *(arr + i);
    }
    return sum;
}


int find_max_of_window_array(int* a, int len, int window){
    int max_sum =0;
    int *arr;
    int sum =0;
    int max_index;

    for (int i=0; i <= (len-window); i++){
        arr = (a+i);
        sum = add(arr, window);
        if (sum > max_sum){
            max_sum = sum;
            max_index = i;
        }
    }
return max_sum;
}



int main(){
    int a[] = {0,2,8,9,2,1,0,3,7};
    int len = sizeof(a)/sizeof(a[0]);
    int window =3;
    int res = find_max_of_window_array(a, len, window);
    printf ("the max sum is %d\n", res);

}
