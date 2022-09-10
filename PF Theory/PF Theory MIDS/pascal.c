#include<stdio.h>
main()
{
int s,r,c,n,a=1;
printf("Enter rows:");
scanf("%d",&n);
for(r=0;r<=n;r++)
{
for(s=1;s<=n-r;s++)
{
printf("  ");//idhar 2 spaces hain
}
for(c=0;c<=r;c++)
{
if(c==0||r==0)
a=1;
else
a=a*(r-c+1)/c;
printf("%4d", a);
}
printf("\n");
}
}
