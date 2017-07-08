/*
 ============================================================================
 Name        : 11_05.c
 Author      : Bensaadia Mohammed
 Version     : 1.0
 Copyright   : © 2017 
 Description : Hello World in C
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int data[] = {15, 20, 30, 45, 60, 80};

	int *ptr = data;  //ptr points to start of array
	printf("data[] starts at address %p with value %d\n", ptr, *ptr);

	//Calculate the length of the array
	int numElements = sizeof(data) / sizeof(int);
	printf("There are %d elements in data[]\n", numElements);

	for(int i=0; i<numElements; i++){
		printf("Address %p stores value %d\n", ptr, *ptr);
		ptr++;
	}

	return EXIT_SUCCESS;
}
