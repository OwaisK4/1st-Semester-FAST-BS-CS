#include <stdio.h>

int sum(int *arr, int size);
int main(){
	int size, i, total;
	printf("Enter size of array: ");
	scanf("%d", &size);
	int array[size];
	int *ptr = array;
	printf("\nEnter values of array:\n");
	for (i=0; i<size; i++){
		printf("Element %d: ", i);
		scanf("%d", ptr+i);
	}
	total = sum(ptr, size);
	printf("The sum of all elements in array is: %d", total);
}

int sum(int *arr, int size){
	int i, sum=0;
	for (i=0; i<size; i++){
		sum += *(arr + i);
	}
	return sum;
}
