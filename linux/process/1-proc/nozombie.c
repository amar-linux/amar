#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<wait.h>
int main(){

    while (1){
        if (fork() == 0){
            printf ("Child started ...and done .. %d\n",getpid());
            return 0;
        }else {
            
            wait(NULL);
            printf ("Parent just wont die.....\n");
            sleep(5);
        }
    }
}
