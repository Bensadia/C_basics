/*
 ============================================================================
 Name        : 07_06.c
 Author      : Bensaadia Mohammed
 Version     : 1.0
 Copyright   : © 2017 
 Description : 
 ============================================================================
 */
#include <stdlib.h>
#include <stdio.h>
#include "transactions.h"

int main(void) {
	initializeAccount();
	getBalance();
	//Perform first transaction
	askCustomer();
	updateAccount(amount);
	getBalance();
	//Perform second transaction
	askCustomer();
	updateAccount(amount);
	addGift(5.0);
	getBalance();
	//Perform third transaction
	askCustomer();
	updateAccount(amount);
	addGift(2.0);
	getBalance();
	thankYou();
	return EXIT_SUCCESS;
}
