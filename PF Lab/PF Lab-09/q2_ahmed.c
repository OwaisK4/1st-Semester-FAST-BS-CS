#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int CountFrequency(int[],int,int);

int main()
{
	int i,n;

	printf("Input number of elements to be stored in the array: ");
	scanf("%d",&n);
	int arr[n];
    srand(time(0));

	int size = sizeof(arr)/sizeof(arr[0]);
	
	for(i=0;i<n;i++)
    {
        arr[i] = rand()%10;
    }

    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    CountFrequency(arr,size,n);
}

int CountFrequency(int arr[],int size,int n)
{
    int i,o=0,t=0,th=0,f=0,fi=0,s=0,se=0,e=0,ni=0;
	
	printf("\n\nThe frequency of all elements in the array: ");
	
	for (i=0;i<n;i++)
	{
    if (arr[i]==1)
    {
        o+=1;
    }
    else if (arr[i]==2)
    {
        t+=1;
    }
    else if (arr[i]==3)
    {
        th+=1;
    }
    else if (arr[i]==4)
    {
        f+=1;
    }
    else if (arr[i]==5)
    {
        fi+=1;
    }
    else if (arr[i]==6)
    {
        s+=1;
    }
    else if (arr[i]==7)
    {
        se+=1;
    }
    else if (arr[i]==8)
    {
        e+=1;
    }
    else if (arr[i]==9)
    {
        ni+=1;
    }
	}

    printf("\n1 occurs %d times\n",o);
    printf("2 occurs %d times\n",t);
    printf("3 occurs %d times\n",th);
    printf("4 occurs %d times\n",f);
    printf("5 occurs %d times\n",fi);
    printf("6 occurs %d times\n",s);
    printf("7 occurs %d times\n",se);
    printf("8 occurs %d times\n",e);
    printf("9 occurs %d times\n",ni);
}
