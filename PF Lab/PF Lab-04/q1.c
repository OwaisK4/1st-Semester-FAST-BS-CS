#include <stdio.h>

int main(){
	int ID;
	float total_hours,amount_per_hour,salary;
	printf("Input the Employees ID: \n");
	scanf("%d",&ID);
	printf("Input the working hrs: \n");
	scanf("%f",&total_hours);
	printf("Salary amount/hr: \n");
	scanf("%f",&amount_per_hour);
	salary = total_hours * amount_per_hour;
	printf("Employees ID: %04d\n",ID);
	printf("Salary: %.2f\n",salary);
	return 0;
}
