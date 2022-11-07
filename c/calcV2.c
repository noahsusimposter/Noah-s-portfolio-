#include <stdio.h>
#include <stdlib.h>


char operation;

int number1 = 1;
int number2 = 2;

int main(void) {
	printf("Operation (a, s, m, d): ");
	scanf("%o\n", &operation);
	printf("First Number: ");
	scanf("%f\n", &number1);
	printf("Second Number: ");
	scanf("%s\n", &number2);
	return 0;
}

int number1() {
	printf(
