#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <fcntl.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#define PORT           3490 /* default port */
#define QLEN           10    /* request queue size */
#define BUF_SIZE        1024
void *handle_clnt(int sockfd);
void send_err(int sockfd);
void send_msg(int sockfd);
int main(int argc, char *argv[]){
    int sockfd, new_fd;  /* listen on sock_fd, new connection on new_fd */
    struct sockaddr_in server_addr; /* structure to hold server's address */
