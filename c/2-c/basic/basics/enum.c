#include<stdio.h>

#define port1 2
#define port2 4
#define port3 6
#define port4 8
#define port5 10


int main(){

    int arr[]={port1, port2, port3, port4, port5};
    int size = sizeof(arr)/sizeof(int);
  //  printf ("%d\n------\n",size);
    int i;
    for (i=0; i < size; i++){
    //    printf ("%d\n",arr[i]);
    }


    enum  {
    value_one   = 0,
    value_two   = 1,
    value_three = 3,
    value_max
};
for ( i = value_one; i < value_max; i++ ){
    printf("%d\n",i);

}
}
