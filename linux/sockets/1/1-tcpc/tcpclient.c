#include<stdio.h>
#include<stdlib.h>
#include<sys/socket.h>
#include<sys/types.h>
#include<signal.h>
#include<string.h>
#include<unistd.h>
#include<arpa/inet.h>
#include<stdarg.h>
#include<errno.h>
#include<fcntl.h>
#include<sys/time.h>
#include<sys/ioctl.h>
#include<netdb.h>
//amar
#define SERVER_PORT 80

#define MAXLINE 4096
#define SA struct sockaddr

void err_n_die(const char* fmt, ...);

int main(int argc, char **argv){
    int sockfd, n;
    int sendbytes;
    struct sockaddr_in servaddr;
    char sendline[MAXLINE];
    char recvline[MAXLINE];
// Usage check...

    int a =5;
    printf ("%d\n",a);
    if (argc != 2){
        err_n_die("usage: %s <server address>", argv[0]);
    }
    if ((sockfd = socket(AF_INET, SOCK_STREAM, 0)) < 0){
        err_n_die("Error while creating socket: \n");
    }
    bzero(&servaddr, sizeof(servaddr));
    servaddr.sin_family = AF_INET;
    servaddr.sin_port = htons(SERVER_PORT);

    if (inet_pton(AF_INET, argv[1],&servaddr.sin_addr) <= 0){
        err_n_die("inet_pton error for %s", argv[1]);
        // translate addresssss.
        // string for to the ip address.
    }
    if (connect(sockfd,(SA*)&servaddr, sizeof(servaddr))< 0){
        err_n_die("Connect Failed");
    }
    // we are connected we prepair the message to be sent to the 
    // server
    sprintf (sendline, "GET / HTTP/1.1\r\n\r\n");
    sendbytes = strlen(sendline);

    // send the request make sure you send it all.
    //
    if (write (sockfd, sendline, sendbytes)!= sendbytes)
        err_n_die("Write error");

    memset (recvline, 0, MAXLINE);

    while ((n = read(sockfd, recvline, MAXLINE-1))>0)
    {
        printf ("%s", recvline);
    }
    if (n < 0)
        err_n_die("read_error");


    exit (0);

}

void err_n_die(const char* fmt, ...){
    int errno_save;
    va_list ap;

    errno_save = errno;

    // print iut fmt+args
    va_start(ap, fmt);
    vfprintf(stdout, fmt, ap);
    fprintf(stdout, "\n");
    fflush(stdout);

    if (errno_save != 0){

        fprintf(stdout , "(errno = %d) : %s\n",errno_save,strerror(errno_save));
        fprintf(stdout, "\n");
        fflush(stdout);

    }
    va_end(ap);
// thi sis the .. and die part .
// terminate with an error.
    exit(1);


}
