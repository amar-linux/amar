#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXNAME 32

typedef struct node{
    char name[MAXNAME];
    int roll;
    struct node* next;
}node;

node* head = NULL;

node* create_node(char* name, int value){
    node* temp = malloc(sizeof(node));
    memset (temp->name, 0, MAXNAME);
    strncpy(temp->name,name, MAXNAME-1 );
    temp->roll = value;
    temp->next = NULL;
    return temp;

}

void add_to_list(char* name, int value){
    node* temp = create_node(name, value);

    if (head == NULL){
        head = temp;
        return;
    }
    node* temp1 = head;
    node* temp2;
    while ((temp1->roll > value) && (temp1 != NULL)){
        temp2 = temp1;
        temp1 = temp1->next;
    }
    temp->next = temp1;
    if (head == temp1){
        head = temp;
    }



}


int main(){

    add_to_list("Amar", 12);

}
