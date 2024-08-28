#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>

void* myturn (void* value){

    int a = *((int*)value);
    printf ("The value recieved is %d\n", a);

    int *ptr = malloc(sizeof(int));
    *ptr =10;
    return ptr;
}

int main(){


    pthread_t t1;
    void* ptr1 = NULL;
    int v=5;
    pthread_create(&t1, NULL, myturn, &v);

    pthread_join(t1, &ptr1);
    int a = *((int*)ptr1);
    printf ("The value recieved from the thread function is %d\n", a);
}
