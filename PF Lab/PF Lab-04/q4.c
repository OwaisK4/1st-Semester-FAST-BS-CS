#include <stdio.h>
int main(){
	float hours, minutes, seconds;
	printf("Enter the total hours: \n");
	scanf("%f",&hours);
	printf("Enter the total minutes: \n");
	scanf("%f",&minutes);
	minutes = minutes + (hours * 60);
	seconds = minutes * 60;
	printf("The number of seconds is: %f", seconds);
	return 0;
}
