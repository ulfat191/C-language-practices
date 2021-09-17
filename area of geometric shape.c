#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159
void parallelogram_area();
void triangle_area();
void rectangle_area();
void circle_area();

int main()
{
    int serial;
    printf("(1) Area of parallelogram\n");
    printf("(2) Area of triangle\n");
    printf("(3) Area of rectangle\n");
    printf("(4) Area of circle\n");

    printf("Enter selection serial :\n");
    scanf("%d", &serial);
    switch(serial)
    {
    case 1:
        parallelogram_area();
        break;

    case 2:
        triangle_area();
        break;

    case 3:
        rectangle_area();
        break;

    case 4:
        circle_area();
        break;
    }
    return 0;
}

void parallelogram_area()
{
    float a,b,h;
    double area;
    printf("Enter the length of parallel sides and height_\n");
    scanf("%f %f %f", &a, &b, &h);
    area = .5 * (a+b) * h;
    printf("Area of parallelogram= %.3lf\n", area);
}

void triangle_area()
{
    float b,h;
    double area;
    printf("Enter the base and height of the triangle_:\n");
    scanf("%f %f", &b, &h);
    area = .5 * b * h;
    printf("Area of triangle = %.3lf", area);
}

void rectangle_area()
{
    float l,w;
    double area;
    printf("Enter the length and width of the triangle_:\n");
    scanf("%f %f", &l, &w);
    area = l * w;
    printf("Area of rectangle = %.3lf", area);
}

void circle_area()
{
    float r;
    double area;
    printf("Enter the radius of the circle_:\n");
    scanf("%f", &r);
    area = PI * r * r;
    printf("Area of circle = %.3lf", area);
}
