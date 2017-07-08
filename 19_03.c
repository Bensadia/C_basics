/*
 ============================================================================
 Name        : 19_03.c
 Author      : Bensaadia Mohammed
 Version     : 1.0
 Copyright   : © 2017 
 Description : socket() — Get the File Descriptor!
 ============================================================================
*/

#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <netinet/in.h>

//int socket(int domain, int type, int protocol); 

//But what are these arguments? They allow you to say what kind of socket you want (IPv4 or IPv6, stream or datagram, and TCP or UDP).
int main(){
int s;
struct addrinfo hints, *res;
memset(&hints, 0, sizeof hints);
hints.ai_family = AF_UNSPEC;  // use IPv4 or IPv6, whichever
hints.ai_socktype = SOCK_STREAM;
hints.ai_flags = AI_PASSIVE;     // fill in my IP for me

// do the lookup
// [pretend we already filled out the "hints" struct]

getaddrinfo("www.example.com", "http", &hints, &res);
	
// [again, you should do error-checking on getaddrinfo(), and walk
// the "res" linked list looking for valid entries instead of just
// assuming the first one is good (like many of these examples do.)
// See the section on client/server for real examples.]

/*Anyway, enough of that. What you really want to do is use the values from the results of the call to getaddrinfo(),
  and feed them into socket() directly like this:*/

s = socket(res->ai_family, hints.ai_socktype, hints.ai_protocol);

	//socket() simply returns to you a socket descriptor that you can use in later system calls, or -1 on error.
	//The global variable errno is set to the error's value

}


