#include<stdio.h>
#include<stdlib.h>

void not_main(){
    printf ("In not main:\n");
    return ;
    printf ("again In not main:\n");
}


int main(){

    printf ("In main\n");
    not_main();
    printf ("Again in main\n");
}
