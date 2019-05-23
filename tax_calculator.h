#pragma once
#include <stdio.h>
#define HST .13
void tax_calculator() {
	double input = 0, total = 0;
	
	printf("\nEnter an amount: ");
	scanf("%lf", &input);
	
	total = input * HST;
	total += input;

	printf("\nYour total after tax is %.2lf\n\n", total);
}