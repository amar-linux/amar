#include<stdio.h>
#include<stdlib.h>


typedef struct node{
    int data;
    struct node* next;
}node;

void print_list(node** head){
    node* traverse = *head;
    if (!traverse){
        printf ("Empty List..\n");
        return;
    }
    while(traverse){
        printf ("%d, ", traverse->data);
        traverse = traverse->next;
    }
    printf ("\n");

}

node* create_node(int value){
    node* temp;
    if (!(temp = malloc(sizeof(node)))){
        return NULL;
    }
    temp->data = value;
    temp->next = NULL;
    return temp;
}

void deque(node** head){
    node* temp;

    if ((*head) == NULL){
        printf ("Nothing to deque ...\n");
        return;
    }
        temp = *head;
        *head = (*head)->next;
        free(temp);
        temp = NULL;
    print_list(head);
}


void enque(node** head, node** tail, int value){
    node* temp;
    if (!( temp= create_node(value))){
        printf ("Node Creation/Malloc failed");
    }
    if (!(*tail)){
        *tail = temp;
        *head = temp;
        return;
    }else{
        (*tail)->next = temp;
        *tail = temp;
    }
    print_list(head);
}

int main(){
    node* head = NULL;
    node* tail = NULL;

    enque(&head, &tail, 17);
    enque(&head, &tail, 22);
    enque(&head, &tail, 33);
    enque(&head, &tail, 19);
    enque(&head, &tail, 99);
    enque(&head, &tail, 13);
    deque(&head);
    deque(&head);
    deque(&head);
    deque(&head);
    deque(&head);
    deque(&head);
    deque(&head);
    deque(&head);
    deque(&head);
    deque(&head);
    deque(&head);
}

