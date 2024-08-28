#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}node;


node* create_node(int value){
    node* temp;
    
    if (!(temp = malloc (sizeof(node)))){
        return NULL;
    }
    temp->next = NULL;
    temp->data = value;
    return temp;
}

void print_list(node* head){
    if (!head){
        printf ("Empty List ...\n");
        return;
    }
    while (head){
        printf ("%d, ", head->data);
        head = head->next;
    }
    printf("\n");
}

void dequeue(node** head){
    node* temp;
    if (!(*head)){
        printf ("Nothing to deque...\n");
        return;
    }else{
        temp = *head;
        *head = (*head)->next;
        free(temp);
        temp = NULL;
    }
    print_list(*head);
}

void enqueue(node** tail, node** head, int value){
    node* temp;
    if (!(temp = create_node(value))){
        printf ("Node creation failed..\n");
        return;
    }
    if (!(*tail)){
        *tail = temp;
        *head = temp;
    }else{
        (*tail)->next = temp;
        *tail = temp;
    }
    print_list(*head);
}

int main(){
    node* head = NULL;
    node* tail = NULL;

    enqueue(&tail, &head, 12);
    enqueue(&tail, &head, 15);
    enqueue(&tail, &head, 55);
    enqueue(&tail, &head, 67);
    enqueue(&tail, &head, 82);
    enqueue(&tail, &head, 91);
    dequeue(&head);
    dequeue(&head);
    dequeue(&head);
    dequeue(&head);
    dequeue(&head);
    dequeue(&head);
    dequeue(&head);
    dequeue(&head);
    dequeue(&head);
    dequeue(&head);
    dequeue(&head);
}
