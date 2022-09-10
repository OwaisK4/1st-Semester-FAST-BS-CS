#include <stdio.h>

int main(){
	int num, temp, count=0;
	int a,b,c;
	printf("Enter number to check for palindrome: ");
	scanf("%d", &num);
	temp = num;
	while (temp != 0){
		temp = temp / 10;
		count++;
	}
	if (count % 2 != 0){
		//printf("Odd number");
		a = num / 100 % 10;
		b = num / 10 % 10;
		c = num / 1 % 10;
		if (a == c)
			printf("Given number is a palindrome.");
		else
			printf("Given number is not a palindrome.");
	}
	else {
		printf("Sum of digits is even.");
	}
	return 0;
}