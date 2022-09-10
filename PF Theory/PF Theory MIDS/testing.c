#include <stdio.h>

int main(){
//	printf("%f", 2/ 5.0);
/*
	int n ;
	for (n=9; n!=0; n--){
		printf("%d", n--);
	}
*/
	int f = 1;
	while (f++ <= 5){
		printf("%d", f++);
	}
	printf("\n");
	int i=1, j=1;
	for (;;){
		if (i>5){
			break;
		}
		else{
			j += 1;
		}
		printf(" %d",j);
		i += j;
	}
	return 0;
	
}
