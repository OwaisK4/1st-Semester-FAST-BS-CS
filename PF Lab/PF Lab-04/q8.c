#include <stdio.h>
int main(){
	int pak_stamps,uk_stamps,ger_stamps,aus_stamps, intern_stamps;
	printf("Enter the number of Pakistani stamps: ");
	scanf("%d",&pak_stamps);
	printf("Enter the number of UK stamps: ");
	scanf("%d",&uk_stamps);
	printf("Enter the  number of German stamps: ");
	scanf("%d",&ger_stamps);
	printf("Enter the number of Australian stamps: ");
	scanf("%d",&aus_stamps);
	intern_stamps = uk_stamps+ger_stamps+aus_stamps;
	printf("The number of international stamps are: %d", intern_stamps);
	return 0;
}
