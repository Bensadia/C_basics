/*
 ============================================================================
 Name        : 19_04.c
 Author      : Bensaadia Mohammed
 Version     : 1.0
 Copyright   : © 2017 
 Description : bind() — What port am I on?
 ============================================================================
*/

#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <netinet/in.h>


//int bind(int sockfd, struct sockaddr *my_addr, int addrlen);

int main(){
	
	//sockfd is our friendly neighborhood socket file descriptor, as returned by the socket() call,
	// serv_addr is a struct sockaddr containing the destination port and IP address, and 
	//addrlen is the length in bytes of the server address structure.

	//All of this information can be gleaned from the results of the getaddrinfo() call, which rocks.
	
struct addrinfo hints, *res;
int sockfd;

// first, load up address structs with getaddrinfo():

memset(&hints, 0, sizeof hints);
hints.ai_family = AF_UNSPEC;  // use IPv4 or IPv6, whichever
hints.ai_socktype = SOCK_STREAM;
hints.ai_flags = AI_PASSIVE;     // fill in my IP for me
	//If you want to bind to a specific local IP address, drop the AI_PASSIVE 
	//and put an IP address in for the first argument to getaddrinfo().

getaddrinfo(NULL, "3490", &hints, &res);

// make a socket:

sockfd = socket(res->ai_family, res->ai_socktype, res->ai_protocol);

// bind it to the port we passed in to getaddrinfo():

bind(sockfd,/*res->ai_addr*/ hints.ai_addr, res->ai_addrlen);
			/*cuz it's a pointer*/ 
	
	//bind() also returns -1 on error and sets errno to the error's value.
	
	//there are times when you won't absolutely have to call it. If you are connect()ing 
	//to a remote machine and you don't care what your local port is 
}
