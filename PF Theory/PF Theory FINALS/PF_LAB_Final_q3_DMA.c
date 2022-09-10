#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	int i,j,k;
	char string[100];
	printf("Enter string: ");
	gets(string);
	int size = strlen(string);
	char *a = (char *)malloc(size + 1);
	strcpy(a, string);
	for (i=0; i<size; i++){
		for (j=1; j<size-i; j++){
			printf(" ");
		}
		for (j=0; j<=i; j++){
			printf("%c ",*(a+j));
//			printf("* ");
		}
		printf("\n");
	}
	free(a);
	return 0;
}
