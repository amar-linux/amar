#include<stdio.h>
#include<pthread.h>
#include<unistd.h>


void* yourFun(void* value)
{
    int i = 0;
    int data = *((int*)value);
    for (i = 0; i < 10; i++){
        sleep(1);
        printf ("%d: yourFun %d\n", i , data);
        data++;
    }
    *((int*)value) = data;
    return value;
}

void myFun()
{
    int i = 0;
    for (i = 0; i < 5; i++){
        sleep(1);
        printf ("%d: yourFun %d\n", i , 5);
        printf ("\n");
    }


}


int main()
{
    int *result;
    pthread_t t1;
    int value = 10;
    pthread_create(&t1, NULL, yourFun, &value);
    myFun();
    pthread_join(t1, (void*)&result);

    printf ("the returned value is %d\n", *result);
}
