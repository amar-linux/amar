#include<stdio.h>
#include"display.h"



int displaycount=0;


void logoutput(char *msg){
    printf ("LOG: %d--- %s\n",displaycount,msg);
    displaycount++;
}
