#include <stdio.h>
#define total 60

float calc(float s1, float s2, float s3, int x);

int main(){
	float s1,s2,s3;
	int x;
	printf("Marks in a single subject: 20.\n");
	printf("Total marks: 60\n\n");
	printf("Enter marks in subject 1: ");
	scanf("%f",&s1);
	printf("Enter marks in subject 2: ");
	scanf("%f",&s2);
	printf("Enter marks in subject 3: ");
	scanf("%f",&s3);
	printf("\n");
	float avg = calc(s1,s2,s3,1);
	printf("Average: %.2f\n",avg);
	float per= calc(s1,s2,s3,2);
	printf("Percentage: %.2f",per);
	return 0;
}

float calc(float s1, float s2, float s3, int x){
    float average, percentage;
    average = (s1+s2+s3)/3;
    percentage = ((s1+s2+s3)/total)*100;

    if (x==1){
        return average;
    }
    else{
        return percentage;
    }
}
