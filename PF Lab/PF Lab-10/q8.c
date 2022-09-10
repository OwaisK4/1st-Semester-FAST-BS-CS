#include <stdio.h>

struct Invoice{
	char part_num[50], part_desc[50];
	int quantity;
	float price;
};
int main(){
//	struct Invoice invoice = {"Electric Drill", "Used to drill holes in concrete", 3, 15000};
	struct Invoice invoice;
	printf("Welcome to the Hardware Store. Your invoice will be generated from the given information.\n");
	printf("Enter the part number: ");
	gets(invoice.part_num);
	printf("Enter the part description: ");
	gets(invoice.part_desc);
	printf("Enter the quantity of part: ");
	scanf("%d", &invoice.quantity);
	fflush(stdin);
	printf("Enter the part price of part: ");
	scanf("%f", &invoice.price);
	printf("\n");
	if (invoice.quantity < 0){
		printf("Negative value of quantity entered. Resetting to 0.\n");
		invoice.quantity = 0;
	}
	if (invoice.price < 0){
		printf("Negative value of price entered. Resetting to 0.\n");
		invoice.price = 0;
	}
	float invoice_amount = invoice.quantity * invoice.price;
	printf("\nThe generated receipt is as follows:\n\n");
	printf("Part number:\t\t%s\n",invoice.part_num);
	printf("Part description:\t%s\n",invoice.part_desc);
	printf("Quantity of part:\t%d\n",invoice.quantity);
	printf("Price of part:\t\t%.2f\n",invoice.price);
	printf("\nThe total invoice amount is: %.2f.", invoice_amount);
	return 0;
}
