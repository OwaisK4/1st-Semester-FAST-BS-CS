#include <stdio.h>

int main(){
	int digits, dec1,dec2;
	char a,b=0;
	printf("How many characters are there in your Roman number? ");
	scanf("%d", &digits);
	fflush(stdin);
	printf("Enter the first character: ");
	scanf("%c",&a);
	fflush(stdin);
	if (digits > 1){
		printf("Enter the second character: ");
		scanf("%c",&b);
	}
	switch (a){
		case 'I':
			dec1 = 1;
			break;
		case 'V':
			dec1 = 5;
			break;
		case 'X':
			dec1 = 10;
			break;
		case 'L':
			dec1 = 50;
			break;
		case 'C':
			dec1 = 100;
			break;
		case 'D':
			dec1 = 500;
			break;
		case 'M':
			dec1 = 1000;
			break;
		default:
			//printf("Invalid input. Try again.");
			dec1 = 0;			
	}
	switch (b){
		case 'I':
			dec2 = 1;
			break;
		case 'V':
			dec2 = 5;
			break;
		case 'X':
			dec2 = 10;
			break;
		case 'L':
			dec2 = 50;
			break;
		case 'C':
			dec2 = 100;
			break;
		case 'D':
			dec2 = 500;
			break;
		case 'M':
			dec2 = 1000;
			break;
		default:
			//printf("Invalid input. Try again.");
			dec2 = 0;			
	}
	if (dec1 > dec2)
		printf("Decimal equivalent is: %d",dec1+dec2);
	else
		printf("Decimal equivalent is: %d",dec2-dec1);
	return 0;
}


