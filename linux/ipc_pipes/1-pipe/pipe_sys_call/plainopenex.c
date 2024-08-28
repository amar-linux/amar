#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

const int BUFSIZE = 4096;

int main(){

    FILE* pipe = popen("echo \"Hello\" | ./testprogram","r");

    char buf[BUFSIZE];
    while (fgets(buf, BUFSIZE,pipe)){
        printf ("OUT: %s\n", buf);
    }
    pclose(pipe);

}
