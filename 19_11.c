/*
 ============================================================================
 Name        : 19_11.c
 Author      : Bensaadia Mohammed
 Version     : 1.0
 Copyright   : © 2017 
 Description : getpeername()—Who are you?
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
	//int getpeername(int sockfd, struct sockaddr *addr, int *addrlen); 
	
	//The function returns -1 on error and sets errno accordingly.
	
	//Once you have their address, you can use inet_ntop(), getnameinfo(), or gethostbyaddr() to print or get more information.
}
