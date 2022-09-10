#include <stdio.h>
#include <string.h>

int main(){
	int i, j;
	char word[] = "UNIVERSITY";
	int size = strlen(word);
	for (i=0; i<size; i+=2){
		for (j=0; j<=i; j+=2){
			printf("%c%c", *(word + j), *(word + j+1));
		}
		printf("\n");
	}
	for (i=size-4; i>=0; i-=2){
		for (j=0; j<=i; j+=2){
			printf("%c%c", *(word + j), *(word + j+1));
		}
		printf("\n");
	}
	return 0;
}