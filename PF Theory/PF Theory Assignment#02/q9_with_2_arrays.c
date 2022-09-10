#include <stdio.h>

int main(){
	int n=1,a,input,decimal=0;
	int bin[10], t,i;
	//fflush(stdin);
	printf("Enter the last two digit of your roll number: ");
	scanf("%d", &input);
	if ((input < 10) || (input > 99)){
		printf("Invalid input. Please try again!");
		return 0;
	}
	t = input;
	for(i=0;t > 0;i++){
		bin[i]=t % 2;    
		t=t/2;
	}
	a = i;	
	//printf("%d\n",i);
	
	printf("The binary equivalent of %d is ",input);
	for(i=i-1;i>=0;i--){
		printf("%d",bin[i]);
	}
	
	/*
	printf("\n");
	printf("%d\n",(sizeof(bin))/sizeof(bin[0]));
	for(i=0; i<(sizeof(bin))/sizeof(bin[0]); i++){
		printf("%d",bin[i]);	
	}
	*/
	
	for(i=0; i<a; i++,n*=2){
		decimal += bin[i] * n;	
	}
	printf("\nThe binary equivalent of ");
	for(i=i-1;i>=0;i--){
		printf("%d",bin[i]);
	}
	printf(" is %d",decimal);
	return 0;
}
