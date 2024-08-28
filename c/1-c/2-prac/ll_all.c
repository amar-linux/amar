#include<stdio.h>

typedef struct node{
    int a;
    struct node* next;

}node;



int main(){

    int arr[]={1,2,3,4,5,6,7,8,9};
    int len = sizeof(arr)/sizeof(arr[0]);
    printf ("the last element of the array is: ");
    printf ("%d\n", (&arr[0] +1));

    for (int i =0; i< len; i++){
    //    insert_node(arr[i], &head);
    }


}
