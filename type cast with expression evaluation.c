#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    //Evaluating Expression
    printf("Hello SABRINA\n!");
    float a, b, c, d;
    int x;
    a = 6.2;
    b = 11.3;
    c = 8.5;
    d = 3.0;
    //type cast done in the next line
    x = (c * 2 + (int)(a * b) - d);
    printf("The value of x is: %d", x);
    return 0;
}
