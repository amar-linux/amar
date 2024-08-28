#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/sem.h>
#include<semaphore.h>
#include"shared_memory.h"
#include<fcntl.h>


#include"shared_memory.h"

int main(int argc, char** argv){

    if (argc != 1 ){
        printf("Usage -%s // no args ", argv[0]);
        return -1;
    }
// Setup some semaphores
    sem_unlink(SEM_CONSUMER_FNAME);
    sem_unlink(SEM_PRODUCER_FNAME);
// we start this semaphore at value of 1.
    sem_t *sem_prod = sem_open(SEM_PRODUCER_FNAME, O_CREAT, 0644, 0);
    if (sem_prod == SEM_FAILED){
        perror("sem_open/producer");
        exit(EXIT_FAILURE);
    }

    sem_t *sem_cons = sem_open(SEM_CONSUMER_FNAME, O_CREAT, 0644, 2);
    // initialized it with 1 thi is important bit .:
    if (sem_cons == SEM_FAILED){
        perror("sem_open/consumer");
        exit(EXIT_FAILURE);
    }


    char* block = attach_memory_block(FILENAME, BLOCK_SIZE);
    char* block1 = attach_memory_block(FILENAME1, BLOCK_SIZE);
    if (block == NULL || block1 == NULL){
        printf ("Error: could not get the block\n");
        return -1;
    }
    while(true){
        sem_wait(sem_prod);
        if (strlen(block) > 0 ){
            printf ("Reading: \"%s\"\n", block);
            bool done = (strcmp(block, "quit")==0);
            block[0] =0;
            if (done) {break;}
        }else if (strlen(block1) >0){
            printf ("Reading: \"%s\"\n", block1);
            bool done = (strcmp(block1, "quit")==0);
            block1[0] =0;
            if (done) {break;}

        }
        sem_post(sem_cons);
    }
    sem_close(sem_cons);
    sem_close(sem_prod);

    detach_memory_block(block);
    return 0;
}
