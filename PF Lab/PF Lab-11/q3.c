#include <stdio.h>

int main(){
	int i, size=20;
	float highest, second_highest;
//	float array[] = {1,-32,365,9,52};
	float array[size];
	printf("Enter values of array:\n");
	for (i=0; i<size; i++){
		printf("Element %d: ", i+1);
		scanf("%f", array+i);
	}
	float *p = array;
	highest = *p;
	for (i=0; i<size; i++){
		if (*(p+i) > highest){
			second_highest = highest;
			highest = *(p+i);
		}
		if ((*(p+i) > second_highest) && (*(p+i) != highest)){
			second_highest = *(p+i);
		}
	}
	
	printf("Highest number = %f\nSecond highest number = %f", highest, second_highest);
}
