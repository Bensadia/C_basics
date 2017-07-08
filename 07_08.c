/*
 ============================================================================
 Name        : 07_08.c
 Author      : Bensaadia Mohammed
 Version     : 1.0
 Copyright   : © 2017 
 Description : 
 ============================================================================
 */
//Functions prototypes
void listNumbers(int small, int large, int k);

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("Enter the small number: ");
	int smallNum;
	scanf("%d",&smallNum);

	printf("Enter the large number: ");
	int largeNum;
	scanf("%d",&largeNum);

	listNumbers(smallNum,largeNum,1);
	return EXIT_SUCCESS;
}

void listNumbers(int small, int large, int k){
	printf("Step[%d]: %d\n",k,small);
	if(small<large)
		listNumbers(small+1,large,k+1);
}

