#include <stdio.h>
#include <string.h>

int main(){
	int i,j,k;
	char a[] = "ZESHAN";
	int size = strlen(a);
	for (i=0; i<size; i++){
		for (j=1; j<size-i; j++){
			printf(" ");
		}
		for (j=0; j<=i; j++){
			printf("%c ",a[j]);
//			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
