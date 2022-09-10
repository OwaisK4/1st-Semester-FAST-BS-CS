#include <stdio.h>

int main(){
	int a = 9, i,j;
	for (i=1; i<10; i++){
		
		for (j=0; j<i; j++){
			printf("%d",a);
		}
		printf(" ");
	}
}
