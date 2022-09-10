#include <stdio.h>

int main(){
	int i,j;
	char situation;
	printf("Enter situation of UAV (n for normal | ab for abnormal): ");
	scanf("%c",&situation);
	printf("\n");
	if (situation == 'n'){
		for (i=0; i<8; i++)
			printf("#");
		printf("\n");
		for (i=0; i<6; i++){
			printf("#");
			for (j=0; j<6; j++){
				printf("NormalSituation");
			}
			printf("#\n");
		}
		for (i=0; i<8; i++)
			printf("#");
		printf("\n");
	}
	else if (situation == 'a'){
		for (i=0; i<8; i++)
			printf("*");
		printf("\n");
		for (i=0; i<6; i++){
			printf("*");
			for (j=0; j<6; j++){
				printf("AbnormalSituation");
			}
			printf("*\n");
		}
		for (i=0; i<8; i++)
			printf("*");
		printf("\n");
	}
	return 0;
}
