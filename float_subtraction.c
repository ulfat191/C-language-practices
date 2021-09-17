#include <stdio.h>
#include <stdlib.h>

void main()
{

    printf("Hello SABRINA!\n");
    float x, y, z;
    printf("Enter the value of x and y");
    scanf("%f %f", &x, &y);
    z = x - y;
    printf("The difference between the two numbers are: %.3f", z);
    return 0;
}
