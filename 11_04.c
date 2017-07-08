/*
 ============================================================================
 Name        : 11_04.c
 Author      : Bensaadia Mohammed
 Version     : 1.0
 Copyright   : © 2017 
 Description : Performing pointer arithmetic
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int sizes[] = {15, 20, 30};

	int *ptr = sizes;  //ptr points to start of array
	printf("Address %p stores value %d\n", ptr, *ptr);

	ptr++; //point to the second value in the array
	printf("Address %p stores value %d\n", ptr, *ptr);

	ptr++; //point to the third value in the array
	printf("Address %p stores value %d\n", ptr, *ptr);

	ptr--;
	ptr--;//point to the first value in the array
	printf("Address %p stores value %d\n", ptr, *ptr);

	return EXIT_SUCCESS;
}
