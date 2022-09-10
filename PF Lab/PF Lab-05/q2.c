#include <stdio.h>

int main(){
	int x,y,quad;
	printf("Enter values of x and y: ");
	scanf("%d%d",&x,&y);
	if (x>=0 && y>=0)
		quad = 1;
	else if (x<0 && y>=0)
		quad = 2;
	else if (x<0 && y<0)
		quad = 3;
	else if (x>=0 && y<0)
		quad = 4;
	printf("The xy coordinates lie in quadrant %d.",quad);
	return 0;	
}

