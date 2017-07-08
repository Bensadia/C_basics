/*
 ============================================================================
 Name        : 14_08.c
 Author      : Bensaadia Mohammed
 Version     : 1.0
 Copyright   : © 2017 
 Description : Defining a prototype function
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

double func(double, double);  //prototype

int main(void) {
	double result = func(10,20);
	printf("result = %lf\n", result);

	return EXIT_SUCCESS;
}

double func(double x, double y){
	return x*y;
}
