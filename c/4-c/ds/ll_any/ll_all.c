#include<stdio.h>
#include<stdlib.h>
typedef struct node_t{
    int data;
    struct node_t* next;

}node;


node* create_node()
{
    return((node*)malloc(sizeof(node)));
}

int add_node(node** head, int value, int position)
{
    
    int i =0;
    node* temp = create_node();
    temp->data = value;
    node* current = *head;
    node* prev;
    
    if (!temp)
    {
        return -1;
    }
    if (position == 0 )
    {
        temp->next = *head;
        *head = temp;
        return 0;
    }
    for (i =0; i < position ; i++){
        if (!current)
        {
            free(temp);
            return -1;
        }
        prev = current;
        current = current->next;
    }
    prev->next = temp;
    temp->next = current;
    return 0;
}


int delete_node(node** head, int position)
{

    node* temp;
    node* current = *head;
    node* prev;

    if (position == 0)
    {
        temp = *head;
        *head = (*head)->next;
        free(temp);
        return 0;
    }
    for (int i=0; i< position; i++){
        if (!current){
            return -1;
        }
        prev = current;
        current = current->next;
    }
    prev->next = current->next;
    free (current);
    return 0;
}


void print_list(node* head)
{
    printf ("Printing list...\n");
    while (head)
    {
        printf ("%d, ", head->data);
        head = head->next;
    }
}



int main(){

    node* head;
    int position;
    int value;
    int choice;

    while(1){
        printf("Enter the choice:1-add, 2-delete, 3-print 4-exit:  ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf ("enter the value: ");
                scanf("%d",&value);
                printf ("enter the position: ");
                scanf("%d",&position);
                if (add_node(&head, value, position) == -1)
                {
                    printf ("could not addd the value , check position..\n");
                }
                break;
            case 2:
                printf ("enter the position: ");
                scanf("%d",&position);
                if (delete_node(&head, position) == -1)
                {
                    printf ("could not delete the elemet..\n");
                }
                break;
            case 3:
                print_list(head);
                break;
            case 4:
                return 0;

        }
    }
}
