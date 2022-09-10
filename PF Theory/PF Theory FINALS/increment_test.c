#include<stdio.h>
#define PRODUCT(x) (x*x)

main(){
	int i = 3 , j , k;
	j = PRODUCT (i++);
	k= PRODUCT (++i);
	printf("%d %d ",j,k);
}
