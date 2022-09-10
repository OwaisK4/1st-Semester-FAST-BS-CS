#include <stdio.h>

//int slope(float x1, float x2, float y1, float y2){
//	int slop = (y2-y1)/(x2-x1);}
	
int main(){
	float x1,x2,x3,x4, y1,y2,y3,y4;
	unsigned int slop1, slop2, slop3;
	printf("Enter the coordinates of the first point (x1,y1): ");
	scanf("%d %d",&x1,&y1);
	printf("Enter the coordinates of the first point (x2,y2): ");
	scanf("%d %d",&x2,&y2);
	printf("Enter the coordinates of the first point (x3,y3): ");
	scanf("%d %d",&x3,&y3);
	printf("Enter the coordinates of the first point (x4,y4): ");
	scanf("%d %d",&x4,&y4);
	
	slop1 = (y2-y1)/(x2-x1);
	slop2 = (y3-y2)/(x3-x2);
	slop3 = (y4-y3)/(x4-x3);
	
	if ((slop1 == slop2) && (slop2 == slop3)){
		printf("The given points fall on a straight line!");
	}
	else{
		printf("The given points do not fall on a straight line!");
	}
	return 0;
}
