#include <stdio.h>
#include <math.h>

int main(){
	int a = 1234, b = 0;
	printf("Enter number to reverse: ");
	scanf("%d",&a);
	int m = log10(a);
	while (a != 0){
		b += (a % 10) * pow(10,m);
		a /= 10;
		m -= 1;
	}
	printf("%d",b);
	return 0;
}
