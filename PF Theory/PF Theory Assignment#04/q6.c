#include <stdio.h>

void increment(int array[], int size);
int main(){
	int i, num;
	printf("Enter number of elements of array: ");
	scanf("%d", &num);
	int array[num];
	printf("Enter the elements of integer array:\n");
	for (i=0; i<num; i++){
		printf("Element %d: ",i);
		scanf("%d", &array[i]);
	}
	printf("\nArray elements: ");
	for (i=0; i<num; i++){
		printf("%d ",array[i]);
	}
	increment(array, num);
	printf("\nIncremented array: ");
	for (i=0; i<num; i++){
		printf("%d ",array[i]);
	}
	return 0;
}
void increment(int array[], int size){
	int i;
	for (i=0; i<size; i++){
		array[i] = array[i] + 2;
	}
}
