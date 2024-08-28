#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}node;

node* create_node(int value){
    node* result = (node*)malloc(sizeof(node));
    result->data = value;
    result->next = NULL;
    return result;
}

node* add_node(node* head, int value){
    node* temp = create_node(value);
    if (head == NULL){
        head = temp;
    }else{
        temp->next = head;
        head = temp;
    }
    return head;
}
void print_list(node* head){
    while (head != NULL){
        printf("%d, ", head->data);
        head = head->next;
    }
    printf("\n");
}
node*  delete_element(node* head, int index){
    if (head == NULL){
        printf ("Empty List...\n");
        return head;
    }
    int i =1;
    node* temp;
    node* temp1 = head;
    node* temp2 = head->next;
    if (index ==0){
        temp = head;
        head = head->next;
        free(temp);
    }else{
        while (temp1 != NULL){
            if (i == index){
                temp = temp1->next;
                temp1->next = temp1->next->next;
                free(temp);
                return head;

            }
            i++;
            temp1= temp1->next;
            if (temp2 != NULL)temp2 = temp2->next;
        }
        printf ("Index out of range..\n");
    }
    return head;

}

node* insert_at_postion(node* head, int position, int value){
    int i=1;
    node* temp;
    node* temp1 = head;
    if (position == 0){
        temp1 =add_node(head, value);
    }else {
        while (head->next != NULL){
            if (i == position){
            temp = create_node(value);
            temp->next = head->next;
            head->next = temp;
            return temp1;
            }
            head = head->next;
            i++;
        }

    }
    return temp1;

}
void remove_duplicates(node* head){
    if (head == NULL){
        printf ("Empty list...\n");
        return;
    }
    node* temp1 = head;
    node* temp2;
    while (temp1 != NULL){
        temp2 = temp1;
        while (temp2->next != NULL){
            if (temp1->data == temp2->next->data ){
                node* dup = temp2->next;
                temp2->next = temp2->next->next;
                free(dup);
                break;
            }
            temp2 = temp2->next;
        }
        temp1 = temp1->next;

    }
}

node* find_and_delete(node* head, int value){
    node* temp= head->next;
    node* temp1 = head;
    if (head->data == value ){
        temp = head;
        temp1 = head->next;
        free(temp);
    }else {
        while (temp != NULL){
            if (temp->data == value){
                head->next = head->next->next;
                free(temp);
                break;
            }
            temp = temp->next;
            head = head->next;
        }
    }
    return temp1;

}

int main(){
    node* head= NULL;
    int index;
    int value;
    int position;


    for (int i=0; i<7; i++){
        head = add_node(head, i*2);
    }
    print_list(head);
    print_list(head);
    printf ("Enter the index to be deleted: ");
    scanf("%d",&index);
    head = delete_element(head, index);
    print_list(head);
    for (int i =0; i < 4; i++){
        printf ("Enter position: ");
        scanf("%d", &position);
        printf ("Enter value: ");
        scanf("%d",&value);
        head = insert_at_postion(head, position, value);
        print_list(head);
    }
   // remove_duplicates(head);
    print_list(head);

    printf ("Enter the number to be deleted: ");
    scanf("%d",&value);
    find_and_delete(head, value);
    print_list(head);
}
