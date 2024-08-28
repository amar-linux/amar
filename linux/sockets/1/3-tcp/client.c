#include"common.h"

int main(int argc, char** argv){

    struct sockaddr_in server;
    int sockfd;
    char input[MAXLINE];
    char output[MAXLINE];
    socklen_t len;

    if ((sockfd = socket(AF_INET, SOCK_STREAM, 0))< 0){
        perror("Client socket: ");
        exit(-1);
    }
    bzero(&sever, 0);
    server.sin_family = AF_INET;
    server.sin_port = htons(atoi(argv[2]));
    if ((inet_pton(AF_INET, argv[1],&(server.sin_addr.s_addr)))<= 0){
        perror ("inet_ntop_error: ");
    }
    if ((connect (sockfd, (SA*)&server, sizeof(SA)))<0){
        perror("Connect: ");
        exit(-1);

    }
    while(1){
        fgets(input, MAXLINE, stdin);
        send(sockfd, input, strlen(input), 0);

        len = recv(sockfd, output, MAXLINE, 0);
        output[len] = '\0';
        printf ("%s\n", output);
    }
    close(sockfd);
}
