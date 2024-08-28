#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    struct node* next;
    struct node* prev;
    int data;
}dnode;

dnode* first;
dnode* last;


dnode* create_node(int value){
    dnode* temp = malloc(sizeof(dnode));
    temp->data = value;
    temp->prev = temp->next = NULL;
    return temp;
    
}

void insert_node_at_first(int value){
    dnode* temp;
    if (first == NULL){
        first = create_node(value);
        last = first;
    }else{
        temp = create_node(value);
        temp->next = first;
        first->prev=temp;
        first = temp;
    } 

}

void print_list(){
    dnode* temp = first;
    while (temp != NULL){
        printf("%d, ",temp->data);
        temp = temp->next;
    }
    printf ("\n");
}
void print_list_reverse(){
    dnode* temp = last;
    while (temp != NULL){
        printf("%d, ",temp->data);
        temp = temp->prev;
    }
    printf ("\n");
}

int main(){

    for (int i=0; i< 6; i++){
        insert_node_at_first(i*2);
    }
    print_list();
    print_list_reverse();


}
