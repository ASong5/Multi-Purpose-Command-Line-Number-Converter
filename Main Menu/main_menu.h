#include <stdio.h>
#include "bin_oct_hex.h"
#include "tax_calculator.h"
#include "change_breakdown.h"
#include "temp_convert.h"
#include <stdlib.h>

void main_menu() {
	int userInput;
	do {
		printf("-------------------------------------Number Converter v1.3.0 made by - Andrew Song -------------------------------------\n");

		printf("\n\n-----Main Menu-----\n\n");
		printf("1. Decimal to Binary/Octal/Hex Converter\n");
		printf("2. Tax Calculator (HST)\n");
		printf("3. Change Breakdown\n");
		printf("4. Temperature Conversion (Celcius/Farenheight/Kelvin)\n");
		printf("5. Exit Program\n");

		printf("\nSelect an option: ");
		scanf("%d", &userInput);

		if (userInput > 5 || userInput < 1) {
			printf("\nNot a valid option.\n\n");
			continue;
		}

		switch (userInput) {
		case 1:
			bin_oct_hex();
			break;
		case 2:
			tax_calculator();
			break;
		case 3:
			change_breakdown();
			break;
		case 4: 
			temp_convert();
			break;
			
		case 5:
			printf("\nThanks for using Andrew's Converter v1.1.0.\n\nGoodbye!\n");
			exit(0);
		}

	} while (1);
}