#include <stdio.h>

int main(){
	char letter,sent = 'z';
	int count = 0;
	while (letter != sent){
		printf("Enter any character other than z: ");
		scanf(" %c",&letter);
		count++;
	}
	printf("Number of characters entered: %d", count);
	return 0;
}