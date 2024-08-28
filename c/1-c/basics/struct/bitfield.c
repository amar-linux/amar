#include<stdio.h>

// representing flags and options 
//

typedef struct node{
    int a:2;
    char b;
    int c:3;
    char d;
    int e:1;
}__attribute__((packed))node;

int main(){
    printf ("size of struct is %d\n", sizeof(node));


}
