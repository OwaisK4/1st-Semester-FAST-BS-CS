#include <stdio.h>

int match(char roman);

int main(){
	int digits;
	char a,b=0;
	printf("How many characters are there in your Roman number? ");
	scanf("%d", &digits);
	fflush(stdin);
	printf("Enter the first character: ");
	scanf("%c",&a);
	//a = getchar();
	fflush(stdin);
	if (digits > 1){
		printf("Enter the second character: ");
		scanf("%c",&b);
	}
	//b = getchar();
	printf("Decimal equivalent is: %d",match(a)+match(b));
	return 0;
}

int match(char roman){
	int dec;
	switch (roman){
		case 'I':
			dec = 1;
			break;
		case 'V':
			dec = 5;
			break;
		case 'X':
			dec = 10;
			break;
		case 'L':
			dec = 50;
			break;
		case 'C':
			dec = 100;
			break;
		case 'D':
			dec = 500;
			break;
		case 'M':
			dec = 1000;
			break;
		default:
			//printf("Invalid input. Try again.");
			dec = 0;			
	}
	return dec;
}

