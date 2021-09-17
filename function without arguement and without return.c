#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159
void find_area ();
int main ()
{
find_area ();
return (0);
}
void find_area()
{
    float radius, area;

    printf("Enter the radius of the circle\n");
    scanf("%f", &radius);
    area = PI * radius * radius;
    printf("The area of the circle is: %.2f\n", area);
}
