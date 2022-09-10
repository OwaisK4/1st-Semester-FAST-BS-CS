#include <stdio.h>

int main(){
	int x,y;
	printf("Enter the value of x: ");
	scanf("%d",&x);
	if (x > 0){
		y = 1;
	}
	else if (x < 0){
		y = -1;
	}
	else {
		y = 0;
	}
	printf("Value of y is: %d",y);
	return 0;
}
