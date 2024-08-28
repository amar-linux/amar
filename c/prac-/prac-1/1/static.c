#include<stdio.h>


static int counter =0;



static void incCount(){
    counter++;
    printf ("incCount: %d\n",counter);
}


void logOutput(char *msg)
{
    static int counter =0;
    printf("LOG: %d ---- %s\n", counter, msg);
    incCount();
    printf ("logOutput: %d\n", counter);
}

int main(){
    printf("%d\n", counter);
    static int count =0;

    char *msg = "hello there";
    logOutput(msg);
    printf ("logOutput main: %d\n", counter);

    msg = "hello 2";
    logOutput(msg);
    printf ("logOutput main: %d\n", counter);

    msg = "hello 3";
    logOutput(msg);
    printf ("logOutput main: %d\n", counter);
}
