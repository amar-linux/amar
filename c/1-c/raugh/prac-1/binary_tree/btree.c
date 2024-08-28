#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    struct node* left;
    struct node* right;
    int data;
}bnode;

//bnode* root = NULL;

bnode* create_new_node(int value){
    bnode* newnode = (bnode*) malloc(sizeof(bnode));
    newnode->right = NULL;
    newnode->left = NULL;
    newnode->data = value;
    return newnode;

}


bnode* add_node(int value, bnode* root){
    if (root == NULL){
    root = create_new_node(value);
    }else if(root->data > value) {
        root->right = add_node(value, root->right);
    }else{
        root->left = add_node(value, root->left);
    }
    return root;
}


void print_tree(bnode* root){
    if (root == NULL) return;
    printf ("%d\n", root->data);
    print_tree(root->right);
    print_tree(root->left);
}



int main(){
    bnode* root = NULL;

    int value;
    for (int i=0; i< 10; i++){
    printf ("Enter the number to be added:");
    scanf("%d", &value);
root =  add_node(value, root);
    }
    print_tree(root);
}
