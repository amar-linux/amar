#include"display.h"
#include<stdio.h>

extern int displaycount; 

int main(){

    displaycount =8;
    logoutput("One ringh to rule them all.");
    logoutput("One ringh to find them all.");
    logoutput("One ringh to bring them all.");
    logoutput("And in the darkness bind them.");


    printf ("Total number of log messages: %d\n", displaycount);
}

