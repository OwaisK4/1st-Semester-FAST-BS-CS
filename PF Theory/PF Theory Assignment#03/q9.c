#include <stdio.h>

int main(){
	int a='a';
	int i,j,total;
	printf("Enter number of rows: ");
	scanf("%d",&total);
	total = (total>26)?26:total;
	
	for (i=0; i<total; i++){
		for (j=0; j<=i; j++){
			printf("%c",a+j);
		}
		printf("\n");
	}
	return 0;
}
