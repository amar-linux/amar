



void reverse_link(node** head){
    node* current = *head;
    node* prev = NULL;
    node* next = NULL;

    while (current){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    (*head) = prev;

}


void reverse_in_pair(node** head){
    node* current = head;
    node* prev = NULL;
    node* next = NULL;
    int count=0;

    while (current){
        count++;
        }
        next= current->next;
        if (!(count %2) && count !=0){

        current->next = prev;
        }
        prev = current;
        current = next;
        }
    }

    

}
