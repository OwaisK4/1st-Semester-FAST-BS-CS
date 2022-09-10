#include <stdio.h>

int display(int array[], int x);

int main(){
	int i, array[10], sum, min, max;
	printf("Enter the elements of integer array:\n");
	for (i=0; i<10; i++){
		printf("Element %d: ",i);
		scanf("%d", &array[i]);
	}
	sum = display(array, 0);
	min = display(array, 1);
	max = display(array, 2);
	printf("Array elements: ");
	for (i=0; i<10; i++){
		printf("%d ",array[i]);
	}
	printf("\n\nSum of elements: %d",sum);
	printf("\nMax element: %d",max);
	printf("\nMin element: %d",min);
	return 0;
}

int display(int array[], int x){
	int i, max, min, sum=0;
	max = array[0];
	min = array[0];
	for (i=0; i<10; i++){
		sum += array[i];
	}
	for (i=0; i<10; i++){
		if (max < array[i])
			max = array[i];
		if (min > array[i])
			min = array[i];
	}
	if (x == 0)
		return sum;
	if (x == 1)
		return min;
	if (x == 2)
		return max;
}
