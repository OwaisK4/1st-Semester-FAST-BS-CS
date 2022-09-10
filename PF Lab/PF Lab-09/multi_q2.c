#include <stdio.h>

int main(){
	int array[10], rev_array[10],i,j;
	printf("Enter elements of array:\n");
	for (i=0; i<10; i++){
		scanf("%d", &array[i]);
	}
	for (i=9,j=0; i>=0,j<10; i--,j++){
		rev_array[j] = array[i];
	}
	printf("The elements of original array are: ");
	for (i=0; i<10; i++){
		printf("%d ", array[i]);
	}
	printf("\nThe elements of reversed array are: ");
	for (i=0; i<10; i++){
		printf("%d ", rev_array[i]);
	}
	return 0;
}
