#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello SABRINA!\n");
    int num1, num2, remainder;
    float result;
    num1 = 25;
    num2 = 15;
    result = num1 / num2;
    printf("The result by dividing the two numbers is: %f\n", result);
    remainder = num1 % num2;
    printf("The remainder is: %d\n", remainder);
    return 0;
}
