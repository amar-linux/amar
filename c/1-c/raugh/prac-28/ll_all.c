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
    temp->data = value;
    temp->next = NULL;
    return temp;
}

node* push_node(node* head, int value){
    node* temp;

    if (!(temp = create_node(value))){
        return NULL;
    }
    if (temp){
        temp->next = head;
        head = temp;
    }
        return head;

}

node* insert_sorted_list(node* head, int value){
    node* current = head;
    node* prev= NULL;
    node* temp;

    while (current && (current->data < value)){
        prev = current;
        current = current->next;
    }if (current == head){
        temp = push_node(current, value);
        return temp;
    }else{
        if (!(temp= create_node(value))){
            return head;
        }
        prev->next = temp;
        temp->next = current;
    }
        return head;
}


void print_list(node* head){
    if (head == NULL){
        printf ("Empty list..\n");
    }
    while(head){
        printf ("%d, ", head->data);
        head = head->next;
    }
    printf ("\n");
}

node* delete_node(node* head, int value){
    node* prev= NULL;
    node* current = head;
    if (!current)return NULL;
    while (current &&(current->data != value)){
        prev = current;
        current = current->next;
    }
    if (!current){
        printf ("Value not found: %d\n", value);
    }else if (current == head){
        head = head->next;
        free (current);
    }else{
        prev->next = current->next;
        free (current);
    }
    return head;
    
}

void find_middle_node(node* head){
    node* ptr1 = NULL;
    node* ptr2 = head;
    if ((head == NULL)|| (head->next == NULL)){
        printf ("List has 2 or less that 2 elements\n");
        return;
    }
    while (ptr2){  // ptr2 reaches end that is when we have to exit 
        // ptr2 reaches end meaning ptr2->next is null.
        if (!ptr1){
            ptr1 = head;
        }else{
            ptr1 = ptr1->next;
        }
        ptr2 = ptr2->next;
        if (ptr2){
            ptr2= ptr2->next;
        }
    }
    printf ("Middle element of the list is %d\n", ptr1->data);
}

int main(){
    node* head = NULL;
    int len;
    int arr[]= {5,3,7,4,6};
    
    len = sizeof(arr)/sizeof(arr[0]);

    for (int i=0; i< len; i++){
        head = insert_sorted_list(head, arr[i]);
    }
    print_list(head);
    head = delete_node(head, 1);
    print_list(head);
    head = delete_node(head, 19);
    print_list(head);
    find_middle_node(head);


}
