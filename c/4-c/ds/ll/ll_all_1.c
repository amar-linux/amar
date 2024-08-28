#include<stdio.h>
#include<stdlib.h>
#define pragma pack 

typedef struct node_t
{
    int data;
    struct node_t* next;
}node;

void add_node(int value, node** head)
{
    node* temp = (node*)malloc(sizeof(node));
    temp->data = value;
    temp->next = *head;
    *head = temp;

}

void print_node(node* head)
{
    while(head)
    {
        printf("%d,\t", head->data);
        head= head->next;
    }
    printf ("\n");
}


void delete_node(int value, node** head)
{
    node* temp = *head;
    node* prev = NULL;

    while (temp->data != value && temp != NULL)
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp == *head)
    {
        *head = temp->next;
    }
    else{
        prev->next = temp->next;
    }
    free (temp);
}

void add_in_the_end(int value, node** head)
{
    node* temp = *head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = (node*) malloc(sizeof(node));
    temp->next->data = value;
    temp->next->next = NULL;
    
}

void sort_the_list(node** head)
{
    node* loop = *head;
    int tempv;
    while (loop != NULL){
    node* temp = (*head)->next;
    node* prev = *head;
    loop = loop->next;
    while (temp->next != NULL){
        if (prev->data > temp->data){
            tempv = prev->data;
            prev->data = temp->data;
            temp->data = tempv;
        }
        prev = temp;
        temp = temp->next;
    }
    }
}


int main(){

    node* head = NULL;
    for (int i=0; i < 6; i++)
    {
        add_node(i, &head);
    }

    print_node(head);
    delete_node(2, &head);
    print_node(head);
    add_in_the_end(6,&head);
    print_node(head);

    sort_the_list(&head);
    print_node(head);

}
