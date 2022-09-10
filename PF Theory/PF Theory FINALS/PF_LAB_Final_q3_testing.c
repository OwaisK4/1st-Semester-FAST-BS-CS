#include <stdio.h>
#include <string.h>

void encrypt(char *string);

int main(){
	char string[100];
	printf("Enter string to encrypt: ");
	gets(string);
	printf("\nOriginal string: %s\n", string);
	encrypt(string);
	printf("Encrypted string: %s", string);
}

void encrypt(char *string){
	int i,j,k, flag=0, cap_flag=0;
	char temp[100];
	int size = strlen(string);
	char vowels[] = "aeiou";
	char consonants[] = "bcdfghjklmnpqrstvwxyz";
	if ((string[0] > 64) && (string[0] < 91)){
		cap_flag = 1;
		string[0] = string[0] + 32;
	}
//	if (strcmp(strstr(string, "sch"),string)==0)
	for (i=0; i<size; i++){
		for (j=0; j<strlen(vowels); j++){
			if (string[i] == vowels[j]){
				if (i == 0)
					strcat(string, "way");
				else{
					if (strstr(string, "sch"))
						strcpy(temp, "sk");
					else
						strncpy(temp,string,i);
					for (k=0; string[k] != '\0'; k++){
						string[k] = string[k+i];
					}
					strcat(string, temp);
					strcat(string, "ay");
				}
				if (cap_flag == 1)
					string[0] = string[0] - 32;
				flag = 1;
				break;
			}
		}
		if (flag == 1)
			break;
	}
}
