#include<stdio.h>
#include<stdlib.h>



typedef struct node_t {
    int data;
    struct node_t* next;
}node;


void add_node(node** head, int value)
{
    node* temp = *head;
    *head = (node*) malloc(sizeof(node));
    (*head)->data = value;
    (*head)->next = temp;
}

void print_node(node* walk){
    printf("printint elemnet\n");
    while (walk){
        printf ("%d,\t", walk->data);
        walk = walk->next;
    }
    printf("\n\n");
}

void delete_node(node** head, int value){
    node* current = *head;
    node* prev = NULL;

    while (current->data != value && current != NULL)
    {
        prev = current;
        current = current->next;
    }
    if (!prev)
    {
        printf ("Value not found \n");

    }else if(current == *head)
    {
    *head = current->next;
    }else
    {
        prev->next = current->next;
    }
   // free(current);




    
}
int main(){

    node* head = NULL;
    for (int i=0; i<6; i++){
        add_node(&head, i*10);
    }
    print_node(head);

    delete_node(&head, 50);
    print_node(head);

}
