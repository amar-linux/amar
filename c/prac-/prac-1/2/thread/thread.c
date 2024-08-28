#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

void * myFunc(){
    int i=0;
    for (i=0; i < 10; i++){
        printf("%d. myTurn ..\n", i);
        sleep(2);
    }
    return NULL;
}

void *yourFunc()
{
    int i=0;
    for (i=0; i < 10; i++){
        printf("%d. yourTurn ..\n", i);
        sleep(1);
    }
    return NULL;

}


int main(){

    pthread_t T1;
    pthread_create(&T1, NULL, &myFunc,NULL );
    yourFunc();
    pthread_join(T1, NULL);
}
