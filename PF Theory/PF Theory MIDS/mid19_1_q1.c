#include <stdio.h>

int main(){
	int cnt; char ch;
	for (ch='A',cnt=1; ch<='L'; cnt++, ch++){
		if (cnt <= 4){
			printf("%c ",ch);
		}
		else{
			printf("\n");
			printf("%c ",ch);
			cnt = 1;
//			cnt = 0;
//			ch--;
		}
	}
}
