#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node* next;
}node;


node* create_node(int value){
    node* temp;
    if (!( temp = malloc(sizeof(node)))){
        return NULL;
    }
    temp->data = value;
    temp->next = NULL;
    return temp;
}

node* insert_node(node* head, int value){
    node* prev= NULL;
    node* current= head;
    node* temp;

    if (!(temp= create_node(value))){
        printf ("node createion failed:\n");
        return head;
    }
    if (head == NULL){
        return temp;
    }else{
        while (current){
            if (current->data <  value){
                prev = current;
                current= current->next;
            }else{
                break;
            }
        }
    }
    if (current == head){
        temp->next = head;
        head = temp;
        return head;
    }else{
        prev->next = temp;
        temp->next = current;
        
    }
    return head;
    
}
void print_list(node* head){

    while (head){
        printf ("%d, ", head->data);
        head = head->next;
    }
    printf ("\n");
}


node* reverse_list(node* head){
    node* current = head;
    node* prev = NULL;
    node* next = NULL;
    while (current){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;

}


node* delete_node(node* head, int value){
    node* current=head;
    node* prev = NULL;
    int check=0;

    while (current){
        if (current->data == value){
            check =1;
            break;
        }else{
            prev = current;
            current = current->next;
        }
    }
    if (!check){
        printf ("The value is not found...\n");
        return head;
    }
    if(current == head){
        head = current->next;
        free(current);
        return head;
    } else {
        prev->next = current->next;
        free(current);
    }
    return head;
    
}
node* push_node(node* head, int value){
    node* temp;
    if (!(temp = create_node(value))){
        printf ("Malloc failed");
        return head;
    }
    temp->next = head;
    head = temp;
    return head;
    
}


int main(){
    node* head;
    int arr[]= {10,8,5,19,20,43};
    int len = sizeof(arr)/sizeof(arr[0]);

    for (int i=0; i < len; i++){
        head = push_node(head, arr[i]);
    }
    print_list(head);
    /*
    head = reverse_list(head);
    print_list(head);
    head= delete_node(head,10);
    print_list(head);
    head =delete_node(head, 43);
    print_list(head);
    head= delete_node(head,5);
    print_list(head);
    head=delete_node(head,99);
    print_list(head);
*/
    sort_list(head);
    print_list(head);

}
