#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct node_t{
    int element;
    struct node_t* next;
}node;




node* allocateNode(){
    node* temp =(node*)malloc(sizeof(node));
    memset(temp, 0, sizeof(node));
    return temp;
}


node* addNode(int value, node** ptr){
    node* temp = allocateNode();
    temp->element = value;
    temp->next = NULL;
    if (!(*ptr))
    {
        *ptr = temp;
    }else
    {
        temp->next = *ptr;
        *ptr = temp;
    }

    return temp;
}



void printList(node* ptr)
{
    while (ptr)
    {
        printf ("%d,\t",ptr->element);
        ptr = ptr->next;
    }
    printf ("\n");
}

int arrangeNodeAscendig(node** head)
{
    node* temp = NULL;
    node* temp1;
    int var;
    if (!(*head)){
        printf("Empty linked list..\n");
        return 0;
    }
    temp1 = *head;
    while (temp1->next){

    temp = *head;
    while (temp->next)
    {
        if (temp->element < temp->next->element){
            var = temp->element;
            temp->element = temp->next->element;
            temp->next->element = var;
        }
        temp = temp->next;
    }
    temp1 = temp1->next;
    }
    return 1;

}

int ReverseList(node** head){

    if (!(*head)){
        printf ("List is empty\n");
        return 0;
    }
    node* prev = NULL;
    node* temp = NULL;
    node* next = *head;

    while (next){
        temp = next;
        next = temp->next;
        temp->next = prev;
        prev = temp;
    }
    *head = temp;


    return 1;
}
// Stack implementation.

int push(node** head, int value)
{
    node* temp = allocateNode();
    if (!temp)
    {
        printf ("Node allocation failed..\n");
        return 0;
    }
    temp->element = value;
    temp->next = *head;
    *head = temp;

    return 1;

}


int pop(node** head)
{
    if (!(*head))
    {
        printf ("Empty stack..\n");
        return 0;
    }

    node* temp = *head;
    *head = temp->next;
    free(temp);

    return 1;

}




//queue implementation

int enque(node** head,node** tail, int value)
{
    node* temp = allocateNode();
    temp->element = value;

    if (!(*head))
    {
        *head = temp;
        *tail = temp;
    }

    (*tail)->next = temp;
     *tail = temp;

     return 1;

}

int deque(node** head, node** tail){
    if (*head == *tail){
        printf ("last elemennt ...\n");
        free (*head);
        *tail = *head = NULL;
        return 1;
    }

    node* temp = *head;
    *head = temp->next;
    free(temp);
    return 1;

}


int main(){

    int arr[5] ={3,2,4,9,1};
    node* head = NULL;
    node* tail = NULL;

 //   for (int i =0; i < 5; i++){
 //     if  (!addNode(arr[i], &head))
 //     {
 //         printf ("Node %d did not get added\n", arr[i]);

 //     }

 //   }
    for (int i =0; i < 5; i++)
    {
       // enque(&head, &tail, arr[i]);
       push(&head, arr[i]);
    }
    printList(head);
 //   deque(&head, &tail);
    pop(&head);

    printList(head);

    arrangeNodeAscendig(&head);
    printList(head);
    ReverseList(&head);

    printList(head);


    // queue 
    printList(head);


    return 0;
}
