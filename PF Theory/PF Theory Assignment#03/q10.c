#include <stdio.h>

int main(){
	int i,j,k, age=18;
	for(i=1; i<age; i++){
		for(j=1; j<age; j++){
			for(k=1; k<age; k++){
				if ((i*i + j*j == k*k) || (i*i + k*k == j*j) || (k*k + j*j == i*i)){
//				if (i*i + j*j == k*k){
					printf("The sides of triangle are: %d %d %d\n",i,j,k);
				}
			}
		}
	}
	return 0;
}
