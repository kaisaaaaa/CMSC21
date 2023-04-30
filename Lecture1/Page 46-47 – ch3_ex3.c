#include <stdio.h>

int main(void){

	// Declaring the variables
	int num1, denom1, num2, denom2, result_num, result_denom;

	// Ask the user to enter the first fraction
	printf("Enter first fraction: ");
	scanf("%d/%d", &num1, &denom1);

	// Ask the user to enter the second fraction
	printf("Enter second fraction: ");
	scanf("%d/%d", &num2, &denom2);

	// Calculating the numerator
	result_num = num1 * denom2 + num2 * denom1;

	// Calculating the denominator
	result_denom = denom1 * denom2;

	// Printing the result in fraction form
	printf("The sum is %d/%d\n", result_num, result_denom); 

	return 0;
}