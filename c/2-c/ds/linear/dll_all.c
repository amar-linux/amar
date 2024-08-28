#include<stdio.h>
#include<stdlib.h>


typedef struct node {
    struct node* fprev;
    struct node* lnext;
    int data;
}node;

node* create_node(int value){
    node* temp;
    if (!(temp = malloc(sizeof(node)))){
        return NULL;
    }
    temp->fprev = NULL;
    temp->lnext = NULL;
    temp->data = value;
    return temp;
}

void add_node(node* head, int value){
    node* temp;
    if (!(temp = create_node(value))){
        printf ("Node Creation Failed ...\n");
        return;
    }if (!(*head).fprev){
        (*head).fprev = temp;
        (*head).lnext = temp;
    }else{
        temp->lnext = (*head).fprev;
        (*head).fprev->fprev = temp;
        (*head).fprev = temp;
    }
}


void print_list (node* head){
    node* traverse = (*head).fprev;
    if (!traverse){
        printf ("Empty list..\n");
        return;
    }
    while (traverse){
        printf ("%d, ", traverse->data);
        traverse = traverse->lnext;
    }
    printf ("\n");
}

void print_list_reverse(node* head){
    node* traverse = (*head).lnext;
    if (!traverse){
        printf("Empty List..\n");
        return;
    }
    while(traverse){
        printf("%d, ",traverse->data);
        traverse = traverse->fprev;
    }
    printf ("\n");
}

void add_node_in_sorted_order(node* head, int value){
    node* temp;
    node* current=(*head).fprev;
    node* prev = NULL;

    if (!(temp = create_node(value))){
        printf ("node creation failed..\n");
        return;
    }
    if (!current){
        (*head).fprev = temp;
        (*head).lnext = temp;
        return;
    }
    while (current && (value > current->data)){
        prev = current;
        current = current->lnext;
    }
    if (current == (*head).fprev){
        temp->lnext = (*head).fprev;
        (*head).fprev->fprev = temp;
        (*head).fprev = temp;
    }else if(!current) {
        prev->lnext = temp;
        temp->fprev = prev;
        (*head).lnext = temp;
    }else{
        prev->lnext = temp;
        temp->fprev = prev;
        temp->lnext = current;
        current->fprev = temp;
    }

}


int main(){
    node head;
    head.fprev = NULL; // pointing to 1st element 
    head.lnext = NULL; // pointing to lats element 
    int len;
    int arr[]= {6,5,9,1,3,4,12};

    len = sizeof(arr)/sizeof(arr[0]);
    print_list(&head);
    print_list_reverse(&head);
    for (int i=0; i < len; i++){
       // add_node(&head, arr[i]);
          add_node_in_sorted_order(&head, arr[i]);
    }
    print_list(&head);
    print_list_reverse(&head);



}
