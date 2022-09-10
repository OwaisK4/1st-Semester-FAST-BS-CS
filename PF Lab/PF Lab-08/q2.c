#include <stdio.h>
#define RANGE 50

int main(){
	int min,max,marks[RANGE] = {}, i;
	printf("Enter marks between 0 and 10 for each student:\n");
	for (i=0; i<RANGE; i++){
		scanf("%d",&marks[i]);
/*		
		if ((marks[i] < 0) || (marks[i] > 10)){
			printf("Wrong Entry.\n");
			marks[i] = 0;
			continue;			
		}
*/
		while ((marks[i] < 0) || (marks[i] > 10)){
			printf("Wrong Entry.\n");
			scanf("%d",&marks[i]);
		}
	}

	min = marks[0];
	max = marks[0];
	for (i=1; i<RANGE; i++){
//		max = (marks[i-1]<marks[i])?marks[i]:marks[i-1];
		if (marks[i] < min)
			min = marks[i];
		if (marks[i] > max)
			max = marks[i];
	}
	printf("\nThe maximum is %d\n", max);
	printf("The minimum is %d\n", min);
	printf("\nThe marks of Section 1F students are:\n");
	for (i=0; i<RANGE; i++){
		printf("%d",marks[i]);
		printf((i<RANGE-1)?", ":"");
	}
	return 0;
}
