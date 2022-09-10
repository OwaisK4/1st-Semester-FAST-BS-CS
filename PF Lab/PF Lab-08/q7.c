#include <stdio.h>

int main(){
	int numbers[8]={};
	int i,j,sum=0;
	printf("Enter 8 integer elements: ");
	for (i=0; i<8; i++){
		scanf("%d",&numbers[i]);
	}
/*	
	printf("Enter marks for second 5 students: ");
	for (i=0; i<5; i++){N
		scanf("%d",&array2[i]);
	}
*/

	printf("The positive numbers are: ");
	for (i=0; i<8; i++){
		if (numbers[i] > 0){
			printf("%d ",numbers[i]);
		}
	}
	printf("\nThe zero numbers are: ");
	for (i=0; i<8; i++){
		if (numbers[i] == 0){
			printf("%d ",numbers[i]);
		}
	}
	printf("\nThe negative numbers are: ");
	for (i=0; i<8; i++){
		if (numbers[i] < 0){
			printf("%d ",numbers[i]);
		}
	}
	
	for (i=0; i<8; i++){
		sum += numbers[i];
	}
	printf("\nThe sum of positive and negative numbers present in array is: %d",sum);
	return 0;
}