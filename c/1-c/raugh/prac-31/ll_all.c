#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node{
    struct node* next;
    int data;
}node;

node* create_node(int value){
    node* temp;
    if (!(temp = malloc(sizeof(node)))){
        return NULL;
    }else{
        temp->data = value;
        temp->next = NULL;
    }
    return temp;
}

node* insert_node(node* head, int value){
    node* temp;
    if (!(temp = create_node(value))){
        printf ("Node creation failed..\n");
        return head;
    }
    if (!head){
        head = temp;
    }else{
        temp->next = head;
        head = temp;
    }
    return head;
}


void print_list(node* head){
    if (!head){
        printf ("Empty list ...\n");
        return;
    }
    while (head){
        printf("%d, ", head->data);
        head = head->next;
    }
    printf ("\n");
}

void find_middle_node(node* head){
    if (head == NULL){
        printf ("The list is empty...\n");
       return;
    }
    node* fastptr= head;
    node* slowptr = head;
    while (fastptr && fastptr->next){
        fastptr = fastptr->next->next;
        slowptr = slowptr->next;
    }
    if (slowptr)
    printf ("the middle niode is %d\n", slowptr->data);

}

/*
void delete_node_with_sum(node* head){
    node* start = head;
    node* end;
    node* newhead;

    while (start){
        end = start->next;
        int sum = start->data;
        bool modified = false;

        while(end){
            sum +=end->data;
            if (sum ==10){
                start->next = end->next;
                modified= true;
                break;
            }
            end= end->next;
        }
        if (!modified){
            newhead = start;
            start = start->next;
        }
    }
}
*/
void delete_middle_of_linked_list(node* head){
    node* fastptr = head;
    node* slowptr = head;
    node* prev = NULL;
    if (head == NULL){
        printf ("Empty list..\n");
        return;
    }
    while (fastptr && fastptr->next){
        fastptr= fastptr->next->next;
        prev = slowptr;
        slowptr= slowptr->next;
    }
    if (prev){
       prev->next = slowptr->next;
       free(slowptr);

    }
}

node* reverse_the_list(node* head){
    node* prev= NULL;
    node* next= NULL;
    node* current = head;
    while (current){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;

}

node* add_one_to_list(node* head){
    int carry=0;
    if (!head){
        printf ("Empty List ..\n");
        return head;
    }
   // printf ("Printing the original list.\n");
    print_list(head);

    head =  reverse_the_list(head);
  //  printf ("Printing the reverse list.\n");
    print_list(head);

    node* current = head;
    while (current){
        current->data = (current->data + 1 + carry)%10;
        if ((current->data %10)== 0){
            carry =1;
        }else{
            carry = 0;
        }
        current = current->next;
    }
  //  printf ("Printing the list after adding 1.\n");
    head = reverse_the_list(head);
  //  printf ("Printing the list after adding 1.\nd reversingn");
    print_list(head);
    return head;

}

int main(){
    node* head = NULL;
    int len;
    
    int arr[]={1,9,9,9};
    len = sizeof(arr)/sizeof(arr[0]);
    find_middle_node(head);

   //  printing the list.
    print_list(head);
    // adding elemnt 
    for (int i=0; i< len; i++){
        head = insert_node(head, arr[i]);
    }
    print_list(head);

    find_middle_node(head);
 //   delete_middle_of_linked_list(head);
  //  print_list(head);
   head = add_one_to_list(head);
// head =reverse_the_list(head);
   // print_list(head);
}
