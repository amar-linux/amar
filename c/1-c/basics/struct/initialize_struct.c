#include<stdio.h>

struct node{
    int a;
    struct node* next;
};


int main(){
    struct node node1 = {0};
    printf ("value of a is %d and pointer is %p",node1.a, node1.next);


}
