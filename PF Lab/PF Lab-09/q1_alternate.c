#include <stdio.h>
#include <string.h>

int main(){
	int i,j, temp, step;
	char array1[20] = {'1','4','6'};
	char array2[20] = {'2','3','5'};
	strcat(array1, array2);
	printf("%s\n",array1);
	int size = strlen(array1) - 1;
	
	for (i = 0; i < size; i++){
    	for (j = 0; j < size - i - 1; j++){
        	if (array1[j] > array1[j+1]){
				temp = array1[j];
				array1[j] = array1[j+1];
				array1[j+1] = temp;
			}
		}
	}
	printf("%s", array1);
}
