#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	struct pixel{
		int red, green, blue;
	};
	
	int arr_r=3, arr_c=4;
	int rotate_r=4, rotate_c=3;
	int arr[arr_r][arr_c];
	int rotate[rotate_r][rotate_c];
	int i,j,k=0;
	for (i=0; i<arr_r; i++){
		for (j=0; j<arr_c; j++){
			arr[i][j] = ++k;
		}
	}
	for (i=0; i<arr_r; i++){
		for (j=0; j<arr_c; j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
//	int rows=2, columns=2, a=rows, b=columns;
	for (i=0; i<arr_r; i++){
		for (j=0; j<arr_c; j++){
			rotate[j][arr_r-i-1] = arr[i][j];
		}
	}
	printf("\n");
	for (i=0; i<rotate_r; i++){
		for (j=0; j<rotate_c; j++){
			printf("%d ",rotate[i][j]);
		}
		printf("\n");
	}
	return 0;
}
