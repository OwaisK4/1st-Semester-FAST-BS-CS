#include <stdio.h>

void reverse(int arr[], int start, int end, int n);

int main(){
	int n, i;
	printf("Enter number of elements in array: ");
	scanf("%d", &n);
	int intArray[n];
	
	printf("\nEnter elements of array: \n");
	for (i=0; i<n; i++){
		printf("Array element %d: ", i);
		scanf("%d", &intArray[i]);
	}
	int low, high;
	
	printf("\nintArray = {");
	for (i=0; i<n; i++){
		printf("%d", intArray[i]);
		printf((i<n-1)?", ":"");
	}
	printf("}");

	printf("\n\nEnter value of low: ");
	scanf("%d", &low);
	fflush(stdin);
	while (low <= 0 || low > n){
		printf("Invalid value.\n");
		printf("Enter value of low: ");
		scanf("%d", &low);
	}
	printf("Enter value of high: ");
	scanf("%d", &high);
	fflush(stdin);
	while (high <= 0 || high > n || low > high){
		printf("Invalid value.\n");
		printf("Enter value of high: ");
		scanf("%d", &high);
	}
	printf("\n\nLow = %d\nHigh = %d\n\n", low, high);
	reverse(intArray, low, high, n);
}

void reverse(int arr[], int start, int end, int n){
	int i;
	if (start >= end){
		printf("intArray = {");
		for (i=0; i<n; i++){
			printf("%d", arr[i]);
			printf((i<n-1)?", ":"");
		}
		printf("}");
		return;
	}
	else{
		int temp;
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		reverse(arr, start+1, end-1, n);
	}
}
