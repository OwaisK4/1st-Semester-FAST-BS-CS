#include <stdio.h>
#include <math.h>

int main(){
	int fibo=0, a=1, b=0, i=0;
	int length = 2 + 8 + pow(2,5);	// Birth year: 2003
	while (i < length){				// Student ID: 3298
		fibo = a + b;				// Third smallest prime: 5
		a = b;
		b = fibo;
	
		printf("%d",a);
		printf((i<length-1)?", ":"");
		i++;
	}
	return 0;
}
