#include <stdio.h>
#include <stdlib.h>

int sum_recursive(int array[], int isEven, int index, int size);

int main(){
	int arr[] = {1,2,3,4,5};
	int size = sizeof(arr) / sizeof(arr[0]);
	printf("Size = %d\n", size);
	int even_sum = sum_recursive(arr, 1, 0, size);
	int odd_sum = sum_recursive(arr, 0, 1, size);
	printf("\nSum of even indexes is: %d", even_sum);
	printf("\nSum of odd indexes is: %d", odd_sum);
	return 0;
}

int sum_recursive(int array[], int isEven, int index, int size){
	static int sum = 0;
	if (isEven == 1){
		if (index > size){
			return 0;
		}
		sum = array[index] + sum_recursive(array, isEven, index + 2, size);
		return sum;
	}
	else if (isEven == 0){
		if (index > size){
			return 0;
		}
		sum = array[index] + sum_recursive(array, isEven, index + 2, size);
		return sum;
	}
}
