#include <stdio.h>

int main(){
	int num,a,b,c,d,e;
	printf("Enter a five digit positive integer: ");
	scanf("%d",&num);
	if ((num > 99999) || (num < 10000) || (num < 0)){
		printf("Error! Invalid input. Please try again.");
		return 0;
	}
	a = num / 10000;
	b = num / 1000 % 10;
	c = num / 100 % 10;
	d = num / 10 % 10;
	e = num % 10;
	if ((a == e) && (b == d)){
		printf("It is a palindrome.");
	}
	if ((a != e) || (b != d)){
		printf("It is not a palindrome.");
	}
	return 0;
}
