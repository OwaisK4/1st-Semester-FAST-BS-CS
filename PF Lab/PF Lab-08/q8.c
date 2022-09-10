#include <stdio.h>

int main(){
	int n,i;
	float sum=0;
	printf("Enter number of terms for harmonic series: ");
	scanf("%d", &n);
	for (i=1; i<=n; i++){
		printf("%d/%d ",1,i);
		if (i<n)
			printf("+ ");
		sum += 1 / (float) i;
	}
	printf("\n\nThe sum of n terms of given harmonic series is: %f", sum);
	return 0;
}