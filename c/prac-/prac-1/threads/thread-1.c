#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

void* yourFun()
{
    int i =0;
    for (i=0; i < 10; i++){
        printf ("%d: yourfun",i);
        printf ("\n");
        sleep(1);
    }
    return NULL;
}


void* myFun()
{
    int i =0;
    for (i=0; i < 5; i++){
        printf ("%d: myfun",i);
        printf ("\n");
        sleep(1);
    }
    return NULL;
}



int main(){
    pthread_t t1;

    pthread_create(&t1, NULL, &yourFun, NULL);
    myFun();
    pthread_join(t1, NULL);
}
