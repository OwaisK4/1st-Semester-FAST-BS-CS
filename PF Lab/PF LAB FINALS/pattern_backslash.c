#include <stdio.h>

int main(){
	int num = 17;
	int i,j;
	printf("\\\n");
	for(i=3; i<num; i++){
		if (i%2 == 0){
			printf("\\");
			for(j=2; j<i; j+=2)
				printf("\%d\\", j);
		}
		else{
			for(j=1; j<i; j+=2)
				printf("%d\\", j);
		}
		printf("\n");
	}
	return 0;
}
