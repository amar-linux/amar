#include<stdio.h>
#include<stdlib.h>


typedef struct node{
    int data;
    struct node* next;
}node;


void print_list(node* head){
    if (!head){
        printf ("Empty list...\n");
        return;
    }
    while (head){
        printf ("%d, ", head->data);
        head = head->next;
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

void push(node** head, int value){
    node* temp;
    if (!(temp = create_node(value))){
        printf ("Node creation failed...\n");
        return;
    }
    temp->next = *head;
    *head = temp;
    print_list(*head);
}

void pop(node** head){
    if (!(*head)){
        printf ("stack is empty...\n");
        return;
    }
    node* temp;
    temp = *head;
    *head = (*head)->next;
    free(temp);
    print_list(*head);
}

int main(){
    node* head = NULL;

    push(&head, 15);
    push(&head, 18);
    push(&head, 67);
    push(&head, 89);
    push(&head, 36);
    push(&head, 41);
    push(&head, 95);
    pop(&head);
    pop(&head);
    pop(&head);
    pop(&head);
    pop(&head);
    pop(&head);
    pop(&head);
    pop(&head);
    pop(&head);
    pop(&head);

}
