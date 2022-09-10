#include <stdio.h>

int main(){
	int num, times; 
 	int digit;
	printf("Enter 4 digit postive number: ");
	scanf("%d", &num);
	if ((num >= 10000) || (num <= -1)){
		printf("Invalid integer! Execute the program again and enter a valid integer.");
		return 0;
	}
	else{
	printf("Enter last digit of your roll number: ");
	scanf("%d",&digit);
	 
	int a = num / 1000;       
	int b = num / 100 % 10;   
	int c = num / 10  % 10;   
	int d = num / 1   % 10;
	times = 0; 
		
	if (a == digit)
		times = times + 1;
	if (b == digit)
		times = times + 1;
	if (c == digit)
		times = times + 1;
	if (d == digit)
		times = times + 1;
	printf("%d occured %d times",digit,times);
	return 0;
}
}
