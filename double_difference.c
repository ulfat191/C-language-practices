#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello SABRINA!\n");
    double num1, num2, difference;
    printf("Enter the 2 numbers you want to subtract");
    scanf("%lf %lf", &num1, &num2);
    difference = num1 - num2;
    printf("The difference of the 2 numbers are: %lf", difference);
    return 0;
}

