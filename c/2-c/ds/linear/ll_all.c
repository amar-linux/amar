#include<stdio.h>
#include<stdlib.h>


typedef struct node{
    struct node* next;
    int data;
}node;


node* create_node(int value){
    node* temp;
    if (!(temp = malloc(sizeof(node)))){
        return NULL;
    }
    temp->next= NULL;
    temp->data = value;
    return temp;
}

void insert_node_at_begin(dnode** head, int value){
    node* temp;

    if (!(temp = create_node(value))){
        printf ("Node Creation failed..\n");
        return;
    }
    if (!(*head)){
        *head = temp;
    }else{
        temp->next = *head;
        *head = temp;
    }
}

void print_list(node* head){
    if (!head){
        printf ("Empty List ...\n");
        return;
    }
    while(head){
        printf("%d, ",head->data);
        head = head->next;
    }
    printf ("\n");
}


void insert_node_in_sorted_order(node** head, int value){
    node* temp;
    node* prev = NULL;
    node* current= *head;
    if (!(temp = create_node(value))){
        printf ("Node creation failed..\n");
        return;
    }
    while (current && (value > current->data)){
        prev = current;
        current = current->next;
    }
    if (current == *head){
        temp->next = *head;
        *head = temp;
    }else{
        prev->next = temp;
        temp->next = current;
    }

}

void insert_node_at_the_end(node** head, int value){
    node* temp;
    node* prev;
    node* current = *head;

    if (!(temp = create_node(value))){
        printf ("Node Creation Failed...\n");
        return;
    }
    if (!(*head)){
        *head = temp;
        return;
    }
    while (current){
        prev = current;
        current = current->next;
    }
    prev->next = temp;
    temp->next = current;
}

void insert_node_at_tail(node** head, node** tail, int value){
    node* temp;
    if(!(temp = create_node(value))){
        printf ("node creation failed..\n");
        return;
    }
    if (!(*head) || !(*tail)){
        *head = temp;
        *tail = temp;
    }else{
        (*tail)->next = temp;
        *tail = temp;
    }
}

void sort_the_list(node** head){
    node* currentin = *head;
    node* currentout = *head;
    int tempval;
    node* prev = NULL;
    if (!currentin){
        printf ("Empty list... nothing to sort..\n");
        return;
    }
    while (currentout){
        currentin = *head;
        while (currentin){
            prev = currentin;
            currentin = currentin->next;
            if ((currentin) && (prev->data > currentin->data)){
                tempval = prev->data;
                prev->data = currentin->data;
                currentin->data = tempval;
            }

        }
        currentout = currentout->next;
    }
}

void find_middle_node(node* head){
    node* slowptr = head;
    node* fastptr = head;
    while (fastptr && fastptr->next){
        slowptr = slowptr->next;
        fastptr = fastptr->next->next;
    }
    printf ("The middle node is %d\n", slowptr->data);
}
void reverse_the_list(node** head){
    node* current = * head;
    node* prev = NULL;
    node* next = NULL;

    while (current){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
}

void delete_element(node** head, int value){
    node* traverse = *head;
    node* prev = NULL;
    int check =0;

    while (traverse){
        if (traverse->data == value){
            check =1;
           break;
        }
        prev = traverse;
        traverse = traverse->next;
    }
    if (check == 0){
        printf ("Element not found nothing to delete ...\n");
        return;
    }
    if (!prev){
        prev = *head;
        *head = (*head)->next;
        free(prev);
        prev = NULL;
    }else{
        prev->next = traverse->next;
        free(traverse);
        traverse = NULL;
    }

    
}

void reverse_the_list_in_pair(node** head){
    void count =1;

    node* prev = NULL;
    node* current = *head;
    node* next = NULL;


}


int main(){

    node* head = NULL;
    node* tail = NULL;
    int len;
  //  int arr[]= {88,8,9,4,12,6,67,28,19};
    int arr[] = {1,2,3,4};
    len = sizeof(arr)/sizeof(arr[0]);
    print_list(head);

    for (int i=0; i< len; i++){
        //insert_node_at_begin(&head,arr[i]);
      //  insert_node_in_sorted_order(&head, arr[i]);
      //  insert_node_at_the_end(&head, arr[i]);
        insert_node_at_tail(&head, &tail,arr[i]);

        
    }
    print_list(head);
    reverse_the_list_in_pair(&head);
    print_list(head);
    /*
    sort_the_list(&head);
    print_list(head);
    find_middle_node(head);
    reverse_the_list(&head);
    print_list(head);
    
    delete_element(&head,33);
    print_list(head);
    delete_element(&head, 19);
    print_list(head);
    delete_element(&head, 88);
    print_list(head);
    delete_element(&head, 4);
    print_list(head);
    */
}
