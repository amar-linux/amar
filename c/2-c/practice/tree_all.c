#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* left;
    struct node* right;
}node;



int main(){
    node* root= NULL;

    int arr[]={6,4,7,9,1,3,10};
    int len = sizeof(arr)/sizeof(arr[0]);

    for (int i=0; i< len; i++){
        insert_node(&root, arr[i]);
    }

}
