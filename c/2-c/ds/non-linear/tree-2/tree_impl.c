#include<stdio.h>
#include<stdlib.h>


typedef struct node{
    int data;
    struct node* right;
    struct node* left;
}node;

node* create_node(int value);
void insert_node(node** root, int value);
void print_preorder(node* root);
void print_inorder(node* root);
void print_postorder(node* root);


int main(){
    node* root = NULL;
    int arr[] ={15,10,20,8,12,17,25};
    int len = sizeof(arr)/sizeof(arr[0]);
    printf("%d\n", len);

    for (int i=0; i< len; i++){
        insert_node(&root,arr[i]);
    }
    print_inorder(root);
    printf ("\n");

}


void insert_node(node** root, int value){
   // node* temp;
    /*
    if (!(temp = create_node(value))){
        printf ("node creation failed..\n");
        return;
    }
    */
    if (!(*root)){
        *root = create_node(value);
        return;
    }else if ( value <= (*root)->data ){
        insert_node(&(*root)->left, value);
    }else{
        insert_node(&(*root)->right, value);
    }
}

node* create_node(int value){
    node* temp;
    if (!(temp = malloc(sizeof(node)))){
        return NULL;
    }
    temp->right = NULL;
    temp->left = NULL;
    temp->data = value;
    return temp;
}

void print_inorder(node* root){
    if (!root){
        return;
    }
    printf ("%d, ", root->data);
    print_inorder(root->left);
    print_inorder(root->right);

}


