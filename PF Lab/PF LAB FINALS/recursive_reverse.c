#include <stdio.h>
#include <string.h>

void recurse(char array[], char *token);

int main(){
//	char a[] = "My name is Owais Ali Khan";
	char a[100];
	printf("Enter string to reverse: ");
	gets(a);
	char *tok = strtok(a, " ");
	recurse(a, tok);
}

void recurse(char array[], char *token){
	if (token == NULL)
		return;
	else{
		recurse(array, strtok(NULL, " "));
		printf("%s ", token);
	}
}
