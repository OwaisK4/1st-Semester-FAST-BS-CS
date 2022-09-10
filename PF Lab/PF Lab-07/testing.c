#include <stdio.h>
#include <math.h>

int main(){

	int num, count=0;
	printf("Enter a number: ");
	scanf("%d",&num);
	while (num != 0){
		num = num / 10;
		count++;
	}
	printf("The number of digits in given number is: %d", count);
	return 0;

