#include <stdio.h>
#include <string.h>

int count_char(char text[], int len);
int count_words(char text[], int len, int j);
void search_nonrecursive(char text[], char substring[]);
void search_recursive(char text[], char substring[]);
void replace(char text[], char old_character, char new_character);

int main(){
	int j = 0;
//	char text[50] = "Owais";
//	char words[50] = "asd dfg ta rtwe asdw";
	char text[50] = "My name is Owais Ali Khan";
	int a = count_char(text, strlen(text));
	printf("Count is %d\n",a);
	int b = count_words(text, strlen(text), j);
	printf("Count of words is is %d\n",b);
	search_nonrecursive(text, "Ali");
	replace(text, 'a', 'b');
}
int count_char(char text[], int len){
	static int i=0, count=0;
	if (i == len)
		return count;
	else{
		count++;
		return count_char(text, len-1);
	} 
}
int count_words(char text[], int len, int j){
	static count=1;
	if (j == len)
			return count;
	else{
		if (text[j] == ' ')
			count++;
		return count_words(text, len, j+1);
	} 
}
void search_nonrecursive(char text[], char substring[]){
	char found[50] = {};
	strcpy(found,strstr(text, substring));
	if (found)
		printf("Substring: %s found in String: %s.",substring, found);
	else{
		printf("Substring: %s found in String.",substring);
	}
}
/*
void search_recursive(char text[], char substring[]){
	char found[50] = {};
	strcpy(found,strstr(text, substring));
	if (found)
		printf("Substring: %s found in String: %s.",substring, found);
	else{
		printf("Substring: %s found in String.",substring);
	}
}
*/
void replace(char text[], char old_character, char new_character){
	char old_text[50];
	strcpy(old_text, text);
	int i=0;
	for (i=0; text[i] != '\0'; i++){
		if (text[i] == old_character){
			text[i] = new_character;
		}
	}
	printf("\nOld string: %s\nNew string: %s",old_text, text);
}

//	printf("%s", text);
//	char temp;
