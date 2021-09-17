#include <stdio.h>
#include <stdlib.h>
#define PI 3.1416
void main()
{
    float radius, diameter, circumference, area;
    printf("Hello SABRINA!\tEnter the radius of the circle\n");
    scanf("%f", &radius);

    diameter = 2 * radius;
    printf("\nThe diameter of the circle is: %.2f\n", diameter);

    circumference =  2 * PI * radius;
    printf("\nThe circumference of the circle is: %.2f\n", circumference);

    area = PI * radius * radius;
    printf("\nThe area of the circle is: %.2f\n", area);
}
