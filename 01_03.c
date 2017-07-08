/*
 ============================================================================
 Name        : 01_03.c
 Author      : Bensaadia Mohammed
 Version     : 1.0
 Copyright   : © 2017
 Description : Hello World in C 
 ============================================================================

 All concepts presented in this program will be
 discussed in detail as the next C programs

 */

#include <stdio.h>						   //A link to an external library file that handles standard input/output

int main(void)							   //A necessary function in every C program
										   //"int" means that this program must return an integer value
{
    int aNumber;		   				   //An integer variable

    printf( "Please enter a number: " );   //Display a message on the screen
    scanf( "%d", &aNumber );			   //Receive and store the value entered by the user
    printf( "You entered %d ", aNumber);   //Display feedback to the user about the recent input received
    getchar();							   //A "trick" to prevent the program window from closing by waiting
    									   //for an additional character to be typed
    return 0;							   //0 means execution was successful and the operating system is now informed
}
