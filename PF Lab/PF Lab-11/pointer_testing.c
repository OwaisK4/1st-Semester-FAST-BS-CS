#include <stdio.h>

int main(){
	int *ptr, var=0;
	var = 10;
	ptr = &var;
	printf("%d", *ptr);
	return 0;
}
