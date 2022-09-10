#include <stdio.h>
#include <math.h>

int main(){
	float a,b,c,x1,x2;
	printf("Enter values of a,b,c (a != 0): ");
	scanf("%f%f%f",&a,&b,&c);
	x1 = (-b+sqrt(pow(b,2)-(4*a*c)))/(2*a);
	x2 = (-b-sqrt(pow(b,2)-(4*a*c)))/(2*a);
	printf("The roots of the quadratic equation are: (%f,%f)", x1, x2);
	return 0;
}
