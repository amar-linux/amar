#include<stdio.h>
#include<stdlib.h>


// dll implementation 
//
typedef struct node_t{
    int data;
    struct node_t* next;
    struct node_t* prev;
}node;


int main(){

    node primary;
    primary.prev = NULL; // first pointer pointing to the beginning of the list. 
     primary.next = NULL; // last pointer pointing to the end of the list.

    int arr[5]={3,4,1,78,5};

    for (int i =0; i < 5; i++){
        add_node(&primary);
    }
}
