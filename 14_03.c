/*
 ============================================================================
 Name        : 14_03.c
 Author      : Bensaadia Mohammed
 Version     : 1.0
 Copyright   : © 2017 
 Description : Understanding the components of a function, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

// Function prototype
int smallest (int x, int y);

int main(void) {
	int n = smallest('r','a');
	printf("n = %d\n", n);

	return EXIT_SUCCESS;
}

int smallest (int x, int y){
	/*
	 * - Is the return type the same as function data type?
	 * - Is the function name appropriate for what it does?
	 * - Are the parameters correctly typed?
	 * - Is the number of parameters in agreement with what
	 *   the function input is supposed to be?
	 * - Is the function working properly on all inputs?
	 * 		- negative numbers?
	 * 		- identical numbers?
	 * 		- what if not int? is typecasting an  option?
	 * 	- Note that you can run the function with two
	 * 	  float arguments. What does this mean?
	 * 	- Note that you can run the function with two
	 * 	  character arguments
	 */
	int minVal;
	if (x < y)
		minVal = x;
	else
		minVal = y;

	return minVal;  //must be the same as function data type
}

