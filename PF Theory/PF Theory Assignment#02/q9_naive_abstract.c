#include <stdio.h>

int main(){
	int n,a,b,c,d,e,f,g,decimal;
	int bin[10], t,i;
	fflush(stdin);
	printf("Input two digit decimal number: ");
	scanf("%d", &t);
	for(i=0;t > 0;i++){
		bin[i]=t % 2;    
		t=t/2;
	}
	for(i=i-1;i>=0;i--){
		printf("%d",bin[i]);
	}
	//printf("\n%d",&bin[0]);
	/*
	a = n % 10;
	b = n / 10 % 10;
	c = n / 100 % 10;
	d = n / 1000 % 10;
	e = n / 10000 % 10;
	f = n / 100000 % 10;
	g = n / 1000000 % 10;
	*/
	a=b=c=d=e=f=g=0;
	
	if ( bin[0] == 1 ) {
		a = 1;
	}
	if ( bin[1] == 1 ) {
		b = 2;
	}	
	if ( bin[2] == 1 ) {
		c = 4;
	}

	if ( bin[3] == 1 ) {
    	d = 8;
	} 
    
  	if ( bin[4] == 1 ) {
    	e = 16;
    }

  	if ( bin[5] == 1 ) {
    	f = 32;
    }

  	if ( bin[6] == 1 ) {
    	g = 64;
    }

	decimal = a + b + c + d + e + f + g;
	printf("\nThe decimal equivalent of %d%d%d%d%d%d%d is: %d\n", bin[0],bin[1],bin[2],bin[3],bin[4],bin[5],bin[6], decimal );

	return 0;
}
