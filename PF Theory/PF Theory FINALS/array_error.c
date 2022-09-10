#include<stdio.h>

int main(){
	int ary[2][2][3] = {{{1,2,3}, {4,5,4}}, {{7,8,9}, {5,1,7}}};
	int *p;
	p = &ary;
	printf("%d %d",*p, *p+11);
}
