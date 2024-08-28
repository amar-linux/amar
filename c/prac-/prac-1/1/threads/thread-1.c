#include<stdio.h>
#include<unistd.h>
#include<pthread.h>



void myturn()
{
        for (int i=0; i< 10; i++)
    {
        sleep(1);
        printf ("%d. My turn..\n", i);
    }
}


void yourturn (){
        for (int i=0; i< 5; i++)
    {
        sleep(1);
        printf("%d. your turn..\n",i);
    }
}
int main(){

    pthread_t t1;

    pthread_create(&t1,NULL, myturn, NULL);
    yourturn();
    
    pthread_join(t1, NULL);


}
