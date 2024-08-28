#include<stdio.h>
#include<stdlib.h>

typedef struct node_t
{
    struct node_t* next;
    int data;
}node;

node* allocateNode(int value)
{
    node *ptr = NULL;
    if (!(ptr = (node*)malloc(sizeof(node))))
    {
        return NULL;
    }
    ptr->data = value;
    return ptr;
}

int addNode(node** head, int value)
{
    node* temp = allocateNode(value);
    if (!(temp = allocateNode(value)))
    {
        printf("Node allocation failed ..\n");
        return 0;
    }
    if (!(*head))
    {
        *head = temp;
    }
    else
    {
        temp->next = *head;
        *head = temp;
    }
    return 1;
}

void printNode(node* traverse)
{
    while (traverse)
    {
        printf ("%d, ",traverse->data);
        traverse = traverse->next;
    }
    printf("\n");
}


void reverseList(node **head)
{
    node* current = *head;
    node* prev = NULL;
    node* pnext = NULL;

    while (current)
    {
        pnext = current->next;
        
        current->next = prev; // reverse the link 
        prev = current;
        current = pnext;
    }
    *head = prev;
}






int main(){

    int arr[10] ={7,3,4,8,1,9,6,5,2,10};
    int i;
    node *head = NULL;

    for (i =0; i < 10; i++)
    {
        addNode(&head, arr[i]);
    }
    printNode(head);
    reverseList(&head);
    printNode(head);

}
