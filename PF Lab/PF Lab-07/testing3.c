#include<stdio.h>
int main(){
	int i,sum=0;
	for (int i=0; i<=10 ;i++){
		if((i==3)||(i==7)){
			continue;
		}
		sum += i;
	}
	printf("The sum is %d", sum);
}