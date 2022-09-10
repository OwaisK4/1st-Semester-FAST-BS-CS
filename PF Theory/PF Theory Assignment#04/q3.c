#include <stdio.h>

int fibo(int x);
int main(){
	int num, ans, i;
//	printf("Enter number: ");
//	scanf("%d", &num);
//	ans = fibo(num);
//	printf("Fibonacci digit is: %d",ans);
	printf("The terms in Fibonacci sequence are:");
	for (i=0; i<25; i++){
		printf(" %d",fibo(i));
	}
}
int fibo(int num){
	if (num < 2)
		return 1;
	else{
		return fibo(num-1) + fibo(num-2);
	}
}
