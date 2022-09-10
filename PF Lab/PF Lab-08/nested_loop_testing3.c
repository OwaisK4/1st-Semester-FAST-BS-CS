#include<stdio.h>

int main()
{
int i=1,j=0,sum;
do
{
sum=0;
do
{
sum=sum+j;
printf("%d",j);
j++;
if(j<=i)
{
printf("+");
}
}
while(j<=i);
printf("=%d\n",sum);
j=1;
i ++;
}
while(i<=10);
}