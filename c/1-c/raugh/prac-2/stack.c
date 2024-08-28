#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}node;


node* create_node(int value){
    node* newnode = (node*)malloc(sizeof(node));
    newnode->next = NULL;
    newnode->data = value;
    return newnode;
}

void push(int value, node** head){
    node* temp = create_node(value);
    if (*head == NULL){
        *head = temp;
        return;
    }
    temp->next = *head;
    *head = temp;
}

void pop(node** head){

    if (*head == NULL){
        printf("The stack is empty: \n");
        return;
    }
    node* temp = *head;
    *head = (*head)->next;
    printf ("the element popped is %d\n", temp->data);
    free(temp);
}

void print_stack(node** head){
    node* temp = * head;
    if (head == NULL){
        printf ("stack is empty:\n");
        return;
    }
    while (temp != NULL){
        printf ("%d, ", temp->data);
        temp = temp->next;
    }
    printf ("\n");
}

void insert_at_position(node** head, int position, int value){
    node* temp = *head;
    node* temp1 = temp->next;
    int arrow = 1;
    int flag =0;
    if (position == 0){
        push(value, head);
    }
    while (temp != NULL){
        if (arrow == position){
            node* tempr= create_node(value);
            temp->next = tempr;
            tempr->next = temp1;
            flag =1;
            break;
        }
        temp = temp->next;
        if (temp1 != NULL){
        temp1= temp1->next;
        }
        arrow++;
    }
    if (flag == 0){
        printf ("Couldnot insert the element:\n");
        return;
    }
    printf ("Inserted the element %d at %d", value, position);

}


int main(){
    int value;
    int position;
    node* head = NULL;
    for (int i=0; i< 8; i++){
        push(2*i, &head);
    }
    print_stack(&head);

    printf ("Enter the value to be inserted: ");
    scanf ("%d", &value);
    printf ("Enter the prosition: ");
    scanf ("%d", &position);
    insert_at_position(&head, position, value);

    print_stack(&head);

    for (int i=0; i< 10; i++){
        pop(&head);
    }
    print_stack(&head);

}
