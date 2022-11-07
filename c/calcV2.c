#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char operation[1];

int number1 = 1;
int number2 = 2;

int num2(void) {
	printf("Second Number: ");
	scanf("%s", &number2);
  printf("You chose %c\n", number2);
}

int num1(void) {
	printf("First Number: ");
	scanf("%f", &number1);
  printf("You chose %c", number1);
  num2();
}




int exe() {
	int final = 1;
	if (strcmp(operation, "a") == 0) {
	final = number1 + number2;
	printf("Your awnser is: %a", final);
	}
	if (strcmp(operation, "s") == 0) {
	final = number1 - number2;
	printf("Your awnser is: %a", final);
	}
	if (strcmp(operation, "m") == 0) {
	final = number1 * number2;
	printf("Your awnser is: %a", final);
	}
	if (strcmp(operation, "d") == 0) {
	final = number1 / number2;
	printf("Your awnser is: %a", final);
	}
}

int main(void) {
	printf("Operation (a, s, m, d): ");
	scanf("%o", &operation);
	num1();
}
