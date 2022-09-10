#include <stdio.h>
#include <string.h>

void sort(char array[], int len);
int main(){
	int i,j, temp;
	char array1[20] = {'1','4','6'};
	char array2[20] = {'2','3','5'};
	strcat(array1, array2);
	printf("Unsorted array: %s\n",array1);
	sort(array1, strlen(array1)-1);
	printf("Sorted Array: %s", array1);
}
void sort(char array[], int len){
	int i,j,temp;
	for (i = 0; i < len; i++){
    	for (j = 0; j < len - i - 1; j++){
        	if (array[j] > array[j+1]){
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
}
