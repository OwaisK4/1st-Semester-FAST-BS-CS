#include <stdio.h>

int main(){
	printf("\t\tWELCOME TO ONLINE SHOPPING STORE\n\tSHOP OVER RS. 5000 AND ENJOY 20 percent FLAT OFF\n\t     **Discount Applicable on all items**\n");
	int items, suits, scarfs, total, provided, returned;
	float discount=0.2;
	printf("Enter the total number of items purchased by customer: ");
	scanf("%d",&items);
	printf("Number of suits purchased: ");
	scanf("%d",&suits);
	printf("Number of scarfs purchased: ");
	scanf("%d",&scarfs);
	
	
	total = (2500*suits) + (1000*scarfs);
	if (total > 5000){
		printf("\nCongratulations!!! You have got %d percent off on total purchased item.\n",(int) (0.2 * 100));
		total = total * (1-discount);
	}
	printf("Total amount of purchases is Rs. %d\n",total);
	printf("Customer provided: ");
	scanf("%d",&provided);
	returned = provided - total;
	if (provided >= total){
		printf("\nAmount returned to customer: Rs. %d", returned);
	}
	else{
		printf("\nNot enough cash provided. Exiting program");
	}
	return 0;
}
