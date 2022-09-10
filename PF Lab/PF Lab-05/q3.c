#include <stdio.h>

int main(){
	int month;
	printf("Press \n 1 for March to April \n 2 for May to August \n 3 for September to October \n 4 for November to February\n");
	scanf("%d",&month);
	switch (month){
		case 1:
			printf("The season is Spring.");
			break;
		case 2:
			printf("The season is Summer.");
			break;
		case 3:
			printf("The season is Autumn.");
			break;
		case 4:
			printf("The season is Winter.");		
			break;
		default:
			printf("Enter valid input.");
	}
	return 0;
}

