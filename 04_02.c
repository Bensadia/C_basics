/*
 ============================================================================
 Name        : 04_02.c
 Author      : Bensaadia Mohammed
 Version     : 1.0
 Copyright   : © 2017 
 Description : Implementing Techniques for Screen-based I/O
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char name[20], address[30];

	char c;
	printf("How do you feel on a scale of 1-5?");
	c = getchar();

	   printf("Enter name: ");
	   scanf("%s", &name);

	   printf("Enter your address: ");
	   scanf("%s", &address);

	   printf("Entered Name: %s\n", name);
	   printf("Entered address:%s\n", address);

	   printf("You said you feel: ");
	   putchar(c);

	return EXIT_SUCCESS;
}
