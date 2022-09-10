#include <stdio.h>
#include <math.h>

int main(){
	int rx=1, ry=3;
	int i,x,y;
	int N, MSD, location='A';
	float distance;
	
	printf("Enter MSD of your mobile number: ");
	scanf("%d", &MSD);
	if ((MSD > 0) && (MSD <= 9)){
		N = pow(2,MSD) * 0.0625;
	}
	else if (MSD == 0){
		N = pow(2,MSD) *4+3;
	}
	
	for (i=0; i<N; i++){
		printf("\nEnter x coordinate of location %c: ", location);
		scanf("%d", &x);
		printf("Enter y coordinate of location %c: ", location);
		scanf("%d", &y);
		
		distance = sqrt(pow(ry-y,2)+pow(rx-x,2));
		printf("The distance between reference point R and location %c is: %f\n",location,distance);
		location++;
	}
}
