#include <stdio.h>
#include <math.h>

float getData(void);
float volumeCalu(int h, int a);
int main(){
	float a;
	a = getData();
	printf("The total volume is %f", a);
	return 0;
}
float getData(void){
	int x, y;
	float volume;
	printf("Enter value of height: ");
	scanf("%d", &x);
	printf("Enter value of area: ");
	scanf("%d", &y);
	volume = volumeCalu(x, y);
	return volume;
}
float volumeCalu(int h, int a){
	float volume;
	volume = (float) (pow(a,2)) * (float) h * (1.0/3.0);
	return volume;
}
