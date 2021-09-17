#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello SABRINA!\n");
    float num1, num2, quotient;
    printf("Provide the numbers you would like to divide");
    scanf("%f %f", &num1, &num2);
    quotient = num1 / num2;
    printf("The quotient is: %3.2f\n", quotient);
    return 0;
}
