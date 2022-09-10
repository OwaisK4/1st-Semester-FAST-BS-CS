#include <stdio.h>

void main(){
	int i,j,r;
	r=5;
	char a[] = "ZEESHAN";
	for(i=0;i<=r;i++){
		for(j=1;j<=r-i;j++)
			printf(" ");
		for(j=-1;j<=2*i-1;j++)
    		printf("*");
    	printf("\n");
	}
}
/*
	for(i=r-1;i>=1;i--){
		for(j=1;j<=r-i;j++)
    		printf(" ");
    	for(j=1;j<=2*i-1;j++)
    		printf("*");
    	printf("\n");
	}
}
*/
/*
#include <stdio.h>

void main(){
	int i,j,r;
	r=5;
	for(i=0;i<=r;i++){
	    for(j=1;j<=r-i;j++);
			printf(" ");
	   
    	for(j=1;j<=2*i-1;j++)
    		printf("*");
    	printf("\n");
	}

	for(i=r-1;i>=1;i--){
		for(j=1;j<=r-i;j++)
	    	printf(" ");

    	for(j=1;j<=2*i-1;j++)
    		printf("*");
    	printf("\n");
	}
}
*/
