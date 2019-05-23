#pragma once
#include <stdio.h>

int dec_binary(int input) {
	int i, binary[100], original = input;

	for (i = 0; input > 0; i++) {
		binary[i] = input % 2;
		input /= 2;
	}
	printf("\n------------------------------------\n");
	printf("\nBinary number for %d is: ", original);
	if (original == 0) {
		printf("0");
	}

	for (i -= 1; i >= 0; i--) {
		printf("%d", binary[i]);
	}
	printf("\n");

}