#include <stdio.h>
int a=0;
int calculate(int);

int main()
{
    int input,temp;

    printf("Enter 5 digit integer: ");
    scanf("%d",&input);

    if (input>9999 && input<100000)
    {
        for(int i=1;i<=5;i++)
        {
            temp = input % 10;
            input /= 10;
            calculate(temp);
        }
    }
    else
    {
        printf("You have entered invalid integer!");
    }

    printf("%d",a);
}

int calculate(int temp)
{
    if (temp==0)
    {
        return a;
    }
    else
    {
        a=temp+a;
    }
}
