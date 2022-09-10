#include <stdio.h>
#include <string.h>

void sort(void);
void search_roll(int roll);
void search_name(char name[]);

struct student{
	int roll_no;
	char std_names[50];
	float std_marks;
} s[10];

int main(){
	int i;
/*
	strcpy(s[0].std_names, "Salman");
	strcpy(s[1].std_names, "Zubair");
	strcpy(s[2].std_names, "Ahsan");
	strcpy(s[3].std_names, "Farah");
	strcpy(s[4].std_names, "Hassan");
	strcpy(s[5].std_names, "Kamran");
	strcpy(s[6].std_names, "Mariyum");
	s[0].std_marks=75.5;
	s[1].std_marks=80;
	s[2].std_marks=64;
	s[3].std_marks=78;
	s[4].std_marks=65;
	s[5].std_marks=54;
	s[6].std_marks=60;
	s[0].roll_no=1001;
	s[1].roll_no=1002;
	s[2].roll_no=1004;
	s[3].roll_no=1005;
	s[4].roll_no=1007;
	s[5].roll_no=1008;
	s[6].roll_no=1009;
*/
	for(i=0; i<7; i++){
		printf("Enter marks of student %d\n", i+1);
		printf("Roll number: ");
		scanf("%d", &s[i].roll_no);
		fflush(stdin);
		printf("Name: ");
//		scanf("%s ", s[i].std_names);
		gets(s[i].std_names);
		fflush(stdin);
		printf("Marks: ");
		scanf("%f", &s[i].std_marks);
		fflush(stdin);
		printf("\n");
	}

	printf("Original data:\n");
	for(i=0; i<7; i++){
		printf("%d ",s[i].roll_no);
		printf("%s ",s[i].std_names);
		printf("%.f\n",s[i].std_marks);
	}
	sort();
	printf("\nSorted according to marks:\n");
	for(i=0; i<7; i++){
		printf("%d ",s[i].roll_no);
		printf("%s ",s[i].std_names);
		printf("%.f\n",s[i].std_marks);
	}
	int roll;
	char name[50];
	printf("\nEnter a roll number to search from above record: ");
	scanf("%d", &roll);
	printf("Enter a name to search from above record: ");
	scanf("%s", name);
	search_roll(roll);
	search_name(name);
	return 0;
}
void sort(void){
	int i,j,temp,step,size=7;
	char temp_name[50];
	for (step = 0; step < size - 1; ++step) {
    	for (i = 0; i < size - step - 1; ++i) {
        	if (s[i].std_marks > s[i+1].std_marks){
				temp = s[i].std_marks;
				s[i].std_marks = s[i+1].std_marks;
				s[i+1].std_marks = temp;
				
				temp = s[i].roll_no;
				s[i].roll_no = s[i+1].roll_no;
				s[i+1].roll_no = temp;
				
				strcpy(temp_name, s[i].std_names);
				strcpy(s[i].std_names, s[i+1].std_names);
				strcpy(s[i+1].std_names,temp_name);
			}
      	}
    }
}
void search_roll(int roll){
	int i;
	for (i=0; i<7; i++){
		if (s[i].roll_no == roll){
			printf("\nRoll no.%d found at entry %d\n",roll,i+1);
			printf("Name: %s\nRoll no: %d\nMarks: %g\n",s[i].std_names, s[i].roll_no, s[i].std_marks);
			return;
		}
	}
	printf("\nRoll number: %d not found in record\n",roll);
}
void search_name(char name[]){
	int i;
	for (i=0; i<7; i++){
		if (strcmp(s[i].std_names,name) == 0){
			printf("\nName: %s found at entry %d\n",name,i+1);
			printf("Name: %s\nRoll no: %d\nMarks: %g\n",s[i].std_names, s[i].roll_no, s[i].std_marks);
			return;
		}
	}
	printf("\nName: %s not found in record\n",name);
}
