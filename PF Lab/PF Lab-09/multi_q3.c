#include <stdio.h>

int main(){
	int array[5][5]={}, max,i,j;
	printf("Enter array elements: \n");
	for (i=0; i<5; i++){
		for (j=0; j<5; j++){
			printf("Enter array element a[%d][%d]: ",i+1,j+1);
			scanf("%d",&array[i][j]);
		}
	}
	max = array[0][0];
	for (i=0; i<5; i++){
		for (j=0; j<5; j++){
//			printf("Enter array element a[%d][%d]",i+1,j+1);
//			scanf("%d",&array[i][j]);
			if (array[i][j] > max){
				max = array[i][j];
			}
		}
	}
	printf("\nThe largest number from array is: %d",max);
}
