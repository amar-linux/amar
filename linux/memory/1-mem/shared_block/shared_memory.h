#ifndef SHARED_MEMORY_H_
#define SHARED_MEMORY_H_

#include<stdbool.h>

// attach shared memory block 
// associate it with file name
// crete if it doesnot exist.
//
char* attach_memory_block(char* filename, int size);
bool detach_memory_block(char* block);
bool destroy_memory_block(char* filename);

// all of the programms will share these values.
#define BLOCK_SIZE 4096
#define FILENAME "writeshmem.c"


#endif
