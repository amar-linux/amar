#include<stdio.h>
#include<unistd.h>
#include<pthread.h>


void myturn(){
    int i=0;
    while(1){
        i++;
        printf ("My Turn!-%d\n",i);
        sleep(1);
        if (i == 6){
            int *ptr = NULL;
            *ptr =5;
        }
    }

}

void* yourturn(void* r){
    while(1){
        printf ("Your Turn!\n");
        sleep(2);
    }

}


int main(){
    pthread_t t;

    pthread_create(&t, NULL, yourturn, NULL);




    myturn();


}
