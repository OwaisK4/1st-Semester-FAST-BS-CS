#include <stdio.h>

int main(){
	int array1[5]={}, array2[5]={};
	int i,j;
	printf("Enter marks for first 5 students: ");
	for (i=0; i<5; i++){
		scanf("%d",&array1[i]);
	}
	printf("Enter marks for second 5 students: ");
	for (i=0; i<5; i++){
		scanf("%d",&array2[i]);
	}
	
	printf("The common elements in both arrays are: \n");
	for (i=0; i<5; i++){
		for (j=0; j<5; j++){
			if (array1[i] == array2[j]){
				printf("\t%d",array1[i]);
			}
			
		}
	}
	return 0;
}