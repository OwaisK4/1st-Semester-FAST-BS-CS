#include <stdio.h>

int main(){
	int m=5, n=9;
	int i,j, obtained=0, total=50;
	float percentage;
	int array[m][n];
	printf("Enter Student ID and marks for each course(Max marks in a single course are 10): \n\n");
	for (i=0; i<m; i++){
		printf("Enter Student ID: ");
		scanf("%d", &array[i][0]);
		for (j=1; j<n-3; j++){
			printf("Enter C%d Marks: ", j);
			scanf("%d", &array[i][j]);
			while (array[i][j] > total / 5){
				printf("Marks cannot be greater than %d\nEnter C%d Marks: ",total / 5, j);
				scanf("%d", &array[i][j]);
			}
		}
		printf("\n");
	}
	for (i=0; i<m; i++){
		obtained = 0;
		for (j=1; j<n-3; j++){
			array[i][n-3] = 50;
//			scanf("%d", &array[i][j]);
			obtained += array[i][j];
		}
		array[i][n-2] = obtained;
		percentage = obtained / 50.0 * 100.0;
		array[i][n-1] = percentage;
	}
	printf("\n");
	printf("Std-ID\tC1\tC2\tC3\tC4\tC5\tTotal\tObtained\tPercentage\n");
	for (i=0; i<m; i++){
		for (j=0; j<n-1; j++){
			printf("%d\t",array[i][j]);
		}
		printf("\t%d%%",array[i][n-1]);
		printf("\n");
	}
	return 0;
}
