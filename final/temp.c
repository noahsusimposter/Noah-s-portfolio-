#include <stdio.h>


int main() {
int f = 0;

printf("F tempature: ");
scanf("%i", &f);
int c = (5.0/9.0) * (f - 32); 
printf("Your temp is: %i\n", c);
return 0;
}
