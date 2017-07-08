/*
 ============================================================================
 Name        : 19_10.c
 Author      : Bensaadia Mohammed
 Version     : 1.0
 Copyright   : © 2017 
 Description : close() and shutdown() — Get outta my face!
 ============================================================================
*/

#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <netinet/in.h>

int main(){
	//close(sockfd); 	
	//int shutdown(int sockfd, int how); 
	//shutdown() returns 0 on success, and -1 on error (with errno set accordingly.)
	//It's important to note that shutdown() doesn't actually close the file descriptor—it just changes its usability.
	// To free a socket descriptor, you need to use close().
}
