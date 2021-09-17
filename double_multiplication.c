#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello SABRINA!\n");
    double a, b, c;
    printf("Enter the value of a, b");
    scanf("%lf %lf", &a, &b);
    c = a * b;
    printf("The product of the 2 numbers are: %lf\n", c);
    return 0;
}
