#include"common.h"

int main(){

    int sockfd, listenfd;
    // take a tcp socket 
    // bind it 
    // listen 
    // accept 
    // send recv
    // close
    struct sockaddr_in server, client;
    socklen_t len;
    char msg[] = "Welcome";

    if ((sockfd = socket(AF_INET, SOCK_STREAM, 0))< 0){
        perror("Socket: ");
        exit(-1);
    } 
    server.sin_family = AF_INET;
    server.sin_port = htons(SERVER_PORT);
    server.sin_addr.s_addr = INADDR_ANY; // this means that this server
    // should bind to all available interfaces on the local machine 
    // eth0 / loopback.
    len = sizeof(struct sockaddr_in);

    if ((bind (sockfd, (SA*)&server,len ))< 0){
        perror("bind: ");
        exit(-1);
    }
    if ((listen (sockfd, 5))< 0){
        perror("Listen: ");
        exit(-1);

    }
    while (1){
        if ((listenfd = accept(sockfd,NULL, NULL)) < 0){
            perror ("Listen: ");
        }
        int sent = send (listenfd, msg, strlen(msg), 0);
        printf ("%d bytes to the client", sent);
        close (listenfd);
    }
}
