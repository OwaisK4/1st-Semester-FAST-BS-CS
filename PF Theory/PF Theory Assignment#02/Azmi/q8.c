#include <stdio.h>

int main(){
	int choice,first_num,second_num,dec;
	char dig1,dig2;
	printf("Enter choice 1 for one numeral and 2 for 2 numerals: ");
	scanf("%d",&choice);
	if (choice==1){
		printf("Enter first character of your numeral: ");
		scanf(" %c",&dig1);
		switch(dig1){
			case 'I':
				first_num = 01;
				break;
			case 'V':
				first_num = 05;
				break;
			case 'X':
				first_num = 10;
				break;
			case 'L':
				first_num = 50;
				break;
			case 'C':
				first_num = 100;
				break;
			case 'D':
				first_num = 500;
				break;
			case 'M':
				first_num = 1000;
				break;
		}
		printf("\nThe decimal equivalent is %d", first_num);
	}
	else if(choice==2){
		printf("Enter first character of your numeral.");
		scanf(" %c",&dig1);
		switch(dig1){
			case 'I':
				first_num = 01;
				break;
			case 'V':
				first_num = 05;
				break;
			case 'X':
				first_num = 10;
				break;
			case 'L':
				first_num = 50;
				break;
			case 'C':
				first_num = 100;
				break;
			case 'D':
				first_num = 500;
				break;
			case 'M':
				first_num = 1000;
				break;
		}
		printf("Enter first character of your numeral.");
		scanf(" %c",&dig2);
		switch(dig2){
			case 'I':
				second_num = 01;
				break;
			case 'V':
				second_num = 05;
				break;
			case 'X':
				second_num = 10;
				break;
			case 'L':
				second_num = 50;
				break;
			case 'C':
				second_num = 100;
				break;
			case 'D':
				second_num = 500;
				break;
			case 'M':
				second_num = 1000;
				break;
		}
		if (first_num < second_num){
			dec = second_num - first_num;
			printf("Decimal equivalent is %d",dec);
		}
		else {
			dec = first_num + second_num;
			printf("Decimal equivalent is %d",dec);
		}

	}
	return 0;
}
