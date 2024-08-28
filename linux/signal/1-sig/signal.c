#include<stdio.h>
#include<unistd.h>
#include<signal.h>

void handler(int num){
   // write(STDOUT_FILENO, "I wont die!\n", 13);
   printf ("I womt die");
}

int main(){

    signal(SIGINT, handler);
    while(1){
        printf ("Going on and on and on: %d\n", getpid());
        sleep(3);
    }
}
// ctrl+c will close the programm.
