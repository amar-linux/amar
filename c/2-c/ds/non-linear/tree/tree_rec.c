#include<stdio.h>
#include<stdlib.h>


typedef struct node{
    struct node* right;
    struct node* left;
    int data;
}node;

node* create_node(int value){
    node* temp = malloc(sizeof(node));
    temp->right = NULL;
    temp->left = NULL;
    temp->data = value;
    return temp;

}

void print_list_preorder(node *root){
    if (!root) return;
    printf ("%d, ", root->data);
    print_list_preorder(root->left);
    print_list_preorder(root->right);
}

void print_list_inorder(node *root){
    if (!root) return;
    printf ("%d, ", root->data);
    print_list_preorder(root->left);
    printf ("%d, ", root->data);
    print_list_preorder(root->right);
}

void print_list_postorder(node *root){
    if (!root) return;
    printf ("%d, ", root->data);
    print_list_preorder(root->left);
    print_list_preorder(root->right);
}

void insert_node(node** root, int value){

    if (!(*root)){
        *root =(node*)create_node( value);
        return;
    }
    if (value > (*root)->data){
        insert_node(&((*root)->right), value);
    }else {
        insert_node(&((*root)->left), value);
    }
    // no value will be updated in transit call stack. 
    // nothing will happen on the transit call stack 
    // as function is not returning anything.

}


int main(){
    node* root = NULL;
    int len;
    int arr[]={6,5,8,1,3,2,9,12};
    len = sizeof(arr)/sizeof(arr[0]);

    for (int i=0; i< len; i++){
        insert_node(&root, arr[i]);
    }
    print_list_preorder(root);
    
    print_list_inorder(root);
    print_list_postorder(root);

}
