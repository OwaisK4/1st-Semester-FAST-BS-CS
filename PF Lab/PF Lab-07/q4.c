#include <stdio.h>

int main(){
	int num1, num2, num3, min, max;
	float average;
	printf("Enter first integer: ");
	scanf("%d", &num1);
	printf("Enter second integer: ");
	scanf("%d", &num2);
	printf("Enter third integer: ");
	scanf("%d", &num3);
/*	if ((num1 < 0) || (num2 < 0) || (num3 < 0)){
		printf("Negative number entered. Program is exiting.");
		reutrn 0;
	}
*/
	if ((num1 > num2) && (num1 > num3)){
		max = num1;
		min = (num2 < num3)? num2: num3;
	}
	else if ((num2 > num1) && (num2 > num3)){
		max = num2;
		min = (num1 < num3)? num1: num3;
	}
	else if ((num3 > num1) && (num3 > num2)){
		max = num3;
		min = (num1 < num2)? num1: num2;
	}
	average = (num1+num2+num3)/3;
	printf("The maximum value is %d and minimum value is %d\n", max, min);
	printf("The average value is %f", average);
	return 0;
}