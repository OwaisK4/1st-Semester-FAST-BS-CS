#include <stdio.h>

void swapped(int *aPtr, int *bPtr, int *cPtr);
int main(){
	int a,b,c;
	printf("Enter numbers a,b and c:");
	scanf("%d%d%d", &a, &b, &c);
	printf("\nThe numbers are: a=%d, b=%d, c=%d\n", a, b, c);
	swapped(&a,&b,&c);
	printf("After swapping, the numbers are: a=%d, b=%d, c=%d", a, b, c);
}

void swapped(int *aPtr, int *bPtr, int *cPtr){
	int temp;
	temp = *bPtr;
	*bPtr = *aPtr;
	*aPtr = *cPtr;
	*cPtr = temp;
//	*aPtr = temp;
}
