#include <stdio.h>

int main(){
	int num1, num2, choice;
	printf("Enter two numbers\n");
	scanf("%d%d", &num1, &num2);
	
	printf("Press \n 1 for sum \n 2 for sub \n 3 for mul \n 4 for div\n");
	scanf("%d", &choice);
	
	switch (choice) {
		case 1:
			printf("Sum = %d\n", num1 + num2);
			break;
		case 2:
			printf("Subtraction = %d\n", num1 - num2);
			break;
		case 3:
			printf("Multiplication = %d\n", num1 * num2);
			break;
		case 4:
			printf("Division = %d\n", num1 / num2);
			break;
		default:
			printf("Enter valid choice\n");
	}
}
