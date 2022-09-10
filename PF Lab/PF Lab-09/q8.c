#include <stdio.h>

int main(){
	int m,n, i,j;
	printf("Enter no. of rows: ");
	scanf("%d", &m);
	printf("Enter no. of columns: ");
	scanf("%d", &n);
	if (m != n){
		printf("Matrix is not square. Exiting.");
		return 0;
	}
	printf("Enter elements of matrix: ");
	int matrix[m][n], transpose[m][n];
	for (i=0; i<m; i++){
		for (j=0; j<n; j++){
			scanf("%d", &matrix[i][j]);
		}
	}
	printf("\n");
	for (i=0; i<m; i++){
		for (j=0; j<n; j++){
			transpose[i][j] = matrix[j][i];
		}
	}
	for (i=0; i<m; i++){
		for (j=0; j<n; j++){
			if (matrix[i][j] != transpose[i][j]){
				printf("Matrix is asymmetric.");
				return 0;
			}
		}
	}
	printf("\nMATRIX: \n--------\n       ");
	for (i=0; i<m; i++){
		for (j=0; j<n; j++){
			printf("%d ",matrix[i][j]);
		}
		printf("\n       ");
	}
	printf("\nMatrix is symmetric.");
	return 0;
}
