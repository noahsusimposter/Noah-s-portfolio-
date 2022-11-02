#include <stdio.h>
int squared(int x)
{
	return x*x;
}
int main()
{
	int a;
	int b;
	a = 33;
	b = squared(6);
	int c = a + b;
	printf("Your number is:  %i\n", c, "\n");
	return 0;
}
