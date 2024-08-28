#include<stdio.h>
#include<stdlib.h>
#define pragma pack(1)

typedef struct nodeint{
    int a;
    char b;
    int c;
}__attribute__ ((packed))nodeint;
typedef struct nodepnt{
    int *a;
    char b;
    char c;
}nodepnt;
typedef struct nodechar{
    char a;
    char b;
    char c;
}nodechar;


int main(){
    printf ("the sizeof of nodeint is %d", sizeof(nodeint));
    printf ("\n");
    printf ("the sizeof of nodepnt is %d", sizeof(nodepnt));
    printf ("\n");
    printf ("the sizeof of nodechar is %d", sizeof(nodechar));
    printf ("\n");
}
