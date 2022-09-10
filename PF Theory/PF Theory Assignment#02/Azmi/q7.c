#include <stdio.h>
	
int main(){
	float x1,x2,x3,x4, y1,y2,y3,y4;
	unsigned int slope_1, slope_2, slope_3;
	printf("Enter coordinates for first point (x1,y1): ");
	scanf("%d %d",&x1,&y1);
	printf("Enter coordinates for first point (x2,y2): ");
	scanf("%d %d",&x2,&y2);
	printf("Enter coordinates for first point (x3,y3): ");
	scanf("%d %d",&x3,&y3);
	printf("Enter coordinates for first point (x4,y4): ");
	scanf("%d %d",&x4,&y4);
	
	slope_1 = (y2-y1)/(x2-x1);
	slope_2 = (y3-y2)/(x3-x2);
	slope_3 = (y4-y3)/(x4-x3);
	
	if ((slope_1 == slope_2) && (slope_2 == slope_3)){
		printf("The points all fall on a straight line!");
	}
	else{
		printf("The points all do not fall on a straight line!");
	}
	return 0;
}
