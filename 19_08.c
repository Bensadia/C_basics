/*
 ============================================================================
 Name        : 19_08.c
 Author      : Bensaadia Mohammed
 Version     : 1.0
 Copyright   : © 2017 
 Description : send() and recv() — Talk to me, baby!
 ============================================================================
*/

#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <netinet/in.h>


	//These two functions are for communicating over stream sockets or connected datagram sockets. 
	
	//int send(int sockfd, const void *msg, int len, int flags); 
	//int recv(int sockfd, void *buf, int len, int flags);
	
int main(){
	
char *msg = "Beej was here!";
int len, bytes_sent;

len = strlen(msg);
bytes_sent = send(sockfd, msg, len, 0);
	/*
	 * send() returns the number of bytes actually sent out—this might be less than the number you told it to send! 
	 * it's up to you to send the rest of the string
	 * if the packet is small (less than 1K or so) it will probably manage to send the whole thing all in one go
	 *  -1 is returned on error, and errno is set to the error number.
	 * */
	
	/*
	 * recv() returns the number of bytes actually read into the buffer, or -1 on error (with errno set, accordingly.)
	 * recv() can return 0. This can mean only one thing: the remote side has closed the connection on you
	 * */

}
