/*
 ============================================================================
 Name        : 02_04.c
 Author      : Bensaadia Mohammed
 Version     : 1.0
 Copyright   : © 2017
 Description : Using statements and expressions
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int days = 12 + 5 + 4;
	double width = 12.67;
	double height = 10.8;
	double perimeter = width + width + height + height;

	printf("days: %d \n",days);
	printf("perimeter: %f",perimeter);

	return EXIT_SUCCESS;
}
