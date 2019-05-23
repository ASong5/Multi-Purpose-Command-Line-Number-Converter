#pragma once
#include <stdio.h>
#include "dec_binary.h"
#include "dec_hex.h"
#include "dec_octal.h"
#include "input_handler.h"

void bin_oct_hex() {
	int decimal = 0, choice, menu = 0;
	do {
		printf("\n--------------------------------------------Decimal to Bin/Oct/Hex Converter--------------------------------------------\n");


		printf("\nWould you like to convert to binary, hex, or octal?\n");
		printf("\n1 - Binary\n2 - Octal\n3 - Hex\n4 - Display all\n5 - Return to Main Menu\n\nEnter option: ");
		scanf("%d", &choice);

		if (choice > 5 || choice < 1) {
			printf("\nNot a valid option.\n");
			continue;
		}

		switch (choice) {
		case 1:
			decimal = input_handler(decimal);
			dec_binary(decimal);
			break;

		case 2:
			decimal = input_handler(decimal);
			dec_octal(decimal);
			break;

		case 3:
			decimal = input_handler(decimal);
			dec_hex(decimal);
			break;

		case 4:
			decimal = input_handler(decimal);
			dec_binary(decimal), dec_octal(decimal), dec_hex(decimal);
			break;

		case 5:
			printf("\n\nProgram will now exit.\n\n");
			menu = 1;
			break;

		default:
			printf("\nNot a valid choice.\n");
		}

	} while (menu == 0);
}