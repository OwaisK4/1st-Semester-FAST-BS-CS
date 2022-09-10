#include <stdio.h>

int main()
{

	int l1,l2,l3,l4,a1,a2,a3,a4;
	printf("First angle: ");
	scanf("%d",&a1);
	printf("Second angle: ");
	scanf("%d",&a2);
	printf("Third angle: ");
	scanf("%d",&a3);
	printf("Fourth angle: ");
	scanf("%d",&a4);
	printf("Enter the first side: ");
	scanf("%d",&l1);
	printf("Enter the second side: ");
	scanf("%d",&l2);	
	printf("Enter the third side: ");
	scanf("%d",&l3);
	printf("Enter the fourth side: ");
	scanf("%d",&l4);
	
	if (((a1==a2)&&(a2==a3)&&(a3==a4)) && ((l1==l2)&&(l2==l3)&&(l3==l4))){
 			printf("Square");
 			return 0;
 		}
	else if (((a1==a2)&&(a2==a3)&&(a3==a4)) && ((l1==l3)&&(l2==l4))){
			printf("Rectangle");
			return 0;
		}
	else if (((a1==a3)&&(a2==a4)) && ((l1==l2)&&(l2==l3)&&(l3==l4))){
			printf("Rhombus");
			return 0;	
		}

	else if (((a1==a3)&&(a2==a4)) && ((l1==l3)&&(l2==l4))){
			printf("Parallelogram");
			return 0;   
		}
	else if ((((a1==a3) || (a2==a4))) && (((l1==l2) && (l3==l4)))){
			printf("Kite");
			return 0;
		}
/*	
		else{
			printf("Trapezoid");
			return 0;
		}
		*/
	else{
   		printf("Trapezoid");	
   	}
       return 0;	
 }        
