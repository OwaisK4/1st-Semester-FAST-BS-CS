#include <stdio.h>

int main(){
	int time_SA_a=12, time_SA_b=10, max;
	if (time_SA_a > time_SA_b)
		max = time_SA_a;
	else
		max = time_SA_b;
	
	while (1){
		if ((max % time_SA_a == 0) && (max % time_SA_b == 0)){
			printf("The cars SA_a and SA_b will meet each other at %d minutes.",max);
			break;
		}
		max++;
	}
	return 0;
}
