#include <stdio.h>

int main(void){

	// Declaring the variables
	int i;
	float x;

	// Assigning values to the variables
	i = 40;
	x = 839.21f;
	
	// Printing variable values in different format
	printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
	printf("|%10.3f|%10.3e|%-10g|\n", x, x, x); 

	return 0;
}