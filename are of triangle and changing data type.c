#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    printf("Hello SABRINA!\n");
    float base, height, area, hypotenuse;
    int perimeter;
    printf("Enter the size of base and the height of the triangle");
    scanf("%f %f", &base, &height);
    area = .5 * base * height;
    printf("The area of the triangle is: %.2f\n", area);
    hypotenuse = sqrt((base * base) + (height * height));
    printf("The remaining side of the triangle is: %.2f\n", hypotenuse);
    perimeter = base + height + hypotenuse;
    printf("The summation of borders of the triangle is: %d\n", perimeter);
    return 0;
}
