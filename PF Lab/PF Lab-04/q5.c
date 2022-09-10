#include <stdio.h>
#include <math.h>

int main(){
	float x1,y1,x2,y2;
	float dist,mid_x,mid_y;
	printf("Enter coordinates of x1,y1: ");
	scanf("%f%f", &x1,&y1);
	printf("Enter coordinates of x2,y2: ");
	scanf("%f%f",&x2,&y2);
	dist = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	mid_x = (x1+x2)/2;
	mid_y = (y1+y2)/2;
	printf("The computed values are:\nDistance: %f\nMidpoint: (%f,%f)",dist,mid_x,mid_y);
	return 0;
}
