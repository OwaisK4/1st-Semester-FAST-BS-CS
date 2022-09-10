#include <stdio.h>

long rec(int x);
int main(){
	int a;
	unsigned long fact;
	printf("Enter any number: ");
	scanf("%d", &a);
	fact = rec(a);
	printf("Factorial value: %d",fact);
}
long rec(int x){
	int f;
	if (x == 1)
		return 1;
	else{
		f = x * rec(x-1);
		return f;
	}
}