#include <stdio.h>
#include <string.h>

int main(){
	int i;
	char first[20] = {};
	char last[20] = {};
	printf("Enter first name: ");
	gets(first);
	printf("Enter last name: ");
	gets(last);
	strcat(first,last);
	for (i=strlen(first)-1; i>=0; i--){
		printf("%c",first[i]);
	}
//	printf("%d",strlen(first));
//	printf("\n%s",first);
	return 0;
}
// "Programming Fundamentals";
