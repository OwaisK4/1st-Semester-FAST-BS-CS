#include <stdio.h>
#include <math.h>

int main(){
	int a=16, bin=0, n=1, dec, m=1;
	while (a != 0){
		bin += (a % 2) * n;
		a /= 2;
		n *= 10;
	}
	printf("%d\n",bin);
	
	while (bin != 0){
		dec += (bin % 10) * m;
		bin /= 10;
		m *= 2;
	}
	printf("%d",dec);
}
