/*
 ============================================================================
 Name        : 11_03.c
 Author      : Bensaadia Mohammed
 Version     : 1.0
 Copyright   : © 2017 
 Description : Using a pointer variable
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	//Declarations
		int size = 15;
		int *ptr;
		ptr = &size;

	//Use the value at the address stored in the pointer
		printf("Address %p contains %d", ptr, *ptr);

	return EXIT_SUCCESS;
}
