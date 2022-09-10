#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int n,i,j;
	printf("Enter the number of elements in your full name: ");
	scanf("%d",&n);
	char *ptr = (char*)malloc(n+1);
	if(ptr==NULL){
		exit (0);
	}
	fflush(stdin);
	printf("Enter your full name: ");
	gets(ptr);
	printf("%s",ptr);
	free(ptr);
}
