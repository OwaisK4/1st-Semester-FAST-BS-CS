#include <stdio.h>
#include <math.h>

int main(){
	int t,input,octal=0;
	int i=0,n=1;
//	printf("Enter a decimal number to convert into octal: ");
	printf("Enter your DOB in DDMMYYYY format:");
	scanf("%d", &input);	
	t = input;
	
	while (t > 0){
		i = t % 8;
		t /= 8;
		octal += i * n;
		n *= 10; 
	}
	printf("Octal equivalent of %d is: %d",input, octal);
	
	return 0;
}
