#include <stdio.h>

int main(){
	char a,b,c,input;
	while (1){
		printf("Enter first alphabet: ");
		scanf(" %c", &a);
		printf("Enter second alphabet: ");
		scanf(" %c", &b);
		printf("Enter third alphabet: ");
		scanf(" %c", &c);
	
		if ((b == c-1) && (a == b-1)){
			printf("The given alphabet: %c %c %c are in forward sequence.", a,b,c);
			return 0;
		}
	
		else if ((b == a-1) && (c == b-1)){
			printf("The given alphabet: %c %c %c are in backward sequence.", a,b,c);
			return 0;
		}
		else
			printf("\n");
	}
	return 0;
}
