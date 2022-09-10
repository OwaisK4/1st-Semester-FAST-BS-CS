#include <stdio.h>

int main(){
	/*
	float array[10] = {2,3,6,2,4,7,4};
	printf("%d",sizeof(array[0]));
	*/
	int r,c, i,j, value, flag=0;
	printf("Enter number of rows: ");
	scanf("%d", &r);
	printf("Enter number of columns: ");
	scanf("%d", &c);
	int array[r][c];
	
	printf("\nEnter elements of array: \n");
	for (i=0; i<r; i++){
		for (j=0; j<c; j++){
			printf("Enter element a[%d][%d]: ",i,j);
			scanf("%d", &array[i][j]);
		}
	}
	printf("\nEnter value to search in array: ");
	scanf("%d", &value);
	printf("\n");
	for (i=0; i<r; i++){
		for (j=0; j<c; j++){
			printf("%d ",array[i][j]);
		}
		printf("\n");
	}
	for (i=0; i<r; i++){
		for (j=0; j<c; j++){
			if (array[i][j] == value){
				printf("Given value %d found at a[%d][%d]\n",value,i,j);
				flag = 1;
			}
		}
	}
	if (!flag)
		printf("Given value %d not found in matrix.",value);
	return 0;
	
}
