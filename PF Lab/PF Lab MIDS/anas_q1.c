#include<stdio.h>
int main()
{
	int n1, n2, n3, max, min, mid, add, sum=0, mul, div, i;
	scanf("%d", &n1);
	scanf("%d", &n2);
	scanf("%d", &n3);
	if(n1 > n2 && n1 > n3){
		max=n1;
	}
	else if(n2 > n1 && n2 > n3){
		max=n2;
	}
	else if(n3 > n1 && n3 > n2){
		max=n3;
	}
	
	if(n1 < n2 && n1 < n3){
		min=n1;
	}
	if(n2 < n1 && n2 < n3){
		min=n2;
	}
	if(n3 < n1 && n3 < n2){
		min=n3;
	}
	
	if((max == n1 && min == n3) || (min == n1 && max == n3)){
		mid = n2;
	}
	if((max == n1 && min == n2) || (min == n1 && max == n2)){
		mid = n3;
	}
	if((max == n2 && min == n3) || (min == n2 && max == n3)){
		mid = n1;
	}
	
	add= min + mid;
	printf("Now two numbers are\n%d, %d\n\n", max, add);
//	printf("%d\t|%d", max, add);
	
	mul = max;
	div = add;
	
	while(div!=1){
	
	printf("\n%d\t|%d", mul, div);
		if(div % 2 == 0){
//			printf("%d\n",mul);
			sum = sum + mul;
		}
	mul = mul * 2;
	div = div / 2;
	}
	printf("\nThen the total is %d", sum);
}
