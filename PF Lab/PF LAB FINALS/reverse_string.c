#include <stdio.h>
#include <string.h>

int main(){
	char arr[] = "This is a test string";
	printf("Original: %s", arr);
	strrev(arr);
	printf("\nReversed: %s", arr);
	return 0;
}
