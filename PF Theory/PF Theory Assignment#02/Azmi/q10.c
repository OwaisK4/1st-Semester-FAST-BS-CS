#include <stdio.h>

int main(){
	int num,a,b,c,d,e,f,g,h,encrypted,decrypted;
	printf("Enter any four digit integer: ");
	scanf("%d", &num);
	if ((num <= 999) || (num >= 10000)){
		printf("Invalid input. Try again.");
		return 0;
	}
	else {
	a = num / 1000 % 10;
	b = num / 100 % 10;
	c = num / 10 % 10;
	d = num / 1 % 10;
	
	a = (a+5) % 8;
	b = (b+5) % 8;
	c = (c+5) % 8;
	d = (d+5) % 8;
	
	e = b * 1000;
	f = a * 100;
	g = d * 10;
	h = c;
	encrypted = e + f + g + h;
	printf("The encrypted integer is %d\n",encrypted);
	
	a = encrypted / 1000 % 10;
	b = encrypted / 100 % 10;
	c = encrypted / 10 % 10;
	d = encrypted / 1 % 10;
		
	a = (a+8) - 5;
	b = (b+8) - 5;
	c = (c+8) - 5;
	d = (d+8) - 5;
		
	e = b * 1000;
	f = a * 100;
	g = d * 10;
	h = c;
	decrypted = e + f + g + h;
	printf("The decrypted integer is %d\n",decrypted);	
	if (num == decrypted){
		printf("The data before encryption and after decryption is the same. Congrats!");
	}
	else{
		printf("The data before encryption and after decryption is not the same. Troubleshoot your code.");
	}
}
	return 0;
}
