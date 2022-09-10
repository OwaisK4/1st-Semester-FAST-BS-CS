#include <stdio.h>
#include <math.h>

struct Triangle{
	float a, b, angle;
};

int main(){
	int i;
	float area[6];
	struct Triangle t[6] = { 	
			{137.4, 80.9, 0.78},
			{155.2, 92.62, 0.89},
			{149.3, 97.93, 1.3},
			{160.0, 100.25, 9.00},
			{155.6, 68.95, 1.25},
			{149.7, 120.0, 1.75}
		};
	printf("Plot No.\ta\tb\tangle\n\n");
	for (i=0; i<6; i++){
		printf("%d\t\t%.1f\t%.2f\t%.2f\n",i+1,t[i].a,t[i].b,t[i].angle);
		area[i] = (1.0/2.0)*t[i].a*t[i].b*sin(t[i].angle);
	}
	printf("\nPlot No.\tArea\n\n");
	for (i=0; i<6; i++){
		printf("%d\t\t%f\n",i+1,area[i]);
	}
	float max = area[0];
	int plot = 0;
	for (i=0; i<6; i++){
		if (max < area[i])
			max = area[i];
			plot = i+1;
	}
	printf("\nPlot no.%d has maximum area: %f", plot, max);
	return 0;
}
