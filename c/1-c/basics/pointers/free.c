#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int* ptr = malloc(sizeof(int));
    *ptr =5;
    free(ptr);
    memset(ptr, 5, sizeof(int));
    printf ("The data is %d\n", *ptr);
}
