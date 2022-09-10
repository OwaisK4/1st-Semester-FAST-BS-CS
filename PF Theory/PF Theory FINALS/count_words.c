#include <stdio.h>
#include <string.h>

int main(){
	char a[] = "asd basdas asdsd asdasd";
	int words = count_words(a);
//	printf("Count = %d", words);
	printf("Count = %d", count_words(a));
	return 0;
}

int count_words(char text[]){
	int i, count=1;
	for (i=0; i<strlen(text); i++){
		if (text[i] == ' '){
			count++;
		} 
	}
	return count;
}
