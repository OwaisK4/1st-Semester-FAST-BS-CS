#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int CountFrequency(int array[], int size, int value);
int main(){
	int n,i;
	srand(time(0));
	printf("Count frequency of each element of an array: \n");
	printf("----------------------------------------------------\n");
	printf("Input the number of elements to be stored in array: ");
	scanf("%d", &n);
	printf("Input %d elements in the array: ",n);
	int array1[n];
	srand(time(0));
	for (i=0; i<n; i++){
		array1[i] = rand() % 10;
	}
	for (i=0; i<n; i++){
		printf("%d ",array1[i]);
	}
	printf("\n\nThe frequency of all elements of an array: \n");
	for (i=0; i<10; i++){
//		printf("%d occurs %d times\n",array1[i],CountFrequency(array1,n,i));
		if (CountFrequency(array1,n,i) > 0)
		printf("%d occurs %d times\n",i,CountFrequency(array1,n,i));
	}
	return 0;
}

int CountFrequency(int array[], int size, int value){
	int j,count = 0;
	for (j=0; j<size; j++){
		if (array[j] == value){
			count++;
		}
	}
	return count;
}
/*
int CountFrequency(int array[] ,int size){
	int counter=0,val,i,j;
	for (i=0; i<size; i++){
//		val = array[i];
		for (j=0; j<size; j++){
			if (array[j] == array[i]){
				array[j] = 0;
				counter++;
			}
		}
	}
	return counter;
}
*/
