#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include"shared_memory.h"

int main(int argc, char** argv){

    if (argc != 2){
        printf("usage: %s[Stuff to write]", argv[0]);
        return -1;
    }
    // grab the shared  memory block .
    char* block = attach_memory_block(FILENAME, BLOCK_SIZE);
    if (block == NULL){
        printf ("Couldnot get the block:\n");
        return -1;
    }

    printf("Writting: \"%s\"\n", argv[1]);
    strncpy(block, argv[1], BLOCK_SIZE);

    detach_memory_block(block);

    return 0;

}
