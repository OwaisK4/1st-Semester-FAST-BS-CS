#include <stdio.h>

int main(){
	int num, sum=0;
	do{
		printf("Enter an integer number: ");
		scanf("%d", &num);
		sum += num;
	}while ((num >= 1) && (num <= 100));
	printf("The sum of numbers is: %d", sum);
	return 0;
}