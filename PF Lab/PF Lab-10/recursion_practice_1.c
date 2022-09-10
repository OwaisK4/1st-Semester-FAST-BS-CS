#include <stdio.h>

void series(int x);
int main(){
	int a = 0;
	series(a);
	return 0;
}
void series(int x){
	static int end = 10;
	if (end == x){
		return;
	}
	else{
		printf("%d ",x);
		series(x+1);
	}
}