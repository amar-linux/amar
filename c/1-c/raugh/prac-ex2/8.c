#include<stdio.h>
#include<string.h>
typedef struct node{
    struct node* next;
   char c[119]; 
   // struct node* next;
}node;


int main(){

    char str1[]="Amarjeet Singh";
    char* str2="Amarjeet Singh";
    printf ("size od node is %lu\n", sizeof(node));
    printf ("size od str1 is %lu\n", sizeof(str1));
    printf ("size od str2 is %lu\n", sizeof(str2));
    printf ("len od str1 is %lu\n", strlen(str1));
    printf ("len od str2 is %lu\n", strlen(str2));



}
