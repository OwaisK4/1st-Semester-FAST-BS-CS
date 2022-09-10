#include <stdio.h>
#include <math.h>

int main(){
	float price, dis=0.9;
	int day;
	printf("Please enter the Original price: ");
	scanf("%f",&price);
	printf("Please enter the day: ");
	scanf("%d",&day);
	price = price * pow(dis,day);
	switch(day){
		case 1:
			printf("Monday %f",price);
			break;
		case 2:
			printf("Tuesday %f",price);
			break;
		case 3:
			printf("Wednesday %f",price);
			break;
		case 4:
			printf("Thursday %f",price);
			break;
		case 5:
			printf("Friday %f",price);
			break;
		default:
			printf("Enter valid day.");
	}
	return 0;
}
