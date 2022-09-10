#include <stdio.h>

int main(){
	int low=2, high=20, i;
	while (low < high){
		for (i=2; i<low; i++){
			if (low % i == 0){
				break;
			}
		}
		if (i == low){
			printf("%d ",low);
		}
	low++;
	}
	return 0;
}
