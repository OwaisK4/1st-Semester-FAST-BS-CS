#include <stdio.h>

int main(){
	int rows,columns,n=5,i,j,coef=1;
	for (rows=0; rows<=n; rows++){
		for (j=1; j<=n-rows; j++){
			printf("  ");
		}
		for (columns=0; columns<=rows; columns++){
			if (columns == 0 || rows == 0){
				coef = 1;
			}
			else{
				coef = coef*(rows-columns+1)/columns;
			}
			printf("%4d",coef);
		}
	printf("\n");
	}
}
