#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int i,n=6;
	float sum, average, array[n];
	srand(time(0));
/*	for (i=0; i<n; i++){
		array[i] = rand();
	}
*/
	for (i=0; i<n; i++){
		array[i] = (float) rand() / (float) (RAND_MAX / 1);
	}
	for (i=0; i<n; i++){
		sum += array[i];
	} 
	average = sum / n;

	for (i=0; i<n; i++){
		printf("Array elements are = %f\n",array[i]);
	}
	printf("\nAvg =\t\t%f",average);
	printf("\nSum =\t\t%f",sum);
	return 0;
}
