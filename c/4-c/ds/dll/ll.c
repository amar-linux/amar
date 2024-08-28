#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>



typedef struct node_t
{
    int data;
    struct node_t* next;
    struct node_t* prev;
}node;

node* allocateNode(){
    return ((node*)malloc(sizeof(node)));

}


int addNode(node* ptr, int value){
    node* temp = allocateNode();
    if (!temp)
    {
        printf ("Couldnot allocate the memory ...\n");
        return 0;
    }
    // fill the value 
    temp->data = value;
    temp->next = temp->prev = NULL;
    if (!ptr->next || !ptr->prev)
    {
        ptr->next = ptr->prev = temp;
        
    }else {
        ptr->prev->prev = temp;
        temp->next = ptr->prev;
        ptr->prev = temp;
    }
    return 1;
}

int addNodeInStart(node* ptr, int value){
    node* temp = allocateNode();
    if (!temp)
    {
        printf ("Couldnot allocate the memory ...\n");
        return 0;
    }
    // fill the value 
    temp->data = value;
    temp->next = temp->prev = NULL;
    if (!ptr->next || !ptr->prev)
    {
        ptr->next = ptr->prev = temp;
        
    }else {
        ptr->prev->prev = temp;
        temp->next = ptr->prev;
        ptr->prev = temp;
    }
    return 1;

}


int addNodeAtEnd(node* ptr, int value){

    node* temp= allocateNode();
    if (!temp)
    {
        printf ("Couldnot allocate the memory ...\n");
        return 0;
    }
    // fill the value 
    temp->data = value;
    temp->next = temp->prev = NULL;
    if (!ptr->next || !ptr->prev)
    {
        ptr->next = ptr->prev = temp;
    }
    else
    {
        ptr->next->next = temp;
        temp->prev = ptr->next;
        ptr->next = temp; 
    }
    return 1;
}
    


void printNode(node* ptr)
{

    node* traversal = ptr->prev;
    while (traversal)
    {
        printf ("%d,\t",traversal->data);
        traversal = traversal->next;
    }
    printf("\n");
}


void printNodeReverse(node* ptr)
{

    node* traversal = ptr->next;
    while (traversal)
    {
        printf ("%d,\t",traversal->data);
        traversal = traversal->prev;
    }
    printf("\n");
}

bool deleteNode(node* ptr, int value)
{
    node* traversal = ptr->prev;
    bool bfound = false;
    while (traversal)
    {
        if (traversal->data == value)
        {
            bfound = true;
            if (traversal == ptr->prev)
            {
                ptr->prev = ptr->prev->next;
            }else if (traversal == ptr->next)
            {
                ptr->next = ptr->next->prev;
            }
            else
            {
                traversal->prev->next = traversal->next;
                traversal->next->prev = traversal->prev;
            }
            break;
        }
        traversal = traversal->next;
    }
    if (bfound)
    {
        free(traversal);
    }

    return bfound;

}


int main(){

    node holder;
    holder.next = NULL;    // will hold tail end 
    holder.prev = NULL;   // will hold head 

    int arr[]={1,3,5,7,4,9};

    for (int i=0; i< 6; i++){
        addNode(&holder, arr[i]);

    }
    printNode(&holder);
    printNodeReverse(&holder);
    if (!addNodeInStart(&holder, 99)){
        printf ("could not add element..\n");
    }else
    {
    printNode(&holder);
    }
    if (!addNodeAtEnd(&holder, 100))
    {
        printf ("could not add element..\n");
    }
    else 
    {
        printNode(&holder);
    }
    int ddata = 7;

    if (!deleteNode(&holder, ddata))
    {
        printf ("Did not find the element in the list...\n");
    }else{
        printf ("deleted an element %d\n current list is ...\n", ddata);
        printNode(&holder);
        
    }
}
