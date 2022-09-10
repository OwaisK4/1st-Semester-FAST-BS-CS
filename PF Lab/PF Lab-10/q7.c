#include <stdio.h>

struct Rectangle{
	float length;
	float width;
};

int check(struct Rectangle rect);
float perimeter_calc(struct Rectangle rect);
float area_calc(struct Rectangle rect);

int main(){
	struct Rectangle rect;
	float area, perimeter;
	printf("Enter length of rectangle: ");
	scanf("%f", &rect.length);
	printf("Enter width of rectangle: ");
	scanf("%f", &rect.width);
	perimeter = perimeter_calc(rect);
	area = area_calc(rect);
	if (check(rect)){
        printf("\nPerimeter: %g",perimeter);
        printf("\nArea: %g",area);
    return 0;
    }
}

float perimeter_calc(struct Rectangle rect){
    float peri;
    peri = (2*(rect.length)) + (2*(rect.width));
    return peri;
}

float area_calc(struct Rectangle rect){
    float area;
    area =  rect.length * rect.width;
    return area;
}

int check(struct Rectangle rect){
    if ((rect.length > 0) && (rect.length < 20) && (rect.width > 0) && (rect.width < 20)){
        printf("\nLength and width are each between 0 and 20.\n");
        return 1;
    }
    else{
    	printf("\nLength and width are not between 0 and 20.\n");
    }
	return 0;
}
