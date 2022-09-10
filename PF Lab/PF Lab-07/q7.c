#include <stdio.h>

int main(){
	int fibo=1, a=1, b=0, temp, counter=1000;
	while (fibo < counter){
		printf("%d ",fibo);
		fibo = a + b;
		a = b;
		b = fibo;		
//		if (fibo > counter)
//			break;
		
	}
	/*
	int fibo=0, a=1, b=0, temp, counter=1000;
	while (fibo < counter){
		fibo = a + b;
		a = b;
		b = fibo;
		
		if (fibo > counter)
			break;
		printf("%d ",fibo);
	}
	*/
	return 0;
}
