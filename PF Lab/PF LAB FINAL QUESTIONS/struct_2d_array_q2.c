#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define X 3
#define Y 5
#define Z 3

int main(){
	struct pixel{
		int red, green, blue;
	} s[X][Y], rotate[Y][X];
	srand(time(0));
	int i,j,k;
	
	for (i=0; i<X; i++){
		for (j=0; j<Y; j++){
			s[i][j].red = rand() % 256;
			s[i][j].green = rand() % 256;
			s[i][j].blue = rand() % 256;
		}
	}
	printf("*** Original Image ***\n\n");
	for (i=0; i<X; i++){
		for (j=0; j<Y; j++){
			printf("( %d, %d, %d) ",s[i][j].red, s[i][j].green, s[i][j].blue);
		}
		printf("\n");
	}
	
	for (i=0; i<X; i++){
		for (j=0; j<Y; j++){
				rotate[j][X-i-1] = s[i][j];
		}
	}
	
	printf("\n\n*** Rotated Image ***\n\n");
	for (i=0; i<Y; i++){
		for (j=0; j<X; j++){
			printf("( %d, %d, %d) ",rotate[i][j].red, rotate[i][j].green, rotate[i][j].blue);
		}
		printf("\n");
	}
	
	return 0;
}
