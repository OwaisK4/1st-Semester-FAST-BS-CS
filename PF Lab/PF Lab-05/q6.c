#include <stdio.h>

int main(){
	int num;
	printf("Enter number to check for multiple of 5: ");
	scanf("%d",&num);
	if (num % 5 == 0)
		printf("This number is multiple of 5");
	else
		printf("This number is not multiple of 5");
	return 0;
}
