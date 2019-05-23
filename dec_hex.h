#pragma once
#include <stdio.h>

int dec_hex(int input) {
	int i, hex[100], original = input;
	char c[10] = { ' ' };
	for (i = 0; input > 0; i++) {
		hex[i] = input % 16;
		input /= 16;
	}

	printf("\nHex number for %d is: ", original);

	if (original == 0) {
		printf("0");
	}

	for (i -= 1; i >= 0; i--) {
		if (hex[i] >= 10) {
			number_hexLetter(hex[i]);

		}
		else
			printf("%d", hex[i]);
	}
	printf("\n");
}

int number_hexLetter(int i) {
	switch (i) {
	case 10:
		printf("A");
		break;
	case 11:
		printf("B");
		break;
	case 12:
		printf("C");
		break;
	case 13:
		printf("D");
		break;
	case 14:
		printf("E");
		break;
	case 15:
		printf("F");
		break;
	}
}

