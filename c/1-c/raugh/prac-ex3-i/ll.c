#include<stdio.h>
#include<stdlib.h>

 typedef struct node{
    int data;
    struct node* next;
}node;


node* create_node(int value){
    node* temp = (node*) malloc(sizeof(node));
    temp->data = value;
    temp->next = NULL;
    return temp;
}

node* insert_node(node* root, int value){
     node* temp1 = root;
     node* temp2;
     node* temp3 = NULL;
    if (root == NULL){
        root = create_node(value);
        return root;
    }
    if (root->data > value){
        temp2 = create_node(value);
        temp2->next = root;
        root= temp2;
        return root;
    }
    while (temp1 != NULL){
        if (temp1->data <   value){
            temp3 = temp1;
            temp1 = temp1->next;
        }else{
            break;
        }
        
    }
    temp2 = create_node(value);
    temp3->next = temp2;
    temp2->next = temp1;

    return root;

    


}
void print_list(node* root){
    while (root != NULL){
        printf("%d, ", root->data);
        root = root->next;
    }
}
node* delete_node(node* root, int value){
     node* temp1 = root;
     node* temp3 = NULL;
     int check =0;
    if (root == NULL){
        root = create_node(value);
    }
    if (root->data == value){
        root = root->next;
        free (temp1);
        return root;
    }
    while (temp1 != NULL){
        if (temp1->data !=  value){
            temp3 = temp1;
            temp1 = temp1->next;
            
        }else {
            check =1;
            break;
        }
        
    }
    if (check == 0){
        printf ("No element found\n");
        return NULL;
    }
    
    temp3->next = temp1->next;
    free(temp1);

    return root;
}




int main(){

    node* root = NULL; // empty list.
    root = insert_node( root,10);
    root = insert_node(root,12);
    root = insert_node(root, 11);
    root = insert_node(root, 5);
    print_list(root);
    node* temp1 = delete_node(root, 11);
    if (temp1 != NULL){
        root = temp1;
    }
    print_list(root);

}
