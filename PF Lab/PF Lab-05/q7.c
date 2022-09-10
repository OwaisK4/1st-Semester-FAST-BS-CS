#include <stdio.h>

int main(){
	int num,mod;
	printf("Enter desired number: ");
	scanf("%d", &num);
	mod = num % 2;
	if (mod == 0){
		num++;
		printf("The number was even and calculated number is %d",num);
	}
	else {
		num--;
		printf("The number was odd and calculated number is %d",num);
	}
}
