#include <stdio.h>

int calsum(int x);
int main(){
	int num, result;
	printf("Enter number: ");
	scanf("%d",&num);
	result = calsum(num);
	printf("%d",result);
	return 0;
}
int calsum(int x){
	if (x==1)
		return 1;
	else{
		return x + calsum(x-1);
	}
}
