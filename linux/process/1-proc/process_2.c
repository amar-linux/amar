#include<stdio.h>
#include <unistd.h>

int main(){

    if (fork() ==0){
        printf ("I am child");
        execlp("ls", "ls", "-al",NULL );
    }else {
        printf ("This part of programm will never be printed until exec fails.");
    }
}
