#include <stdio.h>

int main(){
	int number=0, count =0;
	scanf("%d", &number);
	do{
		number = number/10;
		count = count + 1;
	}while (number != 0);
	
	printf("The number of digits are: %d", count);
	return 0;
}