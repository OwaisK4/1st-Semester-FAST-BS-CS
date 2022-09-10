#include <stdio.h>
#include <string.h>

struct courses{
	char course_name[50];
	float GPA;
};
struct address{
	char street[50], city[50], state[50];
	long int zip;	
};
struct student{
	float CGPA;
	struct courses course[2];
	struct address addr;
};

int main(){
	struct student s1, s2;
	char temp1[50], temp2[50];
	int i;
	printf("Enter name of first course: ");
	gets(temp1);
	fflush(stdin);
	printf("Enter name of second course: ");
	gets(temp2);
	fflush(stdin);
	strcpy(s1.course[0].course_name, temp1);
	strcpy(s2.course[0].course_name, temp1);
	strcpy(s1.course[1].course_name, temp2);
	strcpy(s2.course[1].course_name, temp2);
	
	printf("\nEnter record of student 1:\n");
	printf("Enter CGPA: ");
	scanf("%f",&s1.CGPA);
//	printf("Enter course name: ");
//	scanf("%s",&s1.course[0].course_name);
//	printf("Enter course name: ");
//	scanf("%s",&s1.course[1].course_name);
	printf("Enter GPA in %s course: ",s1.course[0].course_name);
	scanf("%f",&s1.course[0].GPA);
	printf("Enter GPA in %s course: ",s1.course[1].course_name);
	scanf("%f",&s1.course[1].GPA);
	printf("Enter street address: ");
	scanf("%s",&s1.addr.street);
	printf("Enter City: ");
	scanf("%s",&s1.addr.city);
	printf("Enter state: ");
	scanf("%s",&s1.addr.state);
	printf("Enter Zip: ");
	scanf("%ld",&s1.addr.zip);
	
	fflush(stdin);
	printf("\nEnter record of student 2:\n");
	printf("Enter CGPA: ");
	scanf("%f",&s2.CGPA);
	printf("Enter GPA in %s course: ",s2.course[0].course_name);
	scanf("%f",&s2.course[0].GPA);
	printf("Enter GPA in %s course: ",s2.course[1].course_name);
	scanf("%f",&s2.course[1].GPA);
	printf("Enter street address: ");
	scanf("%s",&s2.addr.street);
	printf("Enter City: ");
	scanf("%s",&s2.addr.city);
	printf("Enter state: ");
	scanf("%s",&s2.addr.state);
	printf("Enter Zip: ");
	scanf("%ld",&s2.addr.zip);	

	printf("\n");
	for (i=0; i<2; i++){
		if (s1.course[i].GPA > s2.course[i].GPA)
			printf("Student 1 has greater GPA: %.2f in %s.\n",s1.course[i].GPA,s1.course[i].course_name);
		else if (s1.course[i].GPA < s2.course[i].GPA)
			printf("Student 2 has greater GPA: %.2f in %s.\n",s2.course[i].GPA,s1.course[i].course_name);
		else
			printf("Student 1 and 2 have same GPA: %.2f\n", s2.course[i].GPA);
	}
	if (s1.CGPA > s2.CGPA)
		printf("Student 1 has greater CGPA: %.2f\n", s1.CGPA);
	else if (s1.CGPA < s2.CGPA)
		printf("Student 2 has greater CGPA: %.2f\n", s2.CGPA);
	else
		printf("Student 1 and 2 have same CGPA: %.2f\n", s2.CGPA);
	return 0;
}

/*
	printf("Enter course name: ");
	scanf("%s",&s1.course[0].course_name);
	printf("Enter GPA: ");
	scanf("%f",&s1.course[0].GPA);
	printf("Enter course name: ");
	scanf("%s",&s1.course[1].course_name);
	printf("Enter GPA: ");
	scanf("%f",&s1.course[1].GPA);

//	printf("Enter course name: ");
//	scanf("%s",&s2.course[0].course_name);
//	printf("Enter course name: ");
//	scanf("%s",&s2.course[1].course_name);
/*
	printf("Enter GPA: ");
	scanf("%f",&s2.course[0].GPA);
	printf("Enter GPA: ");
	scanf("%f",&s2.course[1].GPA);
*/

