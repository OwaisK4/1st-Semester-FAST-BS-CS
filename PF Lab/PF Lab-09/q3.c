#include <stdio.h>
#include <string.h>

int main(){
	char s1[50]={}, s2[50]={};
	int ret;
	printf("Enter first string: ");
	gets(s1);
	printf("Enter second string: ");
	gets(s2);
	ret = strcmp(s1,s2);
	if(ret < 0) {
		printf("%s is less than %s",s1,s2);
	} 
	else if(ret > 0){
		printf("%s is greater than %s",s1,s2);
	} 
	else{
		printf("%s is equal to %s",s1,s2);
	}
	return 0;
}
