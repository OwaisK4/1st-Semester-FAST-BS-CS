#include <stdio.h>
#include <string.h>
 
int main(){
	int occurence = 0;
	char word[20];
	char string[100];
	printf("Your word: ");
	gets(word);
	printf("Search in: ");
	gets(string);
	
	char* token = strtok(string, " ");
	while (token != NULL) {
		if (strcmp(word, token)==0)
			occurence++;
//		printf("%s ", token);
		token = strtok(NULL, " ");
	}
	printf("\nOccurence: %d times",occurence);
	return 0;
}
