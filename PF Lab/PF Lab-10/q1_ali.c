#include<stdio.h>
#include<string.h>
int main()
{
	system("color 70");
	int a[3]={1,4,6},b[3]={2,3,5};
	int c[6],i,j,k=0,temp;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{		
				if (a[i]<b[j])
				{
					c[k]=a[i];
//					i++;
					k++;
				}
				else
				{
					c[k]=b[j];
//					j++;
					k++;
				}
		}
	}
	for(k=0;k<6;k++)
	{
		printf("%d",c[k]);
	}
}
