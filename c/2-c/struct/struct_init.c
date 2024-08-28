#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node{
    int a;
    int b;
    struct node* next;
}node;

int main(){
    node a1 ={1};
    node *p1 = malloc(sizeof(node));
    memset(p1, 0, sizeof(node));
    node *p2 = malloc(sizeof(node));
    *p2 =(node){0};

    printf ("a= %d, b = %d nodeptr = %lu",a1.a, a1.b, a1.next);
    printf ("\n");
    printf ("a= %d, b = %d nodeptr = %lu",p1->a,p1->b,p1->next);
    printf ("\n");
    printf ("a= %d, b = %d nodeptr = %lu",p2->a,p2->b,p2->next);
    printf ("\n");
}
