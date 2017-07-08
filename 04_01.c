/*
 ============================================================================
 Name        : 04_01.c
 Author      : Bensaadia Mohammed
 Version     : 1.0
 Copyright   : © 2017
 Description : What are strings
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	puts("!!!Hello World!!!"); 	//This is a string...

	char address[30] = "123 Some Street, SomeCity, USA, 12345";
	//                  0123456789012345678901234567890123456
	//                          10        20        30      
	printf("%s",address);
	/*
	 * Notice that the string above is longer than 30 characters allocated
	 * hence the warning message on the left
	 */

	char name[40] = "FirstName MiddleName LastName";
		//           01234567890123456789012345678901234567890
		//				      10        20        30        40
	printf("%s",name);
	/*
	 * Notice that the above string is shorter than maximum allocated
	 * There is still a warning about the string not being used
	 *
	 */

	return EXIT_SUCCESS;
}
