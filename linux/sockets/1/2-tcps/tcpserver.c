#include"common.h"
#include<string.h>

int main(int argc, char** argv){
    int listenfd, connfd, n;
    struct sockaddr_in servaddr;
    uint8_t buff[MAXLINE+1];
    uint8_t recvline[MAXLINE+1];


    if ((listenfd = socket(AF_INET, SOCK_STREAM, 0))< 0){
        err_n_die("Socket createion error");
    }
    // initialize the address on which server will listen 
    // i.e servaddr
    // and before that initialize the server addr with zero.
    bzero(&servaddr,sizeof(servaddr));
    servaddr.sin_family = AF_INET;
    servaddr.sin_addr.s_addr = htonl(INADDR_ANY);// i am responding 
    // to any address , this is not the one server will use to listen
    servaddr.sin_port = htons(SERVER_PORT);

    // now we bind the serveraddress 
    // thi basically tells us that hey i will listen on this address.
    if ((bind(listenfd, (SA*)&servaddr,sizeof(servaddr)))<0){
        err_n_die("Bind error");
    }

    // now we set up the listening queue for listening to the incoming
    // connection
    if ((listen(listenfd, 10))< 0){
        err_n_die("Listen Error");
    }
    // after listening the socket will be in blocking accept call
    // accept call will wake up upon recieving connect call
    // from client.

    for (;;){
        struct sockaddr_in addr;
        socklen_t addr_len;
        char client_address[MAXLINE +1];
        // the above two structures will be used in bind
        // call when we want to get the client address.
        // accept call blocks until incoming connection arrives 
        // it returns a file descriptor to the connection.
        printf ("Waiting for the incoming connection...\n");
        fflush(stdout);
     //   connfd= accept(listenfd,(SA*)NULL, NULL);
     //   Now to get the client address what we can do in accept
     //   call is 
        connfd= accept(listenfd,(SA*)&addr, &addr_len);
        inet_ntop(AF_INET, &addr, client_address, MAXLINE);
        printf ("Connection from client: %s\n", client_address);
        // last to parameters are useful when you want to fetch the 
        // client address.
        // zero out the recieve buffer and make sure it ends up NULL
        // terminated.
        memset(recvline, 0, MAXLINE);
        while ((n = read(connfd, recvline, MAXLINE))> 0){
            fprintf(stdout, "\n%s\n\n%s", bin2hex(recvline, n)
                    ,recvline);
            if(recvline[n-1] == '\n'){
                break;
            }
            memset(recvline, 0, MAXLINE);
        }
        if (n<0){
            err_n_die("Read Error...");
        }
        // now send a response;
        snprintf((char*)buff, sizeof(buff), 
                "HTTP/1.0 200OK\r\n\r\nHello");
        // note: normally you may want to cjeck the result from the close 
        // in case error occurs .
        write(connfd, (char*)buff, strlen((char*)buff));
        close(connfd);

    }


}
