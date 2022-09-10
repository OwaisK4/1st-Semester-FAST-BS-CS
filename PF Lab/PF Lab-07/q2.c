#include <stdio.h>

int main(){
	int n, fact=1;
	printf("Enter number to calculate factorial of: ");
	scanf("%d", &n);
	int temp = n;
	if (n < 0){
		printf("Negative number. Exiting");
		return 0;
	}
	while (n != 1){
		fact = fact * n;
		n--;
	}
	printf("The factorial of %d is %d",temp,fact);
	return 0;
}
