#include <stdio.h>

int main(){
	int num,a,b,c,d;
	int unit,ten,hun,thou,encrypted,decrypted;
	printf("Enter any four digit integer: ");
	scanf("%d", &num);
	if ((num < 1000) || (num > 9999)){
		printf("Invalid input. Try again.");
		return 0;
	}
	a = num / 1000 % 10;
	b = num / 100 % 10;
	c = num / 10 % 10;
	d = num % 10;
	
	a = (a+5) % 8;
	b = (b+5) % 8;
	c = (c+5) % 8;
	d = (d+5) % 8;
	
	thou = b * 1000;
	hun = a * 100;
	ten = d * 10;
	unit = c;
	encrypted = thou + hun + ten + unit;
	printf("The encrypted integer is %d\n",encrypted);
	
	a = encrypted / 1000 % 10;
	b = encrypted / 100 % 10;
	c = encrypted / 10 % 10;
	d = encrypted % 10;
	
/*	a = (a<7)?(a+3):(a-5);// % 8;
	b = (b<7)?(b+3):(b-5);// % 8;
	c = (b<7)?(c+3):(c-5);// % 8;
	d = (b<7)?(d+3):(d-5);// % 8;
*/	
	a = a + 3;
	b = b + 3;
	c = c + 3;
	d = d + 3;
	
	if (a > 9)
		a -= 8;
	if (b > 9)
		b -= 8;
	if (c > 9)
		c -= 8;
	if (d > 9)
		d -= 8;
	
	thou = b * 1000;
	hun = a * 100;
	ten = d * 10;
	unit = c;
	decrypted = thou + hun + ten + unit;
	printf("The decrypted integer is %d\n",decrypted);	
	if (num == decrypted){
		printf("The data before encryption and after decryption is the same. Congrats!");
	}
	else{
		printf("The data before encryption and after decryption is not the same. Troubleshoot your code.");
	}
	return 0;
}
