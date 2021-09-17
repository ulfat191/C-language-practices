#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello SABRINA!\n");
    float num1, num2, sum;
    printf("Enter the 2 numbers you want to add");
    scanf("%f %f", &num1, &num2);
    sum = num1 + num2;
    printf("The summation of the 2 numbers are: %.2f", sum);
    return 0;
}
