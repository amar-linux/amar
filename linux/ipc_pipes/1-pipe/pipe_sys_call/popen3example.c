#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include"popen3.h"

const int BUFSIZE = 4096;

int main(){

    stdpipes mypipes = popen3("./testprogram");

    char buf[BUFSIZE];
    fprintf(mypipes.in, "Hello Youtube\n");
    fclose(mypipes.in);

    while (fgets(buf, BUFSIZE,mypipes.out)){
        printf ("OUT: %s\n", buf);
    }
    while (fgets(buf, BUFSIZE,mypipes.err)){
        printf ("OUT: %s\n", buf);
    }

}
