#include<stdio.h>

typedef struct offset{
    int a;
    char b;
    char c;
    char d;
    double e;
}offset;

#define OFFSETOF(TYPE, ELEMENT)  ((int)(&(TYPE*)->ELEMENT)))
#define OFFSETOF1(TYPE, ELEMENT) ((size_t)&(((TYPE *)0)->ELEMENT))


int main(){

    offset* value;
    /*
    printf ("strct meoory %x\n, memory of a %x\n, memrory of b %x\n, memory of c %x\n,memory of d %u\n", &value, &(value->a), &(value->b),&(value->c),&(value->d));
    printf ("\n\n");
    printf ("memory offset of d is %u\n ",&(value->d));
    printf ("memory offset of e is %u\n ",&(value->e));
*/

    printf ("\n\n");

    printf ("offset of d is %u\n",OFFSETOF(offset,d));



}
