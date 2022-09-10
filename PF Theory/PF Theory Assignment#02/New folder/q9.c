#include <stdio.h>
#include <math.h>

int main(){
	int t,input,decimal=0,binary=0;
	int a,b,i=0,n=1,m=0;
	fflush(stdin);
	printf("Enter the last two digit of your roll number: ");
	scanf("%d", &input);
	if ((input < 10) || (input > 99)){
		printf("Invalid input. Please try again!");
		return 0;
	}
	t = input;
	//printf("%d",t);
	
	while (t > 0){
		i = t % 2;
		t /= 2;
		binary += i * n;
		n *= 10; 
	}
	printf("Binary equivalent of %d is: %d\n",input, binary);
	
	b = binary;
	while (b > 0){
		a = b % 10;
		b /= 10;
		decimal += a * pow(2,m); 
		m += 1;  
	}
	printf("Decimal equivalent of %d is: %d",binary, decimal);
	
	return 0;
}
