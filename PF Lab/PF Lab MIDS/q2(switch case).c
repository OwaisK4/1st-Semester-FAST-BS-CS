#include <stdio.h>

int main(){
	int num, data;
	printf("Enter 1 for Numerical, 2 for Textual, 3 for Symbols: ");
	scanf("%d",&num);
	int n, temp, sum=0;
	char array[10],a,b,c,d,e;
	char symbol;
	switch (num){
		case 1:
			printf("Enter number for checking Armstrong: ");
			scanf("%d",&data);
			n = data;
			while(n != 0){
				temp = n % 10;
				n = n / 10;
				sum += temp * temp * temp;
			}
			if (sum == data){
				printf("Input: %d is an Armstrong number.", data);
			}
			else{
				printf("Input: %d is not an Armstrong number.", data);
			}
			break;
		case 2:
			printf("Enter five characters for checking palindrome: ");
//			scanf("%s",array);
//			n = data;
//			printf("%s",array);
			scanf(" %c %c %c %c %c",&a,&b,&c,&d,&e);
			printf("%c%c%c%c%c\n",a,b,c,d,e);
			
			if ((a==e) && (b==d)){
				printf("The given data %c%c%c%c%c is palindrome.",a,b,c,d,e);
			}
			else {
				printf("The given data %c%c%c%c%c is not a palindrome.",a,b,c,d,e);
			}
			break;
		case 3:
			printf("Enter symbol for constructing box: ");
			scanf(" %c",&symbol);
			int i,j;
			for (i=0; i<19; i++)
				printf("%c", symbol);
			printf("\n%c%18c",symbol,symbol);
			printf("\n%c      HELLO%7c",symbol,symbol);
			printf("\n%c      WORLD%7c",symbol,symbol);
			printf("\n%c%18c\n",symbol,symbol);
			for (i=0; i<19; i++)
				printf("%c", symbol);
			break;
		default:
			printf("Enter a valid choice.");
	}
	return 0;
}
