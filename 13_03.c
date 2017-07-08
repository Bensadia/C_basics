/*
 ============================================================================
 Name        : 13_03.c
 Author      : Bensaadia Mohammed
 Version     : 1.0
 Copyright   : © 2017 
 Description : Use appropriate file access modes
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//Function prototypes
void copyFromSourceToDestination(void);
void appendCopyrightNotice(void);

int main(void) {

	copyFromSourceToDestination();
	//appendCopyrightNotice();

	return EXIT_SUCCESS;
}

//---- FUNCTION DEFINITIONS ----
void copyFromSourceToDestination(){
	int ch;
	FILE *src, *dest;  // pointers to a file type
	src = fopen("/root/Basics_Released/c/sourceFile","r"); // Change to match your path
	dest = fopen("/root/Basics_Released/c/destinationFile","w"); // Change to match your path
	ch = getc(src);
	while (ch != EOF){   // keep looping until EOF of source file
		putc(ch, dest);   // write to destination file
		ch = getc(src);
	}
	fclose(src);
	fclose(dest);
}

void appendCopyrightNotice(){
	FILE *fp;  // pointer to a file type
	// open the destination file to append copyright notice
	fp = fopen("/root/Basics_Released/c/destinationFile", "a"); // Change to match your path
	fprintf(fp,"\n\nCopyright 2017, XYZ Company");

	fclose(fp);
}

