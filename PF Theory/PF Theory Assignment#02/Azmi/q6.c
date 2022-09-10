#include <stdio.h>

int main(){
	int number,a,b,c,d,e;
	printf("Enter a five digit positive integer: ");
	scanf("%d",&number);
	if ((number >= 100000) || (number <= 9999) || (number <= -1)){
		printf("Error! Invalid input. Please try again.");
		return 0;
	}
	a = number / 10000;
	b = number / 1000 % 10;
	c = number / 100 % 10;
	d = number / 10 % 10;
	e = number % 10;
	
	if ((a == e) && (b == d)){
		printf("It is a palindrome.");
	}
	else{
		printf("It is not a palindrome.");
	}
	return 0;
}
