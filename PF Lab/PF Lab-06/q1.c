#include <stdio.h>

int main(){
	int product, price, total=0, quantity, week=7, shop_code, i=0;
	printf("Enter the shop code: ");
	scanf("%d",&shop_code);
/*	printf("Enter the product number: ");
	scanf("%d",&product);
	printf("Enter the quantity number: ");
	scanf("%d",&quantity);
*/	
	if (shop_code == 1122){
		while (i < 7){
		printf("Enter the product number: ");
		scanf("%d",&product);
		printf("Enter the quantity number: ");
		scanf("%d",&quantity);
		switch (product){
			case 1:
				price = 500;
				break;
			case 2:
				price = 600;
				break;
			case 3:
				price = 700;
				break;
			case 4:
				price = 800;
				break;
			case 5:
				price = 900;
				break;
			default:
				price = 0;
				printf("Enter valid product number.\n");
				//return 0;
		}
		total += price * quantity;
		printf("The total retail value of all products sold last week is %d\n\n", total);
	i++;
	}
	}
	else {
		printf("Enter valid shop code.");
	}
	//printf("\nThe total retail value of all products sold last week is %d\n", total);
	return 0;
}
