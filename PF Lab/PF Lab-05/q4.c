#include <stdio.h>

int main(){
	int c_price, s_price;
	printf("Enter the cost price of property: ");
	scanf("%d", &c_price);
	printf("Enter the selling price of property: ");
	scanf("%d", &s_price);
	int net = s_price - c_price;
	if (c_price > s_price)
		printf("Yasir goes into loss of %d.", net);
	else if (c_price < s_price)
		printf("Yasir goes into profit of %d.", net);
	else
		printf("Yasir goes into neither profit nor loss.");
	return 0;
}
