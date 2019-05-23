#pragma once
#include <stdio.h>

int dec_octal(int input) {
	int i, octal[100], original = input;
	for (i = 0; input > 0; i++) {
		octal[i] = input % 8;
		input /= 8;
	}

	printf("\nOctal number for %d is: ", original);

	if (original == 0) {
		printf("0");
	}

	for (i -= 1; i >= 0; i--) {
		printf("%d", octal[i]);
	}
	printf("\n");
}