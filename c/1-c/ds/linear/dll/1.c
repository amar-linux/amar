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
    }
    temp->data = value;
    temp->next = NULL;
    return temp;
}

void insert_node(node** head, int value){
    node* temp;
    if (!(temp= create_node(value))){
        printf ("Malloc Failed..\n");
        return;
    }
    if (!head){
        *head = temp;
    }else{
        temp->next = *head;
        *head = temp;
    }
}
void swap (int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort_the_list(node* head){
    node* current= head;
    node* currentout= head;
    if (!head && (!(head->next))){
        return;
    }
    node* prev = NULL;
    while (currentout){
        current = head;
        prev = head;
        while(current){
            if (prev->data > current->data){
                swap (&prev->data, &current->data);
            }
            prev= current;
            current = current->next;

           
        }
        currentout= currentout->next;
    }

}


void print_list(node* head){
    if (!head){
        printf ("The list is empty..\n");
        return;
    }
    while (head){
        printf ("%d, ", head->data);
        head = head->next;
    }
    printf ("\n");
}

int main(){
    node* head = NULL;
    int arr[]= {6,7,1,3,0,7,8};
    int len;
    len=sizeof(arr)/sizeof(arr[0]);

    for (int i=0; i < len; i++){
        insert_node(&head, arr[i]);
    }
    print_list(head);
    sort_the_list(head);
    print_list(head);
}
