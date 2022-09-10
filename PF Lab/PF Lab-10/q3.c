#include <stdio.h>

void recursive_mul(int r1, int c1, int mat1[10][10], int r2, int c2, int mat2[10][10], int res[10][10]){
    static int i=0, j=0, k=0;
    if (i >= r1){
        return;
    }
    else if (i < r1){
        if (j < c2){
            if (k < c1){
                res[i][j] += mat1[i][k] * mat2[k][j];
                k++;
                recursive_mul(r1, c1, mat1, r2, c2, mat2, res);
            }
            k = 0;
            j++;
            recursive_mul(r1, c1, mat1, r2, c2, mat2, res);
        }
        j = 0;
        i++;
        recursive_mul(r1, c1, mat1, r2, c2, mat2, res);
    }
}

int main(){
	int r1,c1,r2,c2,i,j,k;
	printf("Enter number of rows and columns for mat 1: ");
	scanf("%d %d", &r1 , &c1);
    printf("Enter number of rows and columns for mat 2: ");
	scanf("%d %d", &r2 , &c2);
	
	int mat1[10][10]={}, mat2[10][10]={};
	int result[10][10]={};

	printf("Enter matrix 1: ");
	for (i=0;i<r1;i++){
		for (j=0;j<c1;j++)
			scanf("%d", &mat1[i][j]);
	}
	printf("Enter matrix 2: ");
	for (i=0;i<r2;i++){
		for (j=0;j<c2;j++)
			scanf("%d", &mat2[i][j]);
	}

	printf("\nThe first matrix is\n");
	for (i=0;i<r1;i++){
		for (j=0;j<c1;j++){
			printf("%d ", mat1[i][j]);
		}
		printf("\n");
	}

	printf("The second matrix is\n");
	for (i=0;i<r2;i++){
		for (j=0;j<c2;j++){
			printf("%d ", mat1[i][j]);
		}
		printf("\n");
	}
    recursive_mul(r1, c1, mat1, r2, c2, mat2, result);
    printf("\n");
    printf("The multiplied matrix is:\n");
	for (i=0;i<r1;i++){
		for (j=0;j<c2;j++){
			printf("%d ", result[i][j]);
		}
		printf("\n");
	}
    return 0;
}
