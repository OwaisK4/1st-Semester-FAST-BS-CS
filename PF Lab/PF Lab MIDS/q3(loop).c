#include <stdio.h>

int main(){
	printf("Welcome to DECS Annual Tour.\n");
	printf("Ticket price is 30000/ person\n");
	int batch, ticket_price=30000, total_bill=0,net_bill=0,total_discount=0;
	float discount=0;
	int count21=0, count20=0, count19=0, count18=0;
	while (batch != -1){
		printf("Enter your batch year or -1 to exit: ");
		scanf("%d",&batch);
		if (batch == -1)
			break;
		if (batch == 21){
			discount=0.1;
			count21++;
		}
			
		if (batch == 20){
			discount=0.15;
			count20++;
		}
		if (batch == 19){
			discount=0.2;
			count19++;
		}
		if (batch == 18){
			discount=0.25;
			count18++;
		}
		total_bill = total_bill + ticket_price;
		total_discount = total_discount + ticket_price * discount;
	}
	
	net_bill = total_bill - total_discount;
	if (count21)
		printf("\nYou bought %d ticket of batch 21",count21);
	if (count20)
		printf("\nYou bought %d ticket of batch 20",count20);
	if (count19)
		printf("\nYou bought %d ticket of batch 19",count19);
	if (count18)
		printf("\nYou bought %d ticket of batch 18",count18);
	
	printf("\nYour Total Bill is: %d",total_bill);
	printf("\nYour discount is: %d",total_discount);
	printf("\nYour Net Bill is: %d",net_bill);
	
	return 0;
}
