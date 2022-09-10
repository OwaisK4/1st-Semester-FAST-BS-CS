#include <stdio.h>

int main(){
	int base, exp, power=1, i;
	printf("Enter a base number: ");
	scanf("%d", &base);
	printf("Enter an exponent: ");
	scanf("%d", &exp);
	for (i=1; i<=exp; i++)
		power *= base;
//	printf("Answer: %d", base);
	printf("Answer: %d", power);
	return 0;
}