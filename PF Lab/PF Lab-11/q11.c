#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int n, i;
	printf("Enter total N number of characters in name: ");
	scanf("%d", &n);
	char name[n];
	fflush(stdin);
	char *ptr = (char *) malloc(n * sizeof(char));
	if (ptr == NULL){
		printf("Error! Memory not allocated.");
		exit(0);
	}
	printf("Enter your name: ");
	gets(name);
	strncpy(ptr, name, n);
	printf("Dynamic Array: %s", ptr);
	free(ptr);
	return 0;
}
