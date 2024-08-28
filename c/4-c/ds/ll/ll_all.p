#include<stdio.h>
#include<stdlib.h>

typedef struct node_t
{
    int data;
    struct node_t* next;
}node;


void add_node(int value, node** head)
{
    node* temp = (node*)malloc(sizeof(node));
    temp->next = *head;
    temp->data = value;
    *head = temp;

}

void print_node(node* head)
{
    printf("printing Elements\n");
    while(head)
    {
        printf ("%d,\t",head->data);
        head = head->next;
    }
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
    if (temp == NULL)
    {
        printf("element not found\n");
        return;
    }
    if (temp == *head)
    {
        *head = temp->next;
    }
    else
    {
        prev->next = temp->next;
    }
}

int main()
{
    node *head = NULL;

    for (int i=0; i < 6; i++)
    {
        add_node(i, &head);
    }
    print_node(head);

    delete_node(2,&head);
    print_node(head);

}
