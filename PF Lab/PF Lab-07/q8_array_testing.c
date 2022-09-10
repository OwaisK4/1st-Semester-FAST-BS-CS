#include <stdio.h>
#define SIZE 30

int main(){
	char a,b,c,input;
	int times[SIZE]={}, i;
	while (1){
		printf("Enter first alphabet: ");
		scanf(" %c", &a);
		times[a] = times[a] + 1;
		printf("Enter second alphabet: ");
		scanf(" %c", &b);
		times[b] = times[b] + 1;
		printf("Enter third alphabet: ");
		scanf(" %c", &c);
		times[c] = times[c] + 1;
	
		if ((b == c-1) && (a == b-1)){
			printf("The given alphabet: %c %c %c are in forward sequence.", a,b,c);
			printf("\n%d",times[a]);
			printf("\n%d",times[b]);
			printf("\n%d",times[c]);
			return 0;
		}
	
		else if ((b == a-1) && (c == b-1)){
			printf("The given alphabet: %c %c %c are in backward sequence.", a,b,c);
			printf("\n%d",times[a]);
			printf("\n%d",times[b]);
			printf("\n%d",times[c]);
			return 0;
		}
		else {
			printf("\n");
		}
	}
	return 0;
}
