#include<stdio.h>
#define N 10

int main(){
	int n,a[N],i;
	printf("Enter the size of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	printf("\nOriginal array");
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
	swap(a,n);
}

int swap(int b[],int size){
	int temp,j;
	for(j=0;j<size;j++){
		temp=b[j];
		b[j]=b[size-1];
		b[size-1]=temp;
	}
	printf("\nSwapped Numbers:\n");
	for(j=0;j<size;j++){
		printf("%d",b[j]);
	}
}
