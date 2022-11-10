
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


char operation[1];

int number1 = 1;
int number2 = 2;


int exe() {
	int final = 1;
	final = number1 * number2;
	printf("Your awnser is: %i\n", final);
  return 0;
}


int num2() {
	printf("Second Number: ");
	scanf("%i", &number2);
  printf("You chose %i\n", number2);
  exe();
  return 0;
}

int num1() {
	printf("First Number: ");
	scanf("%i", &number1);
  printf("You chose %i\n", number1);
  num2();
  return 0;
}

int main() {
	num1();
  return 0;
}
