#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct node_t
{
    struct node_t *next;
    int data;
}node;
node* allocateNode(int value){
    node* temp = (node*)malloc(sizeof(node));
    temp->data = value;
    temp->next = NULL;
    return temp;

}

void addNode(node** head, int value){
    node* temp = allocateNode(value);
    temp->next = *head;
    *head = temp;
}


void printNode(node* head){
    while (head)
    {
        printf("%d, ", head->data);
        head = head->next;
    }
    printf ("\n");
}

void deleteNode(node** head, int value){
    bool isFound = false;
    node* prev= NULL;
    node* current= *head;
    while (current)
    {
        if (current->data == value){
            isFound = true;
            break;
        }
        prev = current;
        current = current->next;
    }
    if (isFound){
        if (*head == current){
            *head = current->next;
        }else
        {
            prev->next = current->next;
        }
    free(current);
    }else
    {
        printf ("Element not found..\n");
    }

}

int main(){

    node *head = NULL;
    int i=0;
    int arr[]= {1,2,3,4,5};

    for (i=0; i < 5; i++){
        addNode(&head, arr[i]);
    }

    printNode(head);

    deleteNode(&head, 3);
    printNode(head);
    deleteNode(&head, 5);
    printNode(head);
    deleteNode(&head, 99);
    printNode(head);
}

