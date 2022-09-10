#include <stdio.h>
#include <stdlib.h>

void Get_Marks(int arr[], int size);
void Display(int arr[], int size);
float Average_Score(int arr[], int size);
void Sort(int arr[], int size);

int main(){
	int i,j, n;
	printf("Enter number of students: ");
	scanf("%d", &n);
	fflush(stdin);
	int *marks = (int *)malloc(n*sizeof(int));
	Get_Marks(marks, n);
	Display(marks, n);
	Sort(marks, n);
	Display(marks, n);
	float avg = Average_Score(marks, n);
	printf("The average score is: %.2f", avg);
	free(marks);
	return 0;
}

void Get_Marks(int arr[], int size){
	int i;
	printf("\nEnter marks for %d number of students:\n", size);
	for (i=0; i<size; i++){
		printf("Student %d marks: ", i+1);
		scanf("%d", arr + i);
		fflush(stdin);
	}
}

void Display(int arr[], int size){
	int i;
	printf("\nThe marks of %d number of students are as follows:\n", size);
	printf("Student marks: \n");
	for (i=0; i<size; i++){
//		printf("Student %d marks: %d\n", i+1, *(arr+i));
		printf("%d\n", *(arr+i));
		fflush(stdin);
	}
}

float Average_Score(int arr[], int size){
	int i;
	long long int sum = 0;
	for (i=0; i<size; i++){
		sum += arr[i];
	}
	float average = sum / (float) size;
	return average;
}

void Sort(int arr[], int size){
	int i,j, temp;
	for (i=0; i<size-1; i++){
		for (j=0; j<size-1; j++){
			if (arr[j] < arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}
