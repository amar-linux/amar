//Read Read.md
//
#include<stdio.h>
#include<stdlib.h>

int main (){

    for (int i=0; i<5; i++){

    char* ptr = malloc(50000);
    
    printf ("Got the meory access: %p\n", ptr);
    }
}
