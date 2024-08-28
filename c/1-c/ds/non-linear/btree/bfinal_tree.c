#include<stdio.h>
#include<stdlib.h>


typedef struct node{
    int data;
    struct node* right;
    struct node* left;
}bnode;

bnode* create_node(int value){
    bnode* temp = malloc(sizeof(bnode));
    temp->data = value;
    temp->right = NULL;
    temp->left = NULL;
    return temp;

}


void add_node(bnode** root, int value){
    if ((*root) == NULL){
        *root = create_node(value);
        return;
    }else if (value < (*root)->data ){
         add_node(&((*root)->left), value);
    }else{
        add_node(&((*root)->right), value);
    }
    return;

}

void print_tree_preorder(bnode* root){
    if (root == NULL) return;
    printf ("%d, ", root->data);
    print_tree_preorder(root->left);
    print_tree_preorder(root->right);
}
void print_tree_inorder(bnode* root){
    if (root == NULL) return;
    print_tree_inorder(root->left);
    printf ("%d, ", root->data);
    print_tree_inorder(root->right);
}
void print_tree_postorder(bnode* root){
    if (root == NULL) return;
    print_tree_postorder(root->left);
    print_tree_postorder(root->right);
    printf ("%d, ", root->data);
}

int main(){
    bnode* root = NULL;
    int len;

    int arr[]={6,5,7,9,2,3,1,0};
    len = sizeof(arr)/sizeof(arr[0]);

    for (int i=0;i< len; i++){
        add_node(&root, arr[i]);
    }
    print_tree_preorder(root);
    printf ("\n");

    print_tree_postorder(root);
    printf ("\n");
    print_tree_inorder(root);
    printf ("\n");
}
