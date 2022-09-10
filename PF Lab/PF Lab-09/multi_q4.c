#include <stdio.h>

int main(){
	int r=6,c=6, i,j;
	int array1[r][c], array2[r][c];
	int sum[r][c];
	
	printf("\nEnter elements of 1st matrix: \n");
	for (i=0; i<r; i++){
		for (j=0; j<c; j++){
			printf("Enter element a[%d][%d]: ",i+1,j+1);
			scanf("%d", &array1[i][j]);
		}
	}
	printf("\nEnter elements of 2nd matrix: \n");
	for (i=0; i<r; i++){
		for (j=0; j<c; j++){
			printf("Enter element a[%d][%d]: ",i+1,j+1);
			scanf("%d", &array2[i][j]);
		}
	}
	
	printf("\n\n");
	for (i=0; i<r; i++){
		for (j=0; j<c; j++){
			sum[i][j] = array1[i][j] + array2[i][j];
			printf("%3d ",sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}

/*
	printf("Enter number of rows: ");
	scanf("%d", &r);
	printf("Enter number of columns: ");
	scanf("%d", &c);
*/
/*
	int array1[6][6] = {
	{0,1,2,3,4,5}, {0,1,2,3,4,5}, {0,1,2,3,4,5}, {0,1,2,3,4,5}, {0,1,2,3,4,5}, {0,1,2,3,4,5}
	};
	int array2[6][6] = {
	{0,1,2,3,4,5}, {0,1,2,3,4,5}, {0,1,2,3,4,5}, {0,1,2,3,4,5}, {0,1,2,3,4,5}, {0,1,2,3,4,5}
	};
*/
