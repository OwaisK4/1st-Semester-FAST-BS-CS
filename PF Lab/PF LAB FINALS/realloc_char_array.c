#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int main(){
	int i;
	int *p = (int *)malloc(4*sizeof(int));
	for(i=0; i<4; i++){
		printf("Enter element at index %d: ", i);
        scanf("%d", p+i);
    }
//	ptr = text;
	p = realloc(p, 10*sizeof(int));
	for(i=4; i<10; i++){
        printf("Enter element at index %d: ", i);
        scanf("%d", p+i);
    }
	for(i=0; i<10; i++){
		printf("%d", *(p+i));
    }
	return 0;
}
