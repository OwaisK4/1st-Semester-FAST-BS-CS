#include <stdio.h>
#include <string.h>

struct Date{
	int date;
	char month[20];
	int year;
};
int main(){
	struct Date dat1, dat2;
	printf("Enter first date:\n");
	printf("Date: ");
	scanf("%d", &dat1.date);
	fflush(stdin);
	printf("Month: ");
	gets(dat1.month);
	fflush(stdin);
	printf("Year: ");
	scanf("%d", &dat1.year);
	fflush(stdin);
	
	printf("\nEnter second date:\n");
	printf("Date: ");
	scanf("%d", &dat2.date);
	fflush(stdin);
	printf("Month: ");
	gets(dat2.month);
	fflush(stdin);
	printf("Year: ");
	scanf("%d", &dat2.year);
	fflush(stdin);
	
	if ((dat1.date == dat2.date) && strcmp(strlwr(dat1.month),strlwr(dat2.month))==0 && (dat1.year == dat2.year))
		printf("\nEqual");
	else
		printf("\nUnequal");
	return 0;
}
