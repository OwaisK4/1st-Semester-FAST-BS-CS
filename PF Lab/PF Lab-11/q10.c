#include <stdio.h>

int main(){
	int n, i,j;
	printf("Enter size(nxn) of both matrices: ");
	scanf("%d", &n);
	int matA[n][n];
	int matB[n][n];
	
	int (*pA)[n];
	int (*pB)[n];
	pA = matA;
	pB = matB;
	
	printf("\nEnter values of Matrix A:\n");
	for (i=0; i<n; i++){
		for (j=0; j<n; j++){
			printf("MatrixA[%d][%d]: ",i,j);
			scanf("%d", (*(pA + i) + j));
		}
	}
	int a=0, b=n-1;
	for (i=0; i<n; i++){
		for (j=0; j<n; j++){
			*(*(pB + i) + j) = *(*(pA + 0) + a) + *(*(pA + n-1) + b);
			a++;
			b--;
		}
	}

	printf("\nValues of Matrix A:\n\t");
	for (i=0; i<n; i++){
		for (j=0; j<n; j++){
			printf("%2d  ", *(*(pA + i) + j));
		}
		printf("\n\t");
	}
	printf("\nValues of Matrix B:\n\t");
	for (i=0; i<n; i++){
		for (j=0; j<n; j++){
			printf("%2d  ", *(*(pB + i) + j));
		}
		printf("\n\t");
	}
}
