/*
 ============================================================================
 Name        : 19_01.c
 Author      : Bensaadia Mohammed
 Version     : 1.0
 Copyright   : © 2017 
 Description : Data types used by the sockets interface
 ============================================================================
*/
 
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <netinet/in.h>

	// I'll cover various data types used by the sockets interface, since some of them are a real bear to figure out.
	//First the easy one: a socket descriptor. A socket descriptor is the following type:


/*
	This structure is a more recent invention, and is used to prep the socket address structures for subsequent use. 
	It's also used in host name lookups, and service name lookups. That'll make more sense later when we get to actual usage,
	but just know for now that it's one of the first things you'll call when making a connection.
*/



struct addrinfo {
    int              ai_flags;     // AI_PASSIVE, AI_CANONNAME, etc.
    int              ai_family;    // AF_INET, AF_INET6, AF_UNSPEC
    int              ai_socktype;  // SOCK_STREAM, SOCK_DGRAM
    int              ai_protocol;  // use 0 for "any"
    size_t           ai_addrlen;   // size of ai_addr in bytes
    struct sockaddr *ai_addr;      // struct sockaddr_in or _in6
    char            *ai_canonname; // full canonical hostname

    struct addrinfo *ai_next;      // linked list, next node
};

	//You'll load this struct up a bit, and then call getaddrinfo().
	// It'll return a pointer to a new linked list of these structures filled out with all the goodies you need.


//the struct sockaddr holds socket address information for many types of sockets.
struct sockaddr {
    unsigned short    sa_family;    // address family, AF_xxx
    char              sa_data[14];  // 14 bytes of protocol address
}; 


//To deal with struct sockaddr, programmers created a parallel structure: struct sockaddr_in ("in" for "Internet") to be used with IPv4.
//this is the important bit: a pointer to a struct sockaddr_in can be cast to a pointer to a struct sockaddr and vice-versa.
//you can still use a struct sockaddr_in and cast it at the last minute!

// (IPv4 only--see struct sockaddr_in6 for IPv6)
// This structure makes it easy to reference elements of the socket address.
struct sockaddr_in {
    short int          sin_family;  // Address family, AF_INET
    unsigned short int sin_port;    // Port number
    struct in_addr     sin_addr;    // Internet address
    unsigned char      sin_zero[8]; // Same size as struct sockaddr
};

// (IPv4 only--see struct in6_addr for IPv6)

// Internet address (a structure for historical reasons)
struct in_addr {
    uint32_t s_addr; // that's a 32-bit int (4 bytes)
};

// (IPv6 only--see struct sockaddr_in and struct in_addr for IPv4)

struct sockaddr_in6 {
    u_int16_t       sin6_family;   // address family, AF_INET6
    u_int16_t       sin6_port;     // port number, Network Byte Order
    u_int32_t       sin6_flowinfo; // IPv6 flow information
    struct in6_addr sin6_addr;     // IPv6 address
    u_int32_t       sin6_scope_id; // Scope ID
};

struct in6_addr {
    unsigned char   s6_addr[16];   // IPv6 address
};


/*
 Struct sockaddr_storage that is designed to be large enough to hold both IPv4 and IPv6 structures.
 (See, for some calls, sometimes you don't know in advance if it's going to fill out your struct sockaddr with an IPv4 or IPv6 address.
 So you pass in this parallel structure, very similar to struct sockaddr except larger, and then cast it to the type you need
*/
struct sockaddr_storage {
    sa_family_t  ss_family;     // address family

    // all this is padding, implementation specific, ignore it:
    char      __ss_pad1[_SS_PAD1SIZE];
    int64_t   __ss_align;
    char      __ss_pad2[_SS_PAD2SIZE];
};

int main(){

/*
	Converts an IP address in numbers-and-dots notation into either a struct in_addr or a struct in6_addr 
	depending on whether you specify AF_INET or AF_INET6.
	("pton" stands for "presentation to network"—you can call it "printable to network" if that's easier to remember.) 
	The conversion can be made as follows 
*/
struct sockaddr_in sa; // IPv4
struct sockaddr_in6 sa6; // IPv6

	//now you can convert string IP addresses to their binary representations

inet_pton(AF_INET, "10.12.110.57", &(sa.sin_addr)); // IPv4
inet_pton(AF_INET6, "2001:db8:63b3:1::3490", &(sa6.sin6_addr)); // IPv6

//See, inet_pton() returns -1 on error, or 0 if the address is messed up. 
//So check to make sure the result is greater than 0 before using!


// the other way around?
//use the function inet_ntop() 
//("ntop" means "network to presentation"—you can call it "network to printable" if that's easier to remember), like this

// IPv4:

char ip4[INET_ADDRSTRLEN];  // space to hold the IPv4 string
struct sockaddr_in so;      // pretend this is loaded with something

inet_ntop(AF_INET, &(so.sin_addr), ip4, INET_ADDRSTRLEN);

printf("The IPv4 address is: %s\n", ip4);


// IPv6:

char ip6[INET6_ADDRSTRLEN]; // space to hold the IPv6 string
struct sockaddr_in6 so6;    // pretend this is loaded with something

inet_ntop(AF_INET6, &(so6.sin6_addr), ip6, INET6_ADDRSTRLEN);

printf("The address is: %s\n", ip6);

}
