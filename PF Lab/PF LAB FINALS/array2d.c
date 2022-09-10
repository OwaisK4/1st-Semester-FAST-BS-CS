#include <stdio.h>

int main(){
	int r,c, i,j,k;
	long int sum = 0;
	printf("Enter rows and columns: ");
	scanf("%d%d", &r, &c);
	int arr[r][c];
	int transpose[r][c];
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			printf("Enter element a[%d][%d]: ",i,j);
			scanf("%d", &arr[i][j]);
		}
	}
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			transpose[i][j] = arr[j][i];
		}
	}
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			printf("%d ", transpose[i][j]);
		}
		printf("\n");
	}
	int sum_arr[r][c];
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			sum = 0;
			for(k=0; k<c; k++){
				sum += arr[i][k] * transpose[k][j];
			}
			sum_arr[i][j] = sum;
		}
	}
	printf("\n");
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			printf("%d ", sum_arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
