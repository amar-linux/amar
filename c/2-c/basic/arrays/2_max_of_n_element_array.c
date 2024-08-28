#include<stdio.h>


int add(int* arr, int len){
    int sum =0;
    for (int i =0; i< len; i++){
   //   printf ("%d, ", arr[i]);
        sum = sum + arr[i];
    }
    printf ("the sum returned = %d\n",sum);

    return sum;

}

int find_max(int* a, int len, int window){
    int sum_max;
    int sum;
    int arr[len];
    int k=0;
    int x =0;

    for (int i=0; i < window; i++){
        arr[i]= *(a+i);
    }
    sum_max = add(arr, window);

    for (int i=1; i<= (len - window); i++){
    //    printf ("Creating new array..\n");
         k=0;
         x=0;
        for (int j=i ; j < (window +i); j++){
    //    printf ("%d, ", arr[j]);
    //
            arr[x] = *(a + j);
            x++;
    //        printf ("%d, ", arr[j]);
        }
        for ( int l=0; l< window; l++){
            printf ("%d, ", arr[l]);
        }
        sum = add(arr, window);
        if (sum > sum_max){
            sum_max = sum;
        }
    }
    return sum_max;
}


int main(){
    int sum;
    int arr[]={7,9,1,3,2,9,4};
    int len =3;
    int array_len = sizeof(arr)/sizeof(arr[0]);

    sum = find_max(arr, array_len, len);
    printf ("%d\n", sum);
}
