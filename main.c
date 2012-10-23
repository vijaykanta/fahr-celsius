#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int convert_to_celsius(int fahr) {
	int celsius;
	celsius = 5 * (fahr - 32) / 9;
	return celsius;
}

int main() {
	int fahr, celsius;
	int lower, upper, step;

	printf("Hello there, welcome to Fahrenheit - Celsius converter program\n\n");
	printf("Enter a number to convert to celsius (Fahrenheit): ");
	
	scanf("%d", &fahr);
	getchar();
	//if(isdigit(fahr)) {
		celsius = convert_to_celsius(fahr);
		printf("The celsius value of %d is %d\n", fahr, celsius);
	//}
	getchar();
	return 0;
}
