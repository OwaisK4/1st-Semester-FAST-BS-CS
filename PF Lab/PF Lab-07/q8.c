#include <stdio.h>

int main(){
	char a1,b1,c1;
	int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0;
	while(1){
		printf("Enter first alphabet: ");
		scanf(" %c", &a1);
		a += (a1 == 'a')? 1:0;
		b += (a1 == 'b')? 1:0;
		c += (a1 == 'c')? 1:0;
		d += (a1 == 'd')? 1:0;
		e += (a1 == 'e')? 1:0;
		f += (a1 == 'f')? 1:0;
		g += (a1 == 'g')? 1:0;
		h += (a1 == 'h')? 1:0;
		i += (a1 == 'i')? 1:0;
		j += (a1 == 'j')? 1:0;
		k += (a1 == 'k')? 1:0;
		l += (a1 == 'l')? 1:0;
		m += (a1 == 'm')? 1:0;
		n += (a1 == 'n')? 1:0;
		o += (a1 == 'o')? 1:0;
		p += (a1 == 'p')? 1:0;
		q += (a1 == 'q')? 1:0;
		r += (a1 == 'r')? 1:0;
		s += (a1 == 's')? 1:0;
		t += (a1 == 't')? 1:0;
		u += (a1 == 'u')? 1:0;
		v += (a1 == 'v')? 1:0;
		w += (a1 == 'w')? 1:0;
		x += (a1 == 'x')? 1:0;
		y += (a1 == 'y')? 1:0;
		z += (a1 == 'z')? 1:0;		
		
		printf("Enter second alphabet: ");
		scanf(" %c", &b1);
		a += (b1 == 'a')? 1:0;
		b += (b1 == 'b')? 1:0;
		c += (b1 == 'c')? 1:0;
		d += (b1 == 'd')? 1:0;
		e += (b1 == 'e')? 1:0;
		f += (b1 == 'f')? 1:0;
		g += (b1 == 'g')? 1:0;
		h += (b1 == 'h')? 1:0;
		i += (b1 == 'i')? 1:0;
		j += (b1 == 'j')? 1:0;
		k += (b1 == 'k')? 1:0;
		l += (b1 == 'l')? 1:0;
		m += (b1 == 'm')? 1:0;
		n += (b1 == 'n')? 1:0;
		o += (b1 == 'o')? 1:0;
		p += (b1 == 'p')? 1:0;
		q += (b1 == 'q')? 1:0;
		r += (b1 == 'r')? 1:0;
		s += (b1 == 's')? 1:0;
		t += (b1 == 't')? 1:0;
		u += (b1 == 'u')? 1:0;
		v += (b1 == 'v')? 1:0;
		w += (b1 == 'w')? 1:0;
		x += (b1 == 'x')? 1:0;
		y += (b1 == 'y')? 1:0;
		z += (b1 == 'z')? 1:0;
		
		printf("Enter third alphabet: ");
		scanf(" %c", &c1);
		a += (c1 == 'a')? 1:0;
		b += (c1 == 'b')? 1:0;
		c += (c1 == 'c')? 1:0;
		d += (c1 == 'd')? 1:0;
		e += (c1 == 'e')? 1:0;
		f += (c1 == 'f')? 1:0;
		g += (c1 == 'g')? 1:0;
		h += (c1 == 'h')? 1:0;
		i += (c1 == 'i')? 1:0;
		j += (c1 == 'j')? 1:0;
		k += (c1 == 'k')? 1:0;
		l += (c1 == 'l')? 1:0;
		m += (c1 == 'm')? 1:0;
		n += (c1 == 'n')? 1:0;
		o += (c1 == 'o')? 1:0;
		p += (c1 == 'p')? 1:0;
		q += (c1 == 'q')? 1:0;
		r += (c1 == 'r')? 1:0;
		s += (c1 == 's')? 1:0;
		t += (c1 == 't')? 1:0;
		u += (c1 == 'u')? 1:0;
		v += (c1 == 'v')? 1:0;
		w += (c1 == 'w')? 1:0;
		x += (c1 == 'x')? 1:0;
		y += (c1 == 'y')? 1:0;
		z += (c1 == 'z')? 1:0;
	
		if ((b1 == c1-1) && (a1 == b1-1)){
			printf("The given alphabet: %c %c %c are in forward sequence.\n", a1,b1,c1);
			printf("The first letter %c appeared %d times.\n",a1,(a1=='a')?a:(a1=='b')?b:(a1=='c')?c:(a1=='d')?d:(a1=='e')?e:(a1=='f')?f:(a1=='g')?g:(a1=='h')?h:(a1=='i')?i:(a1=='j')?j:(a1=='k')?k:(a1=='l')?l:(a1=='m')?m:(a1=='n')?n:(a1=='o')?o:(a1=='p')?p:(a1=='q')?q:(a1=='r')?r:(a1=='s')?s:(a1=='t')?t:(a1=='u')?u:(a1=='v')?v:(a1=='w')?w:(a1=='x')?x:(a1=='y')?y:(a1=='z')?z:1);
			printf("The second letter %c appeared %d times.\n",b1,(b1=='a')?a:(b1=='b')?b:(b1=='c')?c:(b1=='d')?d:(b1=='e')?e:(b1=='f')?f:(b1=='g')?g:(b1=='h')?h:(b1=='i')?i:(b1=='j')?j:(b1=='k')?k:(b1=='l')?l:(b1=='m')?m:(b1=='n')?n:(b1=='o')?o:(b1=='p')?p:(b1=='q')?q:(b1=='r')?r:(b1=='s')?s:(b1=='t')?t:(b1=='u')?u:(b1=='v')?v:(b1=='w')?w:(b1=='x')?x:(b1=='y')?y:(b1=='z')?z:1);
			printf("The third letter %c appeared %d times.\n",c1,(c1=='a')?a:(c1=='b')?b:(c1=='c')?c:(c1=='d')?d:(c1=='e')?e:(c1=='f')?f:(c1=='g')?g:(c1=='h')?h:(c1=='i')?i:(c1=='j')?j:(c1=='k')?k:(c1=='l')?l:(c1=='m')?m:(c1=='n')?n:(c1=='o')?o:(c1=='p')?p:(c1=='q')?q:(c1=='r')?r:(c1=='s')?s:(c1=='t')?t:(c1=='u')?u:(c1=='v')?v:(c1=='w')?w:(c1=='x')?x:(c1=='y')?y:(c1=='z')?z:1);
			return 0;
		}
	
		else if ((b1 == a1-1) && (c1 == b1-1)){
			printf("The given alphabet: %c %c %c are in backward sequence.\n", a1,b1,c1);
			printf("The first letter %c appeared %d times.\n",a1,(a1=='a')?a:(a1=='b')?b:(a1=='c')?c:(a1=='d')?d:(a1=='e')?e:(a1=='f')?f:(a1=='g')?g:(a1=='h')?h:(a1=='i')?i:(a1=='j')?j:(a1=='k')?k:(a1=='l')?l:(a1=='m')?m:(a1=='n')?n:(a1=='o')?o:(a1=='p')?p:(a1=='q')?q:(a1=='r')?r:(a1=='s')?s:(a1=='t')?t:(a1=='u')?u:(a1=='v')?v:(a1=='w')?w:(a1=='x')?x:(a1=='y')?y:(a1=='z')?z:1);
			printf("The second letter %c appeared %d times.\n",b1,(b1=='a')?a:(b1=='b')?b:(b1=='c')?c:(b1=='d')?d:(b1=='e')?e:(b1=='f')?f:(b1=='g')?g:(b1=='h')?h:(b1=='i')?i:(b1=='j')?j:(b1=='k')?k:(b1=='l')?l:(b1=='m')?m:(b1=='n')?n:(b1=='o')?o:(b1=='p')?p:(b1=='q')?q:(b1=='r')?r:(b1=='s')?s:(b1=='t')?t:(b1=='u')?u:(b1=='v')?v:(b1=='w')?w:(b1=='x')?x:(b1=='y')?y:(b1=='z')?z:1);
			printf("The third letter %c appeared %d times.\n",c1,(c1=='a')?a:(c1=='b')?b:(c1=='c')?c:(c1=='d')?d:(c1=='e')?e:(c1=='f')?f:(c1=='g')?g:(c1=='h')?h:(c1=='i')?i:(c1=='j')?j:(c1=='k')?k:(c1=='l')?l:(c1=='m')?m:(c1=='n')?n:(c1=='o')?o:(c1=='p')?p:(c1=='q')?q:(c1=='r')?r:(c1=='s')?s:(c1=='t')?t:(c1=='u')?u:(c1=='v')?v:(c1=='w')?w:(c1=='x')?x:(c1=='y')?y:(c1=='z')?z:1);
			return 0;
		}
		else
			printf("\n");
	}
	return 0;
}
