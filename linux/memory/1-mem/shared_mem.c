#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/mman.h>
#include <sys/wait.h>
#include<stdint.h>
#define PAGESIZE 4096


int v =5;

int main(){

    uint8_t* shared_memory =(uint8_t*) mmap(NULL, PAGESIZE, 
                                  PROT_READ | PROT_WRITE,
                                  MAP_SHARED | MAP_ANONYMOUS, -1, 0);
    *shared_memory = 34;

    if (fork() ==0){
        v =80 ;// value changed in child process;
        *shared_memory = 15;
    }else{
        wait (NULL); // this is parent part . 
        // parent will wait for the cild to finish.
    }
    
    printf ("Not shared: %d\n", v);
    printf (" shared: %d\n", *shared_memory);
}
