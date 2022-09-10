#include <stdio.h>
#include <string.h>

int WordCount(char *Text, int size);
int main(){
//	int *text = "owais ali khan";
	char text[100];
	printf("Enter sentence: ");
	gets(text);
	int total = WordCount(text, strlen(text)-1);
	printf("Word Count is: %d", total);
	return 0;
}

int WordCount(char *Text, int size){
	int i, count=1;
	for (i=0; i<size; i++){
		if ((*(Text + i) == ' ') || (*(Text + i) == '\n'))
			count++;
	}
	return count;
}