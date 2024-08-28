#include<stdio.h>
#include<pthread.h>



#define COUNT_TO_BIG 100000
pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;


int val = 0;

void* countToBig()
{
    int i=0;
    for (i=0; i < COUNT_TO_BIG; i++){
        pthread_mutex_lock(&lock);
        val++;
        pthread_mutex_unlock(&lock);
    }
}



int main()
{
    pthread_t T1;
    pthread_create(&T1, NULL, countToBig, NULL);
    countToBig();
    pthread_join(T1, NULL);


    printf ("the final value is %d\n", val);



}
