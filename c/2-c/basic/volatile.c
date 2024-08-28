#include<stdio.h>
#include<stdbool.h>
#include<pthread.h>
#include<signal.h>
#include<unistd.h>

bool done = false;

void *tfunc(void* arg){
//    sleep(1);
    done = true;
    return NULL;

}

int main(){

    pthread_t t1;
    pthread_create(&t1, NULL,tfunc,NULL);

    printf ("Waiting....\n");
    while(!done){

    }
    printf ("Ok Moving On....\n");
}


