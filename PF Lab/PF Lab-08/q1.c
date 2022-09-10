#include <stdio.h>

int main(){
	int i,j, num, limit;
	printf("Enter number to get table of: ");
	scanf("%d", &num);
	printf("Enter limit of multiplication table: ");
	scanf("%d", &limit);
	for (i=1; i<=1; i++){
		for (j=1; j<=limit; j++){
			printf("%d x %d = %d\n", num, j, num*j);
		}
		printf("\n");
	}
}