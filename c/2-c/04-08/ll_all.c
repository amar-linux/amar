#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    struct node* next;
    int data;
}node;


node* create_node(int value){
    node* temp = (node*)malloc(sizeof(node));
    temp->data = value;
    temp->next = NULL;
    return temp;
}

void insert_node(node** head, int value){
    node* temp= NULL;
    
    if (!(temp= create_node(value))){
        printf ("Node creation failed..\n");
        return;
    }
    if (!(*head)){
        *head = temp;
    }else {
        temp->next = *head;
        *head = temp;
    }
}

void print_node(node* head){
    printf("Printing list...\n");
    while (head){
        printf("%d, ",head->data);
        head = head->next;
    }
    printf ("\n");
}

void reverse_the_list(node** head){

    node* current = *head;
    node* prev = NULL;
    node* next = *head;

    while (next){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
}
void sort_the_list(node** head){
    node* traverse= * head;
    node* temp = NULL;
    int val=0;
    while (traverse){
        temp = *head;
        while (temp->next){
            if (temp->data > temp->next->data){
                val = temp->data;
                temp->data = temp->next->data;
                temp->next->data = val;
            }
            temp= temp->next;

        }
        traverse= traverse->next;
    }
}

int main(){

    node* head = NULL;
    int arr[]={7,8,9,3,6,1,3,2};
    int len = sizeof(arr)/sizeof(arr[0]);

    for (int i=0;i < len; i++){
        insert_node(&head, arr[i]);
    }

    print_node(head);
    reverse_the_list(&head);
    print_node(head);
    sort_the_list(&head);
    print_node(head);
}
