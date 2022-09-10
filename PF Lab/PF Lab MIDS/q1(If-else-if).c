#include <stdio.h>

int main(){
	int roll, first, last, product, i;
	printf("Enter roll number: ");
	scanf("%d",&roll);
	if ((roll < 0) || (roll > 10000)){
		printf("Invalid roll number.");
		return 0;
	}
	first = roll / 100;
	last = roll % 100;
	printf("First two: %d\n",first);
	printf("Last two: %d\n",last);
	product = first * last;
	printf("The multiplication of %d and %d is: %d\n", first, last, product);
	for (i=1; i<product; i++){
		if (product % i == 0){
			printf("The number is not a prime number.");
			return 0;
		}
		
	}
	printf("The number is a prime number.");	
	return 0;
}
