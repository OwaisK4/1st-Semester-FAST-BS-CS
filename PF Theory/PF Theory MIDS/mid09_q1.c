#include <stdio.h>

int main(){
	int i,j;
	for (i=0; i<10; i++){
		if (i<5){
			for (j=0; j<=i; j++)
				printf("*");
			printf("\n");
		}
		else {
			for (j=i; j>=5; j--)
				printf(" ");
			for (j=9; j>i; j--)
				printf("*");
			printf("\n");
		}
	}
	return 0;
}
