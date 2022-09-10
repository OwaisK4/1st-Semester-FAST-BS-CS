#include<stdio.h>
#include <math.h>
main()
{
int s,r,c,n,a=1;
printf("Enter rows:");
scanf("%d",&n);
for(r=1;r<=n;r++)
{
for(c=1;c<=r;c++)
{
a=a*(r-c+1)/c;
printf(" %d ", a);
}
printf("\n");
}
}
