#include <stdio.h>

int main(){
	int start, end, counter=0;
	printf("Enter starting number of range: ");
	scanf("%d", &start);
	printf("Enter ending number of range: ");
	scanf("%d", &end);
	
	//printf("The multiples of 5 between given range are: ");
	for (;start <= end;){
		if (start % 5 == 0)
			//printf("%d ", start);
			counter++;
		start++;
	}
	printf("The number of multiples of 5 between given range are: %d", counter);
	return 0;
}