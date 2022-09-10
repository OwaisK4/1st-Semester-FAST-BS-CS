#include<stdio.h>
int display();
int main()
{
	int arry[3];
	display(arry);
	printf("sum is %d\nmax is %d\nmin is %d",arry[0],arry[1],arry[2]);
	return 0;
}
int display(int arry[3])
{
	int arr[11],i,sum=0,min=30000,max=0;
	for(i=0;i<10;i++)
	{
		printf("enter number :");
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	for(i=0;i<10;i++)
	{
		if(arr[i]>max)
		max=arr[i];
	}
	for(i=0;i<10;i++)
	{
		if(arr[i]<min)
		min=arr[i];
	}
	arry[0]=sum;
	arry[1]=max;
	arry[2]=min;
	return arry[3];
	
}
