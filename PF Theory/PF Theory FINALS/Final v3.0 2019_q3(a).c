#include <stdio.h>

int main(){
	int i,j;
	int num = 10;
	int n;
	printf("%d, ", num);
	for (i=0; i<3; i++){
		num += 3;
		printf("%d, ", num);
		n = num;
		for (j=0; j<n; j++){
			num += 1;
		}
		printf("%d, ", num);
		n = 0;
	}
	return 0;
}
