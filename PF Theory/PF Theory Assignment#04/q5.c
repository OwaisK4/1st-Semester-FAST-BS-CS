#include <stdio.h>
#define SIZE 50

int *sort(int array[], int size);
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
	int *sorted = sort(array, num);
	printf("\nThe new sorted array is: ");
	for (i=0; i<num; i++){
//		printf("%d ", *(sorted + i));
		printf("%d ", sorted[i]);
	}
	return 0;
}
int *sort(int array[], int size){
	static int sorted[SIZE];
	int i, j, temp, step;
	for (i=0; i < size + 1; i++){
		sorted[i] = array[i];
	}
	for (step = 0; step < size - 1; ++step) {
    	for (i = 0; i < size - step - 1; ++i) {
        	if (sorted[i] > sorted[i+1]){
				temp = sorted[i];
				sorted[i] = sorted[i+1];
				sorted[i+1] = temp;
			}
      	}
    }
	return sorted;
}
