#include <stdio.h>


void SeparateEvenOdd(int arr[], int size);

int main(){
	int n;
	printf("Enter quantity numbers: ");
	scanf("%d", &n);
	fflush(stdin);
	int i, numbers[n];
	printf("Enter 10 numbers:\n");
	for (i=0; i<n; i++){
		printf("Element %d: ", i);
		scanf("%d", &numbers[i]);
		fflush(stdin);
	}
	SeparateEvenOdd(numbers, n);
}

void SeparateEvenOdd(int arr[], int size){
	int i;
	printf("\nThe Odd numbers are: ");
	for (i=0; i<size; i++){
		if (arr[i] % 2)
			printf("%d ", arr[i]);
	}
	printf("\nThe Even numbers are: ");
	for (i=0; i<size; i++){
		if (arr[i] % 2 == 0)
			printf("%d ", arr[i]);
	}
}
