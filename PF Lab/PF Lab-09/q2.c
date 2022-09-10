#include <stdio.h>
#include <string.h>

int main(){
	int i,j, max1=0, max2=0, flag1, flag2;
	char name[50], course[50], freq1[26]={}, freq2[26]={};
	printf("Enter name: ");
	gets(name);
	printf("Enter course: ");
	gets(course);

	strcpy(name,strlwr(name));
	strcpy(course,strlwr(course));
	
	for (i=0; name[i] != '\0'; i++){
		freq1[name[i] - 'a']++;
	}
	for (i=0; course[i] != '\0'; i++){
		freq2[course[i] - 'a']++;
	}

	for (j=0; j<26; j++){
		if (freq1[j] > max1){
			max1 = freq1[j];
			flag1 = j;
		}
		if (freq2[j] > max2){
			max2 = freq2[j];
			flag2 = j;
		}
	}
//	printf("max1 = %d\nmax2 = %d\n",max1,max2);
	printf("\nThe maximum occuring character in name is: %c\n", 'a'+flag1);
	printf("The maximum occuring character in course is: %c\n\n", 'a'+flag2);
	
	printf("The frequency of characters in name is:\n");
	for (i=0; i<26; i++)
		if (freq1[i] > 0)
		printf("%c = %d\n",'a'+i,freq1[i]);
	printf("\n\n");
	printf("The frequency of characters in course is:\n");
	for (i=0; i<26; i++)
		if (freq2[i] > 0)
			printf("%c = %d\n",'a'+i,freq2[i]);
	
	return 0;
}
