#include <stdio.h>

int main(){
	int i, n, sum=0;
	printf("Enter the value of nth integer: ");
	scanf("%d", &n);
	for (i=1; i<=n; i++){
		if (i % 2 == 0)
			continue;
		sum = sum + i*i;
	}
	printf("The sum of the series is: %d", sum);
	return 0;
}