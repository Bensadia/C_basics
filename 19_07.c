/*
 ============================================================================
 Name        : 19_07.c
 Author      : Bensaadia Mohammed
 Version     : 1.0
 Copyright   : © 2017 
 Description : accept() — Thank you for calling port 3490
 ============================================================================
*/

#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <netinet/in.h>

#define MYPORT "3490"  // the port users will be connecting to
#define BACKLOG 10     // how many pending connections queue will hold

	//int accept(int sockfd, struct sockaddr *addr, socklen_t *addrlen); 
	//accept() returns -1 and sets errno if an error occurs
	
	//sockfd is the listen()ing socket descriptor. Easy enough. 
	
	/*addr will usually be a pointer to a local struct sockaddr_storage. 
	This is where the information about the incoming connection will go 
	* (and with it you can determine which host is calling you from which port). */
	
	//addrlen is a local integer variable that should be set to sizeof(struct sockaddr_storage) before its address is passed to accept().
	//accept() will not put more than that many bytes into addr. If it puts fewer in, it'll change the value of addrlen to reflect that.

int main(){
	
	struct sockaddr_storage their_addr;
    socklen_t addr_size;
    struct addrinfo hints, *res;
    int sockfd, new_fd;

    // !! don't forget your error checking for these calls !!

    // first, load up address structs with getaddrinfo():

    memset(&hints, 0, sizeof hints);
    hints.ai_family = AF_UNSPEC;  // use IPv4 or IPv6, whichever
    hints.ai_socktype = SOCK_STREAM;
    hints.ai_flags = AI_PASSIVE;     // fill in my IP for me

    getaddrinfo(NULL, MYPORT, &hints, &res);

    // make a socket, bind it, and listen on it:

    sockfd = socket(res->ai_family, res->ai_socktype, res->ai_protocol);
    bind(sockfd, res->ai_addr, res->ai_addrlen);
    listen(sockfd, BACKLOG);

    // now accept an incoming connection:

    addr_size = sizeof their_addr;
    new_fd = accept(sockfd, (struct sockaddr *)&their_addr, &addr_size);

    // ready to communicate on socket descriptor new_fd!
    
    /*
	  we will use the socket descriptor new_fd for all send() and recv() calls. If you're only getting one single connection ever,
      you can close() the listening sockfd in order to prevent more incoming connections on the same port, if you so desire.
    */
}
