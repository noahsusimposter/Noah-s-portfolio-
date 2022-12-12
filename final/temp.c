#include <stdio.h>


int main() {
float f = 0;
float c = 0;

printf("F tempature: ");
scanf("%f", &f);
c = (5.0/9.0) * (f - 32); 
printf("Your temp is: %.1f\n", c);
return 0;
}
