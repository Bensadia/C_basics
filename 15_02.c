/*
 ============================================================================
 Name        : 15_02.c
 Author      : Bensaadia Mohammed
 Version     : 1.0
 Copyright   : © 2017 
 Description : Hello World in C
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "myLibrary1502.h"
#include "myConstants1502.h"
#include "myMacros1502.h"

int main(void) {

	printf("Volume of a sphere with radius 5 = %lf\n", volumeSphere(5));

	int list[] = {NUMBERS};
	printf("The 4th element in list is %d\n", list[3]);
	return EXIT_SUCCESS;
}
