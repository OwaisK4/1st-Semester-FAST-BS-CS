#include <stdio.h>

void series(int x);
int main(){
	int a = 0;
	series(a);
	return 0;
}
void series(int x){
	static int row = 5;
	if (row == x){
		return;
	}
	else{
		printf("\n");
		series(x+1);
	
		static int column = 5;
		if (column == x){
			return;
		}
		else{
			printf("%c ",'a'+x);
			series(x+1);
	}
	
	}
	
}