#include<stdio.h>
#include<unistd.h>

int main(){

    int i=0;
    for (;;){
        sleep(1);
        printf ("%d\n",i);
        i++;
    }
}
