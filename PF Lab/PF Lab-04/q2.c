#include <stdio.h>

int main(){
	int a,b;
	printf("Enter two numbers separated by gap: \n");
	scanf("%d%d",&a,&b);
	float sum, diff, quot, remaind;
	sum = a+b;
	diff = a-b;
	quot = ((b != 0)?(a/b):(a/2));
	//(b != 0)? (remaind = a % b): (remaind = a % 2); 
	remaind = ((b != 0)?(a%b):(a%2));
	printf("Sum: %f\nDifference: %f\nQuotient: %f\nRemainder: %f",sum,diff,quot,remaind);
	return 0;
}
