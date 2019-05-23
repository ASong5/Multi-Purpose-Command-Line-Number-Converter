#include <stdio.h>

void temp_convert() {
	char degree = 167;
	int initial_unit = 0, converted_unit = 0;
	double temperature = 0;

	printf("\n----------------Temperature Conversion----------------\n");
	do {
		printf("\n1. Celcius\n2. Farenheit\n3. Kelvin\n\n");
		printf("What unit of temperature would you like to convert from?: ");
		scanf("%d", &initial_unit);
		if (initial_unit < 1 || initial_unit > 3) {
			printf("\nNot a valid option.\n");
			continue;
		}
		
		printf("\nWhat unit of temperature would you like to convert to?: ");
		scanf("%d", &converted_unit);
		if (converted_unit < 1 || converted_unit > 3) {
			printf("\nNot a valid option.\n");
			continue;
		}
			
		if (initial_unit == converted_unit)
			printf("\nYou cannot convert to the same unit of temperature.\n");
	} while (initial_unit == converted_unit || (initial_unit < 1 || initial_unit > 3) || (converted_unit < 1 || converted_unit > 3));
	
	printf("\nEnter the temperature: ");
	scanf("%lf", &temperature);

	switch (initial_unit) {
	case 1:
		if (converted_unit == 2) {
			temperature = temperature * 1.8 + 32;
			break;
		}
		else if(converted_unit == 3) {
			temperature += 273.15;
			break;
		}
	case 2:
		if (converted_unit == 1) {
			temperature = temperature / 1.8 - 32;
			break;
		}
		else if (converted_unit == 3) {
			temperature = (temperature + 459.67) * 5 / 9;
			break;
		}
	case 3:
		if (converted_unit == 1) {
			temperature -= 273.15;
			break;
		}
		else if (converted_unit == 2) {
			temperature = temperature * 1.8 - 459.67;
			break;
		}

		}

	if (converted_unit == 1)
		printf("\nThe temperature is %.2lf%c Celcius.\n\n", temperature, degree);
	else if (converted_unit == 2)
		printf("\nThe temperature is %.2lf%c Farenheit.\n\n", temperature, degree);
	else
		printf("\nThe temperature is %.2lf%c Kelvin.\n\n", temperature, degree);

	}
	
	

