#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    struct node* next;
    int data;
}node;

node* head = NULL;
node* tail = NULL;

node* create_node(int value){
    node* temp = malloc(sizeof(node));
    temp->data = value;
    temp->next = NULL;
    return temp;
}

void enque(int value){
    node* temp = create_node(value);
    if ((head == NULL) && (tail == NULL)){
        head = temp;
        tail =temp;
        return;
    }
    tail->next = temp;
    tail = temp;
}

void deque(){

    if (head == NULL){
        printf ("The queus is empty\n");
        return;
    }
    
    node* temp = head;
    printf ("Dequeing the element %d\n", temp->data);
    head = head->next;
    free(temp);
}

void print_list(){

    node* temp = head;
    printf("Printing list: \n");
    if (head == NULL)
        printf ("Empty");
    while (temp !=NULL){
        printf ("%d,\t",temp->data);
        temp= temp->next;
    }
    printf ("\n");
    
}


int main(){

// enqueing the element;

    for (int i=0; i< 5; i++){
        enque(i);
    }
    print_list();
    deque();
    print_list();
    deque();
    print_list();
    deque();
    print_list();
    deque();
    print_list();
    deque();

}
