#include<stdio.h>
#include<string.h>
#include <stdlib.h>

void input(int (*p)[], int, int);
void display(int (*p)[], int, int);

int main(){
	int i,j;
	int r, c;
	printf("Enter row and col: ");
	scanf("%d%d", &r, &c);
	int **a = (int **)malloc(r * sizeof(int *));
	for (i=0; i<c; i++)
		*(a+i) = (int *)malloc(c * sizeof(int));
//	int a[r][c];
	input((int (*)[]) a, r, c);
	display((int (*)[])a, r, c);
}
void input(int (*p)[50], int r, int c){
	int i,j;
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			printf("Arry[%d][%d] : ", i, j);
			scanf("%d", (*(p+i)+j));
			fflush(stdin);
		}
	}
}
void display(int (*p)[50], int row, int col){
	int i, j;
	printf("\nMATRIX: \n");
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			printf("%d ", *(*(p+i)+j));
		}
		printf("\n");
	}
}
