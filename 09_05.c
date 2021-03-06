/*
 ============================================================================
 Name        : 09_05.c
 Author      : Bensaadia Mohammed
 Version     : 1.0
 Copyright   : © 2017 
 Description : Breaking out of loops
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//Function prototype
void testBreak(void);

int main(void) {
	testBreak();
	return EXIT_SUCCESS;
}

void testBreak(void){
	int n;
	int loopCounter = 0;
	while(1){
		printf("Cycle [%d]: Enter a number\n", loopCounter);
		scanf("%d",&n);
		if((n == 0) || (loopCounter >= 10))
			break;  //stop if you read 0
		loopCounter++;
	}
}
