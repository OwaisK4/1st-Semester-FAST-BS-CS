#include <stdio.h>

int power(int num, int pow);
int main(){
	int num, pow, result;
	printf("Enter number: ");
	scanf("%d",&num);
	printf("Enter power: ");
	scanf("%d",&pow);
	result = power(num, pow);
	printf("%d",result);
	return 0;
}
int power(int num, int pow){
	if (pow==1)
		return num;
	else{
		return num * power(num,pow-1);
	}
}
