#include <stdio.h>
#include <string.h>

void SentenceCase(char *Text, int *size);
int main(){
//	int *text = "owais ali khan";
	char text[100];
	printf("Enter sentence: ");
	gets(text);
	int size = strlen(text)-1;
	SentenceCase(text, &size);
	printf("Sentence is: %s", text);
	return 0;
}

void SentenceCase(char *Text, int *size){
	int i;
	*Text = *Text - 32;
	for (i=0; i<*size; i++){
		if (*(Text + i) == '.' && (i+1 < *size)){
			if ((*(Text + i+1) >= 97) && (*(Text + i+1) <= 122))
				*(Text + i+1) = *(Text + i+1)- 32;
			else
				*(Text + i+2) = *(Text + i+2)- 32;	
		}
	}
//	printf("%c", *Text);
//	printf("%c\n", *Text - 32);
//	printf("%c", chr);
}
