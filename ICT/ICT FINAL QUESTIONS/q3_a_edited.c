#include <stdio.h>

int main(){
	int i,j, n=100;
	int sales_price[n];
	int sales_quantity[n];
	long long int total_price=0;
	int count=0;
	
	printf("Enter quantity and price of 100 items.\n\n");
	for (i=0; i<n; i++){
		printf("Item no.%02d\n", i+1);
		printf("Enter price: ");
		scanf("%d", &sales_price[i]);
		fflush(stdin);
		while((sales_price[i] < 0) || (sales_price[i] > 1000)){
			printf("Invalid price.\n");
			printf("Enter price: ");
			scanf("%d", &sales_price[i]);
		}
		printf("Enter quantity: ");
		scanf("%d", &sales_quantity[i]);
		fflush(stdin);
		while((sales_quantity[i] < 0) || (sales_quantity[i] > 1000)){
			printf("Invalid quantity.\n");
			printf("Enter quantity: ");
			scanf("%d", &sales_quantity[i]);
		}
//		j += sales_quantity[i];
		printf("\n");
//		count++;
		total_price += sales_price[i] * sales_quantity[i];
	}
	printf("Now the price of 100 items are:\n");
	for (i=0; i<n; i++){
		printf("Item#%02d, price: %d, quantity: %d, Total price: %lld\n", i+1, sales_price[i], sales_quantity[i], sales_price[i] * sales_quantity[i]);
	}
	printf("\nTotal price: %llu", total_price);
}
