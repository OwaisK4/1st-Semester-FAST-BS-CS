#include <stdio.h>

char* check(int marks, int exp);
int main(){
	int marks, exp=0;
	char position[20];
	printf("Enter total obtained marks: ");
	scanf("%d", &marks);
	strcpy(position, check(marks,exp));
	printf("The assigned position is %s", position);
}

char* check(int marks, int exp){
	char pos[20]={};
	if (marks >= 60){
		printf("Enter total obtained experience: ");
		scanf("%d", &exp);
	}
	if ((marks >= 60) && (marks < 70) && (exp >= 1)){
//		pos = "Assistant Developer";
		strcpy(pos, "Assistant Developer");
	}
	else if ((marks >= 70) && (exp >= 2)){
//		pos = "Associate Developer";
		strcpy(pos, "Associate Developer");
	}
	else if (marks >= 50){
//		pos = "Trainee Engineer";
		strcpy(pos, "Trainee Engineer");
	}
	return pos;
}
