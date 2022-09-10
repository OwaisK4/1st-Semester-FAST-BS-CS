#include <stdio.h>
#include <string.h>

int main(){
	int i,j, v_count=0, c_count=0;
	char vowels[] = "aeiou";
	char consonants[] = "bcdfghjklmnpqrstvwxyz";
	char string[100];
	printf("Enter string to check: ");
	gets(string);
	char *p = string;
	for (i=0; i<strlen(p); i++){
		for (j=0; j<strlen(vowels); j++){
			if (*(p+i) == *(vowels+j))
				v_count++;
		}
		for (j=0; j<strlen(consonants); j++){
			if (*(p+i) == *(consonants+j))
				c_count++;
		}
	}
	printf("The number of vowels are: %d.\nThe number of consonants are: %d.",v_count, c_count);
//	printf("\nstrlen(p) == %d", strlen(p));
//	printf("\nstrlen(vowels) == %d", strlen(vowels));
	return 0;
}
