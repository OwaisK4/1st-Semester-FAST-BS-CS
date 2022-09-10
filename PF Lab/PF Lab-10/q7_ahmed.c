#include <stdio.h>

typedef struct Rectangle{
    float length;
    float width;
} rectangle;

float calc_peri(rectangle r1);
float calc_area(rectangle r1);
int check(rectangle r1);

void main()
{
    rectangle r1;

    printf("Enter length: ");
    scanf("%f",&r1.length);
    printf("Enter width: ");
    scanf("%f",&r1.width);

    if (check(r1) == 1)
    {
        printf("\nPerimeter: %g",calc_peri(r1));
        printf("\nArea: %g",calc_area(r1));
    }
}

float calc_peri(rectangle r1)
{
    float peri;

    peri = (2*(r1.length)) + (2*(r1.width));
    return peri;
}

float calc_area(rectangle r1)
{
    float area;

    area =  r1.length * r1.width;
    return area;
}

int check(rectangle r1)
{
    if (r1.length > 0 && r1.length < 20 && r1.width > 0 && r1.width < 20)
    {
        printf("\nLength and width entered, are between 0 and 20\n");
        return 1;
    }
    else
    {
        printf("\nLength and width entered, are not between 0 and 20\n");
    }
}
