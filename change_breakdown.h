#pragma once
#include <stdio.h>
#define LOONIE_VALUE 100
#define QUARTER_VALUE 25 
#define DIME_VALUE 10 
#define NICKEL_VALUE 5
#define PENNY_VALUE 1 


void change_breakdown() {
	

	double amtDue;

	// Variables for all the coins as type int.

	int loonies, quarters, dimes, nickels, pennies;

	// Ask for user amount; if under 0, give error and reprompt.

	do {
		printf("\nPlease enter the amount to be paid: $");
		scanf("%lf", &amtDue);
		if (amtDue < 0) {
			printf("\nThat is not a valid amount.\n");
		}
	} while (amtDue < 0);



	printf("\nBalance owing: $%.2lf\n", amtDue);


	// Converts the current balance into cents to prepare for modulo operations.

	amtDue *= LOONIE_VALUE;

	// The rest of the code from here onwards adheres to the following template:

	/*   - The current balance gets divided by the value of the respective coin in cents and stores it in its respective coin name variable.
			-> This variable represents how many of the respective coins are required.
		 - Casts the current balance to an int and divides it by the respective coin's value using the modulus operator and stores it as the new current balance.
			-> The modulus operator provides us with the remainder of the division operation, which will serve as our new current balance.
		 - Prints the loonies required, as well as the current balance in dollar form.
			-> The 'amtDue / LOONIE_VALUE' converts the current balance from cent form to dollar form.   */

	loonies = amtDue / LOONIE_VALUE;
	amtDue = (int)amtDue % LOONIE_VALUE;
	

	quarters = amtDue / QUARTER_VALUE;
	amtDue = (int)amtDue % QUARTER_VALUE;


	dimes = amtDue / DIME_VALUE;
	amtDue = (int)amtDue % DIME_VALUE;


	nickels = amtDue / NICKEL_VALUE;
	amtDue = (int)amtDue % NICKEL_VALUE;


	pennies = amtDue / PENNY_VALUE;
	amtDue = (int)amtDue % PENNY_VALUE;

	printf("\n");
	printf("Loonies required: %d\t", loonies);
	printf("Quarters required: %d\t", quarters);
	printf("Dimes required: %d\t", dimes);
	printf("Nickels required: %d\t", nickels);
	printf("Pennies required: %d\t", pennies);

	printf("\n");

}