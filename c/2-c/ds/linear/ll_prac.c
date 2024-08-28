#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}node;

node* create_node(int value){
    node* temp;
    if (!(temp = malloc(sizeof(node)))){
        return NULL;
    }else{
        temp->data = value;
        temp->next = NULL;
    }
    return temp;
    
}



void enque(node** head,node** tail, int value){
    node* temp;
    if (!(temp = create_node(value))){
        printf ("Node Allocation failed..\n");
        return;
    }
    if (!(*head)){
        *head = temp;
        *tail = temp;
    }else{
        (*tail)->next = temp;
        *tail = temp;
    }

}


void deque(node** head){
    node* temp;

    if (!(*head)){
        printf("Empty list..nothing to deque\n");
        return;
    }else{
        temp = *head;
        (*head)= (*head)->next;
    }
    free(temp);
    temp = NULL;

}
void print_list(node* head){
    if (!head){
        printf ("Empty list..nothing to print\n");
    }
    while (head){
        printf ("%d, ",head->data);
        head = head->next;
    }
    printf ("\n");
}


void push(node** head, int value){
    node* temp;
    if (!(temp = create_node(value))){
        printf ("Node creation failed...");
        return;
    }
    temp->next = *head;
    *head = temp;
}


void pop(node** head){
    node* temp;
    if (!(*head)){
        printf ("Nothing to pop empty stack...\n");
        return;
    }else{

    }
    temp = *head;
    *head = (*head)->next;
    free(temp);
}
void add_in_sorted_order(node** head, int value){
    node* current = *head;
    node* prev=NULL;
    node* temp;
    if (!(temp = create_node(value))){
        printf ("Node creation failed...\n");
        return;
    }
    if (!(*head)){
        *head = temp;
    }else {
        while ((current != NULL) && (value > current->data)){
            prev = current;
            current = current->next;
        }
        if (!prev){
            temp->next = *head;
            *head = temp;
        }else {
            prev->next = temp;
            temp->next = current;
        }
    }
}
void sort_the_list(node** head){
    node* icurrent = *head;
    node* ocurrent = *head;
    node* check;
    int  var;

    while (ocurrent){
        check = ocurrent;
        icurrent = ocurrent;
        while (icurrent){
            if (check->data > icurrent->data){
                var = check->data;
                check->data = icurrent->data;
                icurrent->data = var;
            }
            icurrent = icurrent->next;
        }
        ocurrent = ocurrent->next;
    }
}

int main(){
    node* head = NULL;
    node* tail = NULL;

    int arr[]= {32,54,12,76,2,4,9,1};
    int len = sizeof(arr)/sizeof(arr[0]);
/*
    for (int i=0; i< len; i++){
        enque(&head,&tail, arr[i]);
    }
    while (head){
        deque(&head);
        print_list(head);
    }
     deque(&head);
     */
    
    for (int i=0; i< len; i++){
        push(&head,arr[i]);
    }
        print_list(head);
    /*
    while (head){
        pop(&head);
        print_list(head);
    }


    for (int i=0; i< len; i++){
        add_in_sorted_order(&head,arr[i]);
    }
    print_list(head);
*/

       sort_the_list(&head);
       print_list(head);
}
