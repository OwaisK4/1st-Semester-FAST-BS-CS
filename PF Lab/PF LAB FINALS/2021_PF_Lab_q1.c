#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int main(){
	int i=0, size, count=0;
	int n = 10;
	char key;
	char *arr = (char *)malloc(n+1);
	while(1){
		if (i >= n){
			n = n * 2;
			arr = (char *)realloc(arr, (n)+1);
		}
		printf("\nEnter character: ");
//		scanf("%c", &key);
		key = getch();
		fflush(stdin);
		printf("%c",key);
		if (key == 27)
			break;
		arr[i] = key;
		i++;
	}
	printf("\n\nTotal characters entered: %d\n", i);
	for (count=0; count<i; count++){
		printf("%c ",arr[count]);
	}
	return 0;
}
