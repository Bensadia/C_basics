/*
 ============================================================================
 Name        : 19_09.c
 Author      : Bensaadia Mohammed
 Version     : 1.0
 Copyright   : © 2017 
 Description : sendto() and recvfrom() — Talk to me, DGRAM-style
 ============================================================================
*/

#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <netinet/in.h>

	//Since datagram sockets aren't connected to a remote host
	//We need The destination address!
int main(){
	//int sendto(int sockfd, const void *msg, int len, unsigned int flags,
			 //const struct sockaddr *to, socklen_t tolen);
	
	//int recvfrom(int sockfd, void *buf, int len, unsigned int flags,
           //struct sockaddr *from, int *fromlen); 
/*
 * the same as the call to send() with the addition of two other pieces of information. 
 * To get your hands on the destination address structure, you'll probably either get it from getaddrinfo(), or from recvfrom()
 * */
 
 
 /*
  * Remember, if you connect() a datagram socket, you can then simply use send() and recv() for all your transactions. 
  * The socket itself is still a datagram socket and the packets still use UDP, 
  * but the socket interface will automatically add the destination and source information for you.
  * */
 
 
}
