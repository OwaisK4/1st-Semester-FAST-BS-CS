#include <stdio.h>

int main(){
	int pos_count=0, neg_count=0, zero_count=0;
	int real,i;
	for(i=0; i<10; i++){
		printf("Enter a real number: ");
		scanf("%d", &real);
		if (real > 0)
			pos_count++;
		else if (real == 0)
			zero_count++;
		else
			neg_count++;
	}
		if ((pos_count >= neg_count) && (pos_count >= zero_count))
			printf("The majority of entered numbers were positive.\n");
		else if ((neg_count >= pos_count) && (neg_count >= zero_count))
			printf("The majority of entered numbers were negative.\n");
		else if ((zero_count >= neg_count) && (zero_count >= pos_count))
			printf("\nThe majority of entered numbers were zero.\n");
		
		printf("Positive: %d | Negative: %d | Zero: %d",pos_count,neg_count,zero_count);
		return 0;
}
