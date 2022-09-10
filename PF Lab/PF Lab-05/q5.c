#include <stdio.h>

int main(){
	char cond;
	printf("Do you want to Save or Dont Save? Enter S/s for saving or D/d for exiting without saving: ");
	scanf("%c",&cond);
	/*printf("%c",cond);
	if (cond == 's' || cond == 'S')
		printf("Saved, you can close it now.");
	else if (cond == 'd' || cond == 'D')
		printf("Not saved, exiting the program.");
	else
		printf("Enter valid input");
	return 0; */
	
	switch (cond){
		case 'S':
			printf("Saved, you can close it now.");
			break;
		case 's':
			printf("Saved, you can close it now.");
			break;
		case 'D':
			printf("Not saved, exiting the program.");
			break;
		case 'd':
			printf("Not saved, exiting the program.");
			break;
		default:
			printf("Enter valid input");
	}
	return 0;
}


