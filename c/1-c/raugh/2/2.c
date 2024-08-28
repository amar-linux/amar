#include<stdio.h>
typdef struct node{
    int data;
    struct node* next;
}node;

node* head;
node* tail;

// 1,3, 5, ,6 ,7 ,3,8
// head -1  3  7  6 
// tail -2  3  5  6 

// i =0 1
//    1 3
//    2 5
//    3 6
int find_middle_node(){

    node* tempb = head;
    int length =0;
    while (tempb !=NULL){
        tempb = tempb->next;
        length++;

    }
    tempb = head;
    for (int i =0; i<= (length+1)/2; i++){
        tempb = tempb->nextl

    }
    retutn tempb->data;
    

}

// 1,3, 5, ,6 ,7 ,3,8

temp1 1 3 5 6 7 3 8
temp2  3 5 6
int find_node(){

    node* temp1= head;
    node* temp2= head;

    while (temp1 != NULL ){
        temp1 = temp1->next;
        if (temp1 != NULL){
            temp1 = temp1->next;
        }
        temp2 =temp2->next;
    }
    return temp2->data;
    
}





int main(){

}

int calulate_factorial(int a){
    if (a == 1){
        reurn 1;
    }else {
       int value = a*  calulate_factorial(a-1);
    }
    return value;

}


int main (){
    calulate_factorial(4);
}

void preorder_traversal(node* root){
    
    if (root == NULL) return;
    preorder_traversal(root->left);
    printf ("%d", root->data);
    preorder_traversal(root->right);
}

// 10 5 4 6 13 12 14 




       10
  5        13
4   6 12       14



1 ---> 6
print_sigterm(){
    printf ("SIGTERM recieved");
}


int main (){
    signal(SIGTERM, print_sigterm);
    while (1){

    }
    
    int *ptr = malloc(5);
    if (ptr != NULL){
        free(ptr);

    }
    m_free(ptr, xfree_type);
}


void m_free(void* ptr, xfree_type ){

    xfree_type* ptr1 = (xfree_type*)ptr;
    if (ptr != NULL){
        free(ptr1);
        memset(ptr1, 0, sizeof(xftree_type));



    }
    

}
2
3
4
5

