#include <stdio.h>

void percentage(int x, int start);
int main(){
//	int a = 1100;
	int a;
	printf("Enter a value to split in percentage: ");
	scanf("%d", &a);
	printf("\n");
	percentage(a, 1);
	return 0;
}
void percentage(int x, int start){
	static int max = 100;
	float perc;
	if (start == max){
		return;
	}
	else{
		perc = x / 100.0 * start;
		printf("%3d Percent = %.2f\n", start, perc);
		percentage(x, start+1);
	}
}
