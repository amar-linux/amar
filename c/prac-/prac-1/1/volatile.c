#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
#include<stdbool.h>
volatile  bool done = false ;

void* fun(void *args)
{
    sleep(1);
    done = true;
    return NULL;
    
}

int main(){

    pthread_t t1;
    pthread_create(&t1, NULL, fun, NULL);
    

    printf("Waiting..\n");
    while (!done)
    {
    }
        printf ("OK\n");
}
