#include <stdio.h>
#include <stdlib.h>


char operation;

int number1 = 1;
int number2 = 2;

int main() {
	printf("Operation (a, s, m, d): ");
	scanf("%o\n", &operation);
	number1()
	number2()
	return 0;
}

int number1(void) {
	printf("First Number: ");
	scanf("%f\n", &number1);
}

int number2(void) {
	printf("Second Number: ");
	scanf("%s\n", &number2);
}
	
int exe(void) {
	int final = 1;
	if (operation = a); {
	final = number1 + number2;
	printf("Your awnser is: \n" final);
	}
	if (operation = s); {
	final = number1 - number2;
	printf("Your awnser is: \n" final);
	}
	if (operation = m); {
	final = number1 * number2;
	printf("Your awnser is: \n" final);
	}
	if (operation = d); {
	final = number1 d number2;
	printf("Your awnser is: \n" final);
	}
}
