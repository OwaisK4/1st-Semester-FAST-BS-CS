#include <stdio.h>

int main(){
	int a = 30000;
	/*
	printf("%f\n",a*0.15);
	printf("%f\n",a*0.20);
	printf("%f\n",a*0.20);
	printf("%f\n",a*0.25);
	*/
	float b = a*0.15 + a*0.20 + a*0.20 + a*0.25 ;
	printf("%.0f",b);
}
