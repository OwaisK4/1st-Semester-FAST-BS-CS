#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define X 3
#define Y 5
#define Z 3


int main(){
	struct pixel{
		int red, green, blue;
	} s[16];
	int pixel_arr[X][Y][Z];
	srand(time(0));
	int rotate[Y][X][Z];
	int i,j,k;
	
	for (i=0; i<15; i++){
		s[i].red = rand() % 256;
		s[i].green = rand() % 256;
		s[i].blue = rand() % 256;
	}
	
	int z=0;
	for (i=0; i<X; i++){
		for (j=0; j<Y; j++){
			for (k=0; k<Z; k++){
				pixel_arr[i][j][k] = s[z].red;
				pixel_arr[i][j][k] = s[z].green;
				pixel_arr[i][j][k] = s[z].blue;
			}
			z++;
		}
	}
	
	printf("*** Original Image ***\n\n");
	for (i=0; i<X; i++){
		for (j=0; j<Y; j++){
			printf("( %d, %d, %d) ",pixel_arr[i][j][0], pixel_arr[i][j][1], pixel_arr[i][j][2]);
//			for (k=0; k<3; k++){
//				printf("( %d, %d, %d) ",s[z].red, s[z].green, s[z].blue);
//			}
		}
		printf("\n");
	}
	
	for (i=0; i<X; i++){
		for (j=0; j<Y; j++){
			for (k=0; k<Z; k++){
				rotate[j][X-i-1][k] = pixel_arr[i][j][k];
			}
		}
	}
	printf("\n");

	printf("*** Rotated Image ***\n\n");
	for (i=0; i<Y; i++){
		for (j=0; j<X; j++){
			printf("( %d, %d, %d) ",rotate[i][j][0], rotate[i][j][1], rotate[i][j][2]);
		}
		printf("\n");
	}	
	return 0;
}
