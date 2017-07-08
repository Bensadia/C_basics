/*
 ============================================================================
 Name        : 12_01.c
 Author      : Bensaadia Mohammed
 Version     : 1.0
 Copyright   : © 2017 
 Description : What are structures?
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX_TITLE_LENGTH      40
#define MAX_AUTHOR_LENGTH    30
#define MAX_PUBLISHER_LENGTH  50

int main(void) {

	/*
	 * A structure with three fields, packed as one entity
	 */
	struct book{
		char title[MAX_TITLE_LENGTH];
		char author[MAX_AUTHOR_LENGTH];
		char publisher[MAX_PUBLISHER_LENGTH];
	};

	return EXIT_SUCCESS;
}
