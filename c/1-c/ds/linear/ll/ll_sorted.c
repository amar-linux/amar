#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node* next;
}node;


node* create_node(int value){
    node* temp = malloc(sizeof(node));
    temp->data = value;
    temp->next = NULL;
    return temp;
}


node* insert_node(node* root, int value){
    node* current= root;
    node* prev= NULL;
    node* temp = create_node(value);

    if (!root){
        return temp;
    }
    while (current != NULL && current->data < value){
        prev = current;
        current = current->next;
    }
    if (current == root){
        temp->next = root;
        root = temp;
        return root;
    }else{
        prev->next = temp;
        temp->next = current;
    }
    return root;
    
        
}

node* delete_node(node* root, int value){

    int check =0;
    node* current = root;
    node* prev = NULL;
    while (current){
        if (current->data == value){
            check =1;
            break;
        }else {
            prev= current;
            current = current->next;
        }
    }
    if (!check){
        printf ("The value not found %d \n", value);
        return root;
    }
    if (current == root){
        root = root->next;
        free(current);
        return root;
    }else {
        prev->next = current->next;
        free(current);
    }
    return root;


}


void print_node(node* root){
    while (root != NULL){
        printf ("%d, ", root->data);
        root = root->next;
    }
    printf ("\n");

}

void reverse_list(node** root){
    node* current = *root;
    node* next = NULL;
    node* prev = NULL;
    if (*root == NULL){
        printf ("Empty list:\n");
        return;
    }
    while (current){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *root = prev;
}


int main(){
    node* root = NULL;
    root = insert_node(root, 15);
    root = insert_node(root, 10);
    root = insert_node(root, 18);
    root = insert_node(root, 8);
    root = insert_node(root, 20);

    print_node(root);
/*
    root = delete_node(root, 8);
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
