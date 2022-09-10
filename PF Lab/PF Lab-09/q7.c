#include <stdio.h>

int main(){
	int m,n, i,j, count=0;
	printf("Enter no. of rows: ");
	scanf("%d", &m);
	printf("Enter no. of columns: ");
	scanf("%d", &n);
	printf("Enter elements of array: ");
	int array[m][n];
	for (i=0; i<m; i++){
		for (j=0; j<n; j++){
			scanf("%d", &array[i][j]);
		}
	}
	int T = (m * n) / 2;
	for (i=0; i<m; i++){
		for (j=0; j<n; j++){
			if (array[i][j] == 0)
				count++;
			printf("%d ",array[i][j]);
		}
		printf("\n");
	}
//	printf("\nT: %d\nCount: %d",T,count);
	if (count >= T)
		printf("\nThe given matrix is Sparse Matrix.");
	else
		printf("\nThe given matrix is not Sparse.");
	return 0;
}
