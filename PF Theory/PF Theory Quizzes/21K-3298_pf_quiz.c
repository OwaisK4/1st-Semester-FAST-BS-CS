#include <stdio.h>
#include <math.h>

int main(){
	int area;
	int r=3, M=5, N=5;
	area = 3.142 * r * r;
	if (area < 10){
		float s1,s2,s3,s4,s5;
		printf("Enter temp of sensors in C");
		scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
		float total = s1+s2+s3+s4+s5;
		float fahr = (total*9/5) + 32;
		printf("Total temp is %f Fahrenheit.",fahr);
	}
	else {
		float dist1, dist2;
		int uav_x, uav_y, sd1_x, sd1_y, sd2_x, sd2_y;
		uav_x = 1;
		uav_y = 5;
		sd1_x = 3;
		sd1_y = M;
		sd2_x = 4;
		sd2_y = N;
		dist1 = sqrt(pow(uav_y-sd1_y,2) + pow(uav_x-sd1_x,2));
		dist2 = sqrt(pow(uav_y-sd2_y,2) + pow(uav_x-sd2_x,2));
		printf("The distance from sd1 is %f and distance from sd2 is %f", dist1, dist2);
	}
	return 0;	
}
