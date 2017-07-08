/*
 ============================================================================
 Name        : 11_02.c
 Author      : Bensaadia Mohammed
 Version     : 1.0
 Copyright   : © 2017 
 Description : Declaring and initializing a pointer
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	//Declarations
	int size = 15;		//a variable
	int *pointerInt;		//a pointer variable

	//Assign the address of the variable to the pointer
	pointerInt = &size;
	
	return EXIT_SUCCESS;
}
