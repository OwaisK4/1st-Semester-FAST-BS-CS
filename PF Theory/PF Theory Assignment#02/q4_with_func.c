#include <stdio.h>

int match(int src, int dest, int times){
	if (src == dest){
		++times;
	}
	return times;
}

int main(){
	int num, times=0; 
	unsigned int roll;
	//const int ROLL = 8;
	printf("Enter 4 digit postive number: ");
	scanf("%d", &num);
	printf("Enter last character of your roll number: ");
	scanf("%d",&roll);
	if ((num > 9999) || (num < 0)){
		printf("Invalid integer! Execute the program again and enter a valid integer.");
		return 0;
	} 
	int a = num / 1000;       
	int b = num / 100 % 10;   
	int c = num / 10  % 10;   
	int d = num / 1   % 10;   
	//printf("%d %d %d %d\n",a,b,c,d);
	
	times = match(a,roll,times);
	times = match(b,roll,times);
	times = match(c,roll,times);
	times = match(d,roll,times);
	printf("%d occured %d times",roll,times);
	return 0;
}
