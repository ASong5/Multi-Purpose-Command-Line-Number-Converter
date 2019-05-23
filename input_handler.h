#include <stdio.h>

int input_handler(int decimal) {
	int status;
	do {
		printf("\nEnter a number: ");
		if (status = scanf("%d", &decimal)) {
			if (status == 0) {
				printf("That is not a number.\n");
				continue;
			}
			if (decimal < 0) {
				printf("\nI cannot convert negative numbers yet (coming soon).\n");
				continue;
			}

			else if (decimal >= 0) {
				return decimal;
				break;
			}
		}


	} while (1);

}

