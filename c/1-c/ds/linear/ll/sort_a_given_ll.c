#include<stdio.h>
#include<stdlib.h>

#define LENGTH 6

typedef struct node{
    int data;
    struct node* next;
}node;


node* create_node(int value){
    node* temp = malloc(sizeof(node));
    temp->next = NULL;
    temp->data = value;
    return temp;
}

node* insert_node(node* root, int value){
    node* temp;
    if ((temp = create_node(value))== NULL){
        printf ("Node creation failed\n");
        return root;
    }
    if (root == NULL){
        return temp;
    }
    temp->next = root;
    root = temp;
    return root;

}
void print_list(node* root){
    while (root){
        printf ("%d, ", root->data);
        root = root->next;
    }
    printf ("\n");
}

void sort_list(node* root){
    node* current;
    node* next;
        print_node(root);
    root = delete_node(root, 15);
    print_node(root);
    root = delete_node(root, 8);
    print_node(root);
    root = delete_node(root, 20);
    print_node(root);
    */
    reverse_list(&root);
    print_node(root);
}
}

int main (){
    node* root = NULL;
    int value;

    for (int i=0; i< LENGTH; i++){
        printf ("Enter the number: ");
        scanf("%d",&value);
        root = insert_node(root, value);
    }
    print_list(root);
    sort_list(root);
    print_list(root);
}
