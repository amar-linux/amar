


void check_loop(node** head){

    node* current = *head;
    node* traverse = *head;
    int check =0;
    while (!current){
        traverse = (*head);
        while (!traverse){
            if (traverse->next == current){
                printf ("We have a loop..\n");
                check =1;
                break;
            }
            traverse = traverse->next;

        } if (check == 1){
            break;

        }else{
            current = current->next;
        }

    }
}
