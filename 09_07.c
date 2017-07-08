/*
 ============================================================================
 Name        : 09_07.c
 Author      : Bensaadia Mohammed
 Version     : 1.0
 Copyright   : © 2017 
 Description :
 ============================================================================
 */
//Function prototypes
void showBarChart(void);
void showOneBar(int barLength);

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	showBarChart();
	return EXIT_SUCCESS;
}

//---- FUNCTION DEFINITIONS ----
void showBarChart(void){
	showOneBar(10);
	showOneBar(12);
	showOneBar(5);
	showOneBar(6);
	showOneBar(8);
}

void showOneBar(int barLength){
	printf("%3d:",barLength);
	for(int i=0; i<barLength; i++){
		putchar('¥');
	}
	putchar('\n');
}
