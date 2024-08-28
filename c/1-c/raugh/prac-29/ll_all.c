#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}node;

node* create_node(int value){
    node* temp;
    if(!(temp = malloc(sizeof(node)))){
        return NULL;

    }
    temp->data = value;
    temp->next = NULL;
    return temp;
}


node* insert_node(node* head, int value){
   // node* current;
    node* temp;

    if (!(temp = create_node(value))){
        printf ("Malloc Failed..\n");
        return head;
    }
    temp->next = head;
    head = temp;
    return head;


}
void print_list(node* head){
    if (!head){
        printf ("Empty list..\n");
    }
    while(head){
        printf ("%d, ",head->data);
        head = head->next;
    }
    printf ("\n");
}


node* insert_node_in_sorted(node* head, int value){
    node* current = head;
    node* temp;
    node* prev = NULL;

    if (!(temp = create_node(value))){
        printf ("malloc failed..\n");
        return head;
    }
    if (head == NULL){
        return temp;

    }
    while ((current != NULL)&&(value > current->data)){
        prev = current;
        current= current->next;
    }


    if (current == head ) {
        temp->next = head;
        head = temp;
    }else {
        prev->next = temp;
        temp->next = current;
    }
    return head;
}

int main(){
    node* head = NULL;
    int len;
    int arr[]={5,4,3,8,9,1,11};

    len = sizeof(arr)/sizeof(arr[0]);
    print_list(head);

    for (int i=0; i< len; i++){
        head = insert_node_in_sorted(head, arr[i]);
    }
    print_list(head);
}
