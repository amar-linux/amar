#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    struct node* next;
    int data;
}node;


node* create_node(int value){
    node* temp;
    if (!(temp= malloc(sizeof(node)))){
        return NULL;
    }
    temp->data = value;
    temp->next = NULL;
    return temp;

}


node* insert_node(node* head, int value){
    node* temp;
    node* current= head;
    node* prev;

    if (!(temp = create_node(value))){
        printf ("Allocation failed\n");
        return head;
    }
    while (current && current->data < value){
        prev = current;
        current = current->next;
    }if(current == head) {
        head = temp;
        temp->next = current;
        return head;
    }
    prev->next = temp;
    temp->next = current;
    return head;
}

void print_list(node* head){
    while (head){
        printf ("%d, ", head->data);
        head = head->next;
    }
    printf ("\n");
}

node* reverse_the_list(node* head){
    node* prev = NULL;
    node* current=head;
    node* next = NULL;
    if (head == NULL) return head;
    while (current){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}

void sort_the_list(node* head){
    node* current1 = head;
    node* current2 = head;
    node* prev;
    while (current1){
        current2 = head;
        while(current2->next){
            prev = current2;
            current2 = current2->next;
            if (prev->data > current2->data){
                int temp = prev->data;
                prev->data = current2->data;
                current2->data = temp;
            }
        }
        current1= current1->next;
    }
}

int main(){

    node* head = NULL;
    int arr[]= {3,4,2};
    int len = sizeof(arr)/ sizeof(arr[0]);

    for (int i =0; i< len; i++){
        head = insert_node(head, arr[i]);
    }
    print_list(head);
     head =reverse_the_list(head);
    print_list(head);
    sort_the_list(head);
    print_list(head);



}

