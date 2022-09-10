#include <stdio.h>

void recursive_mul(int a[10][10], int b[10][10], int row1, int col1, int col2);
int main(){
	int r1,c1,r2,c2,i,j,k,n=0,x=0;

	printf("Enter number of rows and columns for mat 1: ");
	scanf("%d %d", &r1 , &c1);
    printf("Enter number of rows and columns for mat 2: ");
	scanf("%d %d", &r2 , &c2);    

	int mat1[r1][c1],mat2[r2][c2];
	static int res[10][10];
	int result[r1][c2];

	int a=r1*c2;
	printf("Enter matrix 1");
	for (i=0;i<r1;i++){
		for (j=0;j<c1;j++)
			scanf("%d", &mat1[i][j]);
	}
	printf("Enter matrix 2");
	for (i=0;i<r2;i++){
		for (j=0;j<c2;j++)
			scanf("%d", &mat2[i][j]);
	}

	printf("First matrix is\n");
	for (i=0;i<r1;i++){
		for (j=0;j<c1;j++){
			printf("%d ", mat1[i][j]);
		}
		printf("\n");
	}

	printf("Second matrix is\n");
	for (i=0;i<r2;i++){
		for (j=0;j<c2;j++){
			printf("%d ", mat1[i][j]);
		}
		printf("\n");
	}
	recursive_mul(mat1, mat2, r1, c1, c2);
	printf("\nThe multiplication of two matrixes is : \n");
   	for (i = 0; i < r1; i++) {
    	printf("\n");
      	for (j = 0; j < c2; j++) {
        	printf("%d ", res[i][j]);
      }
   }
   return 0;
}
/*
for (i=0; i<r1; i++){
	for (j=0; j<c2; j++){
	int sum = 0;
		for (k=0; k<c1; k++){
			sum += mat1[i][k] + mat2[k][j];
		}
		result[i][j] = sum;
	}
}
*/ /*
for (i=0;i<r1;i++){
	for (j=0;j<c2;j++){
		printf("%d ", result[i][j]);
	}
}
*/
void recursive_mul(int a[10][10], int b[10][10], int row1, int col1, int col2){
   static int sum, i = 0, j = 0, k = 0;
   //row of first matrix
   if (i < row1) {
      //column of second matrix
      if (j < col2) {
         if (k < col1) {
            sum = sum + a[i][k] * b[k][j];
            k++;
            recursive_mul(a, b, row1, col1, col2);
         }
         res[i][j] = sum;
         sum = 0;
         k = 0;
         j++;
         recursive_mul(a, b, row1, col1, col2);
      }
      j = 0;
      i++;
      recursive_mul(a, b, row1, col1, col2);
   }
}
