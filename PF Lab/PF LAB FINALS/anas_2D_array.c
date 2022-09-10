#include<stdio.h>
#include<string.h>

void swap(int *, int *);
void input(int (*p)[], int, int);
void sort(int *);
void display(int (*p)[], int, int);
void add(int *);
void per(char *, int, int);
void pos(char , char);

int main(){
	int r, c;
	printf("Enter row and col: ");
	scanf("%d%d", &r, &c);
	int a[r][c];
	input(a, r, c);
	display(a, r, c);
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
