#include<stdio.h>


int main(){
    int *a=NULL;

    if (!(a=NULL)){
        printf ("!a is executed");

    }
    if ((a = NULL)){
        printf ("a is executed");
    }
    printf ("\n");
}
