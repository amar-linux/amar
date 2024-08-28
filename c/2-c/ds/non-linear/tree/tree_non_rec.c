#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    struct node* right;
    struct node* left;
    int data;
}node;

node* create_node(int value){
    node* temp;
    if (!(temp =(node*) malloc(sizeof(node)))){
        return NULL;
    }
    temp->right = NULL;
    temp->left = NULL;
    temp->data = value;
    return temp;
}


void insert_node(node** root, int value){
    node* temp;
    node* traverse = *root;
    node* prev;

    if (!(temp = create_node(value))){
        printf ("Node creation failed..\n");
        return;
    }
    if (!traverse){
        *root = temp;
        return;
    }
    while (traverse != NULL){
        if (value > traverse->data){
            prev = traverse;
            traverse = traverse->right;
        }else{
            prev = traverse;
            traverse = traverse->left;
        }
    }
    if (value > prev->data){
        prev->right = temp;
    }else {
        prev->left = temp;
    }
}

void print_tree_post_order(node* root){
    if (!root) return;
    printf("%d, ",root->data);
    print_tree_post_order(root->left);
    print_tree_post_order(root->right);

}


int main(){
    node* root = NULL;

    int arr[]={12,15,9,6,2,77,99};
    int len = sizeof(arr)/sizeof(arr[0]);

    for (int i=0; i< len; i++){
        insert_node(&root, arr[i]);
    }
    print_tree_post_order(root);
}
