#include <stdio.h>

int main(){
	int num,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,dec;
	printf("Enter two digits of your roll number: ");
	scanf("%d",&num);
	if (num > 10){
		if (num < 100){
			a = num / 2;
			b = num % 2;
			c = a / 2;
			d = a % 2;
			e = c / 2;
			f = c % 2;
			g = e / 2;
			h = e % 2;
			i = g / 2;
			j = g % 2;
			k = i / 2;
			l = i % 2;
			m = k / 2;
			n = k % 2;
			o = m / 2;
			p = m % 2;
			printf("\nThe binary equivalent of %d is %d%d%d%d%d%d%d%d",num,p,n,l,j,h,f,d,b);
			q = b * 1;
			r = d * 2;
			s = f * 4;
			t = h * 8;
			u = j * 16;
			v = l * 32;
			w = n * 64;
			x = p * 128;
			dec = q + r + s + t + u + v + w + x;
			printf("\nThe decimal equivalent of %d%d%d%d%d%d%d%d is %d",p,n,l,j,h,f,d,b,dec);
		}
		else {
			printf("\nInvalid input!");
		}
	}
	else{
		printf("\nInvalid input!");
	}
	return 0;
}
