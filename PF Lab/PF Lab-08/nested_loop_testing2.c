#include<stdio.h>

int main()
{
	int r,c,s;
	r=1;
	while(r<=5) /*outer loop*/
	{
		c=1;
		while(c<=2) /*inner loop*/
		{
			s=r+c;
			printf("r=%d c=%d sum=%d\n",r,c,s);
			c++;
		}
		printf("\n");
		r++;
	}
	return 0;
}