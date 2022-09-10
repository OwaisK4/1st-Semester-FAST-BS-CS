#include <stdio.h>
#include <string.h>

void reverse(char array[], int start, int end);
int main(){
	char sentence[50];
	printf("Enter a sentence: ");
	gets(sentence);
	reverse(sentence, 0, strlen(sentence)-1);
	return 0;
}
void reverse(char array[], int start, int end){
	static int temp;
	if (start >= end){
		printf("%s",array);
		return;
	}
	else{
		temp = array[start];
		array[start] = array[end];
		array[end] = temp;
		reverse(array, start+1, end-1);
	}
}
