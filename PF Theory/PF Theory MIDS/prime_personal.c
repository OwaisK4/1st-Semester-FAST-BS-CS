#include <stdio.h>

int main(){	
	int num,i,j, prime=1, range=3;
	printf("Enter value for N: ");
	scanf("%d",&num);
	for(i=0; i<num; ){
		for(j=2; j<range; j++){	
			if (range % j == 0){
				break;
			}
		}
		if (j == range){
			printf("%d ",range);
			i++;
		}
		range++;
	}
}
//	for (j=3; j<=num; j++){
//		for (i=2; i<j; i++){
//		
//		if (j % i == 0){
//			break;
//		}
//		prime = j;
//	}
//	product = product * prime;
//	printf("%d\n",prime);
//	}
//	printf("Product: %d", product);
	


/*
for (i=2; i<num; i++){
		
		if (num % i == 0){
			break;
		}
		prime = num;
	}
	printf("%d",prime);
*/
