#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}node;

node* head = NULL;
node* tail = NULL;

node* create_node(int value){
    node* result = (node*) malloc(sizeof(node));
    result->next = NULL;
    result->data = value;
    return result;

}

void enque(int value){
    node* temp = create_node(value);
    if (head == NULL && tail == NULL ){
        head = tail = temp;
        return;
    }
    tail->next = temp;
    tail = temp;
}

void deque (){
    node* temp;

    for (int i = 0; i < 8; i++){
        if (head == NULL){
            printf ("queue is empty: \n");
            return;
        }
        temp = head;
        head = head->next;
        printf ("Element %d is dequed\n", temp->data);
        free(temp);

    }
}
void print_queue(){
    node* temp = head;
    printf("Printing Queue:\n");
    while (temp != NULL){
        printf ("%d, ", temp->data);
        temp = temp->next;
        
    }
    printf ("\n");
}

int main(){

    for (int i=0; i< 8; i++){
        enque(2*i);
    }
    print_queue();
    deque();
}
