#include<stdio.h>
#include<string.h>

void func(char string2[])
{
	printf("%s", string2);
}
int main(){
	char sub[50],string1[20]="talal abdullah",string2[50]="Hello this is ";
	strcat(string2,string1);
	printf("Enter substring: ");
	gets(sub);
	if (strstr(string2, sub))
		printf("Substring: %s found in string.", sub);
	else
		printf("Substring: %s not found in string.", sub);
//	printf("%s", sub);
//	func(string2);
}
