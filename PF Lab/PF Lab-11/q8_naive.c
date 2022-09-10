#include <stdio.h>

int main(){
	int i,j, size_a, size_b;
	printf("Enter size of set A: ");
	scanf("%d", &size_a);
	printf("Enter size of set B: ");
	scanf("%d", &size_b);
	int min_size = (size_a>size_b)?size_b:size_a;
	int combined_size = size_a+size_b;
	int set_a[size_a], set_b[size_b];
	int set_union[size_a + size_b];
	int set_intersec[min_size];
	printf("\nEnter values of set A:\n");
	for (i=0; i<size_a; i++){
		printf("Element %d: ", i+1);
		scanf("%d",&set_a[i]);
	}
	printf("\nEnter values of set B:\n");
	for (i=0; i<size_b; i++){
		printf("Element %d: ", i+1);
		scanf("%d",&set_b[i]);
	}
	for (i=0; i<size_a; i++)
		set_union[i] = set_a[i];
	for (i=0; i<size_b; i++)
		set_union[size_a+i] = set_b[i];
	printf("\nUnion of set A and B is: ");
	for (i=0; i<combined_size; i++){
		printf("%d", set_union[i]);
		printf((i<combined_size-1)?", ":"");
	}
	
	for (i=0; i<size_a; i++){
		set_intersec[i] = 0;
		for (j=0; j<size_b; j++){
			if (set_a[i] == set_b[j])
				set_intersec[i] = set_a[i];
		}
	}
	printf("\nIntersection of set A and B is: ");
	for (i=0; i<min_size; i++){
		if (set_intersec[i] != 0){
			printf("%d", set_intersec[i]);
			printf((i<min_size-1)?", ":"");
		}
	}
}
