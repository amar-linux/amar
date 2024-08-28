#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<semaphore.h>
#include"shared_memeor.h"


#define NUM_ITERATIONS 10

int main(int argc, char** argv)
{
    if (argc !=2)
    {
        printf ("usage - %s [stuff to write]", argv[0]);
    }

    // grab the shared memory block
    char *block = attach_memory_block(FILENAME, BLOCK_SIZE);
    if (!block)
    {
        printf ("could not get the block ...\n");
        return -1;
    }

    printf("writting: \"%s\"\n",argv[1]);
    strncpy(block, argv[1], BLOCK_SIZE);

    detach_memory_block(block);

    return 0;
}
