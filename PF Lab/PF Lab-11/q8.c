#include <stdio.h>

int main(){
	int i,j, size_a, size_b, flag=0;
	printf("Enter size of set A: ");
	scanf("%d", &size_a);
	printf("Enter size of set B: ");
	scanf("%d", &size_b);
	int min_size = (size_a > size_b)?size_b:size_a;
	int combined_size = size_a + size_b;
	int set_a[size_a], set_b[size_b];
	int set_union[size_a + size_b];
	int set_intersec[min_size];
	
	int *pA = set_a;
	int *pB = set_b;
	int *pU = set_union;
	int *pI = set_intersec;
	
	printf("\nEnter values of set A:\n");
	for (i=0; i<size_a; i++){
		printf("Element %d: ", i+1);
		scanf("%d", pA + i);
	}
	printf("\nEnter values of set B:\n");
	for (i=0; i<size_b; i++){
		printf("Element %d: ", i+1);
		scanf("%d", pB + i);
	}
	for (i=0; i<size_a; i++)
		*(pU + i) = *(pA + i);
	for (i=0; i<size_b; i++){
		flag = 0;
		for (j=0; j<combined_size; j++){
			if (*(pU + j) == *(pB + i))
				flag = 1;
		}
		if (flag == 0)
			*(pU + size_a + i) = *(pB + i);
		else 
			*(pU + size_a + i) = 0;
	}
	printf("\nUnion of set A and B is: ");
	for (i=0; i<combined_size; i++){
		if (*(pU + i) != 0){
			printf("%d", *(pU + i));
			printf((i<combined_size-1)?", ":"");
		}		
	}
	
	for (i=0; i<size_a; i++){
		*(pI + i) = 0;
		for (j=0; j<size_b; j++){
			if (*(pA + i) == *(pB + j))
				*(pI + i) = *(pA + i);
		}
	}
	printf("\nIntersection of set A and B is: ");
	for (i=0; i<min_size; i++){
		if (*(pI + i) != 0){
			printf("%d", *(pI + i));
			printf((i<min_size-1)?", ":"");
		}
	}
}
