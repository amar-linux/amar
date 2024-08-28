#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    struct node* fprev;
    struct node* lnext;
    int data;
}dnode;


dnode* create_node(int value){
    dnode* temp;
    
    if (!(temp = malloc(sizeof(dnode)))){
        return NULL;
    }
    temp->fprev = NULL;
    temp->lnext = NULL;
    temp->data = value;
    return temp;

}

void insert_node(dnode* head, int value){
    dnode* temp;

    if (!(temp = create_node(value))){
        printf ("Node creation failed..\n");
        return;
    }
    if ((*head).lnext == NULL ){
        (*head).lnext = temp;
        (*head).fprev = temp;
    }else{
        (*head).lnext->lnext = temp;
        temp->fprev = (*head).lnext;
        (*head).lnext = temp;
    }
}

void print_list(dnode* head){
    dnode* temp = (*head).fprev;
    if(!temp){
        printf ("Empty list..\n");
        return;
    }
    while(temp){
        printf ("%d, ",temp->data);
        temp= temp->lnext;
    }
    printf ("\n");


}
void print_list_rev(dnode* head){
    dnode* temp = (*head).lnext;
    if (!temp){
        printf ("Empty list...\n");
        return;
    }
    while (temp){
        printf ("%d, ", temp->data);
        temp = temp->fprev;
    }
    printf ("\n");
}

void insert_node_in_beginning(dnode* head, int value){
    dnode* temp;

    if (!(temp = create_node( value))){
        printf ("Node creation failed..\n");
        return;
    }
    if (!((*head).fprev)){
        (*head).fprev = temp;
        (*head).lnext = temp;
    }else{
        (*head).fprev->fprev = temp;
        temp->lnext = (*head).fprev;
        (*head).fprev = temp;
    } 
}

int main(){
    dnode head;
    head.fprev = NULL;
    head.lnext = NULL;

    insert_node(&head, 15);
    insert_node(&head, 22);
    insert_node(&head, 18);
    insert_node(&head, 76);
    insert_node(&head, 43);
    print_list(&head);
    print_list_rev(&head);
    insert_node_in_beginning(&head, 1);
    print_list(&head);

}
