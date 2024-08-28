#include<stdio.h>
#include<sys/types.h>
#include<sys/uio.h>
#include<unistd.h>
#include<ctype.h>
#include<fcntl.h>



int main(){

    int fd= open("mynamedpipe", O_RDONLY );
    char c;

    while (read(fd, &c,1) > EOF){
        printf ("%c",toupper(c));

    }
    close(fd);
}
