#include <stdio.h>

int main(){
	int age, i;
	char area;
	for (i=0;i<10;i++){
		printf("Enter the age of person to be vaccinated: ");
		scanf("%d", &age);
		printf("Enter the area of person to be vaccinated(U for Urban, R for Rural): ");
		scanf(" %c",&area);
		
		if (age >= 18){
			if (area == 'U'){
				printf("You are eligible for vaccination.\n\n");
			}
			else{
				printf("You are not eligible for vaccination.\n\n");
			}
		}
		else{
			printf("You are not eligible for vaccination.\n\n");
		}
	}
	return 0;
}
