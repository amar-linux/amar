#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/sem.h>
#include<semaphore.h>
#include"shared_memory.h"
#include<fcntl.h>

#define NUM_ITERATIONS 10


#include"shared_memory.h"

int main(int argc, char** argv){

    if (argc != 2){
        printf("usage: %s[Stuff to write]", argv[0]);
        return -1;
    }
// I am assuming that reader will start first and these sem calls need
// not create new semaphore they are just accessing it. 
// Setup some semaphores
// therefore reader should be running when the writer start writting
// we start this semaphore at value of 1.
    sem_t* sem_prod = sem_open(SEM_PRODUCER_FNAME, 0);
    if (sem_prod == SEM_FAILED){
        perror("sem_open/producer");
        exit(EXIT_FAILURE);
    }

    sem_t* sem_cons = sem_open(SEM_CONSUMER_FNAME,0);// 
    if (sem_prod == SEM_FAILED){
        perror("sem_open/consumer");
        exit(EXIT_FAILURE);
    }

    // grab the shared  memory block .
    char* block1 = attach_memory_block(FILENAME1, BLOCK_SIZE);
    if (block1 == NULL){
        printf ("Couldnot get the block:\n");
        return -1;
    }
    for (int i=0; i< NUM_ITERATIONS; i++){
        sem_wait(sem_cons); // wait for the consumer to have an open slot
        // its your(producer) turn to put something in buffer.
        // we are waiting for consumer to signal us.
        sleep(5);
        printf("Writting: %d- \"%s\"\n",i, argv[1]);
        strncpy(block1, argv[1], BLOCK_SIZE);
        // signalling the reader that we have put somethingin the buffer
        // and its ready to be read.
        sem_post(sem_prod);
    }

    sem_close(sem_prod);
    sem_close(sem_cons);

    detach_memory_block(block1);

    return 0;

}
