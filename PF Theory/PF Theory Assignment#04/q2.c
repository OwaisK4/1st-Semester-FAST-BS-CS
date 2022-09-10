#include <stdio.h>

int calc(int x, int y);
int main(){
	int num,n,sum=0;
	printf("Enter number: ");
	scanf("%d", &num);
	if ((num < 10000) || (num > 99999)){
		printf("Given number is not a 5-digit integer. Exiting.");
		return 0;
	}
	n = calc(num,sum);
	printf("Sum of digits is: %d",n);
}
int calc(int n, int sum){
	if (n == 0)
		return n;
	else{
		sum += n % 10 + calc(n / 10,sum);
	}
	return sum;
}
